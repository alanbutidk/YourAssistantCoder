/* Generated code for Python module 'numpy$lib$_datasource'
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



/* The "module_numpy$lib$_datasource" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$lib$_datasource;
PyDictObject *moduledict_numpy$lib$_datasource;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_t;
PyObject *const_str_digest_2cdbcc1ab3383509c7deb4391fc8445c;
PyObject *const_str_digest_0b59e9eda6581adeda65c1b9df6b0570;
PyObject *const_str_digest_010b171cebd0e5a72e203b10c48dd28a;
PyObject *const_str_digest_5a5fdaacad3272eabe94470b120ece05;
PyObject *const_str_plain__loaded;
PyObject *const_str_plain__file_openers;
PyObject *const_str_plain_bz2;
PyObject *const_str_digest_2f8b9ae3e4f94f91b3ad2ca152fd5463;
PyObject *const_str_plain_gzip;
PyObject *const_str_digest_662720bcb38208f53dc17ad51de4c080;
PyObject *const_str_plain_lzma;
PyObject *const_str_digest_26eee62063e5728502d952d6fc9f59c6;
PyObject *const_str_digest_c399835e8eb523d236381cdb42bfd5b5;
PyObject *const_tuple_type_ImportError_type_AttributeError_tuple;
PyObject *const_str_plain__load;
PyObject *const_str_digest_1f195473264600970dd56a871934834d;
PyObject *const_str_plain_DataSource;
PyObject *const_tuple_str_plain_encoding_str_plain_newline_tuple;
PyObject *const_str_digest_a3679e9e35150a7a0a63ce610ec9f97b;
PyObject *const_str_plain__destpath;
PyObject *const_str_plain__istmpdest;
PyObject *const_str_plain_tempfile;
PyObject *const_str_plain_mkdtemp;
PyObject *const_str_digest_611d3f834bad4ff871ecf9466d8adf6a;
PyObject *const_str_plain_shutil;
PyObject *const_str_plain_rmtree;
PyObject *const_str_plain_splitext;
PyObject *const_str_digest_074a31081717ee3162b2f78278ae9c76;
PyObject *const_tuple_str_plain_w_str_chr_43_tuple;
PyObject *const_str_digest_258e217d37b092c9962da6d0adba4e88;
PyObject *const_str_plain__writemodes;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_13fa1e494bb5dfa33f9fe9b3c7aead9c;
PyObject *const_str_plain__iszip;
PyObject *const_str_digest_98dd369365b4c1ab10383f746acec608;
PyObject *const_str_plain_names;
PyObject *const_str_plain_filename;
PyObject *const_str_digest_e20c972cc44953c07a3051f1ead2981f;
PyObject *const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
PyObject *const_tuple_str_plain_urlparse_tuple;
PyObject *const_str_plain_urlparse;
PyObject *const_str_digest_60f080f75b1d551ccaa0b992e75568f9;
PyObject *const_str_digest_59bc9c95777e64e4720c3af0837aec42;
PyObject *const_tuple_str_plain_urlopen_tuple;
PyObject *const_str_plain_urlopen;
PyObject *const_str_plain_makedirs;
PyObject *const_str_plain__isurl;
PyObject *const_str_plain__open;
PyObject *const_str_plain_wb;
PyObject *const_str_plain_copyfileobj;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_copyfile;
PyObject *const_str_digest_951c1f79c30d7c1449f73d8e3ecb3784;
PyObject *const_str_plain__possible_names;
PyObject *const_str_plain_self;
PyObject *const_str_plain__cache;
PyObject *const_str_digest_4e495eed9dc2ab2d082c5a563a6edaa7;
PyObject *const_int_pos_2;
PyObject *const_str_plain__sanitize_relative_path;
PyObject *const_str_plain_join;
PyObject *const_str_digest_b66f4152cb281fc793c83c7cafc0622d;
PyObject *const_str_plain_last;
PyObject *const_str_plain_lstrip;
PyObject *const_tuple_str_backslash_tuple;
PyObject *const_tuple_str_slash_tuple;
PyObject *const_tuple_str_digest_7b79a8950d64155a442741f6cc8c809b_tuple;
PyObject *const_str_plain_removeprefix;
PyObject *const_str_plain_splitdrive;
PyObject *const_str_digest_fa8e052d648cec42a8c2a54c648d26bc;
PyObject *const_str_digest_f1949150375e8b53443d58d93fe4f89e;
PyObject *const_tuple_str_plain_URLError_tuple;
PyObject *const_str_plain_URLError;
PyObject *const_str_digest_cffdfb8ee0b032b08be30a03b28dafce;
PyObject *const_str_plain__iswritemode;
PyObject *const_str_digest_4f6352b905a153ca791e6933e35e7db8;
PyObject *const_str_plain__findfile;
PyObject *const_str_plain__splitzipext;
PyObject *const_str_plain_replace;
PyObject *const_tuple_str_chr_43_str_empty_tuple;
PyObject *const_tuple_str_plain_mode_str_plain_encoding_str_plain_newline_tuple;
PyObject *const_str_digest_e85afe0f26d7830527e29d1e0eb37db7;
PyObject *const_str_digest_a0a8b996cec509ccd20b74fb1f2054a3;
PyObject *const_tuple_str_plain_destpath_tuple;
PyObject *const_str_plain__baseurl;
PyObject *const_str_digest_415d51a290f614893273d05463ea8a21;
PyObject *const_str_plain___del__;
PyObject *const_str_digest_2ac9c01e01ae899f110c3c69fe790f13;
PyObject *const_str_plain__fullpath;
PyObject *const_str_digest_1971e6beb36097393cea7c7af9d3b18f;
PyObject *const_str_digest_9285007bd1eff58e5cac0be1bb0acee1;
PyObject *const_str_digest_92274dbb556b47dcce4a9f4e31be4c8e;
PyObject *const_str_digest_a4fad8eef83e1ccc909a2793b0ffc736;
PyObject *const_str_digest_d810d5c7cfbd9027b491ad0efa07a8ee;
PyObject *const_str_digest_6d6487c1f5a66a0f02dfc2908fc01083;
PyObject *const_str_digest_cee4edfbbe9cb1d003b327276fbbc74e;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_os;
PyObject *const_str_digest_1cc096bfca6f12718d06670f9299228c;
PyObject *const_tuple_str_plain_set_module_tuple;
PyObject *const_str_plain_set_module;
PyObject *const_str_plain__check_mode;
PyObject *const_str_digest_0aa9085c4d1278385096b0e69de7c526;
PyObject *const_str_digest_54568b3361794f47346bf23cd52673ed;
PyObject *const_str_plain__FileOpeners;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_72;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_c33306f704849f41e67f70b8cf5ec532;
PyObject *const_str_digest_b0c8bb061705a78b6d5d70f2fa6b199c;
PyObject *const_str_digest_34f0860d8635fc7d701e9f8675e1e92b;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_4b4dccfb8b1c048c2cd2123d51fea382;
PyObject *const_tuple_str_plain__loaded_str_plain__file_openers_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_tuple_str_plain_r_str_dot_none_none_tuple;
PyObject *const_tuple_str_digest_7e41397866ce47c4cd6fba337671bf63_tuple;
PyObject *const_str_digest_2b3bc461bdaf4bfc54e5fb41b9c2970b;
PyObject *const_int_pos_196;
PyObject *const_tuple_str_dot_tuple;
PyObject *const_str_digest_9bdf01510303e8a3ad611dfd5c98140a;
PyObject *const_str_digest_5d586c28e421b290d2e08c6c532a1f4f;
PyObject *const_str_digest_b76acba60c8c58c6708811a1e46317c3;
PyObject *const_str_digest_e5211faedce7e53a58da22d52bf97d7d;
PyObject *const_str_digest_e5b4dbd8347e7c8228e1ae7c26322ad0;
PyObject *const_str_digest_7bc05395991514f347d97a65161a7ac3;
PyObject *const_str_digest_e18153b0c5d6e92b9afd461a42d3912e;
PyObject *const_str_digest_ffa929121bc623cfddd9d8eb55d0b976;
PyObject *const_str_digest_c5d3ac1b8a40dc44f25de58214ee2353;
PyObject *const_str_digest_67b68af63d48b9656273273b693f941d;
PyObject *const_str_digest_5431f1f60ba523323657ab5706dfb27d;
PyObject *const_str_digest_dc553434b9e2dd742a2ab8620a67a8dd;
PyObject *const_tuple_str_plain_r_none_none_tuple;
PyObject *const_str_digest_c5cb8571bd1f05342692e40acced552c;
PyObject *const_tuple_str_plain__destpath_str_plain__istmpdest_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_Repository;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_db761217ce2acb9b9a599fca45947a31;
PyObject *const_int_pos_532;
PyObject *const_str_digest_601db2d6a6caebbac2cea605ff151aeb;
PyObject *const_str_digest_ecc79977529416eccc1f5a9927e76c86;
PyObject *const_str_digest_31c9e1f883023848ac7a943019073cc7;
PyObject *const_str_digest_194de714e4168d28b28f096a4583e904;
PyObject *const_str_digest_dafda8f40655ada21cff6cece338d781;
PyObject *const_str_digest_2999fef46912348754d007c64f7c5989;
PyObject *const_str_digest_f93c6694f5952bbaca63e79eb1654977;
PyObject *const_str_digest_8bbf3450cfc5c42442f0bc64c3bb7ade;
PyObject *const_tuple_str_plain__baseurl_tuple;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_7f488070cddfd3835fd02dd614a3f8b9;
PyObject *const_tuple_1281e69eb0d98fd18c13b3d638aa6a27_tuple;
PyObject *const_str_digest_47e486e87eb8764a1b2307ed90f3aaa8;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_shutil_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_key_tuple;
PyObject *const_tuple_str_plain_self_str_plain_destpath_str_plain_tempfile_tuple;
PyObject *const_tuple_str_plain_self_str_plain_baseurl_str_plain_destpath_tuple;
PyObject *const_tuple_ca5e0d4603064eb681d27058280eba96_tuple;
PyObject *const_tuple_ef4ad6b5417ce9e781e605310aca86cd_tuple;
PyObject *const_tuple_str_plain_self_str_plain_path_tuple;
PyObject *const_tuple_a0f7531dc417e67a4ce92c5500e568cf_tuple;
PyObject *const_tuple_280e3b7ed8a080d2bc457102fab52a5c_tuple;
PyObject *const_tuple_str_plain_self_str_plain_mode_str_plain__writemodes_tuple;
PyObject *const_tuple_a469ea537b6e2d5289fa63c3577735b8_tuple;
PyObject *const_tuple_str_plain_self_str_plain_bz2_str_plain_gzip_str_plain_lzma_tuple;
PyObject *const_tuple_5cb36c0f2a4b0861b9c8ec6e3c665aea_tuple;
PyObject *const_tuple_str_plain_self_str_plain_path_str_plain_last_str_plain_drive_tuple;
PyObject *const_tuple_str_plain_self_str_plain_filename_tuple;
PyObject *const_tuple_501ed939795053bb350c8de659a44f6e_tuple;
PyObject *const_tuple_2617f7413709143ec81c315b10882c59_tuple;
PyObject *const_tuple_5ed9f5cbd4e4a389548d765e9abf673c_tuple;
PyObject *const_tuple_bb68ee8064188bdabeb17938fdf3c545_tuple;
PyObject *const_tuple_c93e57a179a16c14f0fa36015c78d5f8_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[177];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("numpy.lib._datasource"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_t);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_digest_2cdbcc1ab3383509c7deb4391fc8445c);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_0b59e9eda6581adeda65c1b9df6b0570);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_010b171cebd0e5a72e203b10c48dd28a);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_5a5fdaacad3272eabe94470b120ece05);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain__loaded);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain__file_openers);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_bz2);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_2f8b9ae3e4f94f91b3ad2ca152fd5463);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_gzip);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_662720bcb38208f53dc17ad51de4c080);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_lzma);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_26eee62063e5728502d952d6fc9f59c6);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_c399835e8eb523d236381cdb42bfd5b5);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_type_ImportError_type_AttributeError_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain__load);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_1f195473264600970dd56a871934834d);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_DataSource);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_encoding_str_plain_newline_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_a3679e9e35150a7a0a63ce610ec9f97b);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain__destpath);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain__istmpdest);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_tempfile);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_mkdtemp);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_611d3f834bad4ff871ecf9466d8adf6a);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_shutil);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_rmtree);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_splitext);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_074a31081717ee3162b2f78278ae9c76);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_w_str_chr_43_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_258e217d37b092c9962da6d0adba4e88);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain__writemodes);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_13fa1e494bb5dfa33f9fe9b3c7aead9c);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain__iszip);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_98dd369365b4c1ab10383f746acec608);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_names);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_filename);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_e20c972cc44953c07a3051f1ead2981f);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_urlparse_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_urlparse);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_60f080f75b1d551ccaa0b992e75568f9);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_59bc9c95777e64e4720c3af0837aec42);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_urlopen_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_urlopen);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_makedirs);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain__isurl);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain__open);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_wb);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_copyfileobj);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_copyfile);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_951c1f79c30d7c1449f73d8e3ecb3784);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain__possible_names);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain__cache);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_4e495eed9dc2ab2d082c5a563a6edaa7);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain__sanitize_relative_path);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_join);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_b66f4152cb281fc793c83c7cafc0622d);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_last);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_lstrip);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_tuple_str_backslash_tuple);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_str_slash_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_7b79a8950d64155a442741f6cc8c809b_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_removeprefix);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_splitdrive);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_fa8e052d648cec42a8c2a54c648d26bc);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_f1949150375e8b53443d58d93fe4f89e);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_URLError_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_URLError);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_cffdfb8ee0b032b08be30a03b28dafce);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain__iswritemode);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_4f6352b905a153ca791e6933e35e7db8);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain__findfile);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain__splitzipext);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_replace);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_43_str_empty_tuple);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_mode_str_plain_encoding_str_plain_newline_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_e85afe0f26d7830527e29d1e0eb37db7);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_a0a8b996cec509ccd20b74fb1f2054a3);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_destpath_tuple);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain__baseurl);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_415d51a290f614893273d05463ea8a21);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain___del__);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_2ac9c01e01ae899f110c3c69fe790f13);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain__fullpath);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_1971e6beb36097393cea7c7af9d3b18f);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_9285007bd1eff58e5cac0be1bb0acee1);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_digest_92274dbb556b47dcce4a9f4e31be4c8e);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_a4fad8eef83e1ccc909a2793b0ffc736);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_d810d5c7cfbd9027b491ad0efa07a8ee);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_digest_6d6487c1f5a66a0f02dfc2908fc01083);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_digest_cee4edfbbe9cb1d003b327276fbbc74e);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_1cc096bfca6f12718d06670f9299228c);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_set_module_tuple);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_module);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain__check_mode);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_0aa9085c4d1278385096b0e69de7c526);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_digest_54568b3361794f47346bf23cd52673ed);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain__FileOpeners);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_int_pos_72);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_c33306f704849f41e67f70b8cf5ec532);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_b0c8bb061705a78b6d5d70f2fa6b199c);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_digest_34f0860d8635fc7d701e9f8675e1e92b);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_digest_4b4dccfb8b1c048c2cd2123d51fea382);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__loaded_str_plain__file_openers_tuple);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_r_str_dot_none_none_tuple);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_7e41397866ce47c4cd6fba337671bf63_tuple);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_digest_2b3bc461bdaf4bfc54e5fb41b9c2970b);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_int_pos_196);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_tuple);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_digest_9bdf01510303e8a3ad611dfd5c98140a);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_digest_5d586c28e421b290d2e08c6c532a1f4f);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_digest_b76acba60c8c58c6708811a1e46317c3);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_digest_e5211faedce7e53a58da22d52bf97d7d);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_digest_e5b4dbd8347e7c8228e1ae7c26322ad0);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_digest_7bc05395991514f347d97a65161a7ac3);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_e18153b0c5d6e92b9afd461a42d3912e);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_digest_ffa929121bc623cfddd9d8eb55d0b976);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_c5d3ac1b8a40dc44f25de58214ee2353);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_digest_67b68af63d48b9656273273b693f941d);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_5431f1f60ba523323657ab5706dfb27d);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc553434b9e2dd742a2ab8620a67a8dd);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_r_none_none_tuple);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_digest_c5cb8571bd1f05342692e40acced552c);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__destpath_str_plain__istmpdest_tuple);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_Repository);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_digest_db761217ce2acb9b9a599fca45947a31);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_int_pos_532);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_digest_601db2d6a6caebbac2cea605ff151aeb);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_digest_ecc79977529416eccc1f5a9927e76c86);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_digest_31c9e1f883023848ac7a943019073cc7);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_digest_194de714e4168d28b28f096a4583e904);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_digest_dafda8f40655ada21cff6cece338d781);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_digest_2999fef46912348754d007c64f7c5989);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_digest_f93c6694f5952bbaca63e79eb1654977);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_digest_8bbf3450cfc5c42442f0bc64c3bb7ade);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__baseurl_tuple);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_digest_7f488070cddfd3835fd02dd614a3f8b9);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_tuple_1281e69eb0d98fd18c13b3d638aa6a27_tuple);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_digest_47e486e87eb8764a1b2307ed90f3aaa8);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_shutil_tuple);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_key_tuple);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_destpath_str_plain_tempfile_tuple);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_baseurl_str_plain_destpath_tuple);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_tuple_ca5e0d4603064eb681d27058280eba96_tuple);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_tuple_ef4ad6b5417ce9e781e605310aca86cd_tuple);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_path_tuple);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_tuple_a0f7531dc417e67a4ce92c5500e568cf_tuple);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_tuple_280e3b7ed8a080d2bc457102fab52a5c_tuple);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_mode_str_plain__writemodes_tuple);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_tuple_a469ea537b6e2d5289fa63c3577735b8_tuple);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_bz2_str_plain_gzip_str_plain_lzma_tuple);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_tuple_5cb36c0f2a4b0861b9c8ec6e3c665aea_tuple);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_path_str_plain_last_str_plain_drive_tuple);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_filename_tuple);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_tuple_501ed939795053bb350c8de659a44f6e_tuple);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_tuple_2617f7413709143ec81c315b10882c59_tuple);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_tuple_5ed9f5cbd4e4a389548d765e9abf673c_tuple);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_tuple_bb68ee8064188bdabeb17938fdf3c545_tuple);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_tuple_c93e57a179a16c14f0fa36015c78d5f8_tuple);
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
void checkModuleConstants_numpy$lib$_datasource(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_t));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_t);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_digest_2cdbcc1ab3383509c7deb4391fc8445c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2cdbcc1ab3383509c7deb4391fc8445c);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_0b59e9eda6581adeda65c1b9df6b0570));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0b59e9eda6581adeda65c1b9df6b0570);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_010b171cebd0e5a72e203b10c48dd28a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_010b171cebd0e5a72e203b10c48dd28a);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_5a5fdaacad3272eabe94470b120ece05));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5a5fdaacad3272eabe94470b120ece05);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain__loaded));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__loaded);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain__file_openers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__file_openers);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_bz2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bz2);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_2f8b9ae3e4f94f91b3ad2ca152fd5463));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2f8b9ae3e4f94f91b3ad2ca152fd5463);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_gzip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_gzip);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_662720bcb38208f53dc17ad51de4c080));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_662720bcb38208f53dc17ad51de4c080);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_lzma));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lzma);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_26eee62063e5728502d952d6fc9f59c6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_26eee62063e5728502d952d6fc9f59c6);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_c399835e8eb523d236381cdb42bfd5b5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c399835e8eb523d236381cdb42bfd5b5);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_type_ImportError_type_AttributeError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_ImportError_type_AttributeError_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain__load));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__load);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_1f195473264600970dd56a871934834d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1f195473264600970dd56a871934834d);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_DataSource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DataSource);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_encoding_str_plain_newline_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_encoding_str_plain_newline_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_a3679e9e35150a7a0a63ce610ec9f97b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a3679e9e35150a7a0a63ce610ec9f97b);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain__destpath));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__destpath);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain__istmpdest));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__istmpdest);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_tempfile));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tempfile);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_mkdtemp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mkdtemp);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_611d3f834bad4ff871ecf9466d8adf6a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_611d3f834bad4ff871ecf9466d8adf6a);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_shutil));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shutil);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_rmtree));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rmtree);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_splitext));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_splitext);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_074a31081717ee3162b2f78278ae9c76));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_074a31081717ee3162b2f78278ae9c76);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_w_str_chr_43_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_w_str_chr_43_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_258e217d37b092c9962da6d0adba4e88));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_258e217d37b092c9962da6d0adba4e88);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain__writemodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__writemodes);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_13fa1e494bb5dfa33f9fe9b3c7aead9c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_13fa1e494bb5dfa33f9fe9b3c7aead9c);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain__iszip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__iszip);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_98dd369365b4c1ab10383f746acec608));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_98dd369365b4c1ab10383f746acec608);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_names));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_names);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_filename));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_filename);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_e20c972cc44953c07a3051f1ead2981f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e20c972cc44953c07a3051f1ead2981f);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_urlparse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_urlparse_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_urlparse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_urlparse);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_60f080f75b1d551ccaa0b992e75568f9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_60f080f75b1d551ccaa0b992e75568f9);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_59bc9c95777e64e4720c3af0837aec42));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_59bc9c95777e64e4720c3af0837aec42);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_urlopen_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_urlopen_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_urlopen));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_urlopen);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_makedirs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_makedirs);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain__isurl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__isurl);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain__open));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__open);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_wb));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wb);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_copyfileobj));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copyfileobj);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_copyfile));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copyfile);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_951c1f79c30d7c1449f73d8e3ecb3784));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_951c1f79c30d7c1449f73d8e3ecb3784);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain__possible_names));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__possible_names);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain__cache));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__cache);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_4e495eed9dc2ab2d082c5a563a6edaa7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4e495eed9dc2ab2d082c5a563a6edaa7);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain__sanitize_relative_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__sanitize_relative_path);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_join));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_join);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_b66f4152cb281fc793c83c7cafc0622d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b66f4152cb281fc793c83c7cafc0622d);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_last));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_last);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_lstrip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lstrip);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_tuple_str_backslash_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_backslash_tuple);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_str_slash_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_slash_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_7b79a8950d64155a442741f6cc8c809b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_7b79a8950d64155a442741f6cc8c809b_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_removeprefix));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_removeprefix);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_splitdrive));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_splitdrive);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_fa8e052d648cec42a8c2a54c648d26bc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fa8e052d648cec42a8c2a54c648d26bc);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_f1949150375e8b53443d58d93fe4f89e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f1949150375e8b53443d58d93fe4f89e);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_URLError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_URLError_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_URLError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_URLError);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_cffdfb8ee0b032b08be30a03b28dafce));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cffdfb8ee0b032b08be30a03b28dafce);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain__iswritemode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__iswritemode);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_4f6352b905a153ca791e6933e35e7db8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4f6352b905a153ca791e6933e35e7db8);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain__findfile));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__findfile);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain__splitzipext));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__splitzipext);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_replace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_replace);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_43_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_43_str_empty_tuple);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_mode_str_plain_encoding_str_plain_newline_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_mode_str_plain_encoding_str_plain_newline_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_e85afe0f26d7830527e29d1e0eb37db7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e85afe0f26d7830527e29d1e0eb37db7);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_a0a8b996cec509ccd20b74fb1f2054a3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a0a8b996cec509ccd20b74fb1f2054a3);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_destpath_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_destpath_tuple);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain__baseurl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__baseurl);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_415d51a290f614893273d05463ea8a21));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_415d51a290f614893273d05463ea8a21);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain___del__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___del__);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_2ac9c01e01ae899f110c3c69fe790f13));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2ac9c01e01ae899f110c3c69fe790f13);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain__fullpath));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__fullpath);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_1971e6beb36097393cea7c7af9d3b18f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1971e6beb36097393cea7c7af9d3b18f);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_9285007bd1eff58e5cac0be1bb0acee1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9285007bd1eff58e5cac0be1bb0acee1);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_digest_92274dbb556b47dcce4a9f4e31be4c8e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_92274dbb556b47dcce4a9f4e31be4c8e);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_a4fad8eef83e1ccc909a2793b0ffc736));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a4fad8eef83e1ccc909a2793b0ffc736);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_d810d5c7cfbd9027b491ad0efa07a8ee));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d810d5c7cfbd9027b491ad0efa07a8ee);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_digest_6d6487c1f5a66a0f02dfc2908fc01083));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6d6487c1f5a66a0f02dfc2908fc01083);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_digest_cee4edfbbe9cb1d003b327276fbbc74e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cee4edfbbe9cb1d003b327276fbbc74e);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_1cc096bfca6f12718d06670f9299228c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1cc096bfca6f12718d06670f9299228c);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_set_module_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_set_module_tuple);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_module));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_module);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain__check_mode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__check_mode);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_0aa9085c4d1278385096b0e69de7c526));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0aa9085c4d1278385096b0e69de7c526);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_digest_54568b3361794f47346bf23cd52673ed));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_54568b3361794f47346bf23cd52673ed);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain__FileOpeners));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__FileOpeners);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_int_pos_72));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_72);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_c33306f704849f41e67f70b8cf5ec532));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c33306f704849f41e67f70b8cf5ec532);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_b0c8bb061705a78b6d5d70f2fa6b199c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b0c8bb061705a78b6d5d70f2fa6b199c);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_digest_34f0860d8635fc7d701e9f8675e1e92b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_34f0860d8635fc7d701e9f8675e1e92b);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_digest_4b4dccfb8b1c048c2cd2123d51fea382));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4b4dccfb8b1c048c2cd2123d51fea382);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__loaded_str_plain__file_openers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__loaded_str_plain__file_openers_tuple);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_r_str_dot_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_r_str_dot_none_none_tuple);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_7e41397866ce47c4cd6fba337671bf63_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_7e41397866ce47c4cd6fba337671bf63_tuple);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_digest_2b3bc461bdaf4bfc54e5fb41b9c2970b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2b3bc461bdaf4bfc54e5fb41b9c2970b);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_int_pos_196));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_196);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_dot_tuple);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_digest_9bdf01510303e8a3ad611dfd5c98140a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9bdf01510303e8a3ad611dfd5c98140a);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_digest_5d586c28e421b290d2e08c6c532a1f4f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5d586c28e421b290d2e08c6c532a1f4f);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_digest_b76acba60c8c58c6708811a1e46317c3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b76acba60c8c58c6708811a1e46317c3);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_digest_e5211faedce7e53a58da22d52bf97d7d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e5211faedce7e53a58da22d52bf97d7d);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_digest_e5b4dbd8347e7c8228e1ae7c26322ad0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e5b4dbd8347e7c8228e1ae7c26322ad0);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_digest_7bc05395991514f347d97a65161a7ac3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7bc05395991514f347d97a65161a7ac3);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_e18153b0c5d6e92b9afd461a42d3912e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e18153b0c5d6e92b9afd461a42d3912e);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_digest_ffa929121bc623cfddd9d8eb55d0b976));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ffa929121bc623cfddd9d8eb55d0b976);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_c5d3ac1b8a40dc44f25de58214ee2353));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c5d3ac1b8a40dc44f25de58214ee2353);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_digest_67b68af63d48b9656273273b693f941d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_67b68af63d48b9656273273b693f941d);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_5431f1f60ba523323657ab5706dfb27d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5431f1f60ba523323657ab5706dfb27d);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc553434b9e2dd742a2ab8620a67a8dd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc553434b9e2dd742a2ab8620a67a8dd);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_r_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_r_none_none_tuple);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_digest_c5cb8571bd1f05342692e40acced552c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c5cb8571bd1f05342692e40acced552c);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__destpath_str_plain__istmpdest_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__destpath_str_plain__istmpdest_tuple);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_Repository));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Repository);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_digest_db761217ce2acb9b9a599fca45947a31));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_db761217ce2acb9b9a599fca45947a31);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_int_pos_532));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_532);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_digest_601db2d6a6caebbac2cea605ff151aeb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_601db2d6a6caebbac2cea605ff151aeb);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_digest_ecc79977529416eccc1f5a9927e76c86));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ecc79977529416eccc1f5a9927e76c86);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_digest_31c9e1f883023848ac7a943019073cc7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_31c9e1f883023848ac7a943019073cc7);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_digest_194de714e4168d28b28f096a4583e904));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_194de714e4168d28b28f096a4583e904);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_digest_dafda8f40655ada21cff6cece338d781));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dafda8f40655ada21cff6cece338d781);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_digest_2999fef46912348754d007c64f7c5989));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2999fef46912348754d007c64f7c5989);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_digest_f93c6694f5952bbaca63e79eb1654977));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f93c6694f5952bbaca63e79eb1654977);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_digest_8bbf3450cfc5c42442f0bc64c3bb7ade));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8bbf3450cfc5c42442f0bc64c3bb7ade);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__baseurl_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__baseurl_tuple);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_digest_7f488070cddfd3835fd02dd614a3f8b9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7f488070cddfd3835fd02dd614a3f8b9);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_tuple_1281e69eb0d98fd18c13b3d638aa6a27_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1281e69eb0d98fd18c13b3d638aa6a27_tuple);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_digest_47e486e87eb8764a1b2307ed90f3aaa8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_47e486e87eb8764a1b2307ed90f3aaa8);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_shutil_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_shutil_tuple);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_key_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_key_tuple);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_destpath_str_plain_tempfile_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_destpath_str_plain_tempfile_tuple);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_baseurl_str_plain_destpath_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_baseurl_str_plain_destpath_tuple);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_tuple_ca5e0d4603064eb681d27058280eba96_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ca5e0d4603064eb681d27058280eba96_tuple);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_tuple_ef4ad6b5417ce9e781e605310aca86cd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ef4ad6b5417ce9e781e605310aca86cd_tuple);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_path_tuple);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_tuple_a0f7531dc417e67a4ce92c5500e568cf_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a0f7531dc417e67a4ce92c5500e568cf_tuple);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_tuple_280e3b7ed8a080d2bc457102fab52a5c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_280e3b7ed8a080d2bc457102fab52a5c_tuple);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_mode_str_plain__writemodes_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_mode_str_plain__writemodes_tuple);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_tuple_a469ea537b6e2d5289fa63c3577735b8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a469ea537b6e2d5289fa63c3577735b8_tuple);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_bz2_str_plain_gzip_str_plain_lzma_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_bz2_str_plain_gzip_str_plain_lzma_tuple);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_tuple_5cb36c0f2a4b0861b9c8ec6e3c665aea_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5cb36c0f2a4b0861b9c8ec6e3c665aea_tuple);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_path_str_plain_last_str_plain_drive_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_path_str_plain_last_str_plain_drive_tuple);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_filename_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_filename_tuple);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_tuple_501ed939795053bb350c8de659a44f6e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_501ed939795053bb350c8de659a44f6e_tuple);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_tuple_2617f7413709143ec81c315b10882c59_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2617f7413709143ec81c315b10882c59_tuple);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_tuple_5ed9f5cbd4e4a389548d765e9abf673c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5ed9f5cbd4e4a389548d765e9abf673c_tuple);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_tuple_bb68ee8064188bdabeb17938fdf3c545_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bb68ee8064188bdabeb17938fdf3c545_tuple);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_tuple_c93e57a179a16c14f0fa36015c78d5f8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c93e57a179a16c14f0fa36015c78d5f8_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 7
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
static PyObject *module_var_accessor_numpy$lib$_datasource$DataSource(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_datasource->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_datasource->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSource);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_datasource->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DataSource);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DataSource, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DataSource);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DataSource, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSource);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSource);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSource);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_datasource$_FileOpeners(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_datasource->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_datasource->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)mod_consts.const_str_plain__FileOpeners);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_datasource->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__FileOpeners);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__FileOpeners, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__FileOpeners);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__FileOpeners, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)mod_consts.const_str_plain__FileOpeners);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)mod_consts.const_str_plain__FileOpeners);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__FileOpeners);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_datasource$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_datasource->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_datasource->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_datasource->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_datasource$_file_openers(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_datasource->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_datasource->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)mod_consts.const_str_plain__file_openers);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_datasource->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__file_openers);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__file_openers, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__file_openers);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__file_openers, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)mod_consts.const_str_plain__file_openers);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)mod_consts.const_str_plain__file_openers);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__file_openers);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_datasource$_open(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_datasource->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_datasource->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)mod_consts.const_str_plain__open);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_datasource->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__open);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__open, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__open);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__open, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)mod_consts.const_str_plain__open);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)mod_consts.const_str_plain__open);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__open);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_datasource$open(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_datasource->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_datasource->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)const_str_plain_open);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_datasource->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_open);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_open, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_open);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_open, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)const_str_plain_open);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)const_str_plain_open);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_open);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$lib$_datasource$set_module(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$lib$_datasource->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$lib$_datasource->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)mod_consts.const_str_plain_set_module);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$lib$_datasource->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_set_module);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_set_module, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_set_module);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_set_module, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)mod_consts.const_str_plain_set_module);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)mod_consts.const_str_plain_set_module);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_set_module);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_4498fd5226d5feac9eaaed089029a17f;
static PyCodeObject *code_objects_0dd5d3502a099c13ab846c97c73a6183;
static PyCodeObject *code_objects_6714e2a867b19cd7d1cad76eedf0f365;
static PyCodeObject *code_objects_0331baa6045ebb1cbc135e5371c18336;
static PyCodeObject *code_objects_e92769b32af6e90e49b9ed6674f3eb96;
static PyCodeObject *code_objects_5d33a4cff6fe3b7fecced5cdadac30bd;
static PyCodeObject *code_objects_d66eb0eacfafbc0894fcf90f2f48cf2c;
static PyCodeObject *code_objects_05e21eaf74fc41df196e8debb342e4e2;
static PyCodeObject *code_objects_e89c51743f314efbb755a249f23912e3;
static PyCodeObject *code_objects_c86f7555534119b2dc82226bdf9f392c;
static PyCodeObject *code_objects_afbd0026084b63386cb5182711d7d9c0;
static PyCodeObject *code_objects_62cf907303fd8e8537010a208e6b2c05;
static PyCodeObject *code_objects_3a30b713b8db6e17dca32dcfa9402825;
static PyCodeObject *code_objects_6fb03e84282716d35089f32c87dc4d18;
static PyCodeObject *code_objects_6723fa1ff48d34d0823d0842d5e61148;
static PyCodeObject *code_objects_9db79083041f1838d15bb20014c3b0ef;
static PyCodeObject *code_objects_0bd0af7f6cdcb855868377bf94cab323;
static PyCodeObject *code_objects_5269eab843794359bd91be30bd510d17;
static PyCodeObject *code_objects_97cc8f97889c9643ed62c9dadd2df0d9;
static PyCodeObject *code_objects_90def1455cfe0182900c04369967b13c;
static PyCodeObject *code_objects_212d1583a88e168a0f8bef8f27303926;
static PyCodeObject *code_objects_6ee5e7dcb7f1a1aac9cf48d7a1786c7e;
static PyCodeObject *code_objects_80da25f0c3a746e685859e5a5e90eefa;
static PyCodeObject *code_objects_69f545f1276c6b9983f8bbef1f82d3fb;
static PyCodeObject *code_objects_8d412cb13a2ad3b91024f24130ab0293;
static PyCodeObject *code_objects_615ad77fce8361e481419df7e0829e45;
static PyCodeObject *code_objects_3e423212f1bfeb5326585082fe369295;
static PyCodeObject *code_objects_f5513d4a2e6589e83ab14e9ac49200a7;
static PyCodeObject *code_objects_64c2588eb314d6b219955f92ad941985;
static PyCodeObject *code_objects_41f04506cb5935dc829d60183d4f7074;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_7f488070cddfd3835fd02dd614a3f8b9); CHECK_OBJECT(module_filename_obj);
code_objects_4498fd5226d5feac9eaaed089029a17f = MAKE_CODE_OBJECT(module_filename_obj, 274, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_13fa1e494bb5dfa33f9fe9b3c7aead9c, mod_consts.const_tuple_1281e69eb0d98fd18c13b3d638aa6a27_tuple, NULL, 1, 0, 0);
code_objects_0dd5d3502a099c13ab846c97c73a6183 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_47e486e87eb8764a1b2307ed90f3aaa8, mod_consts.const_str_digest_47e486e87eb8764a1b2307ed90f3aaa8, NULL, NULL, 0, 0, 0);
code_objects_6714e2a867b19cd7d1cad76eedf0f365 = MAKE_CODE_OBJECT(module_filename_obj, 532, 0, mod_consts.const_str_plain_Repository, mod_consts.const_str_plain_Repository, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_0331baa6045ebb1cbc135e5371c18336 = MAKE_CODE_OBJECT(module_filename_obj, 255, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___del__, mod_consts.const_str_digest_5d586c28e421b290d2e08c6c532a1f4f, mod_consts.const_tuple_str_plain_self_str_plain_shutil_tuple, NULL, 1, 0, 0);
code_objects_e92769b32af6e90e49b9ed6674f3eb96 = MAKE_CODE_OBJECT(module_filename_obj, 577, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___del__, mod_consts.const_str_digest_ecc79977529416eccc1f5a9927e76c86, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_5d33a4cff6fe3b7fecced5cdadac30bd = MAKE_CODE_OBJECT(module_filename_obj, 147, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___getitem__, mod_consts.const_str_digest_4b4dccfb8b1c048c2cd2123d51fea382, mod_consts.const_tuple_str_plain_self_str_plain_key_tuple, NULL, 2, 0, 0);
code_objects_d66eb0eacfafbc0894fcf90f2f48cf2c = MAKE_CODE_OBJECT(module_filename_obj, 245, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_9bdf01510303e8a3ad611dfd5c98140a, mod_consts.const_tuple_str_plain_self_str_plain_destpath_str_plain_tempfile_tuple, NULL, 2, 0, 0);
code_objects_05e21eaf74fc41df196e8debb342e4e2 = MAKE_CODE_OBJECT(module_filename_obj, 572, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_601db2d6a6caebbac2cea605ff151aeb, mod_consts.const_tuple_str_plain_self_str_plain_baseurl_str_plain_destpath_tuple, NULL, 3, 0, 0);
code_objects_e89c51743f314efbb755a249f23912e3 = MAKE_CODE_OBJECT(module_filename_obj, 97, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_c33306f704849f41e67f70b8cf5ec532, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_c86f7555534119b2dc82226bdf9f392c = MAKE_CODE_OBJECT(module_filename_obj, 314, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__cache, mod_consts.const_str_digest_ffa929121bc623cfddd9d8eb55d0b976, mod_consts.const_tuple_ca5e0d4603064eb681d27058280eba96_tuple, NULL, 2, 0, 0);
code_objects_afbd0026084b63386cb5182711d7d9c0 = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__check_mode, mod_consts.const_str_plain__check_mode, mod_consts.const_tuple_str_plain_mode_str_plain_encoding_str_plain_newline_tuple, NULL, 3, 0, 0);
code_objects_62cf907303fd8e8537010a208e6b2c05 = MAKE_CODE_OBJECT(module_filename_obj, 340, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__findfile, mod_consts.const_str_digest_c5d3ac1b8a40dc44f25de58214ee2353, mod_consts.const_tuple_ef4ad6b5417ce9e781e605310aca86cd_tuple, NULL, 2, 0, 0);
code_objects_3a30b713b8db6e17dca32dcfa9402825 = MAKE_CODE_OBJECT(module_filename_obj, 589, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__findfile, mod_consts.const_str_digest_194de714e4168d28b28f096a4583e904, mod_consts.const_tuple_str_plain_self_str_plain_path_tuple, NULL, 2, 0, 0);
code_objects_6fb03e84282716d35089f32c87dc4d18 = MAKE_CODE_OBJECT(module_filename_obj, 580, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__fullpath, mod_consts.const_str_digest_31c9e1f883023848ac7a943019073cc7, mod_consts.const_tuple_a0f7531dc417e67a4ce92c5500e568cf_tuple, NULL, 2, 0, 0);
code_objects_6723fa1ff48d34d0823d0842d5e61148 = MAKE_CODE_OBJECT(module_filename_obj, 299, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__isurl, mod_consts.const_str_digest_e18153b0c5d6e92b9afd461a42d3912e, mod_consts.const_tuple_280e3b7ed8a080d2bc457102fab52a5c_tuple, NULL, 2, 0, 0);
code_objects_9db79083041f1838d15bb20014c3b0ef = MAKE_CODE_OBJECT(module_filename_obj, 269, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__iswritemode, mod_consts.const_str_digest_e5211faedce7e53a58da22d52bf97d7d, mod_consts.const_tuple_str_plain_self_str_plain_mode_str_plain__writemodes_tuple, NULL, 2, 0, 0);
code_objects_0bd0af7f6cdcb855868377bf94cab323 = MAKE_CODE_OBJECT(module_filename_obj, 262, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__iszip, mod_consts.const_str_digest_b76acba60c8c58c6708811a1e46317c3, mod_consts.const_tuple_a469ea537b6e2d5289fa63c3577735b8_tuple, NULL, 2, 0, 0);
code_objects_5269eab843794359bd91be30bd510d17 = MAKE_CODE_OBJECT(module_filename_obj, 101, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__load, mod_consts.const_str_digest_b0c8bb061705a78b6d5d70f2fa6b199c, mod_consts.const_tuple_str_plain_self_str_plain_bz2_str_plain_gzip_str_plain_lzma_tuple, NULL, 1, 0, 0);
code_objects_97cc8f97889c9643ed62c9dadd2df0d9 = MAKE_CODE_OBJECT(module_filename_obj, 290, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__possible_names, mod_consts.const_str_digest_7bc05395991514f347d97a65161a7ac3, mod_consts.const_tuple_5cb36c0f2a4b0861b9c8ec6e3c665aea_tuple, NULL, 2, 0, 0);
code_objects_90def1455cfe0182900c04369967b13c = MAKE_CODE_OBJECT(module_filename_obj, 413, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__sanitize_relative_path, mod_consts.const_str_digest_5431f1f60ba523323657ab5706dfb27d, mod_consts.const_tuple_str_plain_self_str_plain_path_str_plain_last_str_plain_drive_tuple, NULL, 2, 0, 0);
code_objects_212d1583a88e168a0f8bef8f27303926 = MAKE_CODE_OBJECT(module_filename_obj, 276, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__splitzipext, mod_consts.const_str_digest_e5b4dbd8347e7c8228e1ae7c26322ad0, mod_consts.const_tuple_str_plain_self_str_plain_filename_tuple, NULL, 2, 0, 0);
code_objects_6ee5e7dcb7f1a1aac9cf48d7a1786c7e = MAKE_CODE_OBJECT(module_filename_obj, 371, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_abspath, mod_consts.const_str_digest_67b68af63d48b9656273273b693f941d, mod_consts.const_tuple_501ed939795053bb350c8de659a44f6e_tuple, NULL, 2, 0, 0);
code_objects_80da25f0c3a746e685859e5a5e90eefa = MAKE_CODE_OBJECT(module_filename_obj, 593, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_abspath, mod_consts.const_str_digest_dafda8f40655ada21cff6cece338d781, mod_consts.const_tuple_str_plain_self_str_plain_path_tuple, NULL, 2, 0, 0);
code_objects_69f545f1276c6b9983f8bbef1f82d3fb = MAKE_CODE_OBJECT(module_filename_obj, 427, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_exists, mod_consts.const_str_digest_dc553434b9e2dd742a2ab8620a67a8dd, mod_consts.const_tuple_2617f7413709143ec81c315b10882c59_tuple, NULL, 2, 0, 0);
code_objects_8d412cb13a2ad3b91024f24130ab0293 = MAKE_CODE_OBJECT(module_filename_obj, 616, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_exists, mod_consts.const_str_digest_2999fef46912348754d007c64f7c5989, mod_consts.const_tuple_str_plain_self_str_plain_path_tuple, NULL, 2, 0, 0);
code_objects_615ad77fce8361e481419df7e0829e45 = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_keys, mod_consts.const_str_digest_34f0860d8635fc7d701e9f8675e1e92b, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_3e423212f1bfeb5326585082fe369295 = MAKE_CODE_OBJECT(module_filename_obj, 682, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_listdir, mod_consts.const_str_digest_8bbf3450cfc5c42442f0bc64c3bb7ade, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_f5513d4a2e6589e83ab14e9ac49200a7 = MAKE_CODE_OBJECT(module_filename_obj, 483, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_open, mod_consts.const_str_digest_c5cb8571bd1f05342692e40acced552c, mod_consts.const_tuple_5ed9f5cbd4e4a389548d765e9abf673c_tuple, NULL, 5, 0, 0);
code_objects_64c2588eb314d6b219955f92ad941985 = MAKE_CODE_OBJECT(module_filename_obj, 650, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_open, mod_consts.const_str_digest_f93c6694f5952bbaca63e79eb1654977, mod_consts.const_tuple_bb68ee8064188bdabeb17938fdf3c545_tuple, NULL, 5, 0, 0);
code_objects_41f04506cb5935dc829d60183d4f7074 = MAKE_CODE_OBJECT(module_filename_obj, 154, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_open, const_str_plain_open, mod_consts.const_tuple_c93e57a179a16c14f0fa36015c78d5f8_tuple, NULL, 5, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_numpy$lib$_datasource$$$function__10__iswritemode$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__10__iswritemode(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__11__splitzipext(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__12__possible_names(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__13__isurl(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__14__cache(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__15__findfile(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__16_abspath(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__17__sanitize_relative_path(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__18_exists(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__19_open(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__1__check_mode(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__20___init__(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__21___del__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__22__fullpath(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__23__findfile(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__24_abspath(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__25_exists(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__26_open(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__27_listdir(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__2___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__3__load(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__4_keys(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__5___getitem__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__6_open(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__7___init__(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__8___del__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__9__iszip(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_numpy$lib$_datasource$$$function__1__check_mode(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_mode = python_pars[0];
PyObject *par_encoding = python_pars[1];
PyObject *par_newline = python_pars[2];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_datasource$$$function__1__check_mode;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_datasource$$$function__1__check_mode = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$_datasource$$$function__1__check_mode)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_datasource$$$function__1__check_mode);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_datasource$$$function__1__check_mode == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_datasource$$$function__1__check_mode = MAKE_FUNCTION_FRAME(tstate, code_objects_afbd0026084b63386cb5182711d7d9c0, module_numpy$lib$_datasource, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_datasource$$$function__1__check_mode->m_type_description == NULL);
frame_frame_numpy$lib$_datasource$$$function__1__check_mode = cache_frame_frame_numpy$lib$_datasource$$$function__1__check_mode;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_datasource$$$function__1__check_mode);
assert(Py_REFCNT(frame_frame_numpy$lib$_datasource$$$function__1__check_mode) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = mod_consts.const_str_plain_t;
CHECK_OBJECT(par_mode);
tmp_cmp_expr_right_1 = par_mode;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "ooo";
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
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = const_str_plain_b;
CHECK_OBJECT(par_mode);
tmp_cmp_expr_right_2 = par_mode;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_2cdbcc1ab3383509c7deb4391fc8445c;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_mode);
tmp_operand_value_1 = par_mode;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "ooo";
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
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_numpy$lib$_datasource$$$function__1__check_mode->m_frame.f_lineno = 59;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 59;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_encoding);
tmp_cmp_expr_left_3 = par_encoding;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
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
tmp_make_exception_arg_2 = mod_consts.const_str_digest_0b59e9eda6581adeda65c1b9df6b0570;
frame_frame_numpy$lib$_datasource$$$function__1__check_mode->m_frame.f_lineno = 62;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 62;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(par_newline);
tmp_cmp_expr_left_4 = par_newline;
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
tmp_make_exception_arg_3 = mod_consts.const_str_digest_010b171cebd0e5a72e203b10c48dd28a;
frame_frame_numpy$lib$_datasource$$$function__1__check_mode->m_frame.f_lineno = 64;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 64;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_4:;
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_datasource$$$function__1__check_mode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_datasource$$$function__1__check_mode->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_datasource$$$function__1__check_mode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_datasource$$$function__1__check_mode,
    type_description_1,
    par_mode,
    par_encoding,
    par_newline
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_datasource$$$function__1__check_mode == cache_frame_frame_numpy$lib$_datasource$$$function__1__check_mode) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_datasource$$$function__1__check_mode);
    cache_frame_frame_numpy$lib$_datasource$$$function__1__check_mode = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_datasource$$$function__1__check_mode);

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
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
CHECK_OBJECT(par_newline);
Py_DECREF(par_newline);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
CHECK_OBJECT(par_newline);
Py_DECREF(par_newline);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_datasource$$$function__2___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_datasource$$$function__2___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_datasource$$$function__2___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$_datasource$$$function__2___init__)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_datasource$$$function__2___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_datasource$$$function__2___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_datasource$$$function__2___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_e89c51743f314efbb755a249f23912e3, module_numpy$lib$_datasource, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_datasource$$$function__2___init__->m_type_description == NULL);
frame_frame_numpy$lib$_datasource$$$function__2___init__ = cache_frame_frame_numpy$lib$_datasource$$$function__2___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_datasource$$$function__2___init__);
assert(Py_REFCNT(frame_frame_numpy$lib$_datasource$$$function__2___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__loaded, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_assattr_target_2;
tmp_dict_key_1 = Py_None;
tmp_dict_value_1 = module_var_accessor_numpy$lib$_datasource$open(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_open);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 99;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_assattr_value_2 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assattr_value_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__file_openers, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_datasource$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_datasource$$$function__2___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_datasource$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_datasource$$$function__2___init__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_datasource$$$function__2___init__ == cache_frame_frame_numpy$lib$_datasource$$$function__2___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_datasource$$$function__2___init__);
    cache_frame_frame_numpy$lib$_datasource$$$function__2___init__ = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_datasource$$$function__2___init__);

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


static PyObject *impl_numpy$lib$_datasource$$$function__3__load(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_bz2 = NULL;
PyObject *var_gzip = NULL;
PyObject *var_lzma = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_datasource$$$function__3__load;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_datasource$$$function__3__load = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_datasource$$$function__3__load)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_datasource$$$function__3__load);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_datasource$$$function__3__load == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_datasource$$$function__3__load = MAKE_FUNCTION_FRAME(tstate, code_objects_5269eab843794359bd91be30bd510d17, module_numpy$lib$_datasource, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_datasource$$$function__3__load->m_type_description == NULL);
frame_frame_numpy$lib$_datasource$$$function__3__load = cache_frame_frame_numpy$lib$_datasource$$$function__3__load;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_datasource$$$function__3__load);
assert(Py_REFCNT(frame_frame_numpy$lib$_datasource$$$function__3__load) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__loaded);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 102;
type_description_1 = "oooo";
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
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_bz2;
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$lib$_datasource;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_numpy$lib$_datasource$$$function__3__load->m_frame.f_lineno = 106;
tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(var_bz2 == NULL);
var_bz2 = tmp_assign_source_1;
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var_bz2);
tmp_expression_value_2 = var_bz2;
tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_open);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__file_openers);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 107;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_ass_subscript_1 = mod_consts.const_str_digest_2f8b9ae3e4f94f91b3ad2ca152fd5463;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
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

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_datasource$$$function__3__load, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_datasource$$$function__3__load, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_ImportError;
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
    exception_lineno = 105;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$lib$_datasource$$$function__3__load->m_frame)) {
        frame_frame_numpy$lib$_datasource$$$function__3__load->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_3;
branch_no_2:;
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
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_gzip;
tmp_globals_arg_value_2 = (PyObject *)moduledict_numpy$lib$_datasource;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_numpy$lib$_datasource$$$function__3__load->m_frame.f_lineno = 112;
tmp_assign_source_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
assert(var_gzip == NULL);
var_gzip = tmp_assign_source_2;
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(var_gzip);
tmp_expression_value_4 = var_gzip;
tmp_ass_subvalue_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_open);
if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__file_openers);
if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_2);

exception_lineno = 113;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
tmp_ass_subscript_2 = mod_consts.const_str_digest_662720bcb38208f53dc17ad51de4c080;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooo";
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

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_datasource$$$function__3__load, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_datasource$$$function__3__load, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_ImportError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(tmp_res == -1));
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
    exception_lineno = 111;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$lib$_datasource$$$function__3__load->m_frame)) {
        frame_frame_numpy$lib$_datasource$$$function__3__load->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_5;
branch_no_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_lzma;
tmp_globals_arg_value_3 = (PyObject *)moduledict_numpy$lib$_datasource;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_numpy$lib$_datasource$$$function__3__load->m_frame.f_lineno = 118;
tmp_assign_source_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooo";
    goto try_except_handler_6;
}
assert(var_lzma == NULL);
var_lzma = tmp_assign_source_3;
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_ass_subscript_3;
CHECK_OBJECT(var_lzma);
tmp_expression_value_6 = var_lzma;
tmp_ass_subvalue_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_open);
if (tmp_ass_subvalue_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_ass_subscribed_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__file_openers);
if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_3);

exception_lineno = 119;
type_description_1 = "oooo";
    goto try_except_handler_6;
}
tmp_ass_subscript_3 = mod_consts.const_str_digest_26eee62063e5728502d952d6fc9f59c6;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subscribed_3);
Py_DECREF(tmp_ass_subscribed_3);
CHECK_OBJECT(tmp_ass_subvalue_3);
Py_DECREF(tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oooo";
    goto try_except_handler_6;
}
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_expression_value_9;
PyObject *tmp_ass_subscript_4;
CHECK_OBJECT(var_lzma);
tmp_expression_value_8 = var_lzma;
tmp_ass_subvalue_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain_open);
if (tmp_ass_subvalue_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_ass_subscribed_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__file_openers);
if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_4);

exception_lineno = 120;
type_description_1 = "oooo";
    goto try_except_handler_6;
}
tmp_ass_subscript_4 = mod_consts.const_str_digest_c399835e8eb523d236381cdb42bfd5b5;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subscribed_4);
Py_DECREF(tmp_ass_subscribed_4);
CHECK_OBJECT(tmp_ass_subvalue_4);
Py_DECREF(tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooo";
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

// Preserve existing published exception id 3.
exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_datasource$$$function__3__load, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_datasource$$$function__3__load, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = mod_consts.const_tuple_type_ImportError_type_AttributeError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "oooo";
    goto try_except_handler_7;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 117;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$lib$_datasource$$$function__3__load->m_frame)) {
        frame_frame_numpy$lib$_datasource$$$function__3__load->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_7;
branch_no_4:;
goto try_end_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

goto try_end_5;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_5:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__loaded, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_datasource$$$function__3__load, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_datasource$$$function__3__load->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_datasource$$$function__3__load, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_datasource$$$function__3__load,
    type_description_1,
    par_self,
    var_bz2,
    var_gzip,
    var_lzma
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_datasource$$$function__3__load == cache_frame_frame_numpy$lib$_datasource$$$function__3__load) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_datasource$$$function__3__load);
    cache_frame_frame_numpy$lib$_datasource$$$function__3__load = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_datasource$$$function__3__load);

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
Py_XDECREF(var_bz2);
var_bz2 = NULL;
Py_XDECREF(var_gzip);
var_gzip = NULL;
Py_XDECREF(var_lzma);
var_lzma = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_bz2);
var_bz2 = NULL;
Py_XDECREF(var_gzip);
var_gzip = NULL;
Py_XDECREF(var_lzma);
var_lzma = NULL;
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


static PyObject *impl_numpy$lib$_datasource$$$function__4_keys(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_datasource$$$function__4_keys;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_datasource$$$function__4_keys = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$_datasource$$$function__4_keys)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_datasource$$$function__4_keys);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_datasource$$$function__4_keys == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_datasource$$$function__4_keys = MAKE_FUNCTION_FRAME(tstate, code_objects_615ad77fce8361e481419df7e0829e45, module_numpy$lib$_datasource, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_datasource$$$function__4_keys->m_type_description == NULL);
frame_frame_numpy$lib$_datasource$$$function__4_keys = cache_frame_frame_numpy$lib$_datasource$$$function__4_keys;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_datasource$$$function__4_keys);
assert(Py_REFCNT(frame_frame_numpy$lib$_datasource$$$function__4_keys) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_numpy$lib$_datasource$$$function__4_keys->m_frame.f_lineno = 144;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__load);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_list_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__file_openers);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_keys);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_datasource$$$function__4_keys->m_frame.f_lineno = 145;
tmp_list_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_datasource$$$function__4_keys, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_datasource$$$function__4_keys->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_datasource$$$function__4_keys, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_datasource$$$function__4_keys,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_datasource$$$function__4_keys == cache_frame_frame_numpy$lib$_datasource$$$function__4_keys) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_datasource$$$function__4_keys);
    cache_frame_frame_numpy$lib$_datasource$$$function__4_keys = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_datasource$$$function__4_keys);

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


static PyObject *impl_numpy$lib$_datasource$$$function__5___getitem__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_key = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_datasource$$$function__5___getitem__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_datasource$$$function__5___getitem__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$_datasource$$$function__5___getitem__)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_datasource$$$function__5___getitem__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_datasource$$$function__5___getitem__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_datasource$$$function__5___getitem__ = MAKE_FUNCTION_FRAME(tstate, code_objects_5d33a4cff6fe3b7fecced5cdadac30bd, module_numpy$lib$_datasource, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_datasource$$$function__5___getitem__->m_type_description == NULL);
frame_frame_numpy$lib$_datasource$$$function__5___getitem__ = cache_frame_frame_numpy$lib$_datasource$$$function__5___getitem__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_datasource$$$function__5___getitem__);
assert(Py_REFCNT(frame_frame_numpy$lib$_datasource$$$function__5___getitem__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_numpy$lib$_datasource$$$function__5___getitem__->m_frame.f_lineno = 148;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__load);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__file_openers);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_key);
tmp_subscript_value_1 = par_key;
tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_datasource$$$function__5___getitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_datasource$$$function__5___getitem__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_datasource$$$function__5___getitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_datasource$$$function__5___getitem__,
    type_description_1,
    par_self,
    par_key
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_datasource$$$function__5___getitem__ == cache_frame_frame_numpy$lib$_datasource$$$function__5___getitem__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_datasource$$$function__5___getitem__);
    cache_frame_frame_numpy$lib$_datasource$$$function__5___getitem__ = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_datasource$$$function__5___getitem__);

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
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_key);
Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_datasource$$$function__6_open(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_path = python_pars[0];
PyObject *par_mode = python_pars[1];
PyObject *par_destpath = python_pars[2];
PyObject *par_encoding = python_pars[3];
PyObject *par_newline = python_pars[4];
PyObject *var_ds = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_datasource$$$function__6_open;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_datasource$$$function__6_open = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_datasource$$$function__6_open)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_datasource$$$function__6_open);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_datasource$$$function__6_open == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_datasource$$$function__6_open = MAKE_FUNCTION_FRAME(tstate, code_objects_41f04506cb5935dc829d60183d4f7074, module_numpy$lib$_datasource, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_datasource$$$function__6_open->m_type_description == NULL);
frame_frame_numpy$lib$_datasource$$$function__6_open = cache_frame_frame_numpy$lib$_datasource$$$function__6_open;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_datasource$$$function__6_open);
assert(Py_REFCNT(frame_frame_numpy$lib$_datasource$$$function__6_open) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_numpy$lib$_datasource$DataSource(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DataSource);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 191;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_destpath);
tmp_args_element_value_1 = par_destpath;
frame_frame_numpy$lib$_datasource$$$function__6_open->m_frame.f_lineno = 191;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_ds == NULL);
var_ds = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
CHECK_OBJECT(var_ds);
tmp_expression_value_1 = var_ds;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_open);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_path);
tmp_kw_call_arg_value_0_1 = par_path;
CHECK_OBJECT(par_mode);
tmp_kw_call_arg_value_1_1 = par_mode;
CHECK_OBJECT(par_encoding);
tmp_kw_call_dict_value_0_1 = par_encoding;
CHECK_OBJECT(par_newline);
tmp_kw_call_dict_value_1_1 = par_newline;
frame_frame_numpy$lib$_datasource$$$function__6_open->m_frame.f_lineno = 192;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_encoding_str_plain_newline_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_datasource$$$function__6_open, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_datasource$$$function__6_open->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_datasource$$$function__6_open, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_datasource$$$function__6_open,
    type_description_1,
    par_path,
    par_mode,
    par_destpath,
    par_encoding,
    par_newline,
    var_ds
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_datasource$$$function__6_open == cache_frame_frame_numpy$lib$_datasource$$$function__6_open) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_datasource$$$function__6_open);
    cache_frame_frame_numpy$lib$_datasource$$$function__6_open = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_datasource$$$function__6_open);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_ds);
CHECK_OBJECT(var_ds);
Py_DECREF(var_ds);
var_ds = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_ds);
var_ds = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
CHECK_OBJECT(par_destpath);
Py_DECREF(par_destpath);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
CHECK_OBJECT(par_newline);
Py_DECREF(par_newline);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
CHECK_OBJECT(par_destpath);
Py_DECREF(par_destpath);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
CHECK_OBJECT(par_newline);
Py_DECREF(par_newline);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_datasource$$$function__7___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_destpath = python_pars[1];
PyObject *var_tempfile = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_datasource$$$function__7___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_datasource$$$function__7___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_datasource$$$function__7___init__)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_datasource$$$function__7___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_datasource$$$function__7___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_datasource$$$function__7___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_d66eb0eacfafbc0894fcf90f2f48cf2c, module_numpy$lib$_datasource, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_datasource$$$function__7___init__->m_type_description == NULL);
frame_frame_numpy$lib$_datasource$$$function__7___init__ = cache_frame_frame_numpy$lib$_datasource$$$function__7___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_datasource$$$function__7___init__);
assert(Py_REFCNT(frame_frame_numpy$lib$_datasource$$$function__7___init__) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_destpath);
tmp_truth_name_1 = CHECK_IF_TRUE(par_destpath);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
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
PyObject *tmp_assattr_value_1;
PyObject *tmp_path_arg_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_destpath);
tmp_path_arg_1 = par_destpath;
tmp_assattr_value_1 = OS_PATH_ABSPATH(tstate, tmp_path_arg_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__destpath, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__istmpdest, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_tempfile;
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$lib$_datasource;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_numpy$lib$_datasource$$$function__7___init__->m_frame.f_lineno = 251;
tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_tempfile == NULL);
var_tempfile = tmp_assign_source_1;
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_called_instance_1;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(var_tempfile);
tmp_called_instance_1 = var_tempfile;
frame_frame_numpy$lib$_datasource$$$function__7___init__->m_frame.f_lineno = 252;
tmp_assattr_value_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_mkdtemp);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__destpath, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__istmpdest, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_datasource$$$function__7___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_datasource$$$function__7___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_datasource$$$function__7___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_datasource$$$function__7___init__,
    type_description_1,
    par_self,
    par_destpath,
    var_tempfile
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_datasource$$$function__7___init__ == cache_frame_frame_numpy$lib$_datasource$$$function__7___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_datasource$$$function__7___init__);
    cache_frame_frame_numpy$lib$_datasource$$$function__7___init__ = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_datasource$$$function__7___init__);

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
Py_XDECREF(var_tempfile);
var_tempfile = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_tempfile);
var_tempfile = NULL;
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
CHECK_OBJECT(par_destpath);
Py_DECREF(par_destpath);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_destpath);
Py_DECREF(par_destpath);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_datasource$$$function__8___del__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_shutil = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_datasource$$$function__8___del__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_datasource$$$function__8___del__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_datasource$$$function__8___del__)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_datasource$$$function__8___del__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_datasource$$$function__8___del__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_datasource$$$function__8___del__ = MAKE_FUNCTION_FRAME(tstate, code_objects_0331baa6045ebb1cbc135e5371c18336, module_numpy$lib$_datasource, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_datasource$$$function__8___del__->m_type_description == NULL);
frame_frame_numpy$lib$_datasource$$$function__8___del__ = cache_frame_frame_numpy$lib$_datasource$$$function__8___del__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_datasource$$$function__8___del__);
assert(Py_REFCNT(frame_frame_numpy$lib$_datasource$$$function__8___del__) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts.const_str_plain__istmpdest);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__istmpdest);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 257;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
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
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_shutil;
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$lib$_datasource;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_numpy$lib$_datasource$$$function__8___del__->m_frame.f_lineno = 258;
tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_shutil == NULL);
var_shutil = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_shutil);
tmp_expression_value_3 = var_shutil;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_rmtree);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__destpath);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 260;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_datasource$$$function__8___del__->m_frame.f_lineno = 260;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_datasource$$$function__8___del__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_datasource$$$function__8___del__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_datasource$$$function__8___del__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_datasource$$$function__8___del__,
    type_description_1,
    par_self,
    var_shutil
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_datasource$$$function__8___del__ == cache_frame_frame_numpy$lib$_datasource$$$function__8___del__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_datasource$$$function__8___del__);
    cache_frame_frame_numpy$lib$_datasource$$$function__8___del__ = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_datasource$$$function__8___del__);

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
Py_XDECREF(var_shutil);
var_shutil = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_shutil);
var_shutil = NULL;
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


static PyObject *impl_numpy$lib$_datasource$$$function__9__iszip(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_filename = python_pars[1];
PyObject *var_fname = NULL;
PyObject *var_ext = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_datasource$$$function__9__iszip;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_datasource$$$function__9__iszip = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_datasource$$$function__9__iszip)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_datasource$$$function__9__iszip);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_datasource$$$function__9__iszip == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_datasource$$$function__9__iszip = MAKE_FUNCTION_FRAME(tstate, code_objects_0bd0af7f6cdcb855868377bf94cab323, module_numpy$lib$_datasource, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_datasource$$$function__9__iszip->m_type_description == NULL);
frame_frame_numpy$lib$_datasource$$$function__9__iszip = cache_frame_frame_numpy$lib$_datasource$$$function__9__iszip;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_datasource$$$function__9__iszip);
assert(Py_REFCNT(frame_frame_numpy$lib$_datasource$$$function__9__iszip) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = IMPORT_HARD_NTPATH();
assert(!(tmp_called_instance_1 == NULL));
CHECK_OBJECT(par_filename);
tmp_args_element_value_1 = par_filename;
frame_frame_numpy$lib$_datasource$$$function__9__iszip->m_frame.f_lineno = 266;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_splitext, tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "oooo";
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



exception_lineno = 266;
type_description_1 = "oooo";
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



exception_lineno = 266;
type_description_1 = "oooo";
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



exception_lineno = 266;
type_description_1 = "oooo";
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
assert(var_fname == NULL);
Py_INCREF(tmp_assign_source_4);
var_fname = tmp_assign_source_4;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
assert(var_ext == NULL);
Py_INCREF(tmp_assign_source_5);
var_ext = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_ext);
tmp_cmp_expr_left_1 = var_ext;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_datasource$_file_openers(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__file_openers);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 267;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_keys);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_datasource$$$function__9__iszip->m_frame.f_lineno = 267;
tmp_cmp_expr_right_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_return_value = (tmp_res == 1) ? Py_True : Py_False;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_datasource$$$function__9__iszip, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_datasource$$$function__9__iszip->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_datasource$$$function__9__iszip, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_datasource$$$function__9__iszip,
    type_description_1,
    par_self,
    par_filename,
    var_fname,
    var_ext
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_datasource$$$function__9__iszip == cache_frame_frame_numpy$lib$_datasource$$$function__9__iszip) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_datasource$$$function__9__iszip);
    cache_frame_frame_numpy$lib$_datasource$$$function__9__iszip = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_datasource$$$function__9__iszip);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_fname);
CHECK_OBJECT(var_fname);
Py_DECREF(var_fname);
var_fname = NULL;
CHECK_OBJECT(var_ext);
CHECK_OBJECT(var_ext);
Py_DECREF(var_ext);
var_ext = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_fname);
var_fname = NULL;
Py_XDECREF(var_ext);
var_ext = NULL;
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
CHECK_OBJECT(par_filename);
Py_DECREF(par_filename);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_filename);
Py_DECREF(par_filename);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_datasource$$$function__10__iswritemode(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_mode = python_pars[1];
struct Nuitka_CellObject *var__writemodes = Nuitka_Cell_NewEmpty();
PyObject *tmp_genexpr_1__$0 = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_datasource$$$function__10__iswritemode;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_datasource$$$function__10__iswritemode = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_tuple_str_plain_w_str_chr_43_tuple;
assert(Nuitka_Cell_GET(var__writemodes) == NULL);
Py_INCREF(tmp_assign_source_1);
Nuitka_Cell_SET(var__writemodes, tmp_assign_source_1);

}
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_datasource$$$function__10__iswritemode)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_datasource$$$function__10__iswritemode);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_datasource$$$function__10__iswritemode == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_datasource$$$function__10__iswritemode = MAKE_FUNCTION_FRAME(tstate, code_objects_9db79083041f1838d15bb20014c3b0ef, module_numpy$lib$_datasource, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_datasource$$$function__10__iswritemode->m_type_description == NULL);
frame_frame_numpy$lib$_datasource$$$function__10__iswritemode = cache_frame_frame_numpy$lib$_datasource$$$function__10__iswritemode;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_datasource$$$function__10__iswritemode);
assert(Py_REFCNT(frame_frame_numpy$lib$_datasource$$$function__10__iswritemode) == 2);

// Framed code:
{
PyObject *tmp_any_arg_1;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_mode);
tmp_iter_arg_1 = par_mode;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_2;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = var__writemodes;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_any_arg_1 = MAKE_GENERATOR_numpy$lib$_datasource$$$function__10__iswritemode$$$genexpr__1_genexpr(tstate, tmp_closure_1);

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
tmp_return_value = BUILTIN_ANY(tstate, tmp_any_arg_1);
CHECK_OBJECT(tmp_any_arg_1);
Py_DECREF(tmp_any_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_datasource$$$function__10__iswritemode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_datasource$$$function__10__iswritemode->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_datasource$$$function__10__iswritemode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_datasource$$$function__10__iswritemode,
    type_description_1,
    par_self,
    par_mode,
    var__writemodes
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_datasource$$$function__10__iswritemode == cache_frame_frame_numpy$lib$_datasource$$$function__10__iswritemode) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_datasource$$$function__10__iswritemode);
    cache_frame_frame_numpy$lib$_datasource$$$function__10__iswritemode = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_datasource$$$function__10__iswritemode);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var__writemodes);
CHECK_OBJECT(var__writemodes);
Py_DECREF(var__writemodes);
var__writemodes = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var__writemodes);
CHECK_OBJECT(var__writemodes);
Py_DECREF(var__writemodes);
var__writemodes = NULL;
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
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct numpy$lib$_datasource$$$function__10__iswritemode$$$genexpr__1_genexpr_locals {
PyObject *var_c;
PyObject *tmp_iter_value_0;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *numpy$lib$_datasource$$$function__10__iswritemode$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct numpy$lib$_datasource$$$function__10__iswritemode$$$genexpr__1_genexpr_locals *generator_heap = (struct numpy$lib$_datasource$$$function__10__iswritemode$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_c = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_4498fd5226d5feac9eaaed089029a17f, module_numpy$lib$_datasource, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[1]));
tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_1 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "Noc";
generator_heap->exception_lineno = 274;
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
    PyObject *old = generator_heap->var_c;
    generator_heap->var_c = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_c);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_c);
tmp_cmp_expr_left_1 = generator_heap->var_c;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__writemodes);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 274;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}

tmp_cmp_expr_right_1 = Nuitka_Cell_GET(generator->m_closure[0]);
generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 274;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
tmp_expression_value_1 = (generator_heap->tmp_res == 1) ? Py_True : Py_False;
Py_INCREF(tmp_expression_value_1);
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 274;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 274;
generator_heap->type_description_1 = "Noc";
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
    generator_heap->var_c,
    generator->m_closure[0]
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

Py_XDECREF(generator_heap->var_c);
generator_heap->var_c = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_c);
generator_heap->var_c = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_numpy$lib$_datasource$$$function__10__iswritemode$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        numpy$lib$_datasource$$$function__10__iswritemode$$$genexpr__1_genexpr_context,
        module_numpy$lib$_datasource,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_13fa1e494bb5dfa33f9fe9b3c7aead9c,
#endif
        code_objects_4498fd5226d5feac9eaaed089029a17f,
        closure,
        2,
#if 1
        sizeof(struct numpy$lib$_datasource$$$function__10__iswritemode$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_numpy$lib$_datasource$$$function__11__splitzipext(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_filename = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_datasource$$$function__11__splitzipext;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_datasource$$$function__11__splitzipext = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$_datasource$$$function__11__splitzipext)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_datasource$$$function__11__splitzipext);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_datasource$$$function__11__splitzipext == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_datasource$$$function__11__splitzipext = MAKE_FUNCTION_FRAME(tstate, code_objects_212d1583a88e168a0f8bef8f27303926, module_numpy$lib$_datasource, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_datasource$$$function__11__splitzipext->m_type_description == NULL);
frame_frame_numpy$lib$_datasource$$$function__11__splitzipext = cache_frame_frame_numpy$lib$_datasource$$$function__11__splitzipext;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_datasource$$$function__11__splitzipext);
assert(Py_REFCNT(frame_frame_numpy$lib$_datasource$$$function__11__splitzipext) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_filename);
tmp_args_element_value_1 = par_filename;
frame_frame_numpy$lib$_datasource$$$function__11__splitzipext->m_frame.f_lineno = 285;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__iszip, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 285;
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
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
tmp_called_instance_2 = IMPORT_HARD_NTPATH();
assert(!(tmp_called_instance_2 == NULL));
CHECK_OBJECT(par_filename);
tmp_args_element_value_2 = par_filename;
frame_frame_numpy$lib$_datasource$$$function__11__splitzipext->m_frame.f_lineno = 286;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_splitext, tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_filename);
tmp_tuple_element_1 = par_filename;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = Py_None;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_datasource$$$function__11__splitzipext, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_datasource$$$function__11__splitzipext->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_datasource$$$function__11__splitzipext, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_datasource$$$function__11__splitzipext,
    type_description_1,
    par_self,
    par_filename
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_datasource$$$function__11__splitzipext == cache_frame_frame_numpy$lib$_datasource$$$function__11__splitzipext) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_datasource$$$function__11__splitzipext);
    cache_frame_frame_numpy$lib$_datasource$$$function__11__splitzipext = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_datasource$$$function__11__splitzipext);

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
CHECK_OBJECT(par_filename);
Py_DECREF(par_filename);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_filename);
Py_DECREF(par_filename);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_datasource$$$function__12__possible_names(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_filename = python_pars[1];
PyObject *var_names = NULL;
PyObject *var_zipext = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_datasource$$$function__12__possible_names;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_datasource$$$function__12__possible_names = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
PyObject *tmp_list_element_1;
CHECK_OBJECT(par_filename);
tmp_list_element_1 = par_filename;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_assign_source_1, 0, tmp_list_element_1);
assert(var_names == NULL);
var_names = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_datasource$$$function__12__possible_names)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_datasource$$$function__12__possible_names);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_datasource$$$function__12__possible_names == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_datasource$$$function__12__possible_names = MAKE_FUNCTION_FRAME(tstate, code_objects_97cc8f97889c9643ed62c9dadd2df0d9, module_numpy$lib$_datasource, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_datasource$$$function__12__possible_names->m_type_description == NULL);
frame_frame_numpy$lib$_datasource$$$function__12__possible_names = cache_frame_frame_numpy$lib$_datasource$$$function__12__possible_names;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_datasource$$$function__12__possible_names);
assert(Py_REFCNT(frame_frame_numpy$lib$_datasource$$$function__12__possible_names) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_filename);
tmp_args_element_value_1 = par_filename;
frame_frame_numpy$lib$_datasource$$$function__12__possible_names->m_frame.f_lineno = 293;
tmp_operand_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__iszip, tmp_args_element_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "oooo";
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
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_datasource$_file_openers(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__file_openers);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 294;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_keys);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_datasource$$$function__12__possible_names->m_frame.f_lineno = 294;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "oooo";
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
type_description_1 = "oooo";
exception_lineno = 294;
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
    PyObject *old = var_zipext;
    var_zipext = tmp_assign_source_4;
    Py_INCREF(var_zipext);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(var_zipext);
tmp_truth_name_1 = CHECK_IF_TRUE(var_zipext);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "oooo";
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
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
if (var_names == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_names);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 296;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_names;
if (par_filename == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_filename);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 296;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_add_expr_left_1 = par_filename;
CHECK_OBJECT(var_zipext);
tmp_add_expr_right_1 = var_zipext;
tmp_item_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_item_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
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
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
branch_no_1:;
if (var_names == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_names);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 297;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_names;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_datasource$$$function__12__possible_names, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_datasource$$$function__12__possible_names->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_datasource$$$function__12__possible_names, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_datasource$$$function__12__possible_names,
    type_description_1,
    par_self,
    par_filename,
    var_names,
    var_zipext
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_datasource$$$function__12__possible_names == cache_frame_frame_numpy$lib$_datasource$$$function__12__possible_names) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_datasource$$$function__12__possible_names);
    cache_frame_frame_numpy$lib$_datasource$$$function__12__possible_names = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_datasource$$$function__12__possible_names);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_names);
var_names = NULL;
Py_XDECREF(var_zipext);
var_zipext = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_names);
var_names = NULL;
Py_XDECREF(var_zipext);
var_zipext = NULL;
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
CHECK_OBJECT(par_filename);
Py_DECREF(par_filename);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_filename);
Py_DECREF(par_filename);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_datasource$$$function__13__isurl(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_path = python_pars[1];
PyObject *var_urlparse = NULL;
PyObject *var_scheme = NULL;
PyObject *var_netloc = NULL;
PyObject *var_upath = NULL;
PyObject *var_uparams = NULL;
PyObject *var_uquery = NULL;
PyObject *var_ufrag = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__element_4 = NULL;
PyObject *tmp_tuple_unpack_1__element_5 = NULL;
PyObject *tmp_tuple_unpack_1__element_6 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_datasource$$$function__13__isurl;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_datasource$$$function__13__isurl = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_datasource$$$function__13__isurl)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_datasource$$$function__13__isurl);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_datasource$$$function__13__isurl == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_datasource$$$function__13__isurl = MAKE_FUNCTION_FRAME(tstate, code_objects_6723fa1ff48d34d0823d0842d5e61148, module_numpy$lib$_datasource, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_datasource$$$function__13__isurl->m_type_description == NULL);
frame_frame_numpy$lib$_datasource$$$function__13__isurl = cache_frame_frame_numpy$lib$_datasource$$$function__13__isurl;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_datasource$$$function__13__isurl);
assert(Py_REFCNT(frame_frame_numpy$lib$_datasource$$$function__13__isurl) == 2);

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
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$lib$_datasource;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_urlparse_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_numpy$lib$_datasource$$$function__13__isurl->m_frame.f_lineno = 303;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_numpy$lib$_datasource,
        mod_consts.const_str_plain_urlparse,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_urlparse);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_urlparse == NULL);
var_urlparse = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_urlparse);
tmp_called_value_1 = var_urlparse;
CHECK_OBJECT(par_path);
tmp_args_element_value_1 = par_path;
frame_frame_numpy$lib$_datasource$$$function__13__isurl->m_frame.f_lineno = 311;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "ooooooooo";
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
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 6);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "ooooooooo";
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
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 6);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "ooooooooo";
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
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 6);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "ooooooooo";
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
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 3, 6);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_4 == NULL);
tmp_tuple_unpack_1__element_4 = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 4, 6);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_5 == NULL);
tmp_tuple_unpack_1__element_5 = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 5, 6);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_6 == NULL);
tmp_tuple_unpack_1__element_6 = tmp_assign_source_8;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 6);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
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
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_4);
tmp_tuple_unpack_1__element_4 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_5);
tmp_tuple_unpack_1__element_5 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_6);
tmp_tuple_unpack_1__element_6 = NULL;
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
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
assert(var_scheme == NULL);
Py_INCREF(tmp_assign_source_9);
var_scheme = tmp_assign_source_9;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
assert(var_netloc == NULL);
Py_INCREF(tmp_assign_source_10);
var_netloc = tmp_assign_source_10;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_11 = tmp_tuple_unpack_1__element_3;
assert(var_upath == NULL);
Py_INCREF(tmp_assign_source_11);
var_upath = tmp_assign_source_11;
}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
tmp_assign_source_12 = tmp_tuple_unpack_1__element_4;
assert(var_uparams == NULL);
Py_INCREF(tmp_assign_source_12);
var_uparams = tmp_assign_source_12;
}
Py_XDECREF(tmp_tuple_unpack_1__element_4);
tmp_tuple_unpack_1__element_4 = NULL;

{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_tuple_unpack_1__element_5);
tmp_assign_source_13 = tmp_tuple_unpack_1__element_5;
assert(var_uquery == NULL);
Py_INCREF(tmp_assign_source_13);
var_uquery = tmp_assign_source_13;
}
Py_XDECREF(tmp_tuple_unpack_1__element_5);
tmp_tuple_unpack_1__element_5 = NULL;

{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_tuple_unpack_1__element_6);
tmp_assign_source_14 = tmp_tuple_unpack_1__element_6;
assert(var_ufrag == NULL);
Py_INCREF(tmp_assign_source_14);
var_ufrag = tmp_assign_source_14;
}
Py_XDECREF(tmp_tuple_unpack_1__element_6);
tmp_tuple_unpack_1__element_6 = NULL;

{
PyObject *tmp_value_value_1;
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
CHECK_OBJECT(var_scheme);
tmp_and_left_value_1 = var_scheme;
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_netloc);
tmp_and_right_value_1 = var_netloc;
tmp_value_value_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_value_value_1 = tmp_and_left_value_1;
and_end_1:;
tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "ooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_datasource$$$function__13__isurl, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_datasource$$$function__13__isurl->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_datasource$$$function__13__isurl, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_datasource$$$function__13__isurl,
    type_description_1,
    par_self,
    par_path,
    var_urlparse,
    var_scheme,
    var_netloc,
    var_upath,
    var_uparams,
    var_uquery,
    var_ufrag
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_datasource$$$function__13__isurl == cache_frame_frame_numpy$lib$_datasource$$$function__13__isurl) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_datasource$$$function__13__isurl);
    cache_frame_frame_numpy$lib$_datasource$$$function__13__isurl = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_datasource$$$function__13__isurl);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_urlparse);
CHECK_OBJECT(var_urlparse);
Py_DECREF(var_urlparse);
var_urlparse = NULL;
CHECK_OBJECT(var_scheme);
CHECK_OBJECT(var_scheme);
Py_DECREF(var_scheme);
var_scheme = NULL;
CHECK_OBJECT(var_netloc);
CHECK_OBJECT(var_netloc);
Py_DECREF(var_netloc);
var_netloc = NULL;
CHECK_OBJECT(var_upath);
CHECK_OBJECT(var_upath);
Py_DECREF(var_upath);
var_upath = NULL;
CHECK_OBJECT(var_uparams);
CHECK_OBJECT(var_uparams);
Py_DECREF(var_uparams);
var_uparams = NULL;
CHECK_OBJECT(var_uquery);
CHECK_OBJECT(var_uquery);
Py_DECREF(var_uquery);
var_uquery = NULL;
CHECK_OBJECT(var_ufrag);
CHECK_OBJECT(var_ufrag);
Py_DECREF(var_ufrag);
var_ufrag = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_urlparse);
var_urlparse = NULL;
Py_XDECREF(var_scheme);
var_scheme = NULL;
Py_XDECREF(var_netloc);
var_netloc = NULL;
Py_XDECREF(var_upath);
var_upath = NULL;
Py_XDECREF(var_uparams);
var_uparams = NULL;
Py_XDECREF(var_uquery);
var_uquery = NULL;
Py_XDECREF(var_ufrag);
var_ufrag = NULL;
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


static PyObject *impl_numpy$lib$_datasource$$$function__14__cache(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_path = python_pars[1];
PyObject *var_shutil = NULL;
PyObject *var_urlopen = NULL;
PyObject *var_upath = NULL;
PyObject *var_openedurl = NULL;
PyObject *var_f = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
PyObject *tmp_with_2__enter = NULL;
PyObject *tmp_with_2__exit = NULL;
nuitka_bool tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_2__source = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_datasource$$$function__14__cache;
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
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_datasource$$$function__14__cache = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_datasource$$$function__14__cache)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_datasource$$$function__14__cache);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_datasource$$$function__14__cache == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_datasource$$$function__14__cache = MAKE_FUNCTION_FRAME(tstate, code_objects_c86f7555534119b2dc82226bdf9f392c, module_numpy$lib$_datasource, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_datasource$$$function__14__cache->m_type_description == NULL);
frame_frame_numpy$lib$_datasource$$$function__14__cache = cache_frame_frame_numpy$lib$_datasource$$$function__14__cache;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_datasource$$$function__14__cache);
assert(Py_REFCNT(frame_frame_numpy$lib$_datasource$$$function__14__cache) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_shutil;
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$lib$_datasource;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_numpy$lib$_datasource$$$function__14__cache->m_frame.f_lineno = 322;
tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_shutil == NULL);
var_shutil = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_59bc9c95777e64e4720c3af0837aec42;
tmp_globals_arg_value_2 = (PyObject *)moduledict_numpy$lib$_datasource;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_urlopen_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_numpy$lib$_datasource$$$function__14__cache->m_frame.f_lineno = 323;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_numpy$lib$_datasource,
        mod_consts.const_str_plain_urlopen,
        const_int_0
    );
} else {
    tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_urlopen);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_urlopen == NULL);
var_urlopen = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_path);
tmp_args_element_value_1 = par_path;
frame_frame_numpy$lib$_datasource$$$function__14__cache->m_frame.f_lineno = 325;
tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, const_str_plain_abspath, tmp_args_element_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_upath == NULL);
var_upath = tmp_assign_source_3;
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_exists_arg_1;
PyObject *tmp_path_arg_1;
CHECK_OBJECT(var_upath);
tmp_path_arg_1 = var_upath;
tmp_exists_arg_1 = OS_PATH_DIRNAME(tstate, tmp_path_arg_1);
if (tmp_exists_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = OS_PATH_FILE_EXISTS(tstate, tmp_exists_arg_1);
CHECK_OBJECT(tmp_exists_arg_1);
Py_DECREF(tmp_exists_arg_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_path_arg_2;
tmp_expression_value_1 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_makedirs);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_upath);
tmp_path_arg_2 = var_upath;
tmp_args_element_value_2 = OS_PATH_DIRNAME(tstate, tmp_path_arg_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 329;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_datasource$$$function__14__cache->m_frame.f_lineno = 329;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(par_path);
tmp_args_element_value_3 = par_path;
frame_frame_numpy$lib$_datasource$$$function__14__cache->m_frame.f_lineno = 332;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain__isurl, tmp_args_element_value_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 332;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(var_urlopen);
tmp_called_value_2 = var_urlopen;
CHECK_OBJECT(par_path);
tmp_args_element_value_4 = par_path;
frame_frame_numpy$lib$_datasource$$$function__14__cache->m_frame.f_lineno = 333;
tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_4);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
assert(tmp_with_2__source == NULL);
tmp_with_2__source = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_2__source);
tmp_expression_value_2 = tmp_with_2__source;
tmp_called_value_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___enter__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
frame_frame_numpy$lib$_datasource$$$function__14__cache->m_frame.f_lineno = 333;
tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
assert(tmp_with_2__enter == NULL);
tmp_with_2__enter = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_with_2__source);
tmp_expression_value_3 = tmp_with_2__source;
tmp_assign_source_6 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___exit__);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
assert(tmp_with_2__exit == NULL);
tmp_with_2__exit = tmp_assign_source_6;
}
{
nuitka_bool tmp_assign_source_7;
tmp_assign_source_7 = NUITKA_BOOL_TRUE;
tmp_with_2__indicator = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_with_2__enter);
tmp_assign_source_8 = tmp_with_2__enter;
assert(var_openedurl == NULL);
Py_INCREF(tmp_assign_source_8);
var_openedurl = tmp_assign_source_8;
}
// Tried code:
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_value_4 = module_var_accessor_numpy$lib$_datasource$_open(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__open);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 334;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_upath);
tmp_args_element_value_5 = var_upath;
tmp_args_element_value_6 = mod_consts.const_str_plain_wb;
frame_frame_numpy$lib$_datasource$$$function__14__cache->m_frame.f_lineno = 334;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_4 = tmp_with_1__source;
tmp_called_value_5 = LOOKUP_SPECIAL(tstate, tmp_expression_value_4, const_str_plain___enter__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
frame_frame_numpy$lib$_datasource$$$function__14__cache->m_frame.f_lineno = 334;
tmp_assign_source_10 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_5 = tmp_with_1__source;
tmp_assign_source_11 = LOOKUP_SPECIAL(tstate, tmp_expression_value_5, const_str_plain___exit__);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_11;
}
{
nuitka_bool tmp_assign_source_12;
tmp_assign_source_12 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_13 = tmp_with_1__enter;
assert(var_f == NULL);
Py_INCREF(tmp_assign_source_13);
var_f = tmp_assign_source_13;
}
// Tried code:
// Tried code:
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
CHECK_OBJECT(var_shutil);
tmp_called_instance_3 = var_shutil;
CHECK_OBJECT(var_openedurl);
tmp_args_element_value_7 = var_openedurl;
CHECK_OBJECT(var_f);
tmp_args_element_value_8 = var_f;
frame_frame_numpy$lib$_datasource$$$function__14__cache->m_frame.f_lineno = 335;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain_copyfileobj,
        call_args
    );
}

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_1 = "ooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
goto try_end_1;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_datasource$$$function__14__cache, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_datasource$$$function__14__cache, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
nuitka_bool tmp_assign_source_14;
tmp_assign_source_14 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_14;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_6 = tmp_with_1__exit;
tmp_args_element_value_9 = EXC_TYPE(tstate);
tmp_args_element_value_10 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_10); 
tmp_args_element_value_11 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_11 == NULL) {
    tmp_args_element_value_11 = Py_None;
}
frame_frame_numpy$lib$_datasource$$$function__14__cache->m_frame.f_lineno = 334;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 334;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$lib$_datasource$$$function__14__cache->m_frame)) {
        frame_frame_numpy$lib$_datasource$$$function__14__cache->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooo";
goto try_except_handler_8;
branch_no_4:;
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 334;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$lib$_datasource$$$function__14__cache->m_frame)) {
        frame_frame_numpy$lib$_datasource$$$function__14__cache->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooo";
goto try_except_handler_8;
branch_end_3:;
goto try_end_2;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_6;
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
try_except_handler_6:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_5 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
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
frame_frame_numpy$lib$_datasource$$$function__14__cache->m_frame.f_lineno = 334;
tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_7, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 334;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_5:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_5;
// End of try:
try_end_3:;
{
bool tmp_condition_result_6;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_6 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_call_result_5;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_8 = tmp_with_1__exit;
frame_frame_numpy$lib$_datasource$$$function__14__cache->m_frame.f_lineno = 334;
tmp_call_result_5 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_8, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_no_6:;
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
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

goto try_except_handler_4;
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
try_except_handler_4:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_datasource$$$function__14__cache, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_datasource$$$function__14__cache, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
assert(!(tmp_res == -1));
tmp_condition_result_7 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
nuitka_bool tmp_assign_source_15;
tmp_assign_source_15 = NUITKA_BOOL_FALSE;
tmp_with_2__indicator = tmp_assign_source_15;
}
{
bool tmp_condition_result_8;
PyObject *tmp_operand_value_3;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_9 = tmp_with_2__exit;
tmp_args_element_value_12 = EXC_TYPE(tstate);
tmp_args_element_value_13 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_13); 
tmp_args_element_value_14 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_14 == NULL) {
    tmp_args_element_value_14 = Py_None;
}
frame_frame_numpy$lib$_datasource$$$function__14__cache->m_frame.f_lineno = 333;
{
    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_operand_value_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_9, call_args);
}

if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "ooooooo";
    goto try_except_handler_9;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "ooooooo";
    goto try_except_handler_9;
}
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
    exception_lineno = 333;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$lib$_datasource$$$function__14__cache->m_frame)) {
        frame_frame_numpy$lib$_datasource$$$function__14__cache->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooo";
goto try_except_handler_9;
branch_no_8:;
goto branch_end_7;
branch_no_7:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 333;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$lib$_datasource$$$function__14__cache->m_frame)) {
        frame_frame_numpy$lib$_datasource$$$function__14__cache->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooo";
goto try_except_handler_9;
branch_end_7:;
goto try_end_6;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_3;
// End of try:
try_end_6:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_5;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_5:;
goto try_end_7;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_9;
nuitka_bool tmp_cmp_expr_left_5;
nuitka_bool tmp_cmp_expr_right_5;
assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_5 = tmp_with_2__indicator;
tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
tmp_condition_result_9 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
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
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_10 = tmp_with_2__exit;
frame_frame_numpy$lib$_datasource$$$function__14__cache->m_frame.f_lineno = 333;
tmp_call_result_6 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_10, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_7);

exception_lineno = 333;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
branch_no_9:;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_2;
// End of try:
try_end_7:;
{
bool tmp_condition_result_10;
nuitka_bool tmp_cmp_expr_left_6;
nuitka_bool tmp_cmp_expr_right_6;
assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_6 = tmp_with_2__indicator;
tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
tmp_condition_result_10 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_called_value_11;
PyObject *tmp_call_result_7;
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_11 = tmp_with_2__exit;
frame_frame_numpy$lib$_datasource$$$function__14__cache->m_frame.f_lineno = 333;
tmp_call_result_7 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_11, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
branch_no_10:;
goto try_end_8;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_2__source);
tmp_with_2__source = NULL;
Py_XDECREF(tmp_with_2__enter);
tmp_with_2__enter = NULL;
Py_XDECREF(tmp_with_2__exit);
tmp_with_2__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
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
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_8;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
CHECK_OBJECT(var_shutil);
tmp_called_instance_4 = var_shutil;
CHECK_OBJECT(par_path);
tmp_args_element_value_15 = par_path;
CHECK_OBJECT(var_upath);
tmp_args_element_value_16 = var_upath;
frame_frame_numpy$lib$_datasource$$$function__14__cache->m_frame.f_lineno = 337;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_call_result_8 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_4,
        mod_consts.const_str_plain_copyfile,
        call_args
    );
}

if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}
branch_end_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_datasource$$$function__14__cache, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_datasource$$$function__14__cache->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_datasource$$$function__14__cache, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_datasource$$$function__14__cache,
    type_description_1,
    par_self,
    par_path,
    var_shutil,
    var_urlopen,
    var_upath,
    var_openedurl,
    var_f
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_datasource$$$function__14__cache == cache_frame_frame_numpy$lib$_datasource$$$function__14__cache) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_datasource$$$function__14__cache);
    cache_frame_frame_numpy$lib$_datasource$$$function__14__cache = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_datasource$$$function__14__cache);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_upath);
tmp_return_value = var_upath;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_shutil);
CHECK_OBJECT(var_shutil);
Py_DECREF(var_shutil);
var_shutil = NULL;
CHECK_OBJECT(var_urlopen);
CHECK_OBJECT(var_urlopen);
Py_DECREF(var_urlopen);
var_urlopen = NULL;
CHECK_OBJECT(var_upath);
CHECK_OBJECT(var_upath);
Py_DECREF(var_upath);
var_upath = NULL;
Py_XDECREF(var_openedurl);
var_openedurl = NULL;
Py_XDECREF(var_f);
var_f = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_shutil);
var_shutil = NULL;
Py_XDECREF(var_urlopen);
var_urlopen = NULL;
Py_XDECREF(var_upath);
var_upath = NULL;
Py_XDECREF(var_openedurl);
var_openedurl = NULL;
Py_XDECREF(var_f);
var_f = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto function_exception_exit;
// End of try:

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


static PyObject *impl_numpy$lib$_datasource$$$function__15__findfile(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_path = python_pars[1];
PyObject *var_filelist = NULL;
PyObject *var_name = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_datasource$$$function__15__findfile;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_datasource$$$function__15__findfile = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_datasource$$$function__15__findfile)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_datasource$$$function__15__findfile);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_datasource$$$function__15__findfile == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_datasource$$$function__15__findfile = MAKE_FUNCTION_FRAME(tstate, code_objects_62cf907303fd8e8537010a208e6b2c05, module_numpy$lib$_datasource, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_datasource$$$function__15__findfile->m_type_description == NULL);
frame_frame_numpy$lib$_datasource$$$function__15__findfile = cache_frame_frame_numpy$lib$_datasource$$$function__15__findfile;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_datasource$$$function__15__findfile);
assert(Py_REFCNT(frame_frame_numpy$lib$_datasource$$$function__15__findfile) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_path);
tmp_args_element_value_1 = par_path;
frame_frame_numpy$lib$_datasource$$$function__15__findfile->m_frame.f_lineno = 353;
tmp_operand_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__isurl, tmp_args_element_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
type_description_1 = "oooo";
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(par_path);
tmp_args_element_value_2 = par_path;
frame_frame_numpy$lib$_datasource$$$function__15__findfile->m_frame.f_lineno = 355;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain__possible_names, tmp_args_element_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_filelist == NULL);
var_filelist = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(var_filelist);
tmp_iadd_expr_left_1 = var_filelist;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__possible_names);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_called_instance_3 = par_self;
CHECK_OBJECT(par_path);
tmp_args_element_value_4 = par_path;
frame_frame_numpy$lib$_datasource$$$function__15__findfile->m_frame.f_lineno = 357;
tmp_args_element_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, const_str_plain_abspath, tmp_args_element_value_4);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 357;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_datasource$$$function__15__findfile->m_frame.f_lineno = 357;
tmp_iadd_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = tmp_iadd_expr_left_1;
var_filelist = tmp_assign_source_2;

}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__possible_names);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_called_instance_4 = par_self;
CHECK_OBJECT(par_path);
tmp_args_element_value_6 = par_path;
frame_frame_numpy$lib$_datasource$$$function__15__findfile->m_frame.f_lineno = 360;
tmp_args_element_value_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, const_str_plain_abspath, tmp_args_element_value_6);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 360;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_datasource$$$function__15__findfile->m_frame.f_lineno = 360;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_filelist == NULL);
var_filelist = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_7;
CHECK_OBJECT(var_filelist);
tmp_add_expr_left_1 = var_filelist;
CHECK_OBJECT(par_self);
tmp_called_instance_5 = par_self;
CHECK_OBJECT(par_path);
tmp_args_element_value_7 = par_path;
frame_frame_numpy$lib$_datasource$$$function__15__findfile->m_frame.f_lineno = 362;
tmp_add_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain__possible_names, tmp_args_element_value_7);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_filelist;
    assert(old != NULL);
    var_filelist = tmp_assign_source_4;
    Py_DECREF(old);
}

}
branch_end_1:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_filelist);
tmp_iter_arg_1 = var_filelist;
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_5;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_6 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooo";
exception_lineno = 364;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_7 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_name;
    var_name = tmp_assign_source_7;
    Py_INCREF(var_name);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_instance_6;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_8;
int tmp_truth_name_1;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 365;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_called_instance_6 = par_self;
CHECK_OBJECT(var_name);
tmp_args_element_value_8 = var_name;
frame_frame_numpy$lib$_datasource$$$function__15__findfile->m_frame.f_lineno = 365;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, const_str_plain_exists, tmp_args_element_value_8);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 365;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
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
nuitka_bool tmp_condition_result_3;
PyObject *tmp_called_instance_7;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_9;
int tmp_truth_name_2;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 366;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_called_instance_7 = par_self;
CHECK_OBJECT(var_name);
tmp_args_element_value_9 = var_name;
frame_frame_numpy$lib$_datasource$$$function__15__findfile->m_frame.f_lineno = 366;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts.const_str_plain__isurl, tmp_args_element_value_9);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 366;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 366;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
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
PyObject *tmp_assign_source_8;
PyObject *tmp_called_instance_8;
PyObject *tmp_args_element_value_10;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 367;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_called_instance_8 = par_self;
CHECK_OBJECT(var_name);
tmp_args_element_value_10 = var_name;
frame_frame_numpy$lib$_datasource$$$function__15__findfile->m_frame.f_lineno = 367;
tmp_assign_source_8 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_8, mod_consts.const_str_plain__cache, tmp_args_element_value_10);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_name;
    assert(old != NULL);
    var_name = tmp_assign_source_8;
    Py_DECREF(old);
}

}
branch_no_3:;
if (var_name == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_name);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 368;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_return_value = var_name;
Py_INCREF(tmp_return_value);
goto try_return_handler_2;
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_datasource$$$function__15__findfile, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_datasource$$$function__15__findfile->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_datasource$$$function__15__findfile, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_datasource$$$function__15__findfile,
    type_description_1,
    par_self,
    par_path,
    var_filelist,
    var_name
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_datasource$$$function__15__findfile == cache_frame_frame_numpy$lib$_datasource$$$function__15__findfile) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_datasource$$$function__15__findfile);
    cache_frame_frame_numpy$lib$_datasource$$$function__15__findfile = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_datasource$$$function__15__findfile);

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
CHECK_OBJECT(var_filelist);
CHECK_OBJECT(var_filelist);
Py_DECREF(var_filelist);
var_filelist = NULL;
Py_XDECREF(var_name);
var_name = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_filelist);
var_filelist = NULL;
Py_XDECREF(var_name);
var_name = NULL;
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


static PyObject *impl_numpy$lib$_datasource$$$function__16_abspath(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_path = python_pars[1];
PyObject *var_urlparse = NULL;
PyObject *var_splitpath = NULL;
PyObject *var_scheme = NULL;
PyObject *var_netloc = NULL;
PyObject *var_upath = NULL;
PyObject *var_uparams = NULL;
PyObject *var_uquery = NULL;
PyObject *var_ufrag = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__element_4 = NULL;
PyObject *tmp_tuple_unpack_1__element_5 = NULL;
PyObject *tmp_tuple_unpack_1__element_6 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_datasource$$$function__16_abspath;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_datasource$$$function__16_abspath = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_datasource$$$function__16_abspath)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_datasource$$$function__16_abspath);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_datasource$$$function__16_abspath == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_datasource$$$function__16_abspath = MAKE_FUNCTION_FRAME(tstate, code_objects_6ee5e7dcb7f1a1aac9cf48d7a1786c7e, module_numpy$lib$_datasource, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_datasource$$$function__16_abspath->m_type_description == NULL);
frame_frame_numpy$lib$_datasource$$$function__16_abspath = cache_frame_frame_numpy$lib$_datasource$$$function__16_abspath;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_datasource$$$function__16_abspath);
assert(Py_REFCNT(frame_frame_numpy$lib$_datasource$$$function__16_abspath) == 2);

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
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$lib$_datasource;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_urlparse_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_numpy$lib$_datasource$$$function__16_abspath->m_frame.f_lineno = 395;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 395;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_numpy$lib$_datasource,
        mod_consts.const_str_plain_urlparse,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_urlparse);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 395;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_urlparse == NULL);
var_urlparse = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_path);
tmp_expression_value_1 = par_path;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_split);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 405;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__destpath);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 405;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = mod_consts.const_int_pos_2;
frame_frame_numpy$lib$_datasource$$$function__16_abspath->m_frame.f_lineno = 405;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 405;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_splitpath == NULL);
var_splitpath = tmp_assign_source_2;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(var_splitpath);
tmp_len_arg_1 = var_splitpath;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_1 = "oooooooooo";
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
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_splitpath);
tmp_expression_value_3 = var_splitpath;
tmp_subscript_value_1 = const_int_pos_1;
tmp_assign_source_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_path;
    assert(old != NULL);
    par_path = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(var_urlparse);
tmp_called_value_2 = var_urlparse;
if (par_path == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_path);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 408;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_3 = par_path;
frame_frame_numpy$lib$_datasource$$$function__16_abspath->m_frame.f_lineno = 408;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 408;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 408;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 6);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 408;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 6);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 408;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 6);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 408;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_3 == NULL);
tmp_tuple_unpack_1__element_3 = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 3, 6);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 408;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_4 == NULL);
tmp_tuple_unpack_1__element_4 = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_9 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 4, 6);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 408;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_5 == NULL);
tmp_tuple_unpack_1__element_5 = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_10 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 5, 6);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 408;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_6 == NULL);
tmp_tuple_unpack_1__element_6 = tmp_assign_source_10;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 6);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 408;
type_description_1 = "oooooooooo";
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
Py_XDECREF(tmp_tuple_unpack_1__element_5);
tmp_tuple_unpack_1__element_5 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_6);
tmp_tuple_unpack_1__element_6 = NULL;
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
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_11 = tmp_tuple_unpack_1__element_1;
assert(var_scheme == NULL);
Py_INCREF(tmp_assign_source_11);
var_scheme = tmp_assign_source_11;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_12 = tmp_tuple_unpack_1__element_2;
assert(var_netloc == NULL);
Py_INCREF(tmp_assign_source_12);
var_netloc = tmp_assign_source_12;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_13 = tmp_tuple_unpack_1__element_3;
assert(var_upath == NULL);
Py_INCREF(tmp_assign_source_13);
var_upath = tmp_assign_source_13;
}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
tmp_assign_source_14 = tmp_tuple_unpack_1__element_4;
assert(var_uparams == NULL);
Py_INCREF(tmp_assign_source_14);
var_uparams = tmp_assign_source_14;
}
Py_XDECREF(tmp_tuple_unpack_1__element_4);
tmp_tuple_unpack_1__element_4 = NULL;

{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_tuple_unpack_1__element_5);
tmp_assign_source_15 = tmp_tuple_unpack_1__element_5;
assert(var_uquery == NULL);
Py_INCREF(tmp_assign_source_15);
var_uquery = tmp_assign_source_15;
}
Py_XDECREF(tmp_tuple_unpack_1__element_5);
tmp_tuple_unpack_1__element_5 = NULL;

{
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_tuple_unpack_1__element_6);
tmp_assign_source_16 = tmp_tuple_unpack_1__element_6;
assert(var_ufrag == NULL);
Py_INCREF(tmp_assign_source_16);
var_ufrag = tmp_assign_source_16;
}
Py_XDECREF(tmp_tuple_unpack_1__element_6);
tmp_tuple_unpack_1__element_6 = NULL;

{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(var_netloc);
tmp_args_element_value_4 = var_netloc;
frame_frame_numpy$lib$_datasource$$$function__16_abspath->m_frame.f_lineno = 409;
tmp_assign_source_17 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__sanitize_relative_path, tmp_args_element_value_4);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_netloc;
    assert(old != NULL);
    var_netloc = tmp_assign_source_17;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(var_upath);
tmp_args_element_value_5 = var_upath;
frame_frame_numpy$lib$_datasource$$$function__16_abspath->m_frame.f_lineno = 410;
tmp_assign_source_18 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain__sanitize_relative_path, tmp_args_element_value_5);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 410;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_upath;
    assert(old != NULL);
    var_upath = tmp_assign_source_18;
    Py_DECREF(old);
}

}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
tmp_expression_value_4 = IMPORT_HARD_NTPATH();
assert(!(tmp_expression_value_4 == NULL));
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_join);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 411;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__destpath);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 411;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_netloc);
tmp_args_element_value_7 = var_netloc;
CHECK_OBJECT(var_upath);
tmp_args_element_value_8 = var_upath;
frame_frame_numpy$lib$_datasource$$$function__16_abspath->m_frame.f_lineno = 411;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 411;
type_description_1 = "oooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_datasource$$$function__16_abspath, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_datasource$$$function__16_abspath->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_datasource$$$function__16_abspath, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_datasource$$$function__16_abspath,
    type_description_1,
    par_self,
    par_path,
    var_urlparse,
    var_splitpath,
    var_scheme,
    var_netloc,
    var_upath,
    var_uparams,
    var_uquery,
    var_ufrag
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_datasource$$$function__16_abspath == cache_frame_frame_numpy$lib$_datasource$$$function__16_abspath) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_datasource$$$function__16_abspath);
    cache_frame_frame_numpy$lib$_datasource$$$function__16_abspath = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_datasource$$$function__16_abspath);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_path);
par_path = NULL;
CHECK_OBJECT(var_urlparse);
CHECK_OBJECT(var_urlparse);
Py_DECREF(var_urlparse);
var_urlparse = NULL;
CHECK_OBJECT(var_splitpath);
CHECK_OBJECT(var_splitpath);
Py_DECREF(var_splitpath);
var_splitpath = NULL;
CHECK_OBJECT(var_scheme);
CHECK_OBJECT(var_scheme);
Py_DECREF(var_scheme);
var_scheme = NULL;
CHECK_OBJECT(var_netloc);
CHECK_OBJECT(var_netloc);
Py_DECREF(var_netloc);
var_netloc = NULL;
CHECK_OBJECT(var_upath);
CHECK_OBJECT(var_upath);
Py_DECREF(var_upath);
var_upath = NULL;
CHECK_OBJECT(var_uparams);
CHECK_OBJECT(var_uparams);
Py_DECREF(var_uparams);
var_uparams = NULL;
CHECK_OBJECT(var_uquery);
CHECK_OBJECT(var_uquery);
Py_DECREF(var_uquery);
var_uquery = NULL;
CHECK_OBJECT(var_ufrag);
CHECK_OBJECT(var_ufrag);
Py_DECREF(var_ufrag);
var_ufrag = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_path);
par_path = NULL;
Py_XDECREF(var_urlparse);
var_urlparse = NULL;
Py_XDECREF(var_splitpath);
var_splitpath = NULL;
Py_XDECREF(var_scheme);
var_scheme = NULL;
Py_XDECREF(var_netloc);
var_netloc = NULL;
Py_XDECREF(var_upath);
var_upath = NULL;
Py_XDECREF(var_uparams);
var_uparams = NULL;
Py_XDECREF(var_uquery);
var_uquery = NULL;
Py_XDECREF(var_ufrag);
var_ufrag = NULL;
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


static PyObject *impl_numpy$lib$_datasource$$$function__17__sanitize_relative_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_path = python_pars[1];
PyObject *var_last = NULL;
PyObject *var_drive = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_datasource$$$function__17__sanitize_relative_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_datasource$$$function__17__sanitize_relative_path = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
assert(var_last == NULL);
Py_INCREF(tmp_assign_source_1);
var_last = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_datasource$$$function__17__sanitize_relative_path)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_datasource$$$function__17__sanitize_relative_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_datasource$$$function__17__sanitize_relative_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_datasource$$$function__17__sanitize_relative_path = MAKE_FUNCTION_FRAME(tstate, code_objects_90def1455cfe0182900c04369967b13c, module_numpy$lib$_datasource, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_datasource$$$function__17__sanitize_relative_path->m_type_description == NULL);
frame_frame_numpy$lib$_datasource$$$function__17__sanitize_relative_path = cache_frame_frame_numpy$lib$_datasource$$$function__17__sanitize_relative_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_datasource$$$function__17__sanitize_relative_path);
assert(Py_REFCNT(frame_frame_numpy$lib$_datasource$$$function__17__sanitize_relative_path) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_path_arg_1;
CHECK_OBJECT(par_path);
tmp_path_arg_1 = par_path;
tmp_assign_source_2 = OS_PATH_NORMPATH(tstate, tmp_path_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_path;
    assert(old != NULL);
    par_path = tmp_assign_source_2;
    Py_DECREF(old);
}

}
loop_start_1:;
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
if (par_path == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_path);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 419;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_1 = par_path;
if (var_last == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_last);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 419;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_1 = var_last;
tmp_operand_value_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;
type_description_1 = "oooo";
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
PyObject *tmp_assign_source_3;
if (par_path == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_path);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 420;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_assign_source_3 = par_path;
{
    PyObject *old = var_last;
    var_last = tmp_assign_source_3;
    Py_INCREF(var_last);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
if (par_path == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_path);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 422;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = par_path;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_lstrip);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 422;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_datasource$$$function__17__sanitize_relative_path->m_frame.f_lineno = 422;
tmp_expression_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_backslash_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 422;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_lstrip);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 422;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_datasource$$$function__17__sanitize_relative_path->m_frame.f_lineno = 422;
tmp_assign_source_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_slash_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 422;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_path;
    par_path = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_path);
tmp_expression_value_3 = par_path;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_lstrip);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_datasource$$$function__17__sanitize_relative_path->m_frame.f_lineno = 423;
tmp_called_instance_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_digest_7b79a8950d64155a442741f6cc8c809b_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_datasource$$$function__17__sanitize_relative_path->m_frame.f_lineno = 423;
tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_removeprefix,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_7b79a8950d64155a442741f6cc8c809b_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_path;
    assert(old != NULL);
    par_path = tmp_assign_source_5;
    Py_DECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_1;
tmp_called_instance_2 = IMPORT_HARD_NTPATH();
assert(!(tmp_called_instance_2 == NULL));
CHECK_OBJECT(par_path);
tmp_args_element_value_1 = par_path;
frame_frame_numpy$lib$_datasource$$$function__17__sanitize_relative_path->m_frame.f_lineno = 424;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_splitdrive, tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 424;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 424;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 424;
type_description_1 = "oooo";
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
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_drive;
    var_drive = tmp_assign_source_9;
    Py_INCREF(var_drive);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = par_path;
    assert(old != NULL);
    par_path = tmp_assign_source_10;
    Py_INCREF(par_path);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;
if (par_path == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_path);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 425;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_return_value = par_path;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_datasource$$$function__17__sanitize_relative_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_datasource$$$function__17__sanitize_relative_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_datasource$$$function__17__sanitize_relative_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_datasource$$$function__17__sanitize_relative_path,
    type_description_1,
    par_self,
    par_path,
    var_last,
    var_drive
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_datasource$$$function__17__sanitize_relative_path == cache_frame_frame_numpy$lib$_datasource$$$function__17__sanitize_relative_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_datasource$$$function__17__sanitize_relative_path);
    cache_frame_frame_numpy$lib$_datasource$$$function__17__sanitize_relative_path = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_datasource$$$function__17__sanitize_relative_path);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_path);
par_path = NULL;
Py_XDECREF(var_last);
var_last = NULL;
Py_XDECREF(var_drive);
var_drive = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_path);
par_path = NULL;
Py_XDECREF(var_last);
var_last = NULL;
Py_XDECREF(var_drive);
var_drive = NULL;
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


static PyObject *impl_numpy$lib$_datasource$$$function__18_exists(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_path = python_pars[1];
PyObject *var_URLError = NULL;
PyObject *var_urlopen = NULL;
PyObject *var_upath = NULL;
PyObject *var_netfile = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_datasource$$$function__18_exists;
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
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_datasource$$$function__18_exists = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_datasource$$$function__18_exists)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_datasource$$$function__18_exists);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_datasource$$$function__18_exists == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_datasource$$$function__18_exists = MAKE_FUNCTION_FRAME(tstate, code_objects_69f545f1276c6b9983f8bbef1f82d3fb, module_numpy$lib$_datasource, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_datasource$$$function__18_exists->m_type_description == NULL);
frame_frame_numpy$lib$_datasource$$$function__18_exists = cache_frame_frame_numpy$lib$_datasource$$$function__18_exists;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_datasource$$$function__18_exists);
assert(Py_REFCNT(frame_frame_numpy$lib$_datasource$$$function__18_exists) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_exists_arg_1;
PyObject *tmp_capi_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_path);
tmp_exists_arg_1 = par_path;
tmp_capi_result_1 = OS_PATH_FILE_EXISTS(tstate, tmp_exists_arg_1);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_capi_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_capi_result_1);

exception_lineno = 459;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_capi_result_1);
Py_DECREF(tmp_capi_result_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_f1949150375e8b53443d58d93fe4f89e;
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$lib$_datasource;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_URLError_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_numpy$lib$_datasource$$$function__18_exists->m_frame.f_lineno = 464;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 464;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_numpy$lib$_datasource,
        mod_consts.const_str_plain_URLError,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_URLError);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 464;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_URLError == NULL);
var_URLError = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_59bc9c95777e64e4720c3af0837aec42;
tmp_globals_arg_value_2 = (PyObject *)moduledict_numpy$lib$_datasource;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_urlopen_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_numpy$lib$_datasource$$$function__18_exists->m_frame.f_lineno = 465;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 465;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_numpy$lib$_datasource,
        mod_consts.const_str_plain_urlopen,
        const_int_0
    );
} else {
    tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_urlopen);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 465;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_urlopen == NULL);
var_urlopen = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_path);
tmp_args_element_value_1 = par_path;
frame_frame_numpy$lib$_datasource$$$function__18_exists->m_frame.f_lineno = 468;
tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, const_str_plain_abspath, tmp_args_element_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 468;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_upath == NULL);
var_upath = tmp_assign_source_3;
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_exists_arg_2;
PyObject *tmp_capi_result_2;
int tmp_truth_name_2;
CHECK_OBJECT(var_upath);
tmp_exists_arg_2 = var_upath;
tmp_capi_result_2 = OS_PATH_FILE_EXISTS(tstate, tmp_exists_arg_2);
if (tmp_capi_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 469;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_capi_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_capi_result_2);

exception_lineno = 469;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_capi_result_2);
Py_DECREF(tmp_capi_result_2);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
int tmp_truth_name_3;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(par_path);
tmp_args_element_value_2 = par_path;
frame_frame_numpy$lib$_datasource$$$function__18_exists->m_frame.f_lineno = 473;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain__isurl, tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 473;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 473;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(var_urlopen);
tmp_called_value_1 = var_urlopen;
CHECK_OBJECT(par_path);
tmp_args_element_value_3 = par_path;
frame_frame_numpy$lib$_datasource$$$function__18_exists->m_frame.f_lineno = 475;
tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 475;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
assert(var_netfile == NULL);
var_netfile = tmp_assign_source_4;
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_2;
CHECK_OBJECT(var_netfile);
tmp_called_instance_3 = var_netfile;
frame_frame_numpy$lib$_datasource$$$function__18_exists->m_frame.f_lineno = 476;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, const_str_plain_close);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 476;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_datasource$$$function__18_exists, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_datasource$$$function__18_exists, exception_keeper_lineno_1);
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
CHECK_OBJECT(var_URLError);
tmp_cmp_expr_right_1 = var_URLError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 479;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
tmp_condition_result_4 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_3;
goto branch_end_4;
branch_no_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 474;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_numpy$lib$_datasource$$$function__18_exists->m_frame)) {
        frame_frame_numpy$lib$_datasource$$$function__18_exists->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooo";
goto try_except_handler_3;
branch_end_4:;
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
CHECK_OBJECT(var_netfile);
Py_DECREF(var_netfile);
var_netfile = NULL;

tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_3:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_datasource$$$function__18_exists, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_datasource$$$function__18_exists->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_datasource$$$function__18_exists, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_datasource$$$function__18_exists,
    type_description_1,
    par_self,
    par_path,
    var_URLError,
    var_urlopen,
    var_upath,
    var_netfile
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_datasource$$$function__18_exists == cache_frame_frame_numpy$lib$_datasource$$$function__18_exists) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_datasource$$$function__18_exists);
    cache_frame_frame_numpy$lib$_datasource$$$function__18_exists = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_datasource$$$function__18_exists);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_URLError);
var_URLError = NULL;
Py_XDECREF(var_urlopen);
var_urlopen = NULL;
Py_XDECREF(var_upath);
var_upath = NULL;
Py_XDECREF(var_netfile);
var_netfile = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_URLError);
var_URLError = NULL;
Py_XDECREF(var_urlopen);
var_urlopen = NULL;
Py_XDECREF(var_upath);
var_upath = NULL;
Py_XDECREF(var_netfile);
var_netfile = NULL;
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


static PyObject *impl_numpy$lib$_datasource$$$function__19_open(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_path = python_pars[1];
PyObject *par_mode = python_pars[2];
PyObject *par_encoding = python_pars[3];
PyObject *par_newline = python_pars[4];
PyObject *var_found = NULL;
PyObject *var__fname = NULL;
PyObject *var_ext = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_datasource$$$function__19_open;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_datasource$$$function__19_open = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_datasource$$$function__19_open)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_datasource$$$function__19_open);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_datasource$$$function__19_open == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_datasource$$$function__19_open = MAKE_FUNCTION_FRAME(tstate, code_objects_f5513d4a2e6589e83ab14e9ac49200a7, module_numpy$lib$_datasource, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_datasource$$$function__19_open->m_type_description == NULL);
frame_frame_numpy$lib$_datasource$$$function__19_open = cache_frame_frame_numpy$lib$_datasource$$$function__19_open;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_datasource$$$function__19_open);
assert(Py_REFCNT(frame_frame_numpy$lib$_datasource$$$function__19_open) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_path);
tmp_args_element_value_1 = par_path;
frame_frame_numpy$lib$_datasource$$$function__19_open->m_frame.f_lineno = 517;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__isurl, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 517;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 517;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 517;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(par_mode);
tmp_args_element_value_2 = par_mode;
frame_frame_numpy$lib$_datasource$$$function__19_open->m_frame.f_lineno = 517;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain__iswritemode, tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 517;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 517;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_4f6352b905a153ca791e6933e35e7db8;
frame_frame_numpy$lib$_datasource$$$function__19_open->m_frame.f_lineno = 518;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 518;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_3 = par_self;
CHECK_OBJECT(par_path);
tmp_args_element_value_3 = par_path;
frame_frame_numpy$lib$_datasource$$$function__19_open->m_frame.f_lineno = 521;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain__findfile, tmp_args_element_value_3);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 521;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_found == NULL);
var_found = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_3;
CHECK_OBJECT(var_found);
tmp_truth_name_3 = CHECK_IF_TRUE(var_found);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 522;
type_description_1 = "oooooooo";
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
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_self);
tmp_called_instance_4 = par_self;
CHECK_OBJECT(var_found);
tmp_args_element_value_4 = var_found;
frame_frame_numpy$lib$_datasource$$$function__19_open->m_frame.f_lineno = 523;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain__splitzipext, tmp_args_element_value_4);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 523;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 523;
type_description_1 = "oooooooo";
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



exception_lineno = 523;
type_description_1 = "oooooooo";
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



exception_lineno = 523;
type_description_1 = "oooooooo";
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



exception_lineno = 523;
type_description_1 = "oooooooo";
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
assert(var__fname == NULL);
Py_INCREF(tmp_assign_source_5);
var__fname = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
assert(var_ext == NULL);
Py_INCREF(tmp_assign_source_6);
var_ext = tmp_assign_source_6;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_ext);
tmp_cmp_expr_left_1 = var_ext;
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_bz2;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 524;
type_description_1 = "oooooooo";
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_3;
CHECK_OBJECT(par_mode);
tmp_expression_value_1 = par_mode;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_replace);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 525;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_datasource$$$function__19_open->m_frame.f_lineno = 525;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_1, mod_consts.const_tuple_str_chr_43_str_empty_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 525;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_3:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
tmp_expression_value_2 = module_var_accessor_numpy$lib$_datasource$_file_openers(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__file_openers);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 526;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ext);
tmp_subscript_value_1 = var_ext;
tmp_called_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 526;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_found);
tmp_kw_call_arg_value_0_1 = var_found;
CHECK_OBJECT(par_mode);
tmp_kw_call_dict_value_0_1 = par_mode;
CHECK_OBJECT(par_encoding);
tmp_kw_call_dict_value_1_1 = par_encoding;
CHECK_OBJECT(par_newline);
tmp_kw_call_dict_value_2_1 = par_newline;
frame_frame_numpy$lib$_datasource$$$function__19_open->m_frame.f_lineno = 526;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_mode_str_plain_encoding_str_plain_newline_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 526;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
CHECK_OBJECT(par_path);
tmp_format_value_1 = par_path;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 529;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_e85afe0f26d7830527e29d1e0eb37db7;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_make_exception_arg_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_2 == NULL));
frame_frame_numpy$lib$_datasource$$$function__19_open->m_frame.f_lineno = 529;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_FileNotFoundError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 529;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}
branch_end_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_datasource$$$function__19_open, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_datasource$$$function__19_open->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_datasource$$$function__19_open, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_datasource$$$function__19_open,
    type_description_1,
    par_self,
    par_path,
    par_mode,
    par_encoding,
    par_newline,
    var_found,
    var__fname,
    var_ext
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_datasource$$$function__19_open == cache_frame_frame_numpy$lib$_datasource$$$function__19_open) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_datasource$$$function__19_open);
    cache_frame_frame_numpy$lib$_datasource$$$function__19_open = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_datasource$$$function__19_open);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_found);
CHECK_OBJECT(var_found);
Py_DECREF(var_found);
var_found = NULL;
CHECK_OBJECT(var__fname);
CHECK_OBJECT(var__fname);
Py_DECREF(var__fname);
var__fname = NULL;
CHECK_OBJECT(var_ext);
CHECK_OBJECT(var_ext);
Py_DECREF(var_ext);
var_ext = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_found);
var_found = NULL;
Py_XDECREF(var__fname);
var__fname = NULL;
Py_XDECREF(var_ext);
var_ext = NULL;
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
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
CHECK_OBJECT(par_newline);
Py_DECREF(par_newline);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
CHECK_OBJECT(par_newline);
Py_DECREF(par_newline);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_datasource$$$function__20___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_baseurl = python_pars[1];
PyObject *par_destpath = python_pars[2];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_datasource$$$function__20___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_datasource$$$function__20___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$_datasource$$$function__20___init__)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_datasource$$$function__20___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_datasource$$$function__20___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_datasource$$$function__20___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_05e21eaf74fc41df196e8debb342e4e2, module_numpy$lib$_datasource, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_datasource$$$function__20___init__->m_type_description == NULL);
frame_frame_numpy$lib$_datasource$$$function__20___init__ = cache_frame_frame_numpy$lib$_datasource$$$function__20___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_datasource$$$function__20___init__);
assert(Py_REFCNT(frame_frame_numpy$lib$_datasource$$$function__20___init__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_datasource$DataSource(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DataSource);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 574;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 574;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_kw_call_arg_value_0_1 = par_self;
CHECK_OBJECT(par_destpath);
tmp_kw_call_dict_value_0_1 = par_destpath;
frame_frame_numpy$lib$_datasource$$$function__20___init__->m_frame.f_lineno = 574;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_destpath_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 574;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_baseurl);
tmp_assattr_value_1 = par_baseurl;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__baseurl, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 575;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_datasource$$$function__20___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_datasource$$$function__20___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_datasource$$$function__20___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_datasource$$$function__20___init__,
    type_description_1,
    par_self,
    par_baseurl,
    par_destpath
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_datasource$$$function__20___init__ == cache_frame_frame_numpy$lib$_datasource$$$function__20___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_datasource$$$function__20___init__);
    cache_frame_frame_numpy$lib$_datasource$$$function__20___init__ = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_datasource$$$function__20___init__);

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
CHECK_OBJECT(par_baseurl);
Py_DECREF(par_baseurl);
CHECK_OBJECT(par_destpath);
Py_DECREF(par_destpath);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_baseurl);
Py_DECREF(par_baseurl);
CHECK_OBJECT(par_destpath);
Py_DECREF(par_destpath);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_datasource$$$function__21___del__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_datasource$$$function__21___del__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_datasource$$$function__21___del__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$_datasource$$$function__21___del__)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_datasource$$$function__21___del__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_datasource$$$function__21___del__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_datasource$$$function__21___del__ = MAKE_FUNCTION_FRAME(tstate, code_objects_e92769b32af6e90e49b9ed6674f3eb96, module_numpy$lib$_datasource, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_datasource$$$function__21___del__->m_type_description == NULL);
frame_frame_numpy$lib$_datasource$$$function__21___del__ = cache_frame_frame_numpy$lib$_datasource$$$function__21___del__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_datasource$$$function__21___del__);
assert(Py_REFCNT(frame_frame_numpy$lib$_datasource$$$function__21___del__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_numpy$lib$_datasource$DataSource(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DataSource);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 578;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_numpy$lib$_datasource$$$function__21___del__->m_frame.f_lineno = 578;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain___del__, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 578;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_datasource$$$function__21___del__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_datasource$$$function__21___del__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_datasource$$$function__21___del__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_datasource$$$function__21___del__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_datasource$$$function__21___del__ == cache_frame_frame_numpy$lib$_datasource$$$function__21___del__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_datasource$$$function__21___del__);
    cache_frame_frame_numpy$lib$_datasource$$$function__21___del__ = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_datasource$$$function__21___del__);

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


static PyObject *impl_numpy$lib$_datasource$$$function__22__fullpath(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_path = python_pars[1];
PyObject *var_splitpath = NULL;
PyObject *var_result = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_datasource$$$function__22__fullpath;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_datasource$$$function__22__fullpath = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$lib$_datasource$$$function__22__fullpath)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_datasource$$$function__22__fullpath);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_datasource$$$function__22__fullpath == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_datasource$$$function__22__fullpath = MAKE_FUNCTION_FRAME(tstate, code_objects_6fb03e84282716d35089f32c87dc4d18, module_numpy$lib$_datasource, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_datasource$$$function__22__fullpath->m_type_description == NULL);
frame_frame_numpy$lib$_datasource$$$function__22__fullpath = cache_frame_frame_numpy$lib$_datasource$$$function__22__fullpath;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_datasource$$$function__22__fullpath);
assert(Py_REFCNT(frame_frame_numpy$lib$_datasource$$$function__22__fullpath) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_path);
tmp_expression_value_1 = par_path;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_split);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 582;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__baseurl);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 582;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = mod_consts.const_int_pos_2;
frame_frame_numpy$lib$_datasource$$$function__22__fullpath->m_frame.f_lineno = 582;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 582;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_splitpath == NULL);
var_splitpath = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(var_splitpath);
tmp_len_arg_1 = var_splitpath;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 583;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = 1;
tmp_condition_result_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_4;
tmp_expression_value_3 = IMPORT_HARD_NTPATH();
assert(!(tmp_expression_value_3 == NULL));
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_join);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 584;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__baseurl);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 584;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_path);
tmp_args_element_value_4 = par_path;
frame_frame_numpy$lib$_datasource$$$function__22__fullpath->m_frame.f_lineno = 584;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 584;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_result == NULL);
var_result = tmp_assign_source_2;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(par_path);
tmp_assign_source_3 = par_path;
assert(var_result == NULL);
Py_INCREF(tmp_assign_source_3);
var_result = tmp_assign_source_3;
}
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_datasource$$$function__22__fullpath, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_datasource$$$function__22__fullpath->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_datasource$$$function__22__fullpath, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_datasource$$$function__22__fullpath,
    type_description_1,
    par_self,
    par_path,
    var_splitpath,
    var_result
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_datasource$$$function__22__fullpath == cache_frame_frame_numpy$lib$_datasource$$$function__22__fullpath) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_datasource$$$function__22__fullpath);
    cache_frame_frame_numpy$lib$_datasource$$$function__22__fullpath = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_datasource$$$function__22__fullpath);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_result);
tmp_return_value = var_result;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_splitpath);
CHECK_OBJECT(var_splitpath);
Py_DECREF(var_splitpath);
var_splitpath = NULL;
CHECK_OBJECT(var_result);
CHECK_OBJECT(var_result);
Py_DECREF(var_result);
var_result = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_splitpath);
var_splitpath = NULL;
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


static PyObject *impl_numpy$lib$_datasource$$$function__23__findfile(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_path = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_datasource$$$function__23__findfile;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_datasource$$$function__23__findfile = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$_datasource$$$function__23__findfile)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_datasource$$$function__23__findfile);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_datasource$$$function__23__findfile == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_datasource$$$function__23__findfile = MAKE_FUNCTION_FRAME(tstate, code_objects_3a30b713b8db6e17dca32dcfa9402825, module_numpy$lib$_datasource, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_datasource$$$function__23__findfile->m_type_description == NULL);
frame_frame_numpy$lib$_datasource$$$function__23__findfile = cache_frame_frame_numpy$lib$_datasource$$$function__23__findfile;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_datasource$$$function__23__findfile);
assert(Py_REFCNT(frame_frame_numpy$lib$_datasource$$$function__23__findfile) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_3;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_datasource$DataSource(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DataSource);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 591;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__findfile);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 591;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_path);
tmp_args_element_value_3 = par_path;
frame_frame_numpy$lib$_datasource$$$function__23__findfile->m_frame.f_lineno = 591;
tmp_args_element_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__fullpath, tmp_args_element_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 591;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_datasource$$$function__23__findfile->m_frame.f_lineno = 591;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 591;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_datasource$$$function__23__findfile, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_datasource$$$function__23__findfile->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_datasource$$$function__23__findfile, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_datasource$$$function__23__findfile,
    type_description_1,
    par_self,
    par_path
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_datasource$$$function__23__findfile == cache_frame_frame_numpy$lib$_datasource$$$function__23__findfile) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_datasource$$$function__23__findfile);
    cache_frame_frame_numpy$lib$_datasource$$$function__23__findfile = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_datasource$$$function__23__findfile);

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


static PyObject *impl_numpy$lib$_datasource$$$function__24_abspath(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_path = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_datasource$$$function__24_abspath;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_datasource$$$function__24_abspath = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$_datasource$$$function__24_abspath)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_datasource$$$function__24_abspath);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_datasource$$$function__24_abspath == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_datasource$$$function__24_abspath = MAKE_FUNCTION_FRAME(tstate, code_objects_80da25f0c3a746e685859e5a5e90eefa, module_numpy$lib$_datasource, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_datasource$$$function__24_abspath->m_type_description == NULL);
frame_frame_numpy$lib$_datasource$$$function__24_abspath = cache_frame_frame_numpy$lib$_datasource$$$function__24_abspath;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_datasource$$$function__24_abspath);
assert(Py_REFCNT(frame_frame_numpy$lib$_datasource$$$function__24_abspath) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_3;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_datasource$DataSource(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DataSource);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 614;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_abspath);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 614;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_path);
tmp_args_element_value_3 = par_path;
frame_frame_numpy$lib$_datasource$$$function__24_abspath->m_frame.f_lineno = 614;
tmp_args_element_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__fullpath, tmp_args_element_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 614;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_datasource$$$function__24_abspath->m_frame.f_lineno = 614;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 614;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_datasource$$$function__24_abspath, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_datasource$$$function__24_abspath->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_datasource$$$function__24_abspath, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_datasource$$$function__24_abspath,
    type_description_1,
    par_self,
    par_path
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_datasource$$$function__24_abspath == cache_frame_frame_numpy$lib$_datasource$$$function__24_abspath) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_datasource$$$function__24_abspath);
    cache_frame_frame_numpy$lib$_datasource$$$function__24_abspath = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_datasource$$$function__24_abspath);

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


static PyObject *impl_numpy$lib$_datasource$$$function__25_exists(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_path = python_pars[1];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_datasource$$$function__25_exists;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_datasource$$$function__25_exists = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$_datasource$$$function__25_exists)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_datasource$$$function__25_exists);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_datasource$$$function__25_exists == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_datasource$$$function__25_exists = MAKE_FUNCTION_FRAME(tstate, code_objects_8d412cb13a2ad3b91024f24130ab0293, module_numpy$lib$_datasource, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_datasource$$$function__25_exists->m_type_description == NULL);
frame_frame_numpy$lib$_datasource$$$function__25_exists = cache_frame_frame_numpy$lib$_datasource$$$function__25_exists;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_datasource$$$function__25_exists);
assert(Py_REFCNT(frame_frame_numpy$lib$_datasource$$$function__25_exists) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_3;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_datasource$DataSource(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DataSource);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 648;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_exists);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 648;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_path);
tmp_args_element_value_3 = par_path;
frame_frame_numpy$lib$_datasource$$$function__25_exists->m_frame.f_lineno = 648;
tmp_args_element_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__fullpath, tmp_args_element_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 648;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_datasource$$$function__25_exists->m_frame.f_lineno = 648;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 648;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_datasource$$$function__25_exists, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_datasource$$$function__25_exists->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_datasource$$$function__25_exists, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_datasource$$$function__25_exists,
    type_description_1,
    par_self,
    par_path
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_datasource$$$function__25_exists == cache_frame_frame_numpy$lib$_datasource$$$function__25_exists) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_datasource$$$function__25_exists);
    cache_frame_frame_numpy$lib$_datasource$$$function__25_exists = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_datasource$$$function__25_exists);

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


static PyObject *impl_numpy$lib$_datasource$$$function__26_open(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_path = python_pars[1];
PyObject *par_mode = python_pars[2];
PyObject *par_encoding = python_pars[3];
PyObject *par_newline = python_pars[4];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_datasource$$$function__26_open;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_datasource$$$function__26_open = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$_datasource$$$function__26_open)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_datasource$$$function__26_open);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_datasource$$$function__26_open == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_datasource$$$function__26_open = MAKE_FUNCTION_FRAME(tstate, code_objects_64c2588eb314d6b219955f92ad941985, module_numpy$lib$_datasource, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_datasource$$$function__26_open->m_type_description == NULL);
frame_frame_numpy$lib$_datasource$$$function__26_open = cache_frame_frame_numpy$lib$_datasource$$$function__26_open;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_datasource$$$function__26_open);
assert(Py_REFCNT(frame_frame_numpy$lib$_datasource$$$function__26_open) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_expression_value_1 = module_var_accessor_numpy$lib$_datasource$DataSource(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DataSource);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 679;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_open);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 679;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_kw_call_arg_value_0_1 = par_self;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_path);
tmp_args_element_value_1 = par_path;
frame_frame_numpy$lib$_datasource$$$function__26_open->m_frame.f_lineno = 679;
tmp_kw_call_arg_value_1_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__fullpath, tmp_args_element_value_1);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 679;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_mode);
tmp_kw_call_arg_value_2_1 = par_mode;
CHECK_OBJECT(par_encoding);
tmp_kw_call_dict_value_0_1 = par_encoding;
CHECK_OBJECT(par_newline);
tmp_kw_call_dict_value_1_1 = par_newline;
frame_frame_numpy$lib$_datasource$$$function__26_open->m_frame.f_lineno = 679;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_encoding_str_plain_newline_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 679;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_datasource$$$function__26_open, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_datasource$$$function__26_open->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_datasource$$$function__26_open, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_datasource$$$function__26_open,
    type_description_1,
    par_self,
    par_path,
    par_mode,
    par_encoding,
    par_newline
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_datasource$$$function__26_open == cache_frame_frame_numpy$lib$_datasource$$$function__26_open) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_datasource$$$function__26_open);
    cache_frame_frame_numpy$lib$_datasource$$$function__26_open = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_datasource$$$function__26_open);

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
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
CHECK_OBJECT(par_newline);
Py_DECREF(par_newline);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
CHECK_OBJECT(par_newline);
Py_DECREF(par_newline);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$lib$_datasource$$$function__27_listdir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$lib$_datasource$$$function__27_listdir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$lib$_datasource$$$function__27_listdir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$lib$_datasource$$$function__27_listdir)) {
    Py_XDECREF(cache_frame_frame_numpy$lib$_datasource$$$function__27_listdir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$lib$_datasource$$$function__27_listdir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$lib$_datasource$$$function__27_listdir = MAKE_FUNCTION_FRAME(tstate, code_objects_3e423212f1bfeb5326585082fe369295, module_numpy$lib$_datasource, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$lib$_datasource$$$function__27_listdir->m_type_description == NULL);
frame_frame_numpy$lib$_datasource$$$function__27_listdir = cache_frame_frame_numpy$lib$_datasource$$$function__27_listdir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_datasource$$$function__27_listdir);
assert(Py_REFCNT(frame_frame_numpy$lib$_datasource$$$function__27_listdir) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__isurl);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 696;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__baseurl);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 696;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_numpy$lib$_datasource$$$function__27_listdir->m_frame.f_lineno = 696;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 696;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 696;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_d810d5c7cfbd9027b491ad0efa07a8ee;
frame_frame_numpy$lib$_datasource$$$function__27_listdir->m_frame.f_lineno = 697;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 697;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_path_arg_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_path_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__baseurl);
if (tmp_path_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 700;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = OS_LISTDIR(tstate, tmp_path_arg_1);
CHECK_OBJECT(tmp_path_arg_1);
Py_DECREF(tmp_path_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 700;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_datasource$$$function__27_listdir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_datasource$$$function__27_listdir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_datasource$$$function__27_listdir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_datasource$$$function__27_listdir,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_numpy$lib$_datasource$$$function__27_listdir == cache_frame_frame_numpy$lib$_datasource$$$function__27_listdir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$lib$_datasource$$$function__27_listdir);
    cache_frame_frame_numpy$lib$_datasource$$$function__27_listdir = NULL;
}

assertFrameObject(frame_frame_numpy$lib$_datasource$$$function__27_listdir);

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



static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__10__iswritemode(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_datasource$$$function__10__iswritemode,
        mod_consts.const_str_plain__iswritemode,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e5211faedce7e53a58da22d52bf97d7d,
#endif
        code_objects_9db79083041f1838d15bb20014c3b0ef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_datasource,
        mod_consts.const_str_digest_258e217d37b092c9962da6d0adba4e88,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__11__splitzipext(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_datasource$$$function__11__splitzipext,
        mod_consts.const_str_plain__splitzipext,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e5b4dbd8347e7c8228e1ae7c26322ad0,
#endif
        code_objects_212d1583a88e168a0f8bef8f27303926,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_datasource,
        mod_consts.const_str_digest_98dd369365b4c1ab10383f746acec608,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__12__possible_names(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_datasource$$$function__12__possible_names,
        mod_consts.const_str_plain__possible_names,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7bc05395991514f347d97a65161a7ac3,
#endif
        code_objects_97cc8f97889c9643ed62c9dadd2df0d9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_datasource,
        mod_consts.const_str_digest_e20c972cc44953c07a3051f1ead2981f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__13__isurl(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_datasource$$$function__13__isurl,
        mod_consts.const_str_plain__isurl,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e18153b0c5d6e92b9afd461a42d3912e,
#endif
        code_objects_6723fa1ff48d34d0823d0842d5e61148,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_datasource,
        mod_consts.const_str_digest_60f080f75b1d551ccaa0b992e75568f9,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__14__cache(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_datasource$$$function__14__cache,
        mod_consts.const_str_plain__cache,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ffa929121bc623cfddd9d8eb55d0b976,
#endif
        code_objects_c86f7555534119b2dc82226bdf9f392c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_datasource,
        mod_consts.const_str_digest_951c1f79c30d7c1449f73d8e3ecb3784,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__15__findfile(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_datasource$$$function__15__findfile,
        mod_consts.const_str_plain__findfile,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c5d3ac1b8a40dc44f25de58214ee2353,
#endif
        code_objects_62cf907303fd8e8537010a208e6b2c05,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_datasource,
        mod_consts.const_str_digest_4e495eed9dc2ab2d082c5a563a6edaa7,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__16_abspath(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_datasource$$$function__16_abspath,
        const_str_plain_abspath,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_67b68af63d48b9656273273b693f941d,
#endif
        code_objects_6ee5e7dcb7f1a1aac9cf48d7a1786c7e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_datasource,
        mod_consts.const_str_digest_b66f4152cb281fc793c83c7cafc0622d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__17__sanitize_relative_path(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_datasource$$$function__17__sanitize_relative_path,
        mod_consts.const_str_plain__sanitize_relative_path,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5431f1f60ba523323657ab5706dfb27d,
#endif
        code_objects_90def1455cfe0182900c04369967b13c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_datasource,
        mod_consts.const_str_digest_fa8e052d648cec42a8c2a54c648d26bc,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__18_exists(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_datasource$$$function__18_exists,
        const_str_plain_exists,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_dc553434b9e2dd742a2ab8620a67a8dd,
#endif
        code_objects_69f545f1276c6b9983f8bbef1f82d3fb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_datasource,
        mod_consts.const_str_digest_cffdfb8ee0b032b08be30a03b28dafce,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__19_open(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_datasource$$$function__19_open,
        const_str_plain_open,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c5cb8571bd1f05342692e40acced552c,
#endif
        code_objects_f5513d4a2e6589e83ab14e9ac49200a7,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_datasource,
        mod_consts.const_str_digest_a0a8b996cec509ccd20b74fb1f2054a3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__1__check_mode(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_datasource$$$function__1__check_mode,
        mod_consts.const_str_plain__check_mode,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_afbd0026084b63386cb5182711d7d9c0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_datasource,
        mod_consts.const_str_digest_5a5fdaacad3272eabe94470b120ece05,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__20___init__(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_datasource$$$function__20___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_601db2d6a6caebbac2cea605ff151aeb,
#endif
        code_objects_05e21eaf74fc41df196e8debb342e4e2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_datasource,
        mod_consts.const_str_digest_415d51a290f614893273d05463ea8a21,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__21___del__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_datasource$$$function__21___del__,
        mod_consts.const_str_plain___del__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ecc79977529416eccc1f5a9927e76c86,
#endif
        code_objects_e92769b32af6e90e49b9ed6674f3eb96,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_datasource,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__22__fullpath(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_datasource$$$function__22__fullpath,
        mod_consts.const_str_plain__fullpath,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_31c9e1f883023848ac7a943019073cc7,
#endif
        code_objects_6fb03e84282716d35089f32c87dc4d18,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_datasource,
        mod_consts.const_str_digest_2ac9c01e01ae899f110c3c69fe790f13,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__23__findfile(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_datasource$$$function__23__findfile,
        mod_consts.const_str_plain__findfile,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_194de714e4168d28b28f096a4583e904,
#endif
        code_objects_3a30b713b8db6e17dca32dcfa9402825,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_datasource,
        mod_consts.const_str_digest_1971e6beb36097393cea7c7af9d3b18f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__24_abspath(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_datasource$$$function__24_abspath,
        const_str_plain_abspath,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_dafda8f40655ada21cff6cece338d781,
#endif
        code_objects_80da25f0c3a746e685859e5a5e90eefa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_datasource,
        mod_consts.const_str_digest_9285007bd1eff58e5cac0be1bb0acee1,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__25_exists(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_datasource$$$function__25_exists,
        const_str_plain_exists,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2999fef46912348754d007c64f7c5989,
#endif
        code_objects_8d412cb13a2ad3b91024f24130ab0293,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_datasource,
        mod_consts.const_str_digest_92274dbb556b47dcce4a9f4e31be4c8e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__26_open(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_datasource$$$function__26_open,
        const_str_plain_open,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f93c6694f5952bbaca63e79eb1654977,
#endif
        code_objects_64c2588eb314d6b219955f92ad941985,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_datasource,
        mod_consts.const_str_digest_a4fad8eef83e1ccc909a2793b0ffc736,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__27_listdir(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_datasource$$$function__27_listdir,
        const_str_plain_listdir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8bbf3450cfc5c42442f0bc64c3bb7ade,
#endif
        code_objects_3e423212f1bfeb5326585082fe369295,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_datasource,
        mod_consts.const_str_digest_6d6487c1f5a66a0f02dfc2908fc01083,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__2___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_datasource$$$function__2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c33306f704849f41e67f70b8cf5ec532,
#endif
        code_objects_e89c51743f314efbb755a249f23912e3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_datasource,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__3__load(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_datasource$$$function__3__load,
        mod_consts.const_str_plain__load,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b0c8bb061705a78b6d5d70f2fa6b199c,
#endif
        code_objects_5269eab843794359bd91be30bd510d17,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_datasource,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__4_keys(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_datasource$$$function__4_keys,
        const_str_plain_keys,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_34f0860d8635fc7d701e9f8675e1e92b,
#endif
        code_objects_615ad77fce8361e481419df7e0829e45,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_datasource,
        mod_consts.const_str_digest_1f195473264600970dd56a871934834d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__5___getitem__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_datasource$$$function__5___getitem__,
        mod_consts.const_str_plain___getitem__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4b4dccfb8b1c048c2cd2123d51fea382,
#endif
        code_objects_5d33a4cff6fe3b7fecced5cdadac30bd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_datasource,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__6_open(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_datasource$$$function__6_open,
        const_str_plain_open,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_41f04506cb5935dc829d60183d4f7074,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_datasource,
        mod_consts.const_str_digest_a3679e9e35150a7a0a63ce610ec9f97b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__7___init__(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_datasource$$$function__7___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9bdf01510303e8a3ad611dfd5c98140a,
#endif
        code_objects_d66eb0eacfafbc0894fcf90f2f48cf2c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_datasource,
        mod_consts.const_str_digest_611d3f834bad4ff871ecf9466d8adf6a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__8___del__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_datasource$$$function__8___del__,
        mod_consts.const_str_plain___del__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5d586c28e421b290d2e08c6c532a1f4f,
#endif
        code_objects_0331baa6045ebb1cbc135e5371c18336,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_datasource,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$_datasource$$$function__9__iszip(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$_datasource$$$function__9__iszip,
        mod_consts.const_str_plain__iszip,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b76acba60c8c58c6708811a1e46317c3,
#endif
        code_objects_0bd0af7f6cdcb855868377bf94cab323,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$lib$_datasource,
        mod_consts.const_str_digest_074a31081717ee3162b2f78278ae9c76,
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

static function_impl_code const function_table_numpy$lib$_datasource[] = {
impl_numpy$lib$_datasource$$$function__1__check_mode,
impl_numpy$lib$_datasource$$$function__2___init__,
impl_numpy$lib$_datasource$$$function__3__load,
impl_numpy$lib$_datasource$$$function__4_keys,
impl_numpy$lib$_datasource$$$function__5___getitem__,
impl_numpy$lib$_datasource$$$function__6_open,
impl_numpy$lib$_datasource$$$function__7___init__,
impl_numpy$lib$_datasource$$$function__8___del__,
impl_numpy$lib$_datasource$$$function__9__iszip,
impl_numpy$lib$_datasource$$$function__10__iswritemode,
impl_numpy$lib$_datasource$$$function__11__splitzipext,
impl_numpy$lib$_datasource$$$function__12__possible_names,
impl_numpy$lib$_datasource$$$function__13__isurl,
impl_numpy$lib$_datasource$$$function__14__cache,
impl_numpy$lib$_datasource$$$function__15__findfile,
impl_numpy$lib$_datasource$$$function__16_abspath,
impl_numpy$lib$_datasource$$$function__17__sanitize_relative_path,
impl_numpy$lib$_datasource$$$function__18_exists,
impl_numpy$lib$_datasource$$$function__19_open,
impl_numpy$lib$_datasource$$$function__20___init__,
impl_numpy$lib$_datasource$$$function__21___del__,
impl_numpy$lib$_datasource$$$function__22__fullpath,
impl_numpy$lib$_datasource$$$function__23__findfile,
impl_numpy$lib$_datasource$$$function__24_abspath,
impl_numpy$lib$_datasource$$$function__25_exists,
impl_numpy$lib$_datasource$$$function__26_open,
impl_numpy$lib$_datasource$$$function__27_listdir,
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

    return Nuitka_Function_GetFunctionState(function, function_table_numpy$lib$_datasource);
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
        module_numpy$lib$_datasource,
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
        function_table_numpy$lib$_datasource,
        sizeof(function_table_numpy$lib$_datasource) / sizeof(function_impl_code)
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
static char const *module_full_name = "numpy.lib._datasource";
#endif

// Internal entry point for module code.
PyObject *module_code_numpy$lib$_datasource(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("numpy$lib$_datasource");

    // Store the module for future use.
    module_numpy$lib$_datasource = module;

    moduledict_numpy$lib$_datasource = MODULE_DICT(module_numpy$lib$_datasource);

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
        PRINT_STRING("numpy$lib$_datasource: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy$lib$_datasource: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("numpy$lib$_datasource: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy.lib._datasource" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initnumpy$lib$_datasource\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_numpy$lib$_datasource,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numpy$lib$_datasource,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numpy$lib$_datasource,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$_datasource,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$lib$_datasource,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numpy$lib$_datasource);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_numpy$lib$_datasource);
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

        UPDATE_STRING_DICT1(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_class_container$class_creation_3__bases = NULL;
PyObject *tmp_class_container$class_creation_3__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_3__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_3__metaclass = NULL;
PyObject *tmp_class_container$class_creation_3__prepared = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_datasource;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_numpy$lib$_datasource$$$class__1__FileOpeners_72 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *locals_numpy$lib$_datasource$$$class__2_DataSource_196 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
int tmp_res;
PyObject *locals_numpy$lib$_datasource$$$class__3_Repository_532 = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$lib$_datasource$$$class__3_Repository_2;
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
tmp_assign_source_1 = mod_consts.const_str_digest_cee4edfbbe9cb1d003b327276fbbc74e;
UPDATE_STRING_DICT0(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_numpy$lib$_datasource = MAKE_MODULE_FRAME(code_objects_0dd5d3502a099c13ab846c97c73a6183, module_numpy$lib$_datasource);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_datasource);
assert(Py_REFCNT(frame_frame_numpy$lib$_datasource) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_numpy$lib$_datasource$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_numpy$lib$_datasource$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT0(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_1cc096bfca6f12718d06670f9299228c;
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$lib$_datasource;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_set_module_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_numpy$lib$_datasource->m_frame.f_lineno = 39;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_numpy$lib$_datasource,
        mod_consts.const_str_plain_set_module,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_set_module);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)mod_consts.const_str_plain_set_module, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = module_var_accessor_numpy$lib$_datasource$open(tstate);
if (unlikely(tmp_assign_source_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_open);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT0(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)mod_consts.const_str_plain__open, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;

tmp_assign_source_7 = MAKE_FUNCTION_numpy$lib$_datasource$$$function__1__check_mode(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)mod_consts.const_str_plain__check_mode, tmp_assign_source_7);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_9;
}
// Tried code:
{
PyObject *tmp_assign_source_10;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_numpy$lib$_datasource$$$class__1__FileOpeners_72 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_0aa9085c4d1278385096b0e69de7c526;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_datasource$$$class__1__FileOpeners_72, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_54568b3361794f47346bf23cd52673ed;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_datasource$$$class__1__FileOpeners_72, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain__FileOpeners;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_datasource$$$class__1__FileOpeners_72, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_72;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_datasource$$$class__1__FileOpeners_72, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_datasource$$$function__2___init__(tstate);

tmp_result = DICT_SET_ITEM(locals_numpy$lib$_datasource$$$class__1__FileOpeners_72, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_datasource$$$function__3__load(tstate);

tmp_result = DICT_SET_ITEM(locals_numpy$lib$_datasource$$$class__1__FileOpeners_72, mod_consts.const_str_plain__load, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_datasource$$$function__4_keys(tstate);

tmp_result = DICT_SET_ITEM(locals_numpy$lib$_datasource$$$class__1__FileOpeners_72, const_str_plain_keys, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_datasource$$$function__5___getitem__(tstate);

tmp_result = DICT_SET_ITEM(locals_numpy$lib$_datasource$$$class__1__FileOpeners_72, mod_consts.const_str_plain___getitem__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_tuple_str_plain__loaded_str_plain__file_openers_tuple;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_datasource$$$class__1__FileOpeners_72, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = (PyObject *)&PyType_Type;
tmp_tuple_element_1 = mod_consts.const_str_plain__FileOpeners;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = locals_numpy$lib$_datasource$$$class__1__FileOpeners_72;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_numpy$lib$_datasource->m_frame.f_lineno = 72;
tmp_assign_source_11 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto try_except_handler_3;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_11;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_10 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_10);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_numpy$lib$_datasource$$$class__1__FileOpeners_72);
locals_numpy$lib$_datasource$$$class__1__FileOpeners_72 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_numpy$lib$_datasource$$$class__1__FileOpeners_72);
locals_numpy$lib$_datasource$$$class__1__FileOpeners_72 = NULL;
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
exception_lineno = 72;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)mod_consts.const_str_plain__FileOpeners, tmp_assign_source_10);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
Py_DECREF(tmp_class_container$class_creation_1__prepared);
tmp_class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
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
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_numpy$lib$_datasource$_FileOpeners(tstate);
assert(!(tmp_called_value_2 == NULL));
frame_frame_numpy$lib$_datasource->m_frame.f_lineno = 152;
tmp_assign_source_12 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)mod_consts.const_str_plain__file_openers, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_str_plain_r_str_dot_none_none_tuple;
Py_INCREF(tmp_defaults_1);

tmp_assign_source_13 = MAKE_FUNCTION_numpy$lib$_datasource$$$function__6_open(tstate, tmp_defaults_1);

UPDATE_STRING_DICT1(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)const_str_plain_open, tmp_assign_source_13);
}
{
PyObject *tmp_outline_return_value_2;
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_15;
}
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_1;
tmp_called_value_4 = module_var_accessor_numpy$lib$_datasource$set_module(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_set_module);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 195;

    goto try_except_handler_4;
}
frame_frame_numpy$lib$_datasource->m_frame.f_lineno = 195;
tmp_called_value_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_digest_7e41397866ce47c4cd6fba337671bf63_tuple);

if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;

    goto try_except_handler_4;
}
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_numpy$lib$_datasource$$$class__2_DataSource_196 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
tmp_dictset_value = mod_consts.const_str_digest_0aa9085c4d1278385096b0e69de7c526;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_datasource$$$class__2_DataSource_196, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_2b3bc461bdaf4bfc54e5fb41b9c2970b;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_datasource$$$class__2_DataSource_196, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_DataSource;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_datasource$$$class__2_DataSource_196, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_196;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_datasource$$$class__2_DataSource_196, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_defaults_2;
tmp_defaults_2 = mod_consts.const_tuple_str_dot_tuple;
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_datasource$$$function__7___init__(tstate, tmp_defaults_2);

tmp_result = DICT_SET_ITEM(locals_numpy$lib$_datasource$$$class__2_DataSource_196, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_datasource$$$function__8___del__(tstate);

tmp_result = DICT_SET_ITEM(locals_numpy$lib$_datasource$$$class__2_DataSource_196, mod_consts.const_str_plain___del__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_datasource$$$function__9__iszip(tstate);

tmp_result = DICT_SET_ITEM(locals_numpy$lib$_datasource$$$class__2_DataSource_196, mod_consts.const_str_plain__iszip, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_datasource$$$function__10__iswritemode(tstate);

tmp_result = DICT_SET_ITEM(locals_numpy$lib$_datasource$$$class__2_DataSource_196, mod_consts.const_str_plain__iswritemode, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_datasource$$$function__11__splitzipext(tstate);

tmp_result = DICT_SET_ITEM(locals_numpy$lib$_datasource$$$class__2_DataSource_196, mod_consts.const_str_plain__splitzipext, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_datasource$$$function__12__possible_names(tstate);

tmp_result = DICT_SET_ITEM(locals_numpy$lib$_datasource$$$class__2_DataSource_196, mod_consts.const_str_plain__possible_names, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_datasource$$$function__13__isurl(tstate);

tmp_result = DICT_SET_ITEM(locals_numpy$lib$_datasource$$$class__2_DataSource_196, mod_consts.const_str_plain__isurl, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_datasource$$$function__14__cache(tstate);

tmp_result = DICT_SET_ITEM(locals_numpy$lib$_datasource$$$class__2_DataSource_196, mod_consts.const_str_plain__cache, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_datasource$$$function__15__findfile(tstate);

tmp_result = DICT_SET_ITEM(locals_numpy$lib$_datasource$$$class__2_DataSource_196, mod_consts.const_str_plain__findfile, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_datasource$$$function__16_abspath(tstate);

tmp_result = DICT_SET_ITEM(locals_numpy$lib$_datasource$$$class__2_DataSource_196, const_str_plain_abspath, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_datasource$$$function__17__sanitize_relative_path(tstate);

tmp_result = DICT_SET_ITEM(locals_numpy$lib$_datasource$$$class__2_DataSource_196, mod_consts.const_str_plain__sanitize_relative_path, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_datasource$$$function__18_exists(tstate);

tmp_result = DICT_SET_ITEM(locals_numpy$lib$_datasource$$$class__2_DataSource_196, const_str_plain_exists, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_defaults_3;
tmp_defaults_3 = mod_consts.const_tuple_str_plain_r_none_none_tuple;
Py_INCREF(tmp_defaults_3);

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_datasource$$$function__19_open(tstate, tmp_defaults_3);

tmp_result = DICT_SET_ITEM(locals_numpy$lib$_datasource$$$class__2_DataSource_196, const_str_plain_open, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_str_plain__destpath_str_plain__istmpdest_tuple;
tmp_result = DICT_SET_ITEM(locals_numpy$lib$_datasource$$$class__2_DataSource_196, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_5;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_2;
tmp_called_value_5 = (PyObject *)&PyType_Type;
tmp_tuple_element_2 = mod_consts.const_str_plain_DataSource;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = locals_numpy$lib$_datasource$$$class__2_DataSource_196;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_numpy$lib$_datasource->m_frame.f_lineno = 196;
tmp_assign_source_17 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto try_except_handler_6;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_17;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_args_element_value_1 = outline_1_var___class__;
Py_INCREF(tmp_args_element_value_1);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_numpy$lib$_datasource$$$class__2_DataSource_196);
locals_numpy$lib$_datasource$$$class__2_DataSource_196 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_numpy$lib$_datasource$$$class__2_DataSource_196);
locals_numpy$lib$_datasource$$$class__2_DataSource_196 = NULL;
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
exception_lineno = 196;
goto try_except_handler_4;
outline_result_4:;
frame_frame_numpy$lib$_datasource->m_frame.f_lineno = 195;
tmp_assign_source_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)mod_consts.const_str_plain_DataSource, tmp_assign_source_16);
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
PyObject *tmp_outline_return_value_3;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = module_var_accessor_numpy$lib$_datasource$DataSource(tstate);
assert(!(tmp_tuple_element_3 == NULL));
tmp_assign_source_18 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_18, 0, tmp_tuple_element_3);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_18;
}
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_19 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_19;
}
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_20;
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

    goto try_except_handler_7;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_1 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

    goto try_except_handler_7;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

    goto try_except_handler_7;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_21 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_21;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_2 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

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
PyObject *tmp_assign_source_22;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

    goto try_except_handler_7;
}
tmp_tuple_element_4 = mod_consts.const_str_plain_Repository;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_numpy$lib$_datasource->m_frame.f_lineno = 532;
tmp_assign_source_22 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_22;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_4 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

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
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_2;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_2 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_5 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_2, tmp_default_value_1);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

    goto try_except_handler_7;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_5);
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


exception_lineno = 532;

    goto try_except_handler_7;
}
frame_frame_numpy$lib$_datasource->m_frame.f_lineno = 532;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 532;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_7;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_23;
}
branch_end_1:;
{
PyObject *tmp_assign_source_24;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_numpy$lib$_datasource$$$class__3_Repository_532 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_0aa9085c4d1278385096b0e69de7c526;
tmp_res = PyObject_SetItem(locals_numpy$lib$_datasource$$$class__3_Repository_532, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_digest_db761217ce2acb9b9a599fca45947a31;
tmp_res = PyObject_SetItem(locals_numpy$lib$_datasource$$$class__3_Repository_532, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_plain_Repository;
tmp_res = PyObject_SetItem(locals_numpy$lib$_datasource$$$class__3_Repository_532, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_int_pos_532;
tmp_res = PyObject_SetItem(locals_numpy$lib$_datasource$$$class__3_Repository_532, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

    goto try_except_handler_9;
}
frame_frame_numpy$lib$_datasource$$$class__3_Repository_2 = MAKE_CLASS_FRAME(tstate, code_objects_6714e2a867b19cd7d1cad76eedf0f365, module_numpy$lib$_datasource, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$lib$_datasource$$$class__3_Repository_2);
assert(Py_REFCNT(frame_frame_numpy$lib$_datasource$$$class__3_Repository_2) == 2);

// Framed code:
{
PyObject *tmp_defaults_4;
tmp_defaults_4 = mod_consts.const_tuple_str_dot_tuple;
Py_INCREF(tmp_defaults_4);

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_datasource$$$function__20___init__(tstate, tmp_defaults_4);

tmp_res = PyObject_SetItem(locals_numpy$lib$_datasource$$$class__3_Repository_532, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 572;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_datasource$$$function__21___del__(tstate);

tmp_res = PyObject_SetItem(locals_numpy$lib$_datasource$$$class__3_Repository_532, mod_consts.const_str_plain___del__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 577;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_datasource$$$function__22__fullpath(tstate);

tmp_res = PyObject_SetItem(locals_numpy$lib$_datasource$$$class__3_Repository_532, mod_consts.const_str_plain__fullpath, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 580;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_datasource$$$function__23__findfile(tstate);

tmp_res = PyObject_SetItem(locals_numpy$lib$_datasource$$$class__3_Repository_532, mod_consts.const_str_plain__findfile, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 589;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_datasource$$$function__24_abspath(tstate);

tmp_res = PyObject_SetItem(locals_numpy$lib$_datasource$$$class__3_Repository_532, const_str_plain_abspath, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_datasource$$$function__25_exists(tstate);

tmp_res = PyObject_SetItem(locals_numpy$lib$_datasource$$$class__3_Repository_532, const_str_plain_exists, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 616;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_defaults_5;
tmp_defaults_5 = mod_consts.const_tuple_str_plain_r_none_none_tuple;
Py_INCREF(tmp_defaults_5);

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_datasource$$$function__26_open(tstate, tmp_defaults_5);

tmp_res = PyObject_SetItem(locals_numpy$lib$_datasource$$$class__3_Repository_532, const_str_plain_open, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 650;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}

tmp_dictset_value = MAKE_FUNCTION_numpy$lib$_datasource$$$function__27_listdir(tstate);

tmp_res = PyObject_SetItem(locals_numpy$lib$_datasource$$$class__3_Repository_532, const_str_plain_listdir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 682;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_datasource$$$class__3_Repository_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_datasource$$$class__3_Repository_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_datasource$$$class__3_Repository_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$lib$_datasource$$$class__3_Repository_2,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_numpy$lib$_datasource$$$class__3_Repository_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_9;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__baseurl_tuple;
tmp_res = PyObject_SetItem(locals_numpy$lib$_datasource$$$class__3_Repository_532, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

    goto try_except_handler_9;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_1 = tmp_class_container$class_creation_3__bases_orig;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

    goto try_except_handler_9;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_3__bases_orig;
tmp_res = PyObject_SetItem(locals_numpy$lib$_datasource$$$class__3_Repository_532, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

    goto try_except_handler_9;
}
branch_no_3:;
{
PyObject *tmp_assign_source_25;
PyObject *tmp_called_value_7;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_7 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_6 = mod_consts.const_str_plain_Repository;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = locals_numpy$lib$_datasource$$$class__3_Repository_532;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_numpy$lib$_datasource->m_frame.f_lineno = 532;
tmp_assign_source_25 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

    goto try_except_handler_9;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_25;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_24 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_24);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_DECREF(locals_numpy$lib$_datasource$$$class__3_Repository_532);
locals_numpy$lib$_datasource$$$class__3_Repository_532 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_numpy$lib$_datasource$$$class__3_Repository_532);
locals_numpy$lib$_datasource$$$class__3_Repository_532 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_8;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 532;
goto try_except_handler_7;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)mod_consts.const_str_plain_Repository, tmp_assign_source_24);
}
goto try_end_3;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
Py_DECREF(tmp_class_container$class_creation_3__bases_orig);
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
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$lib$_datasource, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$lib$_datasource->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$lib$_datasource, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_numpy$lib$_datasource);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("numpy$lib$_datasource", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy.lib._datasource" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_numpy$lib$_datasource);
    return module_numpy$lib$_datasource;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$lib$_datasource, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("numpy$lib$_datasource", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

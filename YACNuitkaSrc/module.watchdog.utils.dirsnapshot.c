/* Generated code for Python module 'watchdog$utils$dirsnapshot'
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



/* The "module_watchdog$utils$dirsnapshot" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_watchdog$utils$dirsnapshot;
PyDictObject *moduledict_watchdog$utils$dirsnapshot;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_paths;
PyObject *const_dict_cec415a3f1803e6eb939cb640f5d47bd;
PyObject *const_str_plain_get_inode;
PyObject *const_str_digest_477556a8859866526c0afac0f7ccf55e;
PyObject *const_str_plain_ref;
PyObject *const_str_plain_snapshot;
PyObject *const_str_plain_created;
PyObject *const_str_plain_add;
PyObject *const_str_plain_deleted;
PyObject *const_str_plain_inode;
PyObject *const_str_plain_remove;
PyObject *const_str_plain_moved;
PyObject *const_str_plain_mtime;
PyObject *const_str_plain_size;
PyObject *const_str_plain_modified;
PyObject *const_str_plain__dirs_created;
PyObject *const_str_plain__dirs_deleted;
PyObject *const_str_plain__dirs_modified;
PyObject *const_str_plain__dirs_moved;
PyObject *const_str_plain__files_created;
PyObject *const_str_plain__files_deleted;
PyObject *const_str_plain__files_modified;
PyObject *const_str_plain__files_moved;
PyObject *const_str_plain___repr__;
PyObject *const_str_digest_00df21b1bb01ddfc2e0a0762161256dd;
PyObject *const_str_digest_bddeebb2c72c77c0c98fbdf5442e3dfa;
PyObject *const_str_digest_3ac2d352ae689e6de59023da9d0c20ef;
PyObject *const_str_digest_ad3b72ca8463bce61a3fd6b7c1ef4778;
PyObject *const_str_digest_a9ca18a8f838072b3dac62b573629da6;
PyObject *const_str_digest_8a2dc76cf4f04bec2394dcbd2cd38dfa;
PyObject *const_str_digest_150627e3a24fe6fe5d167f8243ef8dfa;
PyObject *const_str_digest_507c6b66f25cf7fb9544bece1f7d3603;
PyObject *const_str_digest_36d3e7b86ddde55a3d4fb0c3ef57d943;
PyObject *const_str_plain_recursive;
PyObject *const_str_plain_ignore_device;
PyObject *const_str_plain_get_snapshot;
PyObject *const_str_plain_pre_snapshot;
PyObject *const_str_plain_post_snapshot;
PyObject *const_str_plain_DirectorySnapshotDiff;
PyObject *const_tuple_str_plain_ignore_device_tuple;
PyObject *const_str_plain_diff;
PyObject *const_str_plain_DirectorySnapshot;
PyObject *const_tuple_96c6a6e53d5d0691376b38cd0c8ab932_tuple;
PyObject *const_str_plain__stat_info;
PyObject *const_str_plain__inode_to_path;
PyObject *const_str_plain_st_ino;
PyObject *const_str_plain_st_dev;
PyObject *const_str_plain_walk;
PyObject *const_str_plain_self;
PyObject *const_str_plain_root;
PyObject *const_str_plain_join;
PyObject *const_str_plain_errno;
PyObject *const_str_plain_ENOENT;
PyObject *const_str_plain_ENOTDIR;
PyObject *const_str_plain_EINVAL;
PyObject *const_str_plain_contextlib;
PyObject *const_str_plain_suppress;
PyObject *const_tuple_type_OSError_tuple;
PyObject *const_str_plain_entries;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_tuple_type_PermissionError_tuple;
PyObject *const_str_plain_S_ISDIR;
PyObject *const_str_plain_st_mode;
PyObject *const_str_digest_fc52c7393f09a9950cc4b36563a0ca24;
PyObject *const_str_digest_b8d60c720562092e1df946cd126fd97c;
PyObject *const_str_digest_fbf0038f2ef234dcb744cf60db8624a7;
PyObject *const_str_digest_0999e84eab6dbac8400b2fd51adf1ee0;
PyObject *const_str_plain_st_mtime;
PyObject *const_str_plain_st_size;
PyObject *const_str_digest_62ae3a33d677b123426086dbab51aeee;
PyObject *const_str_digest_6684dc40390002acaf38560b98c7b3da;
PyObject *const_str_digest_0677623c015fa8161ebad711ce9f7e0c;
PyObject *const_str_digest_bbc568bd87041519006d967a36391962;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_os;
PyObject *const_tuple_str_plain_S_ISDIR_tuple;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_digest_0a598dd4163c9d6bb169d3bb339a1c2b;
PyObject *const_str_digest_2b67a380eade886efa79fb1042da3773;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_45;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_666dcc3bcee0e4283158b56b35376b07;
PyObject *const_dict_c9cd08342b91a37170a6bf1e397c94ab;
PyObject *const_str_digest_c76b1bcc00487a8424606a4816d3a9b6;
PyObject *const_dict_e8d16ece775461636da8aedac2f07d6b;
PyObject *const_str_plain___str__;
PyObject *const_str_digest_fcc23916aa9224eba4c69f4a4e577922;
PyObject *const_str_digest_5d417d6242e04240b183a60b03d17f55;
PyObject *const_dict_3f7939f2c4ec3aabec015f7d638c81ee;
PyObject *const_str_plain_files_created;
PyObject *const_str_digest_6cd4fe0072a704b1e648bcb61c0e329a;
PyObject *const_str_plain_files_deleted;
PyObject *const_str_digest_77aa59554b5f03bb1fc6a87c1260f0d0;
PyObject *const_str_plain_files_modified;
PyObject *const_str_digest_cac2dd31acce5148086247755293eb28;
PyObject *const_dict_5de5ec6b0074ab1a64bea4a07fae9aea;
PyObject *const_str_plain_files_moved;
PyObject *const_str_digest_48acd2c1cad9a45ab3df1c140dd9ad82;
PyObject *const_str_plain_dirs_modified;
PyObject *const_str_digest_3b2bd542e2ddc7155305d0bc53e1f343;
PyObject *const_str_plain_dirs_moved;
PyObject *const_str_digest_54799a963ea0863c8ef031c6c373f4f4;
PyObject *const_str_plain_dirs_deleted;
PyObject *const_str_digest_282f8ced7e85f1bd6057d17c33c4039c;
PyObject *const_str_plain_dirs_created;
PyObject *const_str_digest_93f8156ff5a06c4dc6c5e40484b71c9a;
PyObject *const_str_digest_006e4eb6e2f474dc14e34fb27e89b243;
PyObject *const_str_digest_2a220cd70159add3cecb106d293ca3ee;
PyObject *const_int_pos_204;
PyObject *const_str_plain_scandir;
PyObject *const_dict_1af20983ebe323feeb2f97d2c9a72dd1;
PyObject *const_str_digest_eb9134b30f2cf3f7820341fc66e4bab5;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_digest_3c674753c44a4666e5b040e2fc4b326c;
PyObject *const_dict_2f973a2c95d8c7809f41ffe014dc3a1f;
PyObject *const_str_digest_05ac9b51b6c07b6e48592a45298c6313;
PyObject *const_dict_376a346f6fd0569c80c5e9828ef29298;
PyObject *const_str_digest_0953cc72b85fb794b979289d2f5dce53;
PyObject *const_tuple_a1312c8cc586c73154e22bb892b6217d_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain_ContextManager;
PyObject *const_tuple_d9c3b24ba5cee12043a972aeb2907f93_tuple;
PyObject *const_str_digest_69f3490ab921a4747f8b58c680756aea;
PyObject *const_int_pos_272;
PyObject *const_dict_52ae08f4dffbfeb8b551f6dd4cb64d47;
PyObject *const_str_digest_b18e255c5787ad1eea32486c088bf5cc;
PyObject *const_dict_f6aa91b07aa6d5dfbbb441194b2d33b6;
PyObject *const_dict_43c1ece82390535da8c0f8d9fc078acc;
PyObject *const_str_digest_71a235abe3d47e9fd7b1d8f0547575fe;
PyObject *const_dict_17b4e6c4e41cddaf59a02ca6914d3af6;
PyObject *const_str_digest_fea9adb9179aba203dba3f3177c62a45;
PyObject *const_dict_34a456ce6eeba287940e45236dc29b1a;
PyObject *const_str_digest_1d967c2943181fbe0c2cf6d1aa500f2e;
PyObject *const_dict_9ea98f92b4e01010c94e859da0008027;
PyObject *const_str_digest_4598e968a6d5006e6f088a64238fcd80;
PyObject *const_dict_c45cd66ef8b834a6402c9bc522c9e368;
PyObject *const_str_digest_25dda1bea2b1a1f3431c5e4785ec413f;
PyObject *const_dict_7ce79acfae9a34ca0ae4480aaaf236da;
PyObject *const_str_digest_417d62c4d60e127fbbb05abcb971ce58;
PyObject *const_dict_a2d409302f72fc082b5fd3b6b5d6b9a5;
PyObject *const_str_plain_stat_info;
PyObject *const_str_digest_064eec4dcfdaf5669bac901c99336d81;
PyObject *const_dict_806062beb777482b081b23758f0791ec;
PyObject *const_str_plain___sub__;
PyObject *const_str_digest_a948b94fd1503a88756ed47a4dd875e1;
PyObject *const_str_digest_b6095de55dad752f03005dea31db8238;
PyObject *const_str_digest_00df2dc3150b5e76e39aba7fbcb7c9b1;
PyObject *const_tuple_a07b0dd509287a64eb0dfe9decde2ff0_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_EmptyDirectorySnapshot;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_f227d3dbfedefa796cc443713d51ac41;
PyObject *const_int_pos_397;
PyObject *const_str_digest_8f4e76141bf5303361aeb91313bea67f;
PyObject *const_dict_a3ec4c86b0f829b939cd446bed0df39f;
PyObject *const_str_digest_cde42f98f5cf79b39dfac0972c376bc5;
PyObject *const_str_digest_2718f199f13959aab1a5dc0e030ef0a0;
PyObject *const_str_plain_property;
PyObject *const_dict_ce734dfc67fbffa7ee4eb87ed3552a49;
PyObject *const_str_digest_a377d5714e7d3a45785bcc883dc6eb42;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_2efacc9f10e0a27d927e8fb60d6308af;
PyObject *const_str_digest_bb5316a9e183dad7b1a3d4e23d8c772a;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_args_tuple;
PyObject *const_tuple_116eabd86781d226dba08c203c26839a_tuple;
PyObject *const_tuple_0db0399f5a8dfa33327f97de59a94544_tuple;
PyObject *const_tuple_4590a32f1655874e52c447d112a9ab23_tuple;
PyObject *const_tuple_str_plain_self_str_plain_fmt_tuple;
PyObject *const_tuple_str_plain_self_str_plain_previous_dirsnap_tuple;
PyObject *const_tuple_str_plain_directory_str_plain_full_path_tuple;
PyObject *const_tuple_str_plain_self_str_plain_path_str_plain_st_tuple;
PyObject *const_tuple_str_plain_self_str_plain_path_tuple;
PyObject *const_tuple_str_plain_self_str_plain_uid_tuple;
PyObject *const_tuple_str_underscore_tuple;
PyObject *const_tuple_8b71842f8fda4e69c6e77c151cbd86a7_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[182];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("watchdog.utils.dirsnapshot"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_paths);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_dict_cec415a3f1803e6eb939cb640f5d47bd);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_inode);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_477556a8859866526c0afac0f7ccf55e);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_ref);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_snapshot);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_created);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_add);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_deleted);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_inode);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_remove);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_moved);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_mtime);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_size);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_modified);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain__dirs_created);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain__dirs_deleted);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain__dirs_modified);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain__dirs_moved);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain__files_created);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain__files_deleted);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain__files_modified);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain__files_moved);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain___repr__);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_00df21b1bb01ddfc2e0a0762161256dd);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_bddeebb2c72c77c0c98fbdf5442e3dfa);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_3ac2d352ae689e6de59023da9d0c20ef);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_ad3b72ca8463bce61a3fd6b7c1ef4778);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_a9ca18a8f838072b3dac62b573629da6);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_8a2dc76cf4f04bec2394dcbd2cd38dfa);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_150627e3a24fe6fe5d167f8243ef8dfa);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_507c6b66f25cf7fb9544bece1f7d3603);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_36d3e7b86ddde55a3d4fb0c3ef57d943);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_recursive);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_ignore_device);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_snapshot);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_pre_snapshot);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_post_snapshot);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_DirectorySnapshotDiff);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ignore_device_tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_diff);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_DirectorySnapshot);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_96c6a6e53d5d0691376b38cd0c8ab932_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain__stat_info);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain__inode_to_path);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_st_ino);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_st_dev);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_walk);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_root);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_join);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_errno);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_ENOENT);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_ENOTDIR);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_EINVAL);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_suppress);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_type_OSError_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_entries);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_tuple_type_PermissionError_tuple);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_S_ISDIR);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_st_mode);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_fc52c7393f09a9950cc4b36563a0ca24);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_b8d60c720562092e1df946cd126fd97c);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_fbf0038f2ef234dcb744cf60db8624a7);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_0999e84eab6dbac8400b2fd51adf1ee0);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_st_mtime);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_st_size);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_62ae3a33d677b123426086dbab51aeee);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_6684dc40390002acaf38560b98c7b3da);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_0677623c015fa8161ebad711ce9f7e0c);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_bbc568bd87041519006d967a36391962);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_S_ISDIR_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_0a598dd4163c9d6bb169d3bb339a1c2b);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_2b67a380eade886efa79fb1042da3773);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_int_pos_45);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_dict_666dcc3bcee0e4283158b56b35376b07);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_dict_c9cd08342b91a37170a6bf1e397c94ab);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_digest_c76b1bcc00487a8424606a4816d3a9b6);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain___str__);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_fcc23916aa9224eba4c69f4a4e577922);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_5d417d6242e04240b183a60b03d17f55);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_dict_3f7939f2c4ec3aabec015f7d638c81ee);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_files_created);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_6cd4fe0072a704b1e648bcb61c0e329a);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_files_deleted);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_digest_77aa59554b5f03bb1fc6a87c1260f0d0);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_files_modified);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_cac2dd31acce5148086247755293eb28);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_dict_5de5ec6b0074ab1a64bea4a07fae9aea);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_files_moved);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_digest_48acd2c1cad9a45ab3df1c140dd9ad82);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_dirs_modified);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_3b2bd542e2ddc7155305d0bc53e1f343);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_dirs_moved);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_digest_54799a963ea0863c8ef031c6c373f4f4);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_dirs_deleted);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_digest_282f8ced7e85f1bd6057d17c33c4039c);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_dirs_created);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_93f8156ff5a06c4dc6c5e40484b71c9a);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_006e4eb6e2f474dc14e34fb27e89b243);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_2a220cd70159add3cecb106d293ca3ee);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_int_pos_204);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_scandir);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_dict_1af20983ebe323feeb2f97d2c9a72dd1);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_eb9134b30f2cf3f7820341fc66e4bab5);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_digest_3c674753c44a4666e5b040e2fc4b326c);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_dict_2f973a2c95d8c7809f41ffe014dc3a1f);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_digest_05ac9b51b6c07b6e48592a45298c6313);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_dict_376a346f6fd0569c80c5e9828ef29298);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_digest_0953cc72b85fb794b979289d2f5dce53);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_tuple_a1312c8cc586c73154e22bb892b6217d_tuple);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_ContextManager);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_d9c3b24ba5cee12043a972aeb2907f93_tuple);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_digest_69f3490ab921a4747f8b58c680756aea);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_int_pos_272);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_dict_52ae08f4dffbfeb8b551f6dd4cb64d47);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_digest_b18e255c5787ad1eea32486c088bf5cc);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_dict_f6aa91b07aa6d5dfbbb441194b2d33b6);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_dict_43c1ece82390535da8c0f8d9fc078acc);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_71a235abe3d47e9fd7b1d8f0547575fe);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_dict_17b4e6c4e41cddaf59a02ca6914d3af6);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_fea9adb9179aba203dba3f3177c62a45);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_dict_34a456ce6eeba287940e45236dc29b1a);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_digest_1d967c2943181fbe0c2cf6d1aa500f2e);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_dict_9ea98f92b4e01010c94e859da0008027);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_digest_4598e968a6d5006e6f088a64238fcd80);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_dict_c45cd66ef8b834a6402c9bc522c9e368);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_digest_25dda1bea2b1a1f3431c5e4785ec413f);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_dict_7ce79acfae9a34ca0ae4480aaaf236da);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_digest_417d62c4d60e127fbbb05abcb971ce58);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_dict_a2d409302f72fc082b5fd3b6b5d6b9a5);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_stat_info);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_digest_064eec4dcfdaf5669bac901c99336d81);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_dict_806062beb777482b081b23758f0791ec);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain___sub__);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_digest_a948b94fd1503a88756ed47a4dd875e1);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_digest_b6095de55dad752f03005dea31db8238);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_digest_00df2dc3150b5e76e39aba7fbcb7c9b1);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_tuple_a07b0dd509287a64eb0dfe9decde2ff0_tuple);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_EmptyDirectorySnapshot);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_digest_f227d3dbfedefa796cc443713d51ac41);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_int_pos_397);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_digest_8f4e76141bf5303361aeb91313bea67f);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_dict_a3ec4c86b0f829b939cd446bed0df39f);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_digest_cde42f98f5cf79b39dfac0972c376bc5);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_digest_2718f199f13959aab1a5dc0e030ef0a0);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_dict_ce734dfc67fbffa7ee4eb87ed3552a49);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_digest_a377d5714e7d3a45785bcc883dc6eb42);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_digest_2efacc9f10e0a27d927e8fb60d6308af);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_digest_bb5316a9e183dad7b1a3d4e23d8c772a);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_args_tuple);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_tuple_116eabd86781d226dba08c203c26839a_tuple);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_tuple_0db0399f5a8dfa33327f97de59a94544_tuple);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_tuple_4590a32f1655874e52c447d112a9ab23_tuple);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_fmt_tuple);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_previous_dirsnap_tuple);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_directory_str_plain_full_path_tuple);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_path_str_plain_st_tuple);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_path_tuple);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_uid_tuple);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_tuple_str_underscore_tuple);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_tuple_8b71842f8fda4e69c6e77c151cbd86a7_tuple);
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
void checkModuleConstants_watchdog$utils$dirsnapshot(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_paths));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_paths);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_dict_cec415a3f1803e6eb939cb640f5d47bd));
CHECK_OBJECT_DEEP(mod_consts.const_dict_cec415a3f1803e6eb939cb640f5d47bd);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_inode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_inode);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_477556a8859866526c0afac0f7ccf55e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_477556a8859866526c0afac0f7ccf55e);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_ref));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ref);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_snapshot));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_snapshot);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_created));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_created);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_add));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_deleted));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_deleted);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_inode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_inode);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_remove));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_remove);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_moved));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_moved);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_mtime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mtime);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_size);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_modified));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_modified);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain__dirs_created));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__dirs_created);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain__dirs_deleted));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__dirs_deleted);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain__dirs_modified));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__dirs_modified);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain__dirs_moved));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__dirs_moved);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain__files_created));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__files_created);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain__files_deleted));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__files_deleted);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain__files_modified));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__files_modified);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain__files_moved));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__files_moved);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain___repr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___repr__);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_00df21b1bb01ddfc2e0a0762161256dd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_00df21b1bb01ddfc2e0a0762161256dd);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_bddeebb2c72c77c0c98fbdf5442e3dfa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bddeebb2c72c77c0c98fbdf5442e3dfa);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_3ac2d352ae689e6de59023da9d0c20ef));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3ac2d352ae689e6de59023da9d0c20ef);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_ad3b72ca8463bce61a3fd6b7c1ef4778));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ad3b72ca8463bce61a3fd6b7c1ef4778);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_a9ca18a8f838072b3dac62b573629da6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a9ca18a8f838072b3dac62b573629da6);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_8a2dc76cf4f04bec2394dcbd2cd38dfa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8a2dc76cf4f04bec2394dcbd2cd38dfa);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_150627e3a24fe6fe5d167f8243ef8dfa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_150627e3a24fe6fe5d167f8243ef8dfa);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_507c6b66f25cf7fb9544bece1f7d3603));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_507c6b66f25cf7fb9544bece1f7d3603);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_36d3e7b86ddde55a3d4fb0c3ef57d943));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_36d3e7b86ddde55a3d4fb0c3ef57d943);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_recursive));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_recursive);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_ignore_device));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ignore_device);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_snapshot));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_snapshot);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_pre_snapshot));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pre_snapshot);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_post_snapshot));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_post_snapshot);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_DirectorySnapshotDiff));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DirectorySnapshotDiff);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ignore_device_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ignore_device_tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_diff));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_diff);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_DirectorySnapshot));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DirectorySnapshot);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_96c6a6e53d5d0691376b38cd0c8ab932_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_96c6a6e53d5d0691376b38cd0c8ab932_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain__stat_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__stat_info);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain__inode_to_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__inode_to_path);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_st_ino));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_st_ino);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_st_dev));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_st_dev);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_walk));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_walk);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_root));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_root);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_join));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_join);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_errno));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_errno);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_ENOENT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ENOENT);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_ENOTDIR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ENOTDIR);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_EINVAL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EINVAL);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextlib);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_suppress));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_suppress);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_type_OSError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_OSError_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_entries));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_entries);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_tuple_type_PermissionError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_PermissionError_tuple);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_S_ISDIR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_S_ISDIR);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_st_mode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_st_mode);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_fc52c7393f09a9950cc4b36563a0ca24));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fc52c7393f09a9950cc4b36563a0ca24);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_b8d60c720562092e1df946cd126fd97c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b8d60c720562092e1df946cd126fd97c);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_fbf0038f2ef234dcb744cf60db8624a7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fbf0038f2ef234dcb744cf60db8624a7);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_0999e84eab6dbac8400b2fd51adf1ee0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0999e84eab6dbac8400b2fd51adf1ee0);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_st_mtime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_st_mtime);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_st_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_st_size);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_62ae3a33d677b123426086dbab51aeee));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_62ae3a33d677b123426086dbab51aeee);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_6684dc40390002acaf38560b98c7b3da));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6684dc40390002acaf38560b98c7b3da);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_0677623c015fa8161ebad711ce9f7e0c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0677623c015fa8161ebad711ce9f7e0c);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_bbc568bd87041519006d967a36391962));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bbc568bd87041519006d967a36391962);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_S_ISDIR_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_S_ISDIR_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_0a598dd4163c9d6bb169d3bb339a1c2b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0a598dd4163c9d6bb169d3bb339a1c2b);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_2b67a380eade886efa79fb1042da3773));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2b67a380eade886efa79fb1042da3773);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_int_pos_45));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_45);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_dict_666dcc3bcee0e4283158b56b35376b07));
CHECK_OBJECT_DEEP(mod_consts.const_dict_666dcc3bcee0e4283158b56b35376b07);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_dict_c9cd08342b91a37170a6bf1e397c94ab));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c9cd08342b91a37170a6bf1e397c94ab);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_digest_c76b1bcc00487a8424606a4816d3a9b6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c76b1bcc00487a8424606a4816d3a9b6);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain___str__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___str__);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_fcc23916aa9224eba4c69f4a4e577922));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fcc23916aa9224eba4c69f4a4e577922);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_5d417d6242e04240b183a60b03d17f55));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5d417d6242e04240b183a60b03d17f55);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_dict_3f7939f2c4ec3aabec015f7d638c81ee));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3f7939f2c4ec3aabec015f7d638c81ee);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_files_created));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_files_created);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_6cd4fe0072a704b1e648bcb61c0e329a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6cd4fe0072a704b1e648bcb61c0e329a);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_files_deleted));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_files_deleted);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_digest_77aa59554b5f03bb1fc6a87c1260f0d0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_77aa59554b5f03bb1fc6a87c1260f0d0);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_files_modified));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_files_modified);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_cac2dd31acce5148086247755293eb28));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cac2dd31acce5148086247755293eb28);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_dict_5de5ec6b0074ab1a64bea4a07fae9aea));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5de5ec6b0074ab1a64bea4a07fae9aea);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_files_moved));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_files_moved);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_digest_48acd2c1cad9a45ab3df1c140dd9ad82));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_48acd2c1cad9a45ab3df1c140dd9ad82);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_dirs_modified));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dirs_modified);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_3b2bd542e2ddc7155305d0bc53e1f343));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3b2bd542e2ddc7155305d0bc53e1f343);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_dirs_moved));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dirs_moved);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_digest_54799a963ea0863c8ef031c6c373f4f4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_54799a963ea0863c8ef031c6c373f4f4);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_dirs_deleted));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dirs_deleted);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_digest_282f8ced7e85f1bd6057d17c33c4039c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_282f8ced7e85f1bd6057d17c33c4039c);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_dirs_created));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dirs_created);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_93f8156ff5a06c4dc6c5e40484b71c9a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_93f8156ff5a06c4dc6c5e40484b71c9a);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_006e4eb6e2f474dc14e34fb27e89b243));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_006e4eb6e2f474dc14e34fb27e89b243);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_2a220cd70159add3cecb106d293ca3ee));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2a220cd70159add3cecb106d293ca3ee);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_int_pos_204));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_204);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_scandir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scandir);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_dict_1af20983ebe323feeb2f97d2c9a72dd1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1af20983ebe323feeb2f97d2c9a72dd1);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_eb9134b30f2cf3f7820341fc66e4bab5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eb9134b30f2cf3f7820341fc66e4bab5);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_digest_3c674753c44a4666e5b040e2fc4b326c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3c674753c44a4666e5b040e2fc4b326c);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_dict_2f973a2c95d8c7809f41ffe014dc3a1f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2f973a2c95d8c7809f41ffe014dc3a1f);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_digest_05ac9b51b6c07b6e48592a45298c6313));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_05ac9b51b6c07b6e48592a45298c6313);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_dict_376a346f6fd0569c80c5e9828ef29298));
CHECK_OBJECT_DEEP(mod_consts.const_dict_376a346f6fd0569c80c5e9828ef29298);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_digest_0953cc72b85fb794b979289d2f5dce53));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0953cc72b85fb794b979289d2f5dce53);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_tuple_a1312c8cc586c73154e22bb892b6217d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a1312c8cc586c73154e22bb892b6217d_tuple);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_ContextManager));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ContextManager);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_d9c3b24ba5cee12043a972aeb2907f93_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d9c3b24ba5cee12043a972aeb2907f93_tuple);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_digest_69f3490ab921a4747f8b58c680756aea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_69f3490ab921a4747f8b58c680756aea);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_int_pos_272));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_272);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_dict_52ae08f4dffbfeb8b551f6dd4cb64d47));
CHECK_OBJECT_DEEP(mod_consts.const_dict_52ae08f4dffbfeb8b551f6dd4cb64d47);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_digest_b18e255c5787ad1eea32486c088bf5cc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b18e255c5787ad1eea32486c088bf5cc);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_dict_f6aa91b07aa6d5dfbbb441194b2d33b6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f6aa91b07aa6d5dfbbb441194b2d33b6);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_dict_43c1ece82390535da8c0f8d9fc078acc));
CHECK_OBJECT_DEEP(mod_consts.const_dict_43c1ece82390535da8c0f8d9fc078acc);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_71a235abe3d47e9fd7b1d8f0547575fe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_71a235abe3d47e9fd7b1d8f0547575fe);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_dict_17b4e6c4e41cddaf59a02ca6914d3af6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_17b4e6c4e41cddaf59a02ca6914d3af6);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_fea9adb9179aba203dba3f3177c62a45));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fea9adb9179aba203dba3f3177c62a45);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_dict_34a456ce6eeba287940e45236dc29b1a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_34a456ce6eeba287940e45236dc29b1a);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_digest_1d967c2943181fbe0c2cf6d1aa500f2e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1d967c2943181fbe0c2cf6d1aa500f2e);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_dict_9ea98f92b4e01010c94e859da0008027));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9ea98f92b4e01010c94e859da0008027);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_digest_4598e968a6d5006e6f088a64238fcd80));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4598e968a6d5006e6f088a64238fcd80);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_dict_c45cd66ef8b834a6402c9bc522c9e368));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c45cd66ef8b834a6402c9bc522c9e368);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_digest_25dda1bea2b1a1f3431c5e4785ec413f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_25dda1bea2b1a1f3431c5e4785ec413f);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_dict_7ce79acfae9a34ca0ae4480aaaf236da));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7ce79acfae9a34ca0ae4480aaaf236da);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_digest_417d62c4d60e127fbbb05abcb971ce58));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_417d62c4d60e127fbbb05abcb971ce58);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_dict_a2d409302f72fc082b5fd3b6b5d6b9a5));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a2d409302f72fc082b5fd3b6b5d6b9a5);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_stat_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stat_info);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_digest_064eec4dcfdaf5669bac901c99336d81));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_064eec4dcfdaf5669bac901c99336d81);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_dict_806062beb777482b081b23758f0791ec));
CHECK_OBJECT_DEEP(mod_consts.const_dict_806062beb777482b081b23758f0791ec);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain___sub__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___sub__);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_digest_a948b94fd1503a88756ed47a4dd875e1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a948b94fd1503a88756ed47a4dd875e1);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_digest_b6095de55dad752f03005dea31db8238));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b6095de55dad752f03005dea31db8238);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_digest_00df2dc3150b5e76e39aba7fbcb7c9b1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_00df2dc3150b5e76e39aba7fbcb7c9b1);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_tuple_a07b0dd509287a64eb0dfe9decde2ff0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a07b0dd509287a64eb0dfe9decde2ff0_tuple);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_EmptyDirectorySnapshot));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EmptyDirectorySnapshot);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_digest_f227d3dbfedefa796cc443713d51ac41));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f227d3dbfedefa796cc443713d51ac41);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_int_pos_397));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_397);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_digest_8f4e76141bf5303361aeb91313bea67f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8f4e76141bf5303361aeb91313bea67f);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_dict_a3ec4c86b0f829b939cd446bed0df39f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a3ec4c86b0f829b939cd446bed0df39f);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_digest_cde42f98f5cf79b39dfac0972c376bc5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cde42f98f5cf79b39dfac0972c376bc5);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_digest_2718f199f13959aab1a5dc0e030ef0a0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2718f199f13959aab1a5dc0e030ef0a0);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_dict_ce734dfc67fbffa7ee4eb87ed3552a49));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ce734dfc67fbffa7ee4eb87ed3552a49);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_digest_a377d5714e7d3a45785bcc883dc6eb42));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a377d5714e7d3a45785bcc883dc6eb42);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_digest_2efacc9f10e0a27d927e8fb60d6308af));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2efacc9f10e0a27d927e8fb60d6308af);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_digest_bb5316a9e183dad7b1a3d4e23d8c772a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bb5316a9e183dad7b1a3d4e23d8c772a);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_args_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_args_tuple);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_tuple_116eabd86781d226dba08c203c26839a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_116eabd86781d226dba08c203c26839a_tuple);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_tuple_0db0399f5a8dfa33327f97de59a94544_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0db0399f5a8dfa33327f97de59a94544_tuple);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_tuple_4590a32f1655874e52c447d112a9ab23_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4590a32f1655874e52c447d112a9ab23_tuple);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_fmt_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_fmt_tuple);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_previous_dirsnap_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_previous_dirsnap_tuple);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_directory_str_plain_full_path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_directory_str_plain_full_path_tuple);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_path_str_plain_st_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_path_str_plain_st_tuple);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_path_tuple);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_uid_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_uid_tuple);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_tuple_str_underscore_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_underscore_tuple);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_tuple_8b71842f8fda4e69c6e77c151cbd86a7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8b71842f8fda4e69c6e77c151cbd86a7_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 6
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
static PyObject *module_var_accessor_watchdog$utils$dirsnapshot$DirectorySnapshot(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$utils$dirsnapshot->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$utils$dirsnapshot->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts.const_str_plain_DirectorySnapshot);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$utils$dirsnapshot->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DirectorySnapshot);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DirectorySnapshot, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DirectorySnapshot);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DirectorySnapshot, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts.const_str_plain_DirectorySnapshot);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts.const_str_plain_DirectorySnapshot);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DirectorySnapshot);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$utils$dirsnapshot$DirectorySnapshotDiff(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$utils$dirsnapshot->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$utils$dirsnapshot->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts.const_str_plain_DirectorySnapshotDiff);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$utils$dirsnapshot->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DirectorySnapshotDiff);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DirectorySnapshotDiff, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DirectorySnapshotDiff);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DirectorySnapshotDiff, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts.const_str_plain_DirectorySnapshotDiff);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts.const_str_plain_DirectorySnapshotDiff);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DirectorySnapshotDiff);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$utils$dirsnapshot$S_ISDIR(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$utils$dirsnapshot->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$utils$dirsnapshot->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts.const_str_plain_S_ISDIR);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$utils$dirsnapshot->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_S_ISDIR);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_S_ISDIR, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_S_ISDIR);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_S_ISDIR, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts.const_str_plain_S_ISDIR);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts.const_str_plain_S_ISDIR);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_S_ISDIR);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$utils$dirsnapshot$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$utils$dirsnapshot->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$utils$dirsnapshot->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$utils$dirsnapshot->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$utils$dirsnapshot$contextlib(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$utils$dirsnapshot->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$utils$dirsnapshot->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$utils$dirsnapshot->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$utils$dirsnapshot$errno(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$utils$dirsnapshot->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$utils$dirsnapshot->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts.const_str_plain_errno);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$utils$dirsnapshot->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_errno);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_errno, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_errno);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_errno, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts.const_str_plain_errno);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts.const_str_plain_errno);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_errno);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_471dd1f553037de085cf587647dfb828;
static PyCodeObject *code_objects_0c96941adebc4e9223e7bd7e4f42e22d;
static PyCodeObject *code_objects_82a90a663b0527b742bea1d2f49a565f;
static PyCodeObject *code_objects_54642865220154f5fd23330dfb202eab;
static PyCodeObject *code_objects_0fa64ee1b1b1bc65ad0e5841efa9a2d6;
static PyCodeObject *code_objects_2ade1a51abddb4ca0b244e909ed76faf;
static PyCodeObject *code_objects_ff7539da70627de43d7c1e7381d759d7;
static PyCodeObject *code_objects_86c1a6cf3198cddd25b1b42c4133c626;
static PyCodeObject *code_objects_ec256f452d97282dd10d2e8336a8c391;
static PyCodeObject *code_objects_658784ff4d7184a71d8408e2cab3d613;
static PyCodeObject *code_objects_523361f830436e6ae703558df8136eca;
static PyCodeObject *code_objects_2dcb9512f8f41ffd2fba2de59b5b4511;
static PyCodeObject *code_objects_c8bf95e877b980c31b62a8c6b36fb134;
static PyCodeObject *code_objects_ae9c1864bc833065e07bee10b0b973a4;
static PyCodeObject *code_objects_6a866ad4b183a95998955610b1d992b6;
static PyCodeObject *code_objects_fe991c8f3eb6308524a30197be82f2c2;
static PyCodeObject *code_objects_a7a67c1700a52ca64b928d669f836e86;
static PyCodeObject *code_objects_9f78a58bf4467da36055030884a51f20;
static PyCodeObject *code_objects_d5711e5cbf566be64a14a2dc5a8c1b8d;
static PyCodeObject *code_objects_234d119fe84073d9063c8586a67a1884;
static PyCodeObject *code_objects_81a9bed71519c4ec1f5ddc645bad335f;
static PyCodeObject *code_objects_69bed2d7abc68baa4d8566721c493eb5;
static PyCodeObject *code_objects_ee7694c0ec333651a98cda937bf4153f;
static PyCodeObject *code_objects_371d83801f1d7924058d6d3f3f82439f;
static PyCodeObject *code_objects_3a6267d591979da1eb9c0a93181f0d2d;
static PyCodeObject *code_objects_9a97a62a036a49ada0cfad99470eefc3;
static PyCodeObject *code_objects_fccfbc23363d5e637c7e5d5d09789ca5;
static PyCodeObject *code_objects_9d3c51d6840ce4f90506a041defe5d90;
static PyCodeObject *code_objects_8b6f0fc27e6f507e529da0c542fcfbcc;
static PyCodeObject *code_objects_f25052e14ad0c0b4d9b320aa471fe58e;
static PyCodeObject *code_objects_d24c548472c5fd44590760339f411d69;
static PyCodeObject *code_objects_a006282a4f3fe286c6f629fbe53860b6;
static PyCodeObject *code_objects_b3748553e459fd44682aadc1c266230b;
static PyCodeObject *code_objects_cab30b7b077cec15f5f9e392d80e8e84;
static PyCodeObject *code_objects_9ad24c2a2496ae7cb1b0e5b700ba537e;
static PyCodeObject *code_objects_398971d8917a403d2f683ff4b2c191c6;
static PyCodeObject *code_objects_34e69b8250345f19a04e7345bf82acdb;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_2efacc9f10e0a27d927e8fb60d6308af); CHECK_OBJECT(module_filename_obj);
code_objects_471dd1f553037de085cf587647dfb828 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_bb5316a9e183dad7b1a3d4e23d8c772a, mod_consts.const_str_digest_bb5316a9e183dad7b1a3d4e23d8c772a, NULL, NULL, 0, 0, 0);
code_objects_0c96941adebc4e9223e7bd7e4f42e22d = MAKE_CODE_OBJECT(module_filename_obj, 204, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ContextManager, mod_consts.const_str_digest_2a220cd70159add3cecb106d293ca3ee, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_82a90a663b0527b742bea1d2f49a565f = MAKE_CODE_OBJECT(module_filename_obj, 272, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_DirectorySnapshot, mod_consts.const_str_plain_DirectorySnapshot, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_54642865220154f5fd23330dfb202eab = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_DirectorySnapshotDiff, mod_consts.const_str_plain_DirectorySnapshotDiff, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_0fa64ee1b1b1bc65ad0e5841efa9a2d6 = MAKE_CODE_OBJECT(module_filename_obj, 397, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_EmptyDirectorySnapshot, mod_consts.const_str_plain_EmptyDirectorySnapshot, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_2ade1a51abddb4ca0b244e909ed76faf = MAKE_CODE_OBJECT(module_filename_obj, 252, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___enter__, mod_consts.const_str_digest_3c674753c44a4666e5b040e2fc4b326c, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_ff7539da70627de43d7c1e7381d759d7 = MAKE_CODE_OBJECT(module_filename_obj, 255, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_FUTURE_ANNOTATIONS, const_str_plain___exit__, mod_consts.const_str_digest_05ac9b51b6c07b6e48592a45298c6313, mod_consts.const_tuple_str_plain_self_str_plain_args_tuple, NULL, 1, 0, 0);
code_objects_86c1a6cf3198cddd25b1b42c4133c626 = MAKE_CODE_OBJECT(module_filename_obj, 294, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_b18e255c5787ad1eea32486c088bf5cc, mod_consts.const_tuple_116eabd86781d226dba08c203c26839a_tuple, NULL, 2, 3, 0);
code_objects_ec256f452d97282dd10d2e8336a8c391 = MAKE_CODE_OBJECT(module_filename_obj, 237, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_eb9134b30f2cf3f7820341fc66e4bab5, mod_consts.const_tuple_0db0399f5a8dfa33327f97de59a94544_tuple, NULL, 2, 4, 0);
code_objects_658784ff4d7184a71d8408e2cab3d613 = MAKE_CODE_OBJECT(module_filename_obj, 70, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_c76b1bcc00487a8424606a4816d3a9b6, mod_consts.const_tuple_4590a32f1655874e52c447d112a9ab23_tuple, NULL, 3, 1, 0);
code_objects_523361f830436e6ae703558df8136eca = MAKE_CODE_OBJECT(module_filename_obj, 403, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_8f4e76141bf5303361aeb91313bea67f, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_2dcb9512f8f41ffd2fba2de59b5b4511 = MAKE_CODE_OBJECT(module_filename_obj, 393, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_00df2dc3150b5e76e39aba7fbcb7c9b1, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_c8bf95e877b980c31b62a8c6b36fb134 = MAKE_CODE_OBJECT(module_filename_obj, 139, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_5d417d6242e04240b183a60b03d17f55, mod_consts.const_tuple_str_plain_self_str_plain_fmt_tuple, NULL, 1, 0, 0);
code_objects_ae9c1864bc833065e07bee10b0b973a4 = MAKE_CODE_OBJECT(module_filename_obj, 390, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___str__, mod_consts.const_str_digest_b6095de55dad752f03005dea31db8238, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_6a866ad4b183a95998955610b1d992b6 = MAKE_CODE_OBJECT(module_filename_obj, 136, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___str__, mod_consts.const_str_digest_fcc23916aa9224eba4c69f4a4e577922, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_fe991c8f3eb6308524a30197be82f2c2 = MAKE_CODE_OBJECT(module_filename_obj, 381, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___sub__, mod_consts.const_str_digest_a948b94fd1503a88756ed47a4dd875e1, mod_consts.const_tuple_str_plain_self_str_plain_previous_dirsnap_tuple, NULL, 2, 0, 0);
code_objects_a7a67c1700a52ca64b928d669f836e86 = MAKE_CODE_OBJECT(module_filename_obj, 200, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_dirs_created, mod_consts.const_str_digest_93f8156ff5a06c4dc6c5e40484b71c9a, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_9f78a58bf4467da36055030884a51f20 = MAKE_CODE_OBJECT(module_filename_obj, 195, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_dirs_deleted, mod_consts.const_str_digest_282f8ced7e85f1bd6057d17c33c4039c, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_d5711e5cbf566be64a14a2dc5a8c1b8d = MAKE_CODE_OBJECT(module_filename_obj, 181, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_dirs_modified, mod_consts.const_str_digest_3b2bd542e2ddc7155305d0bc53e1f343, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_234d119fe84073d9063c8586a67a1884 = MAKE_CODE_OBJECT(module_filename_obj, 186, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_dirs_moved, mod_consts.const_str_digest_54799a963ea0863c8ef031c6c373f4f4, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_81a9bed71519c4ec1f5ddc645bad335f = MAKE_CODE_OBJECT(module_filename_obj, 157, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_files_created, mod_consts.const_str_digest_6cd4fe0072a704b1e648bcb61c0e329a, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_69bed2d7abc68baa4d8566721c493eb5 = MAKE_CODE_OBJECT(module_filename_obj, 162, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_files_deleted, mod_consts.const_str_digest_77aa59554b5f03bb1fc6a87c1260f0d0, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_ee7694c0ec333651a98cda937bf4153f = MAKE_CODE_OBJECT(module_filename_obj, 167, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_files_modified, mod_consts.const_str_digest_cac2dd31acce5148086247755293eb28, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_371d83801f1d7924058d6d3f3f82439f = MAKE_CODE_OBJECT(module_filename_obj, 172, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_files_moved, mod_consts.const_str_digest_48acd2c1cad9a45ab3df1c140dd9ad82, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_3a6267d591979da1eb9c0a93181f0d2d = MAKE_CODE_OBJECT(module_filename_obj, 82, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_inode, mod_consts.const_str_digest_477556a8859866526c0afac0f7ccf55e, mod_consts.const_tuple_str_plain_directory_str_plain_full_path_tuple, NULL, 2, 0, 0);
code_objects_9a97a62a036a49ada0cfad99470eefc3 = MAKE_CODE_OBJECT(module_filename_obj, 87, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_inode, mod_consts.const_str_digest_477556a8859866526c0afac0f7ccf55e, mod_consts.const_tuple_str_plain_directory_str_plain_full_path_tuple, NULL, 2, 0, 0);
code_objects_fccfbc23363d5e637c7e5d5d09789ca5 = MAKE_CODE_OBJECT(module_filename_obj, 263, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_snapshot, mod_consts.const_str_digest_0953cc72b85fb794b979289d2f5dce53, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_9d3c51d6840ce4f90506a041defe5d90 = MAKE_CODE_OBJECT(module_filename_obj, 353, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_inode, mod_consts.const_str_digest_1d967c2943181fbe0c2cf6d1aa500f2e, mod_consts.const_tuple_str_plain_self_str_plain_path_str_plain_st_tuple, NULL, 2, 0, 0);
code_objects_8b6f0fc27e6f507e529da0c542fcfbcc = MAKE_CODE_OBJECT(module_filename_obj, 358, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_isdir, mod_consts.const_str_digest_4598e968a6d5006e6f088a64238fcd80, mod_consts.const_tuple_str_plain_self_str_plain_path_tuple, NULL, 2, 0, 0);
code_objects_f25052e14ad0c0b4d9b320aa471fe58e = MAKE_CODE_OBJECT(module_filename_obj, 361, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_mtime, mod_consts.const_str_digest_25dda1bea2b1a1f3431c5e4785ec413f, mod_consts.const_tuple_str_plain_self_str_plain_path_tuple, NULL, 2, 0, 0);
code_objects_d24c548472c5fd44590760339f411d69 = MAKE_CODE_OBJECT(module_filename_obj, 349, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_path, mod_consts.const_str_digest_fea9adb9179aba203dba3f3177c62a45, mod_consts.const_tuple_str_plain_self_str_plain_uid_tuple, NULL, 2, 0, 0);
code_objects_a006282a4f3fe286c6f629fbe53860b6 = MAKE_CODE_OBJECT(module_filename_obj, 407, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_path, mod_consts.const_str_digest_2718f199f13959aab1a5dc0e030ef0a0, mod_consts.const_tuple_str_underscore_tuple, NULL, 1, 0, 0);
code_objects_b3748553e459fd44682aadc1c266230b = MAKE_CODE_OBJECT(module_filename_obj, 345, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_paths, mod_consts.const_str_digest_71a235abe3d47e9fd7b1d8f0547575fe, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_cab30b7b077cec15f5f9e392d80e8e84 = MAKE_CODE_OBJECT(module_filename_obj, 417, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_paths, mod_consts.const_str_digest_a377d5714e7d3a45785bcc883dc6eb42, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_9ad24c2a2496ae7cb1b0e5b700ba537e = MAKE_CODE_OBJECT(module_filename_obj, 364, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_size, mod_consts.const_str_digest_417d62c4d60e127fbbb05abcb971ce58, mod_consts.const_tuple_str_plain_self_str_plain_path_tuple, NULL, 2, 0, 0);
code_objects_398971d8917a403d2f683ff4b2c191c6 = MAKE_CODE_OBJECT(module_filename_obj, 367, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_stat_info, mod_consts.const_str_digest_064eec4dcfdaf5669bac901c99336d81, mod_consts.const_tuple_str_plain_self_str_plain_path_tuple, NULL, 2, 0, 0);
code_objects_34e69b8250345f19a04e7345bf82acdb = MAKE_CODE_OBJECT(module_filename_obj, 318, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_walk, mod_consts.const_str_digest_fc52c7393f09a9950cc4b36563a0ca24, mod_consts.const_tuple_8b71842f8fda4e69c6e77c151cbd86a7_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_watchdog$utils$dirsnapshot$$$function__17_walk$$$genobj__1_walk(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__10_dirs_deleted(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__11_dirs_created(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__12___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__13___enter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__14___exit__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__15_get_snapshot(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__16___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__17_walk(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__18_paths(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__19_path(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__1___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__1_get_inode(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__2_get_inode(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__20_inode(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__21_isdir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__22_mtime(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__23_size(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__24_stat_info(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__25___sub__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__26___str__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__27___repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__28___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__29_path(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__2___str__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__30_paths(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__3___repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__4_files_created(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__5_files_deleted(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__6_files_modified(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__7_files_moved(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__8_dirs_modified(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__9_dirs_moved(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_watchdog$utils$dirsnapshot$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_ref = python_pars[1];
PyObject *par_snapshot = python_pars[2];
PyObject *par_ignore_device = python_pars[3];
PyObject *var_moved = NULL;
PyObject *var_modified = NULL;
PyObject *var_created = NULL;
PyObject *var_deleted = NULL;
PyObject *var_get_inode = NULL;
PyObject *var_path = NULL;
PyObject *var_inode = NULL;
PyObject *var_new_path = NULL;
PyObject *var_old_path = NULL;
PyObject *outline_0_var_path = NULL;
PyObject *outline_1_var_path = NULL;
PyObject *outline_2_var_path = NULL;
PyObject *outline_3_var_frm = NULL;
PyObject *outline_3_var_to = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_for_loop_3__for_iterator = NULL;
PyObject *tmp_for_loop_3__iter_value = NULL;
PyObject *tmp_for_loop_4__for_iterator = NULL;
PyObject *tmp_for_loop_4__iter_value = NULL;
PyObject *tmp_for_loop_5__for_iterator = NULL;
PyObject *tmp_for_loop_5__iter_value = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_listcomp_2__$0 = NULL;
PyObject *tmp_listcomp_2__contraction = NULL;
PyObject *tmp_listcomp_2__iter_value_0 = NULL;
PyObject *tmp_listcomp_3__$0 = NULL;
PyObject *tmp_listcomp_3__contraction = NULL;
PyObject *tmp_listcomp_3__iter_value_0 = NULL;
PyObject *tmp_listcomp_4__$0 = NULL;
PyObject *tmp_listcomp_4__contraction = NULL;
PyObject *tmp_listcomp_4__iter_value_0 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
bool tmp_result;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_658784ff4d7184a71d8408e2cab3d613, module_watchdog$utils$dirsnapshot, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__->m_type_description == NULL);
frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__ = cache_frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__);
assert(Py_REFCNT(frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_snapshot);
tmp_expression_value_1 = par_snapshot;
tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_paths);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ref);
tmp_expression_value_2 = par_ref;
tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_paths);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 77;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_created == NULL);
var_created = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_ref);
tmp_expression_value_3 = par_ref;
tmp_sub_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_paths);
if (tmp_sub_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_snapshot);
tmp_expression_value_4 = par_snapshot;
tmp_sub_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_paths);
if (tmp_sub_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_2);

exception_lineno = 78;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
CHECK_OBJECT(tmp_sub_expr_left_2);
Py_DECREF(tmp_sub_expr_left_2);
CHECK_OBJECT(tmp_sub_expr_right_2);
Py_DECREF(tmp_sub_expr_right_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_deleted == NULL);
var_deleted = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_ignore_device);
tmp_truth_name_1 = CHECK_IF_TRUE(par_ignore_device);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooooooooooooo";
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
PyObject *tmp_assign_source_3;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_cec415a3f1803e6eb939cb640f5d47bd);

tmp_assign_source_3 = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__1_get_inode(tstate, tmp_annotations_1);

assert(var_get_inode == NULL);
var_get_inode = tmp_assign_source_3;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_cec415a3f1803e6eb939cb640f5d47bd);

tmp_assign_source_4 = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__2_get_inode(tstate, tmp_annotations_2);

assert(var_get_inode == NULL);
var_get_inode = tmp_assign_source_4;
}
branch_end_1:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_1;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_ref);
tmp_expression_value_5 = par_ref;
tmp_bitand_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_paths);
if (tmp_bitand_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_snapshot);
tmp_expression_value_6 = par_snapshot;
tmp_bitand_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_paths);
if (tmp_bitand_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitand_expr_left_1);

exception_lineno = 91;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_iter_arg_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
CHECK_OBJECT(tmp_bitand_expr_left_1);
Py_DECREF(tmp_bitand_expr_left_1);
CHECK_OBJECT(tmp_bitand_expr_right_1);
Py_DECREF(tmp_bitand_expr_right_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooooooooo";
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
type_description_1 = "ooooooooooooo";
exception_lineno = 91;
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
    PyObject *old = var_path;
    var_path = tmp_assign_source_7;
    Py_INCREF(var_path);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
if (var_get_inode == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_inode);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 92;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}

tmp_called_value_1 = var_get_inode;
if (par_ref == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ref);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 92;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_1 = par_ref;
CHECK_OBJECT(var_path);
tmp_args_element_value_2 = var_path;
frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__->m_frame.f_lineno = 92;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
if (var_get_inode == NULL) {
Py_DECREF(tmp_cmp_expr_left_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_inode);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 92;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}

tmp_called_value_2 = var_get_inode;
if (par_snapshot == NULL) {
Py_DECREF(tmp_cmp_expr_left_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_snapshot);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 92;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_3 = par_snapshot;
CHECK_OBJECT(var_path);
tmp_args_element_value_4 = var_path;
frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__->m_frame.f_lineno = 92;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_cmp_expr_right_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 92;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_5;
if (var_created == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_created);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 93;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}

tmp_called_instance_1 = var_created;
CHECK_OBJECT(var_path);
tmp_args_element_value_5 = var_path;
frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__->m_frame.f_lineno = 93;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_add, tmp_args_element_value_5);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_6;
if (var_deleted == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_deleted);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 94;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}

tmp_called_instance_2 = var_deleted;
CHECK_OBJECT(var_path);
tmp_args_element_value_6 = var_path;
frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__->m_frame.f_lineno = 94;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_add, tmp_args_element_value_6);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooooooooo";
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
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = PySet_New(NULL);
assert(var_moved == NULL);
var_moved = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iter_arg_2;
PyObject *tmp_set_arg_1;
if (var_deleted == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_deleted);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 98;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_set_arg_1 = var_deleted;
tmp_iter_arg_2 = PySet_New(tmp_set_arg_1);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_9 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
assert(!(tmp_assign_source_9 == NULL));
assert(tmp_for_loop_2__for_iterator == NULL);
tmp_for_loop_2__for_iterator = tmp_assign_source_9;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_10 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
if (tmp_assign_source_10 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
exception_lineno = 98;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_11 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_path;
    var_path = tmp_assign_source_11;
    Py_INCREF(var_path);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_7;
if (par_ref == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ref);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 99;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}

tmp_called_instance_3 = par_ref;
CHECK_OBJECT(var_path);
tmp_args_element_value_7 = var_path;
frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__->m_frame.f_lineno = 99;
tmp_assign_source_12 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_inode, tmp_args_element_value_7);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = var_inode;
    var_inode = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_8;
if (par_snapshot == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_snapshot);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 100;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}

tmp_called_instance_4 = par_snapshot;
CHECK_OBJECT(var_inode);
tmp_args_element_value_8 = var_inode;
frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__->m_frame.f_lineno = 100;
tmp_assign_source_13 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, const_str_plain_path, tmp_args_element_value_8);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = var_new_path;
    var_new_path = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_2;
CHECK_OBJECT(var_new_path);
tmp_truth_name_2 = CHECK_IF_TRUE(var_new_path);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
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
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_9;
if (var_deleted == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_deleted);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 103;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}

tmp_expression_value_7 = var_deleted;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_remove);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_path);
tmp_args_element_value_9 = var_path;
frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__->m_frame.f_lineno = 103;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_called_instance_5;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_10;
PyObject *tmp_tuple_element_1;
if (var_moved == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_moved);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 104;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}

tmp_called_instance_5 = var_moved;
CHECK_OBJECT(var_path);
tmp_tuple_element_1 = var_path;
tmp_args_element_value_10 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_element_value_10, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_new_path);
tmp_tuple_element_1 = var_new_path;
PyTuple_SET_ITEM0(tmp_args_element_value_10, 1, tmp_tuple_element_1);
frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__->m_frame.f_lineno = 104;
tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_add, tmp_args_element_value_10);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
goto loop_start_2;
loop_end_2:;
goto try_end_2;
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
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_iter_arg_3;
PyObject *tmp_set_arg_2;
if (var_created == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_created);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 106;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_set_arg_2 = var_created;
tmp_iter_arg_3 = PySet_New(tmp_set_arg_2);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_14 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
assert(!(tmp_assign_source_14 == NULL));
assert(tmp_for_loop_3__for_iterator == NULL);
tmp_for_loop_3__for_iterator = tmp_assign_source_14;
}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
tmp_next_source_3 = tmp_for_loop_3__for_iterator;
tmp_assign_source_15 = ITERATOR_NEXT_ITERATOR(tmp_next_source_3);
if (tmp_assign_source_15 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
exception_lineno = 106;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_for_loop_3__iter_value;
    tmp_for_loop_3__iter_value = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_for_loop_3__iter_value);
tmp_assign_source_16 = tmp_for_loop_3__iter_value;
{
    PyObject *old = var_path;
    var_path = tmp_assign_source_16;
    Py_INCREF(var_path);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_instance_6;
PyObject *tmp_args_element_value_11;
if (par_snapshot == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_snapshot);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 107;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}

tmp_called_instance_6 = par_snapshot;
CHECK_OBJECT(var_path);
tmp_args_element_value_11 = var_path;
frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__->m_frame.f_lineno = 107;
tmp_assign_source_17 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts.const_str_plain_inode, tmp_args_element_value_11);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_inode;
    var_inode = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_instance_7;
PyObject *tmp_args_element_value_12;
if (par_ref == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ref);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 108;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}

tmp_called_instance_7 = par_ref;
CHECK_OBJECT(var_inode);
tmp_args_element_value_12 = var_inode;
frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__->m_frame.f_lineno = 108;
tmp_assign_source_18 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, const_str_plain_path, tmp_args_element_value_12);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_old_path;
    var_old_path = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_3;
CHECK_OBJECT(var_old_path);
tmp_truth_name_3 = CHECK_IF_TRUE(var_old_path);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_13;
if (var_created == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_created);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 110;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_8 = var_created;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_remove);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_path);
tmp_args_element_value_13 = var_path;
frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__->m_frame.f_lineno = 110;
tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
{
PyObject *tmp_called_instance_8;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_14;
PyObject *tmp_tuple_element_2;
if (var_moved == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_moved);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 111;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}

tmp_called_instance_8 = var_moved;
CHECK_OBJECT(var_old_path);
tmp_tuple_element_2 = var_old_path;
tmp_args_element_value_14 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_element_value_14, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_path);
tmp_tuple_element_2 = var_path;
PyTuple_SET_ITEM0(tmp_args_element_value_14, 1, tmp_tuple_element_2);
frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__->m_frame.f_lineno = 111;
tmp_call_result_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_8, mod_consts.const_str_plain_add, tmp_args_element_value_14);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
branch_no_4:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
goto loop_start_3;
loop_end_3:;
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
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

goto frame_exception_exit_1;
// End of try:
try_end_3:;
Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = PySet_New(NULL);
assert(var_modified == NULL);
var_modified = tmp_assign_source_19;
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_iter_arg_4;
PyObject *tmp_bitand_expr_left_2;
PyObject *tmp_bitand_expr_right_2;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
if (par_ref == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ref);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 116;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_9 = par_ref;
tmp_bitand_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_paths);
if (tmp_bitand_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_snapshot == NULL) {
Py_DECREF(tmp_bitand_expr_left_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_snapshot);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 116;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_10 = par_snapshot;
tmp_bitand_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_paths);
if (tmp_bitand_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitand_expr_left_2);

exception_lineno = 116;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_iter_arg_4 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_2, tmp_bitand_expr_right_2);
CHECK_OBJECT(tmp_bitand_expr_left_2);
Py_DECREF(tmp_bitand_expr_left_2);
CHECK_OBJECT(tmp_bitand_expr_right_2);
Py_DECREF(tmp_bitand_expr_right_2);
if (tmp_iter_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_20 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
CHECK_OBJECT(tmp_iter_arg_4);
Py_DECREF(tmp_iter_arg_4);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_4__for_iterator == NULL);
tmp_for_loop_4__for_iterator = tmp_assign_source_20;
}
// Tried code:
loop_start_4:;
{
PyObject *tmp_next_source_4;
PyObject *tmp_assign_source_21;
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
tmp_next_source_4 = tmp_for_loop_4__for_iterator;
tmp_assign_source_21 = ITERATOR_NEXT(tmp_next_source_4);
if (tmp_assign_source_21 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_4;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
exception_lineno = 116;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_for_loop_4__iter_value;
    tmp_for_loop_4__iter_value = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_22;
CHECK_OBJECT(tmp_for_loop_4__iter_value);
tmp_assign_source_22 = tmp_for_loop_4__iter_value;
{
    PyObject *old = var_path;
    var_path = tmp_assign_source_22;
    Py_INCREF(var_path);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_5;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_called_instance_9;
PyObject *tmp_args_element_value_19;
PyObject *tmp_called_instance_10;
PyObject *tmp_args_element_value_20;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_called_instance_11;
PyObject *tmp_args_element_value_21;
PyObject *tmp_called_instance_12;
PyObject *tmp_args_element_value_22;
if (var_get_inode == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_inode);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 117;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}

tmp_called_value_5 = var_get_inode;
if (par_ref == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ref);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 117;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}

tmp_args_element_value_15 = par_ref;
CHECK_OBJECT(var_path);
tmp_args_element_value_16 = var_path;
frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__->m_frame.f_lineno = 117;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
if (var_get_inode == NULL) {
Py_DECREF(tmp_cmp_expr_left_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_inode);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 117;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}

tmp_called_value_6 = var_get_inode;
if (par_snapshot == NULL) {
Py_DECREF(tmp_cmp_expr_left_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_snapshot);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 117;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}

tmp_args_element_value_17 = par_snapshot;
CHECK_OBJECT(var_path);
tmp_args_element_value_18 = var_path;
frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__->m_frame.f_lineno = 117;
{
    PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
    tmp_cmp_expr_right_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 117;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (par_ref == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ref);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 118;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}

tmp_called_instance_9 = par_ref;
CHECK_OBJECT(var_path);
tmp_args_element_value_19 = var_path;
frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__->m_frame.f_lineno = 118;
tmp_cmp_expr_left_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_9, mod_consts.const_str_plain_mtime, tmp_args_element_value_19);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
if (par_snapshot == NULL) {
Py_DECREF(tmp_cmp_expr_left_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_snapshot);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 118;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}

tmp_called_instance_10 = par_snapshot;
CHECK_OBJECT(var_path);
tmp_args_element_value_20 = var_path;
frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__->m_frame.f_lineno = 118;
tmp_cmp_expr_right_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_10, mod_consts.const_str_plain_mtime, tmp_args_element_value_20);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 118;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
tmp_or_left_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
if (par_ref == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ref);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 118;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}

tmp_called_instance_11 = par_ref;
CHECK_OBJECT(var_path);
tmp_args_element_value_21 = var_path;
frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__->m_frame.f_lineno = 118;
tmp_cmp_expr_left_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_11, mod_consts.const_str_plain_size, tmp_args_element_value_21);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
if (par_snapshot == NULL) {
Py_DECREF(tmp_cmp_expr_left_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_snapshot);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 118;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}

tmp_called_instance_12 = par_snapshot;
CHECK_OBJECT(var_path);
tmp_args_element_value_22 = var_path;
frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__->m_frame.f_lineno = 118;
tmp_cmp_expr_right_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_12, mod_consts.const_str_plain_size, tmp_args_element_value_22);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_4);

exception_lineno = 118;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
tmp_or_right_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
tmp_and_right_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_and_right_value_1 = tmp_or_left_value_1;
or_end_1:;
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
PyObject *tmp_called_instance_13;
PyObject *tmp_call_result_7;
PyObject *tmp_args_element_value_23;
if (var_modified == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_modified);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 120;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}

tmp_called_instance_13 = var_modified;
CHECK_OBJECT(var_path);
tmp_args_element_value_23 = var_path;
frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__->m_frame.f_lineno = 120;
tmp_call_result_7 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_13, mod_consts.const_str_plain_add, tmp_args_element_value_23);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
branch_no_5:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
goto loop_start_4;
loop_end_4:;
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_4__iter_value);
tmp_for_loop_4__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
Py_DECREF(tmp_for_loop_4__for_iterator);
tmp_for_loop_4__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
Py_XDECREF(tmp_for_loop_4__iter_value);
tmp_for_loop_4__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
Py_DECREF(tmp_for_loop_4__for_iterator);
tmp_for_loop_4__for_iterator = NULL;
{
PyObject *tmp_assign_source_23;
PyObject *tmp_iter_arg_5;
if (var_moved == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_moved);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 122;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iter_arg_5 = var_moved;
tmp_assign_source_23 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_5__for_iterator == NULL);
tmp_for_loop_5__for_iterator = tmp_assign_source_23;
}
// Tried code:
loop_start_5:;
{
PyObject *tmp_next_source_5;
PyObject *tmp_assign_source_24;
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
tmp_next_source_5 = tmp_for_loop_5__for_iterator;
tmp_assign_source_24 = ITERATOR_NEXT_ITERATOR(tmp_next_source_5);
if (tmp_assign_source_24 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_5;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
exception_lineno = 122;
        goto try_except_handler_6;
    }
}

{
    PyObject *old = tmp_for_loop_5__iter_value;
    tmp_for_loop_5__iter_value = tmp_assign_source_24;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_25;
PyObject *tmp_iter_arg_6;
CHECK_OBJECT(tmp_for_loop_5__iter_value);
tmp_iter_arg_6 = tmp_for_loop_5__iter_value;
tmp_assign_source_25 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_25;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_26;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_26 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_26;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_27 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_27;
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



exception_lineno = 122;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_8;
}
}
goto try_end_5;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_7;
// End of try:
try_end_5:;
goto try_end_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_6;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_28;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_28 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_old_path;
    var_old_path = tmp_assign_source_28;
    Py_INCREF(var_old_path);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_29;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_29 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_new_path;
    var_new_path = tmp_assign_source_29;
    Py_INCREF(var_new_path);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_6;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_called_instance_14;
PyObject *tmp_args_element_value_24;
PyObject *tmp_called_instance_15;
PyObject *tmp_args_element_value_25;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_called_instance_16;
PyObject *tmp_args_element_value_26;
PyObject *tmp_called_instance_17;
PyObject *tmp_args_element_value_27;
if (par_ref == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ref);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 123;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_6;
}

tmp_called_instance_14 = par_ref;
CHECK_OBJECT(var_old_path);
tmp_args_element_value_24 = var_old_path;
frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__->m_frame.f_lineno = 123;
tmp_cmp_expr_left_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_14, mod_consts.const_str_plain_mtime, tmp_args_element_value_24);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_6;
}
if (par_snapshot == NULL) {
Py_DECREF(tmp_cmp_expr_left_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_snapshot);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 123;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_6;
}

tmp_called_instance_15 = par_snapshot;
CHECK_OBJECT(var_new_path);
tmp_args_element_value_25 = var_new_path;
frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__->m_frame.f_lineno = 123;
tmp_cmp_expr_right_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_15, mod_consts.const_str_plain_mtime, tmp_args_element_value_25);
if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_5);

exception_lineno = 123;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_6;
}
tmp_or_left_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
CHECK_OBJECT(tmp_cmp_expr_right_5);
Py_DECREF(tmp_cmp_expr_right_5);
if (tmp_or_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_6;
}
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_6;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
if (par_ref == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ref);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 123;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_6;
}

tmp_called_instance_16 = par_ref;
CHECK_OBJECT(var_old_path);
tmp_args_element_value_26 = var_old_path;
frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__->m_frame.f_lineno = 123;
tmp_cmp_expr_left_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_16, mod_consts.const_str_plain_size, tmp_args_element_value_26);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_6;
}
if (par_snapshot == NULL) {
Py_DECREF(tmp_cmp_expr_left_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_snapshot);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 123;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_6;
}

tmp_called_instance_17 = par_snapshot;
CHECK_OBJECT(var_new_path);
tmp_args_element_value_27 = var_new_path;
frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__->m_frame.f_lineno = 123;
tmp_cmp_expr_right_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_17, mod_consts.const_str_plain_size, tmp_args_element_value_27);
if (tmp_cmp_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_6);

exception_lineno = 123;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_6;
}
tmp_or_right_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
CHECK_OBJECT(tmp_cmp_expr_right_6);
Py_DECREF(tmp_cmp_expr_right_6);
if (tmp_or_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_6;
}
tmp_condition_result_6 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_condition_result_6 = tmp_or_left_value_2;
or_end_2:;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_instance_18;
PyObject *tmp_call_result_8;
PyObject *tmp_args_element_value_28;
if (var_modified == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_modified);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 124;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_6;
}

tmp_called_instance_18 = var_modified;
CHECK_OBJECT(var_old_path);
tmp_args_element_value_28 = var_old_path;
frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__->m_frame.f_lineno = 124;
tmp_call_result_8 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_18, mod_consts.const_str_plain_add, tmp_args_element_value_28);
if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}
branch_no_6:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_6;
}
goto loop_start_5;
loop_end_5:;
goto try_end_7;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_5__iter_value);
tmp_for_loop_5__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
Py_DECREF(tmp_for_loop_5__for_iterator);
tmp_for_loop_5__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
Py_XDECREF(tmp_for_loop_5__iter_value);
tmp_for_loop_5__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
Py_DECREF(tmp_for_loop_5__for_iterator);
tmp_for_loop_5__for_iterator = NULL;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
// Tried code:
{
PyObject *tmp_assign_source_30;
PyObject *tmp_iter_arg_7;
if (var_created == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_created);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 126;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_9;
}

tmp_iter_arg_7 = var_created;
tmp_assign_source_30 = MAKE_ITERATOR(tstate, tmp_iter_arg_7);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_9;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_30;
}
{
PyObject *tmp_assign_source_31;
tmp_assign_source_31 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_31;
}
// Tried code:
loop_start_6:;
{
PyObject *tmp_next_source_6;
PyObject *tmp_assign_source_32;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_6 = tmp_listcomp_1__$0;
tmp_assign_source_32 = ITERATOR_NEXT(tmp_next_source_6);
if (tmp_assign_source_32 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_6;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
exception_lineno = 126;
        goto try_except_handler_10;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_32;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_33;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_33 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_path;
    outline_0_var_path = tmp_assign_source_33;
    Py_INCREF(outline_0_var_path);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_called_instance_19;
PyObject *tmp_call_result_9;
PyObject *tmp_args_element_value_29;
int tmp_truth_name_4;
if (par_snapshot == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_snapshot);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 126;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_10;
}

tmp_called_instance_19 = par_snapshot;
CHECK_OBJECT(outline_0_var_path);
tmp_args_element_value_29 = outline_0_var_path;
frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__->m_frame.f_lineno = 126;
tmp_call_result_9 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_19, const_str_plain_isdir, tmp_args_element_value_29);
if (tmp_call_result_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_10;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_9);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_9);

exception_lineno = 126;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_10;
}
tmp_condition_result_7 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_9);
Py_DECREF(tmp_call_result_9);
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_path);
tmp_append_value_1 = outline_0_var_path;
tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_10;
}
}
branch_no_7:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_10;
}
goto loop_start_6;
loop_end_6:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assattr_value_1 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assattr_value_1);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
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
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
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
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_9;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_XDECREF(outline_0_var_path);
outline_0_var_path = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_path);
outline_0_var_path = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 126;
goto frame_exception_exit_1;
outline_result_1:;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__dirs_created, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
// Tried code:
{
PyObject *tmp_assign_source_34;
PyObject *tmp_iter_arg_8;
if (var_deleted == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_deleted);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 127;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_11;
}

tmp_iter_arg_8 = var_deleted;
tmp_assign_source_34 = MAKE_ITERATOR(tstate, tmp_iter_arg_8);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_11;
}
assert(tmp_listcomp_2__$0 == NULL);
tmp_listcomp_2__$0 = tmp_assign_source_34;
}
{
PyObject *tmp_assign_source_35;
tmp_assign_source_35 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_2__contraction == NULL);
tmp_listcomp_2__contraction = tmp_assign_source_35;
}
// Tried code:
loop_start_7:;
{
PyObject *tmp_next_source_7;
PyObject *tmp_assign_source_36;
CHECK_OBJECT(tmp_listcomp_2__$0);
tmp_next_source_7 = tmp_listcomp_2__$0;
tmp_assign_source_36 = ITERATOR_NEXT(tmp_next_source_7);
if (tmp_assign_source_36 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_7;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
exception_lineno = 127;
        goto try_except_handler_12;
    }
}

{
    PyObject *old = tmp_listcomp_2__iter_value_0;
    tmp_listcomp_2__iter_value_0 = tmp_assign_source_36;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_37;
CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
tmp_assign_source_37 = tmp_listcomp_2__iter_value_0;
{
    PyObject *old = outline_1_var_path;
    outline_1_var_path = tmp_assign_source_37;
    Py_INCREF(outline_1_var_path);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_called_instance_20;
PyObject *tmp_call_result_10;
PyObject *tmp_args_element_value_30;
int tmp_truth_name_5;
if (par_ref == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ref);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 127;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_12;
}

tmp_called_instance_20 = par_ref;
CHECK_OBJECT(outline_1_var_path);
tmp_args_element_value_30 = outline_1_var_path;
frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__->m_frame.f_lineno = 127;
tmp_call_result_10 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_20, const_str_plain_isdir, tmp_args_element_value_30);
if (tmp_call_result_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_12;
}
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_call_result_10);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_10);

exception_lineno = 127;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_12;
}
tmp_condition_result_8 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_10);
Py_DECREF(tmp_call_result_10);
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_append_list_2;
PyObject *tmp_append_value_2;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_append_list_2 = tmp_listcomp_2__contraction;
CHECK_OBJECT(outline_1_var_path);
tmp_append_value_2 = outline_1_var_path;
tmp_result = LIST_APPEND0(tmp_append_list_2, tmp_append_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_12;
}
}
branch_no_8:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_12;
}
goto loop_start_7;
loop_end_7:;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_assattr_value_2 = tmp_listcomp_2__contraction;
Py_INCREF(tmp_assattr_value_2);
goto try_return_handler_12;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
CHECK_OBJECT(tmp_listcomp_2__$0);
CHECK_OBJECT(tmp_listcomp_2__$0);
Py_DECREF(tmp_listcomp_2__$0);
tmp_listcomp_2__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_2__contraction);
CHECK_OBJECT(tmp_listcomp_2__contraction);
Py_DECREF(tmp_listcomp_2__contraction);
tmp_listcomp_2__contraction = NULL;
Py_XDECREF(tmp_listcomp_2__iter_value_0);
tmp_listcomp_2__iter_value_0 = NULL;
goto try_return_handler_11;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_2__$0);
CHECK_OBJECT(tmp_listcomp_2__$0);
Py_DECREF(tmp_listcomp_2__$0);
tmp_listcomp_2__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_2__contraction);
CHECK_OBJECT(tmp_listcomp_2__contraction);
Py_DECREF(tmp_listcomp_2__contraction);
tmp_listcomp_2__contraction = NULL;
Py_XDECREF(tmp_listcomp_2__iter_value_0);
tmp_listcomp_2__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_11;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
Py_XDECREF(outline_1_var_path);
outline_1_var_path = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_1_var_path);
outline_1_var_path = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 127;
goto frame_exception_exit_1;
outline_result_2:;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__dirs_deleted, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
// Tried code:
{
PyObject *tmp_assign_source_38;
PyObject *tmp_iter_arg_9;
if (var_modified == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_modified);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 128;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_13;
}

tmp_iter_arg_9 = var_modified;
tmp_assign_source_38 = MAKE_ITERATOR(tstate, tmp_iter_arg_9);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_13;
}
assert(tmp_listcomp_3__$0 == NULL);
tmp_listcomp_3__$0 = tmp_assign_source_38;
}
{
PyObject *tmp_assign_source_39;
tmp_assign_source_39 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_3__contraction == NULL);
tmp_listcomp_3__contraction = tmp_assign_source_39;
}
// Tried code:
loop_start_8:;
{
PyObject *tmp_next_source_8;
PyObject *tmp_assign_source_40;
CHECK_OBJECT(tmp_listcomp_3__$0);
tmp_next_source_8 = tmp_listcomp_3__$0;
tmp_assign_source_40 = ITERATOR_NEXT_ITERATOR(tmp_next_source_8);
if (tmp_assign_source_40 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_8;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
exception_lineno = 128;
        goto try_except_handler_14;
    }
}

{
    PyObject *old = tmp_listcomp_3__iter_value_0;
    tmp_listcomp_3__iter_value_0 = tmp_assign_source_40;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_41;
CHECK_OBJECT(tmp_listcomp_3__iter_value_0);
tmp_assign_source_41 = tmp_listcomp_3__iter_value_0;
{
    PyObject *old = outline_2_var_path;
    outline_2_var_path = tmp_assign_source_41;
    Py_INCREF(outline_2_var_path);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_called_instance_21;
PyObject *tmp_call_result_11;
PyObject *tmp_args_element_value_31;
int tmp_truth_name_6;
if (par_ref == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ref);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 128;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_14;
}

tmp_called_instance_21 = par_ref;
CHECK_OBJECT(outline_2_var_path);
tmp_args_element_value_31 = outline_2_var_path;
frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__->m_frame.f_lineno = 128;
tmp_call_result_11 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_21, const_str_plain_isdir, tmp_args_element_value_31);
if (tmp_call_result_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_14;
}
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_call_result_11);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_11);

exception_lineno = 128;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_14;
}
tmp_condition_result_9 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_11);
Py_DECREF(tmp_call_result_11);
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_append_list_3;
PyObject *tmp_append_value_3;
CHECK_OBJECT(tmp_listcomp_3__contraction);
tmp_append_list_3 = tmp_listcomp_3__contraction;
CHECK_OBJECT(outline_2_var_path);
tmp_append_value_3 = outline_2_var_path;
tmp_result = LIST_APPEND0(tmp_append_list_3, tmp_append_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_14;
}
}
branch_no_9:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_14;
}
goto loop_start_8;
loop_end_8:;
CHECK_OBJECT(tmp_listcomp_3__contraction);
tmp_assattr_value_3 = tmp_listcomp_3__contraction;
Py_INCREF(tmp_assattr_value_3);
goto try_return_handler_14;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
CHECK_OBJECT(tmp_listcomp_3__$0);
CHECK_OBJECT(tmp_listcomp_3__$0);
Py_DECREF(tmp_listcomp_3__$0);
tmp_listcomp_3__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_3__contraction);
CHECK_OBJECT(tmp_listcomp_3__contraction);
Py_DECREF(tmp_listcomp_3__contraction);
tmp_listcomp_3__contraction = NULL;
Py_XDECREF(tmp_listcomp_3__iter_value_0);
tmp_listcomp_3__iter_value_0 = NULL;
goto try_return_handler_13;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_3__$0);
CHECK_OBJECT(tmp_listcomp_3__$0);
Py_DECREF(tmp_listcomp_3__$0);
tmp_listcomp_3__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_3__contraction);
CHECK_OBJECT(tmp_listcomp_3__contraction);
Py_DECREF(tmp_listcomp_3__contraction);
tmp_listcomp_3__contraction = NULL;
Py_XDECREF(tmp_listcomp_3__iter_value_0);
tmp_listcomp_3__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto try_except_handler_13;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
Py_XDECREF(outline_2_var_path);
outline_2_var_path = NULL;
goto outline_result_3;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_2_var_path);
outline_2_var_path = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 128;
goto frame_exception_exit_1;
outline_result_3:;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__dirs_modified, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
// Tried code:
{
PyObject *tmp_assign_source_42;
PyObject *tmp_iter_arg_10;
if (var_moved == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_moved);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 129;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_15;
}

tmp_iter_arg_10 = var_moved;
tmp_assign_source_42 = MAKE_ITERATOR(tstate, tmp_iter_arg_10);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_15;
}
assert(tmp_listcomp_4__$0 == NULL);
tmp_listcomp_4__$0 = tmp_assign_source_42;
}
{
PyObject *tmp_assign_source_43;
tmp_assign_source_43 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_4__contraction == NULL);
tmp_listcomp_4__contraction = tmp_assign_source_43;
}
// Tried code:
loop_start_9:;
{
PyObject *tmp_next_source_9;
PyObject *tmp_assign_source_44;
CHECK_OBJECT(tmp_listcomp_4__$0);
tmp_next_source_9 = tmp_listcomp_4__$0;
tmp_assign_source_44 = ITERATOR_NEXT_ITERATOR(tmp_next_source_9);
if (tmp_assign_source_44 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_9;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
exception_lineno = 129;
        goto try_except_handler_16;
    }
}

{
    PyObject *old = tmp_listcomp_4__iter_value_0;
    tmp_listcomp_4__iter_value_0 = tmp_assign_source_44;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_45;
PyObject *tmp_iter_arg_11;
CHECK_OBJECT(tmp_listcomp_4__iter_value_0);
tmp_iter_arg_11 = tmp_listcomp_4__iter_value_0;
tmp_assign_source_45 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_11);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_17;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
    tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_45;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_46;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_assign_source_46 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 129;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_18;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
    tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_46;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_unpack_4 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_assign_source_47 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 129;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_18;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
    tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_47;
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



exception_lineno = 129;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_18;
}
}
goto try_end_8;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_listcomp$tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto try_except_handler_17;
// End of try:
try_end_8:;
goto try_end_9;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
tmp_listcomp$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
tmp_listcomp$tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto try_except_handler_16;
// End of try:
try_end_9:;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_listcomp$tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_48;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
tmp_assign_source_48 = tmp_listcomp$tuple_unpack_1__element_1;
{
    PyObject *old = outline_3_var_frm;
    outline_3_var_frm = tmp_assign_source_48;
    Py_INCREF(outline_3_var_frm);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
tmp_listcomp$tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_49;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
tmp_assign_source_49 = tmp_listcomp$tuple_unpack_1__element_2;
{
    PyObject *old = outline_3_var_to;
    outline_3_var_to = tmp_assign_source_49;
    Py_INCREF(outline_3_var_to);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
tmp_listcomp$tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_10;
PyObject *tmp_called_instance_22;
PyObject *tmp_call_result_12;
PyObject *tmp_args_element_value_32;
int tmp_truth_name_7;
if (par_ref == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ref);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 129;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_16;
}

tmp_called_instance_22 = par_ref;
CHECK_OBJECT(outline_3_var_frm);
tmp_args_element_value_32 = outline_3_var_frm;
frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__->m_frame.f_lineno = 129;
tmp_call_result_12 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_22, const_str_plain_isdir, tmp_args_element_value_32);
if (tmp_call_result_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_16;
}
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_call_result_12);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_12);

exception_lineno = 129;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_16;
}
tmp_condition_result_10 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_12);
Py_DECREF(tmp_call_result_12);
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_append_list_4;
PyObject *tmp_append_value_4;
PyObject *tmp_tuple_element_3;
CHECK_OBJECT(tmp_listcomp_4__contraction);
tmp_append_list_4 = tmp_listcomp_4__contraction;
CHECK_OBJECT(outline_3_var_frm);
tmp_tuple_element_3 = outline_3_var_frm;
tmp_append_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_append_value_4, 0, tmp_tuple_element_3);
CHECK_OBJECT(outline_3_var_to);
tmp_tuple_element_3 = outline_3_var_to;
PyTuple_SET_ITEM0(tmp_append_value_4, 1, tmp_tuple_element_3);
tmp_result = LIST_APPEND1(tmp_append_list_4, tmp_append_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_16;
}
}
branch_no_10:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_16;
}
goto loop_start_9;
loop_end_9:;
CHECK_OBJECT(tmp_listcomp_4__contraction);
tmp_assattr_value_4 = tmp_listcomp_4__contraction;
Py_INCREF(tmp_assattr_value_4);
goto try_return_handler_16;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_16:;
CHECK_OBJECT(tmp_listcomp_4__$0);
CHECK_OBJECT(tmp_listcomp_4__$0);
Py_DECREF(tmp_listcomp_4__$0);
tmp_listcomp_4__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_4__contraction);
CHECK_OBJECT(tmp_listcomp_4__contraction);
Py_DECREF(tmp_listcomp_4__contraction);
tmp_listcomp_4__contraction = NULL;
Py_XDECREF(tmp_listcomp_4__iter_value_0);
tmp_listcomp_4__iter_value_0 = NULL;
goto try_return_handler_15;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_4__$0);
CHECK_OBJECT(tmp_listcomp_4__$0);
Py_DECREF(tmp_listcomp_4__$0);
tmp_listcomp_4__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_4__contraction);
CHECK_OBJECT(tmp_listcomp_4__contraction);
Py_DECREF(tmp_listcomp_4__contraction);
tmp_listcomp_4__contraction = NULL;
Py_XDECREF(tmp_listcomp_4__iter_value_0);
tmp_listcomp_4__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto try_except_handler_15;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
Py_XDECREF(outline_3_var_frm);
outline_3_var_frm = NULL;
Py_XDECREF(outline_3_var_to);
outline_3_var_to = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_3_var_frm);
outline_3_var_frm = NULL;
Py_XDECREF(outline_3_var_to);
outline_3_var_to = NULL;
// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 129;
goto frame_exception_exit_1;
outline_result_4:;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__dirs_moved, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_list_arg_1;
PyObject *tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
PyObject *tmp_set_arg_3;
PyObject *tmp_expression_value_11;
PyObject *tmp_assattr_target_5;
if (var_created == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_created);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 131;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_sub_expr_left_3 = var_created;
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_set_arg_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain__dirs_created);
if (tmp_set_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_3 = PySet_New(tmp_set_arg_3);
CHECK_OBJECT(tmp_set_arg_3);
Py_DECREF(tmp_set_arg_3);
if (tmp_sub_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_list_arg_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
CHECK_OBJECT(tmp_sub_expr_right_3);
Py_DECREF(tmp_sub_expr_right_3);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_5 = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_assattr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__files_created, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_list_arg_2;
PyObject *tmp_sub_expr_left_4;
PyObject *tmp_sub_expr_right_4;
PyObject *tmp_set_arg_4;
PyObject *tmp_expression_value_12;
PyObject *tmp_assattr_target_6;
if (var_deleted == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_deleted);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 132;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_sub_expr_left_4 = var_deleted;
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_set_arg_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain__dirs_deleted);
if (tmp_set_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_4 = PySet_New(tmp_set_arg_4);
CHECK_OBJECT(tmp_set_arg_4);
Py_DECREF(tmp_set_arg_4);
if (tmp_sub_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_list_arg_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
CHECK_OBJECT(tmp_sub_expr_right_4);
Py_DECREF(tmp_sub_expr_right_4);
if (tmp_list_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_6 = MAKE_LIST(tstate, tmp_list_arg_2);
CHECK_OBJECT(tmp_list_arg_2);
Py_DECREF(tmp_list_arg_2);
if (tmp_assattr_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain__files_deleted, tmp_assattr_value_6);
CHECK_OBJECT(tmp_assattr_value_6);
Py_DECREF(tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_list_arg_3;
PyObject *tmp_sub_expr_left_5;
PyObject *tmp_sub_expr_right_5;
PyObject *tmp_set_arg_5;
PyObject *tmp_expression_value_13;
PyObject *tmp_assattr_target_7;
if (var_modified == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_modified);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 133;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_sub_expr_left_5 = var_modified;
CHECK_OBJECT(par_self);
tmp_expression_value_13 = par_self;
tmp_set_arg_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain__dirs_modified);
if (tmp_set_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_5 = PySet_New(tmp_set_arg_5);
CHECK_OBJECT(tmp_set_arg_5);
Py_DECREF(tmp_set_arg_5);
if (tmp_sub_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_list_arg_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
CHECK_OBJECT(tmp_sub_expr_right_5);
Py_DECREF(tmp_sub_expr_right_5);
assert(!(tmp_list_arg_3 == NULL));
tmp_assattr_value_7 = MAKE_LIST(tstate, tmp_list_arg_3);
CHECK_OBJECT(tmp_list_arg_3);
Py_DECREF(tmp_list_arg_3);
if (tmp_assattr_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain__files_modified, tmp_assattr_value_7);
CHECK_OBJECT(tmp_assattr_value_7);
Py_DECREF(tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_list_arg_4;
PyObject *tmp_sub_expr_left_6;
PyObject *tmp_sub_expr_right_6;
PyObject *tmp_set_arg_6;
PyObject *tmp_expression_value_14;
PyObject *tmp_assattr_target_8;
if (var_moved == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_moved);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 134;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_sub_expr_left_6 = var_moved;
CHECK_OBJECT(par_self);
tmp_expression_value_14 = par_self;
tmp_set_arg_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain__dirs_moved);
if (tmp_set_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_6 = PySet_New(tmp_set_arg_6);
CHECK_OBJECT(tmp_set_arg_6);
Py_DECREF(tmp_set_arg_6);
if (tmp_sub_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_list_arg_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_6, tmp_sub_expr_right_6);
CHECK_OBJECT(tmp_sub_expr_right_6);
Py_DECREF(tmp_sub_expr_right_6);
assert(!(tmp_list_arg_4 == NULL));
tmp_assattr_value_8 = MAKE_LIST(tstate, tmp_list_arg_4);
CHECK_OBJECT(tmp_list_arg_4);
Py_DECREF(tmp_list_arg_4);
if (tmp_assattr_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_8 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain__files_moved, tmp_assattr_value_8);
CHECK_OBJECT(tmp_assattr_value_8);
Py_DECREF(tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "ooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__,
    type_description_1,
    par_self,
    par_ref,
    par_snapshot,
    par_ignore_device,
    var_moved,
    var_modified,
    var_created,
    var_deleted,
    var_get_inode,
    var_path,
    var_inode,
    var_new_path,
    var_old_path
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__ == cache_frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__);
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__);

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
Py_XDECREF(var_moved);
var_moved = NULL;
Py_XDECREF(var_modified);
var_modified = NULL;
Py_XDECREF(var_created);
var_created = NULL;
Py_XDECREF(var_deleted);
var_deleted = NULL;
Py_XDECREF(var_get_inode);
var_get_inode = NULL;
Py_XDECREF(var_path);
var_path = NULL;
Py_XDECREF(var_inode);
var_inode = NULL;
Py_XDECREF(var_new_path);
var_new_path = NULL;
Py_XDECREF(var_old_path);
var_old_path = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_moved);
var_moved = NULL;
Py_XDECREF(var_modified);
var_modified = NULL;
Py_XDECREF(var_created);
var_created = NULL;
Py_XDECREF(var_deleted);
var_deleted = NULL;
Py_XDECREF(var_get_inode);
var_get_inode = NULL;
Py_XDECREF(var_path);
var_path = NULL;
Py_XDECREF(var_inode);
var_inode = NULL;
Py_XDECREF(var_new_path);
var_new_path = NULL;
Py_XDECREF(var_old_path);
var_old_path = NULL;
// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_ref);
Py_DECREF(par_ref);
CHECK_OBJECT(par_snapshot);
Py_DECREF(par_snapshot);
CHECK_OBJECT(par_ignore_device);
Py_DECREF(par_ignore_device);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_ref);
Py_DECREF(par_ref);
CHECK_OBJECT(par_snapshot);
Py_DECREF(par_snapshot);
CHECK_OBJECT(par_ignore_device);
Py_DECREF(par_ignore_device);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__1_get_inode(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_directory = python_pars[0];
PyObject *par_full_path = python_pars[1];
struct Nuitka_FrameObject *frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__1_get_inode;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__1_get_inode = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__1_get_inode)) {
    Py_XDECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__1_get_inode);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__1_get_inode == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__1_get_inode = MAKE_FUNCTION_FRAME(tstate, code_objects_3a6267d591979da1eb9c0a93181f0d2d, module_watchdog$utils$dirsnapshot, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__1_get_inode->m_type_description == NULL);
frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__1_get_inode = cache_frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__1_get_inode;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__1_get_inode);
assert(Py_REFCNT(frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__1_get_inode) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_directory);
tmp_called_instance_1 = par_directory;
CHECK_OBJECT(par_full_path);
tmp_args_element_value_1 = par_full_path;
frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__1_get_inode->m_frame.f_lineno = 83;
tmp_expression_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_inode, tmp_args_element_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__1_get_inode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__1_get_inode->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__1_get_inode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__1_get_inode,
    type_description_1,
    par_directory,
    par_full_path
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__1_get_inode == cache_frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__1_get_inode) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__1_get_inode);
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__1_get_inode = NULL;
}

assertFrameObject(frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__1_get_inode);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_directory);
Py_DECREF(par_directory);
CHECK_OBJECT(par_full_path);
Py_DECREF(par_full_path);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_directory);
Py_DECREF(par_directory);
CHECK_OBJECT(par_full_path);
Py_DECREF(par_full_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__2_get_inode(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_directory = python_pars[0];
PyObject *par_full_path = python_pars[1];
struct Nuitka_FrameObject *frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__2_get_inode;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__2_get_inode = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__2_get_inode)) {
    Py_XDECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__2_get_inode);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__2_get_inode == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__2_get_inode = MAKE_FUNCTION_FRAME(tstate, code_objects_9a97a62a036a49ada0cfad99470eefc3, module_watchdog$utils$dirsnapshot, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__2_get_inode->m_type_description == NULL);
frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__2_get_inode = cache_frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__2_get_inode;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__2_get_inode);
assert(Py_REFCNT(frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__2_get_inode) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_directory);
tmp_called_instance_1 = par_directory;
CHECK_OBJECT(par_full_path);
tmp_args_element_value_1 = par_full_path;
frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__2_get_inode->m_frame.f_lineno = 88;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_inode, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__2_get_inode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__2_get_inode->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__2_get_inode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__2_get_inode,
    type_description_1,
    par_directory,
    par_full_path
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__2_get_inode == cache_frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__2_get_inode) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__2_get_inode);
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__2_get_inode = NULL;
}

assertFrameObject(frame_frame_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__2_get_inode);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_directory);
Py_DECREF(par_directory);
CHECK_OBJECT(par_full_path);
Py_DECREF(par_full_path);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_directory);
Py_DECREF(par_directory);
CHECK_OBJECT(par_full_path);
Py_DECREF(par_full_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__2___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_watchdog$utils$dirsnapshot$$$function__2___str__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$utils$dirsnapshot$$$function__2___str__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__2___str__)) {
    Py_XDECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__2___str__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$utils$dirsnapshot$$$function__2___str__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__2___str__ = MAKE_FUNCTION_FRAME(tstate, code_objects_6a866ad4b183a95998955610b1d992b6, module_watchdog$utils$dirsnapshot, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__2___str__->m_type_description == NULL);
frame_frame_watchdog$utils$dirsnapshot$$$function__2___str__ = cache_frame_frame_watchdog$utils$dirsnapshot$$$function__2___str__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$dirsnapshot$$$function__2___str__);
assert(Py_REFCNT(frame_frame_watchdog$utils$dirsnapshot$$$function__2___str__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_watchdog$utils$dirsnapshot$$$function__2___str__->m_frame.f_lineno = 137;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain___repr__);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$dirsnapshot$$$function__2___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$dirsnapshot$$$function__2___str__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$dirsnapshot$$$function__2___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$utils$dirsnapshot$$$function__2___str__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$utils$dirsnapshot$$$function__2___str__ == cache_frame_frame_watchdog$utils$dirsnapshot$$$function__2___str__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__2___str__);
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__2___str__ = NULL;
}

assertFrameObject(frame_frame_watchdog$utils$dirsnapshot$$$function__2___str__);

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


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__3___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_watchdog$utils$dirsnapshot$$$function__3___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$utils$dirsnapshot$$$function__3___repr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__3___repr__)) {
    Py_XDECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__3___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$utils$dirsnapshot$$$function__3___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__3___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_c8bf95e877b980c31b62a8c6b36fb134, module_watchdog$utils$dirsnapshot, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__3___repr__->m_type_description == NULL);
frame_frame_watchdog$utils$dirsnapshot$$$function__3___repr__ = cache_frame_frame_watchdog$utils$dirsnapshot$$$function__3___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$dirsnapshot$$$function__3___repr__);
assert(Py_REFCNT(frame_frame_watchdog$utils$dirsnapshot$$$function__3___repr__) == 2);

// Framed code:
{
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_3_1;
PyObject *tmp_len_arg_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_arg_value_4_1;
PyObject *tmp_len_arg_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_arg_value_5_1;
PyObject *tmp_len_arg_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_kw_call_arg_value_6_1;
PyObject *tmp_len_arg_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_arg_value_7_1;
PyObject *tmp_len_arg_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_arg_value_8_1;
PyObject *tmp_len_arg_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_kw_call_arg_value_9_1;
PyObject *tmp_len_arg_8;
PyObject *tmp_expression_value_9;
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_00df21b1bb01ddfc2e0a0762161256dd;
CHECK_OBJECT(par_self);
tmp_type_arg_1 = par_self;
tmp_expression_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_expression_value_1 == NULL));
tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__files_created);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 146;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_2_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_kw_call_arg_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 146;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_len_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__files_deleted);
if (tmp_len_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);

exception_lineno = 147;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_3_1 = BUILTIN_LEN(tstate, tmp_len_arg_2);
CHECK_OBJECT(tmp_len_arg_2);
Py_DECREF(tmp_len_arg_2);
if (tmp_kw_call_arg_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);

exception_lineno = 147;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_len_arg_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__files_modified);
if (tmp_len_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_3_1);

exception_lineno = 148;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_4_1 = BUILTIN_LEN(tstate, tmp_len_arg_3);
CHECK_OBJECT(tmp_len_arg_3);
Py_DECREF(tmp_len_arg_3);
if (tmp_kw_call_arg_value_4_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_3_1);

exception_lineno = 148;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_len_arg_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__files_moved);
if (tmp_len_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_3_1);
Py_DECREF(tmp_kw_call_arg_value_4_1);

exception_lineno = 149;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_5_1 = BUILTIN_LEN(tstate, tmp_len_arg_4);
CHECK_OBJECT(tmp_len_arg_4);
Py_DECREF(tmp_len_arg_4);
if (tmp_kw_call_arg_value_5_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_3_1);
Py_DECREF(tmp_kw_call_arg_value_4_1);

exception_lineno = 149;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_len_arg_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__dirs_created);
if (tmp_len_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_3_1);
Py_DECREF(tmp_kw_call_arg_value_4_1);
Py_DECREF(tmp_kw_call_arg_value_5_1);

exception_lineno = 150;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_6_1 = BUILTIN_LEN(tstate, tmp_len_arg_5);
CHECK_OBJECT(tmp_len_arg_5);
Py_DECREF(tmp_len_arg_5);
if (tmp_kw_call_arg_value_6_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_3_1);
Py_DECREF(tmp_kw_call_arg_value_4_1);
Py_DECREF(tmp_kw_call_arg_value_5_1);

exception_lineno = 150;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_len_arg_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__dirs_deleted);
if (tmp_len_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_3_1);
Py_DECREF(tmp_kw_call_arg_value_4_1);
Py_DECREF(tmp_kw_call_arg_value_5_1);
Py_DECREF(tmp_kw_call_arg_value_6_1);

exception_lineno = 151;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_7_1 = BUILTIN_LEN(tstate, tmp_len_arg_6);
CHECK_OBJECT(tmp_len_arg_6);
Py_DECREF(tmp_len_arg_6);
if (tmp_kw_call_arg_value_7_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_3_1);
Py_DECREF(tmp_kw_call_arg_value_4_1);
Py_DECREF(tmp_kw_call_arg_value_5_1);
Py_DECREF(tmp_kw_call_arg_value_6_1);

exception_lineno = 151;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_len_arg_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__dirs_modified);
if (tmp_len_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_3_1);
Py_DECREF(tmp_kw_call_arg_value_4_1);
Py_DECREF(tmp_kw_call_arg_value_5_1);
Py_DECREF(tmp_kw_call_arg_value_6_1);
Py_DECREF(tmp_kw_call_arg_value_7_1);

exception_lineno = 152;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_8_1 = BUILTIN_LEN(tstate, tmp_len_arg_7);
CHECK_OBJECT(tmp_len_arg_7);
Py_DECREF(tmp_len_arg_7);
if (tmp_kw_call_arg_value_8_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_3_1);
Py_DECREF(tmp_kw_call_arg_value_4_1);
Py_DECREF(tmp_kw_call_arg_value_5_1);
Py_DECREF(tmp_kw_call_arg_value_6_1);
Py_DECREF(tmp_kw_call_arg_value_7_1);

exception_lineno = 152;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_len_arg_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__dirs_moved);
if (tmp_len_arg_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_3_1);
Py_DECREF(tmp_kw_call_arg_value_4_1);
Py_DECREF(tmp_kw_call_arg_value_5_1);
Py_DECREF(tmp_kw_call_arg_value_6_1);
Py_DECREF(tmp_kw_call_arg_value_7_1);
Py_DECREF(tmp_kw_call_arg_value_8_1);

exception_lineno = 153;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_9_1 = BUILTIN_LEN(tstate, tmp_len_arg_8);
CHECK_OBJECT(tmp_len_arg_8);
Py_DECREF(tmp_len_arg_8);
if (tmp_kw_call_arg_value_9_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_3_1);
Py_DECREF(tmp_kw_call_arg_value_4_1);
Py_DECREF(tmp_kw_call_arg_value_5_1);
Py_DECREF(tmp_kw_call_arg_value_6_1);
Py_DECREF(tmp_kw_call_arg_value_7_1);
Py_DECREF(tmp_kw_call_arg_value_8_1);

exception_lineno = 153;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
frame_frame_watchdog$utils$dirsnapshot$$$function__3___repr__->m_frame.f_lineno = 144;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1, tmp_kw_call_arg_value_5_1, tmp_kw_call_arg_value_6_1, tmp_kw_call_arg_value_7_1, tmp_kw_call_arg_value_8_1, tmp_kw_call_arg_value_9_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS10(tstate, unicode_builtin_format, call_args);
}

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
CHECK_OBJECT(tmp_kw_call_arg_value_7_1);
Py_DECREF(tmp_kw_call_arg_value_7_1);
CHECK_OBJECT(tmp_kw_call_arg_value_8_1);
Py_DECREF(tmp_kw_call_arg_value_8_1);
CHECK_OBJECT(tmp_kw_call_arg_value_9_1);
Py_DECREF(tmp_kw_call_arg_value_9_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "oN";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$dirsnapshot$$$function__3___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$dirsnapshot$$$function__3___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$dirsnapshot$$$function__3___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$utils$dirsnapshot$$$function__3___repr__,
    type_description_1,
    par_self,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$utils$dirsnapshot$$$function__3___repr__ == cache_frame_frame_watchdog$utils$dirsnapshot$$$function__3___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__3___repr__);
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__3___repr__ = NULL;
}

assertFrameObject(frame_frame_watchdog$utils$dirsnapshot$$$function__3___repr__);

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


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__4_files_created(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_watchdog$utils$dirsnapshot$$$function__4_files_created;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$utils$dirsnapshot$$$function__4_files_created = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__4_files_created)) {
    Py_XDECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__4_files_created);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$utils$dirsnapshot$$$function__4_files_created == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__4_files_created = MAKE_FUNCTION_FRAME(tstate, code_objects_81a9bed71519c4ec1f5ddc645bad335f, module_watchdog$utils$dirsnapshot, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__4_files_created->m_type_description == NULL);
frame_frame_watchdog$utils$dirsnapshot$$$function__4_files_created = cache_frame_frame_watchdog$utils$dirsnapshot$$$function__4_files_created;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$dirsnapshot$$$function__4_files_created);
assert(Py_REFCNT(frame_frame_watchdog$utils$dirsnapshot$$$function__4_files_created) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__files_created);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$dirsnapshot$$$function__4_files_created, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$dirsnapshot$$$function__4_files_created->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$dirsnapshot$$$function__4_files_created, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$utils$dirsnapshot$$$function__4_files_created,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$utils$dirsnapshot$$$function__4_files_created == cache_frame_frame_watchdog$utils$dirsnapshot$$$function__4_files_created) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__4_files_created);
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__4_files_created = NULL;
}

assertFrameObject(frame_frame_watchdog$utils$dirsnapshot$$$function__4_files_created);

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


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__5_files_deleted(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_watchdog$utils$dirsnapshot$$$function__5_files_deleted;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$utils$dirsnapshot$$$function__5_files_deleted = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__5_files_deleted)) {
    Py_XDECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__5_files_deleted);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$utils$dirsnapshot$$$function__5_files_deleted == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__5_files_deleted = MAKE_FUNCTION_FRAME(tstate, code_objects_69bed2d7abc68baa4d8566721c493eb5, module_watchdog$utils$dirsnapshot, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__5_files_deleted->m_type_description == NULL);
frame_frame_watchdog$utils$dirsnapshot$$$function__5_files_deleted = cache_frame_frame_watchdog$utils$dirsnapshot$$$function__5_files_deleted;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$dirsnapshot$$$function__5_files_deleted);
assert(Py_REFCNT(frame_frame_watchdog$utils$dirsnapshot$$$function__5_files_deleted) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__files_deleted);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$dirsnapshot$$$function__5_files_deleted, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$dirsnapshot$$$function__5_files_deleted->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$dirsnapshot$$$function__5_files_deleted, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$utils$dirsnapshot$$$function__5_files_deleted,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$utils$dirsnapshot$$$function__5_files_deleted == cache_frame_frame_watchdog$utils$dirsnapshot$$$function__5_files_deleted) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__5_files_deleted);
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__5_files_deleted = NULL;
}

assertFrameObject(frame_frame_watchdog$utils$dirsnapshot$$$function__5_files_deleted);

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


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__6_files_modified(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_watchdog$utils$dirsnapshot$$$function__6_files_modified;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$utils$dirsnapshot$$$function__6_files_modified = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__6_files_modified)) {
    Py_XDECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__6_files_modified);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$utils$dirsnapshot$$$function__6_files_modified == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__6_files_modified = MAKE_FUNCTION_FRAME(tstate, code_objects_ee7694c0ec333651a98cda937bf4153f, module_watchdog$utils$dirsnapshot, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__6_files_modified->m_type_description == NULL);
frame_frame_watchdog$utils$dirsnapshot$$$function__6_files_modified = cache_frame_frame_watchdog$utils$dirsnapshot$$$function__6_files_modified;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$dirsnapshot$$$function__6_files_modified);
assert(Py_REFCNT(frame_frame_watchdog$utils$dirsnapshot$$$function__6_files_modified) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__files_modified);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$dirsnapshot$$$function__6_files_modified, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$dirsnapshot$$$function__6_files_modified->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$dirsnapshot$$$function__6_files_modified, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$utils$dirsnapshot$$$function__6_files_modified,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$utils$dirsnapshot$$$function__6_files_modified == cache_frame_frame_watchdog$utils$dirsnapshot$$$function__6_files_modified) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__6_files_modified);
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__6_files_modified = NULL;
}

assertFrameObject(frame_frame_watchdog$utils$dirsnapshot$$$function__6_files_modified);

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


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__7_files_moved(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_watchdog$utils$dirsnapshot$$$function__7_files_moved;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$utils$dirsnapshot$$$function__7_files_moved = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__7_files_moved)) {
    Py_XDECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__7_files_moved);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$utils$dirsnapshot$$$function__7_files_moved == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__7_files_moved = MAKE_FUNCTION_FRAME(tstate, code_objects_371d83801f1d7924058d6d3f3f82439f, module_watchdog$utils$dirsnapshot, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__7_files_moved->m_type_description == NULL);
frame_frame_watchdog$utils$dirsnapshot$$$function__7_files_moved = cache_frame_frame_watchdog$utils$dirsnapshot$$$function__7_files_moved;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$dirsnapshot$$$function__7_files_moved);
assert(Py_REFCNT(frame_frame_watchdog$utils$dirsnapshot$$$function__7_files_moved) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__files_moved);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$dirsnapshot$$$function__7_files_moved, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$dirsnapshot$$$function__7_files_moved->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$dirsnapshot$$$function__7_files_moved, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$utils$dirsnapshot$$$function__7_files_moved,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$utils$dirsnapshot$$$function__7_files_moved == cache_frame_frame_watchdog$utils$dirsnapshot$$$function__7_files_moved) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__7_files_moved);
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__7_files_moved = NULL;
}

assertFrameObject(frame_frame_watchdog$utils$dirsnapshot$$$function__7_files_moved);

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


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__8_dirs_modified(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_watchdog$utils$dirsnapshot$$$function__8_dirs_modified;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$utils$dirsnapshot$$$function__8_dirs_modified = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__8_dirs_modified)) {
    Py_XDECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__8_dirs_modified);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$utils$dirsnapshot$$$function__8_dirs_modified == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__8_dirs_modified = MAKE_FUNCTION_FRAME(tstate, code_objects_d5711e5cbf566be64a14a2dc5a8c1b8d, module_watchdog$utils$dirsnapshot, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__8_dirs_modified->m_type_description == NULL);
frame_frame_watchdog$utils$dirsnapshot$$$function__8_dirs_modified = cache_frame_frame_watchdog$utils$dirsnapshot$$$function__8_dirs_modified;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$dirsnapshot$$$function__8_dirs_modified);
assert(Py_REFCNT(frame_frame_watchdog$utils$dirsnapshot$$$function__8_dirs_modified) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__dirs_modified);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$dirsnapshot$$$function__8_dirs_modified, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$dirsnapshot$$$function__8_dirs_modified->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$dirsnapshot$$$function__8_dirs_modified, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$utils$dirsnapshot$$$function__8_dirs_modified,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$utils$dirsnapshot$$$function__8_dirs_modified == cache_frame_frame_watchdog$utils$dirsnapshot$$$function__8_dirs_modified) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__8_dirs_modified);
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__8_dirs_modified = NULL;
}

assertFrameObject(frame_frame_watchdog$utils$dirsnapshot$$$function__8_dirs_modified);

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


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__9_dirs_moved(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_watchdog$utils$dirsnapshot$$$function__9_dirs_moved;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$utils$dirsnapshot$$$function__9_dirs_moved = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__9_dirs_moved)) {
    Py_XDECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__9_dirs_moved);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$utils$dirsnapshot$$$function__9_dirs_moved == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__9_dirs_moved = MAKE_FUNCTION_FRAME(tstate, code_objects_234d119fe84073d9063c8586a67a1884, module_watchdog$utils$dirsnapshot, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__9_dirs_moved->m_type_description == NULL);
frame_frame_watchdog$utils$dirsnapshot$$$function__9_dirs_moved = cache_frame_frame_watchdog$utils$dirsnapshot$$$function__9_dirs_moved;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$dirsnapshot$$$function__9_dirs_moved);
assert(Py_REFCNT(frame_frame_watchdog$utils$dirsnapshot$$$function__9_dirs_moved) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__dirs_moved);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$dirsnapshot$$$function__9_dirs_moved, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$dirsnapshot$$$function__9_dirs_moved->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$dirsnapshot$$$function__9_dirs_moved, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$utils$dirsnapshot$$$function__9_dirs_moved,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$utils$dirsnapshot$$$function__9_dirs_moved == cache_frame_frame_watchdog$utils$dirsnapshot$$$function__9_dirs_moved) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__9_dirs_moved);
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__9_dirs_moved = NULL;
}

assertFrameObject(frame_frame_watchdog$utils$dirsnapshot$$$function__9_dirs_moved);

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


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__10_dirs_deleted(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_watchdog$utils$dirsnapshot$$$function__10_dirs_deleted;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$utils$dirsnapshot$$$function__10_dirs_deleted = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__10_dirs_deleted)) {
    Py_XDECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__10_dirs_deleted);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$utils$dirsnapshot$$$function__10_dirs_deleted == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__10_dirs_deleted = MAKE_FUNCTION_FRAME(tstate, code_objects_9f78a58bf4467da36055030884a51f20, module_watchdog$utils$dirsnapshot, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__10_dirs_deleted->m_type_description == NULL);
frame_frame_watchdog$utils$dirsnapshot$$$function__10_dirs_deleted = cache_frame_frame_watchdog$utils$dirsnapshot$$$function__10_dirs_deleted;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$dirsnapshot$$$function__10_dirs_deleted);
assert(Py_REFCNT(frame_frame_watchdog$utils$dirsnapshot$$$function__10_dirs_deleted) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__dirs_deleted);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$dirsnapshot$$$function__10_dirs_deleted, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$dirsnapshot$$$function__10_dirs_deleted->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$dirsnapshot$$$function__10_dirs_deleted, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$utils$dirsnapshot$$$function__10_dirs_deleted,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$utils$dirsnapshot$$$function__10_dirs_deleted == cache_frame_frame_watchdog$utils$dirsnapshot$$$function__10_dirs_deleted) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__10_dirs_deleted);
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__10_dirs_deleted = NULL;
}

assertFrameObject(frame_frame_watchdog$utils$dirsnapshot$$$function__10_dirs_deleted);

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


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__11_dirs_created(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_watchdog$utils$dirsnapshot$$$function__11_dirs_created;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$utils$dirsnapshot$$$function__11_dirs_created = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__11_dirs_created)) {
    Py_XDECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__11_dirs_created);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$utils$dirsnapshot$$$function__11_dirs_created == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__11_dirs_created = MAKE_FUNCTION_FRAME(tstate, code_objects_a7a67c1700a52ca64b928d669f836e86, module_watchdog$utils$dirsnapshot, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__11_dirs_created->m_type_description == NULL);
frame_frame_watchdog$utils$dirsnapshot$$$function__11_dirs_created = cache_frame_frame_watchdog$utils$dirsnapshot$$$function__11_dirs_created;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$dirsnapshot$$$function__11_dirs_created);
assert(Py_REFCNT(frame_frame_watchdog$utils$dirsnapshot$$$function__11_dirs_created) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__dirs_created);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$dirsnapshot$$$function__11_dirs_created, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$dirsnapshot$$$function__11_dirs_created->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$dirsnapshot$$$function__11_dirs_created, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$utils$dirsnapshot$$$function__11_dirs_created,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$utils$dirsnapshot$$$function__11_dirs_created == cache_frame_frame_watchdog$utils$dirsnapshot$$$function__11_dirs_created) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__11_dirs_created);
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__11_dirs_created = NULL;
}

assertFrameObject(frame_frame_watchdog$utils$dirsnapshot$$$function__11_dirs_created);

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


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__12___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_path = python_pars[1];
PyObject *par_recursive = python_pars[2];
PyObject *par_stat = python_pars[3];
PyObject *par_listdir = python_pars[4];
PyObject *par_ignore_device = python_pars[5];
struct Nuitka_FrameObject *frame_frame_watchdog$utils$dirsnapshot$$$function__12___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$utils$dirsnapshot$$$function__12___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__12___init__)) {
    Py_XDECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__12___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$utils$dirsnapshot$$$function__12___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__12___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_ec256f452d97282dd10d2e8336a8c391, module_watchdog$utils$dirsnapshot, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__12___init__->m_type_description == NULL);
frame_frame_watchdog$utils$dirsnapshot$$$function__12___init__ = cache_frame_frame_watchdog$utils$dirsnapshot$$$function__12___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$dirsnapshot$$$function__12___init__);
assert(Py_REFCNT(frame_frame_watchdog$utils$dirsnapshot$$$function__12___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_path);
tmp_assattr_value_1 = par_path;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, const_str_plain_path, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_recursive);
tmp_assattr_value_2 = par_recursive;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_recursive, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_stat);
tmp_assattr_value_3 = par_stat;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, const_str_plain_stat, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_listdir);
tmp_assattr_value_4 = par_listdir;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, const_str_plain_listdir, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(par_ignore_device);
tmp_assattr_value_5 = par_ignore_device;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_ignore_device, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$dirsnapshot$$$function__12___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$dirsnapshot$$$function__12___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$dirsnapshot$$$function__12___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$utils$dirsnapshot$$$function__12___init__,
    type_description_1,
    par_self,
    par_path,
    par_recursive,
    par_stat,
    par_listdir,
    par_ignore_device
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$utils$dirsnapshot$$$function__12___init__ == cache_frame_frame_watchdog$utils$dirsnapshot$$$function__12___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__12___init__);
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__12___init__ = NULL;
}

assertFrameObject(frame_frame_watchdog$utils$dirsnapshot$$$function__12___init__);

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
CHECK_OBJECT(par_recursive);
Py_DECREF(par_recursive);
CHECK_OBJECT(par_stat);
Py_DECREF(par_stat);
CHECK_OBJECT(par_listdir);
Py_DECREF(par_listdir);
CHECK_OBJECT(par_ignore_device);
Py_DECREF(par_ignore_device);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
CHECK_OBJECT(par_recursive);
Py_DECREF(par_recursive);
CHECK_OBJECT(par_stat);
Py_DECREF(par_stat);
CHECK_OBJECT(par_listdir);
Py_DECREF(par_listdir);
CHECK_OBJECT(par_ignore_device);
Py_DECREF(par_ignore_device);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__13___enter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_watchdog$utils$dirsnapshot$$$function__13___enter__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$utils$dirsnapshot$$$function__13___enter__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__13___enter__)) {
    Py_XDECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__13___enter__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$utils$dirsnapshot$$$function__13___enter__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__13___enter__ = MAKE_FUNCTION_FRAME(tstate, code_objects_2ade1a51abddb4ca0b244e909ed76faf, module_watchdog$utils$dirsnapshot, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__13___enter__->m_type_description == NULL);
frame_frame_watchdog$utils$dirsnapshot$$$function__13___enter__ = cache_frame_frame_watchdog$utils$dirsnapshot$$$function__13___enter__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$dirsnapshot$$$function__13___enter__);
assert(Py_REFCNT(frame_frame_watchdog$utils$dirsnapshot$$$function__13___enter__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_watchdog$utils$dirsnapshot$$$function__13___enter__->m_frame.f_lineno = 253;
tmp_assattr_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_snapshot);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_pre_snapshot, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$dirsnapshot$$$function__13___enter__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$dirsnapshot$$$function__13___enter__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$dirsnapshot$$$function__13___enter__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$utils$dirsnapshot$$$function__13___enter__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$utils$dirsnapshot$$$function__13___enter__ == cache_frame_frame_watchdog$utils$dirsnapshot$$$function__13___enter__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__13___enter__);
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__13___enter__ = NULL;
}

assertFrameObject(frame_frame_watchdog$utils$dirsnapshot$$$function__13___enter__);

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


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__14___exit__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_args = python_pars[1];
struct Nuitka_FrameObject *frame_frame_watchdog$utils$dirsnapshot$$$function__14___exit__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$utils$dirsnapshot$$$function__14___exit__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__14___exit__)) {
    Py_XDECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__14___exit__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$utils$dirsnapshot$$$function__14___exit__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__14___exit__ = MAKE_FUNCTION_FRAME(tstate, code_objects_ff7539da70627de43d7c1e7381d759d7, module_watchdog$utils$dirsnapshot, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__14___exit__->m_type_description == NULL);
frame_frame_watchdog$utils$dirsnapshot$$$function__14___exit__ = cache_frame_frame_watchdog$utils$dirsnapshot$$$function__14___exit__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$dirsnapshot$$$function__14___exit__);
assert(Py_REFCNT(frame_frame_watchdog$utils$dirsnapshot$$$function__14___exit__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_watchdog$utils$dirsnapshot$$$function__14___exit__->m_frame.f_lineno = 256;
tmp_assattr_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_snapshot);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_post_snapshot, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_assattr_target_2;
tmp_called_value_1 = module_var_accessor_watchdog$utils$dirsnapshot$DirectorySnapshotDiff(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DirectorySnapshotDiff);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 257;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_pre_snapshot);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_post_snapshot);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 259;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_ignore_device);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 260;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_watchdog$utils$dirsnapshot$$$function__14___exit__->m_frame.f_lineno = 257;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assattr_value_2 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_ignore_device_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_diff, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$dirsnapshot$$$function__14___exit__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$dirsnapshot$$$function__14___exit__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$dirsnapshot$$$function__14___exit__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$utils$dirsnapshot$$$function__14___exit__,
    type_description_1,
    par_self,
    par_args
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$utils$dirsnapshot$$$function__14___exit__ == cache_frame_frame_watchdog$utils$dirsnapshot$$$function__14___exit__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__14___exit__);
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__14___exit__ = NULL;
}

assertFrameObject(frame_frame_watchdog$utils$dirsnapshot$$$function__14___exit__);

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


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__15_get_snapshot(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_watchdog$utils$dirsnapshot$$$function__15_get_snapshot;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$utils$dirsnapshot$$$function__15_get_snapshot = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__15_get_snapshot)) {
    Py_XDECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__15_get_snapshot);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$utils$dirsnapshot$$$function__15_get_snapshot == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__15_get_snapshot = MAKE_FUNCTION_FRAME(tstate, code_objects_fccfbc23363d5e637c7e5d5d09789ca5, module_watchdog$utils$dirsnapshot, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__15_get_snapshot->m_type_description == NULL);
frame_frame_watchdog$utils$dirsnapshot$$$function__15_get_snapshot = cache_frame_frame_watchdog$utils$dirsnapshot$$$function__15_get_snapshot;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$dirsnapshot$$$function__15_get_snapshot);
assert(Py_REFCNT(frame_frame_watchdog$utils$dirsnapshot$$$function__15_get_snapshot) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_expression_value_4;
tmp_called_value_1 = module_var_accessor_watchdog$utils$dirsnapshot$DirectorySnapshot(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DirectorySnapshot);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 264;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_path);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_recursive);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 266;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_stat);
if (tmp_kw_call_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);

exception_lineno = 267;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_kw_call_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_listdir);
if (tmp_kw_call_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_2_1);

exception_lineno = 268;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_watchdog$utils$dirsnapshot$$$function__15_get_snapshot->m_frame.f_lineno = 264;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_96c6a6e53d5d0691376b38cd0c8ab932_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
CHECK_OBJECT(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_2_1);
CHECK_OBJECT(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_3_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$dirsnapshot$$$function__15_get_snapshot, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$dirsnapshot$$$function__15_get_snapshot->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$dirsnapshot$$$function__15_get_snapshot, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$utils$dirsnapshot$$$function__15_get_snapshot,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$utils$dirsnapshot$$$function__15_get_snapshot == cache_frame_frame_watchdog$utils$dirsnapshot$$$function__15_get_snapshot) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__15_get_snapshot);
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__15_get_snapshot = NULL;
}

assertFrameObject(frame_frame_watchdog$utils$dirsnapshot$$$function__15_get_snapshot);

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


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__16___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_path = python_pars[1];
PyObject *par_recursive = python_pars[2];
PyObject *par_stat = python_pars[3];
PyObject *par_listdir = python_pars[4];
PyObject *var_st = NULL;
PyObject *var_p = NULL;
PyObject *var_i = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_watchdog$utils$dirsnapshot$$$function__16___init__;
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
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$utils$dirsnapshot$$$function__16___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__16___init__)) {
    Py_XDECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__16___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$utils$dirsnapshot$$$function__16___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__16___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_86c1a6cf3198cddd25b1b42c4133c626, module_watchdog$utils$dirsnapshot, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__16___init__->m_type_description == NULL);
frame_frame_watchdog$utils$dirsnapshot$$$function__16___init__ = cache_frame_frame_watchdog$utils$dirsnapshot$$$function__16___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$dirsnapshot$$$function__16___init__);
assert(Py_REFCNT(frame_frame_watchdog$utils$dirsnapshot$$$function__16___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_recursive);
tmp_assattr_value_1 = par_recursive;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_recursive, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_stat);
tmp_assattr_value_2 = par_stat;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, const_str_plain_stat, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_listdir);
tmp_assattr_value_3 = par_listdir;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, const_str_plain_listdir, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = MAKE_DICT_EMPTY(tstate);
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__stat_info, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
tmp_assattr_value_5 = MAKE_DICT_EMPTY(tstate);
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__inode_to_path, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_path);
tmp_args_element_value_1 = par_path;
frame_frame_watchdog$utils$dirsnapshot$$$function__16___init__->m_frame.f_lineno = 309;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, const_str_plain_stat, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_st == NULL);
var_st = tmp_assign_source_1;
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var_st);
tmp_ass_subvalue_1 = var_st;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__stat_info);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_path);
tmp_ass_subscript_1 = par_path;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_ass_subscript_2;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_path);
tmp_ass_subvalue_2 = par_path;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__inode_to_path);
if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_st);
tmp_expression_value_3 = var_st;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_st_ino);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subscribed_2);

exception_lineno = 311;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_4;
PyTuple_SET_ITEM(tmp_ass_subscript_2, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_st);
tmp_expression_value_4 = var_st;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_st_dev);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "oooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_ass_subscript_2, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscript_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
CHECK_OBJECT(tmp_ass_subscript_2);
Py_DECREF(tmp_ass_subscript_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(par_path);
tmp_args_element_value_2 = par_path;
frame_frame_watchdog$utils$dirsnapshot$$$function__16___init__->m_frame.f_lineno = 313;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_walk, tmp_args_element_value_2);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "oooooooo";
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
type_description_1 = "oooooooo";
exception_lineno = 313;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 313;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 313;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
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



exception_lineno = 313;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
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

goto try_except_handler_3;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
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

goto try_except_handler_2;
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
{
    PyObject *old = var_p;
    var_p = tmp_assign_source_7;
    Py_INCREF(var_p);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_st;
    var_st = tmp_assign_source_8;
    Py_INCREF(var_st);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_9;
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_st);
tmp_expression_value_5 = var_st;
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_st_ino);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_9 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyTuple_SET_ITEM(tmp_assign_source_9, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_st);
tmp_expression_value_6 = var_st;
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_st_dev);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "oooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_9, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_assign_source_9);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_ass_subscript_3;
CHECK_OBJECT(var_p);
tmp_ass_subvalue_3 = var_p;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 315;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_7 = par_self;
tmp_ass_subscribed_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__inode_to_path);
if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_i);
tmp_ass_subscript_3 = var_i;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subscribed_3);
Py_DECREF(tmp_ass_subscribed_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_ass_subscript_4;
CHECK_OBJECT(var_st);
tmp_ass_subvalue_4 = var_st;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 316;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_8 = par_self;
tmp_ass_subscribed_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__stat_info);
if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_p);
tmp_ass_subscript_4 = var_p;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subscribed_4);
Py_DECREF(tmp_ass_subscribed_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$dirsnapshot$$$function__16___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$dirsnapshot$$$function__16___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$dirsnapshot$$$function__16___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$utils$dirsnapshot$$$function__16___init__,
    type_description_1,
    par_self,
    par_path,
    par_recursive,
    par_stat,
    par_listdir,
    var_st,
    var_p,
    var_i
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$utils$dirsnapshot$$$function__16___init__ == cache_frame_frame_watchdog$utils$dirsnapshot$$$function__16___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__16___init__);
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__16___init__ = NULL;
}

assertFrameObject(frame_frame_watchdog$utils$dirsnapshot$$$function__16___init__);

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
Py_XDECREF(var_st);
var_st = NULL;
Py_XDECREF(var_p);
var_p = NULL;
Py_XDECREF(var_i);
var_i = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_st);
var_st = NULL;
Py_XDECREF(var_p);
var_p = NULL;
Py_XDECREF(var_i);
var_i = NULL;
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
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
CHECK_OBJECT(par_recursive);
Py_DECREF(par_recursive);
CHECK_OBJECT(par_stat);
Py_DECREF(par_stat);
CHECK_OBJECT(par_listdir);
Py_DECREF(par_listdir);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
CHECK_OBJECT(par_recursive);
Py_DECREF(par_recursive);
CHECK_OBJECT(par_stat);
Py_DECREF(par_stat);
CHECK_OBJECT(par_listdir);
Py_DECREF(par_listdir);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__17_walk(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_root = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_root;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_GENERATOR_watchdog$utils$dirsnapshot$$$function__17_walk$$$genobj__1_walk(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_root);
CHECK_OBJECT(par_root);
Py_DECREF(par_root);
par_root = NULL;
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
struct watchdog$utils$dirsnapshot$$$function__17_walk$$$genobj__1_walk_locals {
PyObject *var_paths;
PyObject *var_e;
PyObject *var_entries;
PyObject *var_p;
PyObject *var_entry;
PyObject *var_path;
PyObject *var_st;
PyObject *outline_0_var_entry;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
PyObject *tmp_for_loop_2__for_iterator;
PyObject *tmp_for_loop_2__iter_value;
PyObject *tmp_listcomp_1__$0;
PyObject *tmp_listcomp_1__contraction;
PyObject *tmp_listcomp_1__iter_value_0;
PyObject *tmp_tuple_unpack_1__element_1;
PyObject *tmp_tuple_unpack_1__element_2;
PyObject *tmp_tuple_unpack_1__source_iter;
PyObject *tmp_with_1__enter;
PyObject *tmp_with_1__exit;
nuitka_bool tmp_with_1__indicator;
PyObject *tmp_with_1__source;
PyObject *tmp_with_2__enter;
PyObject *tmp_with_2__exit;
nuitka_bool tmp_with_2__indicator;
PyObject *tmp_with_2__source;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
int exception_keeper_lineno_6;
struct Nuitka_ExceptionStackItem exception_preserved_2;
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
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
int exception_keeper_lineno_13;
struct Nuitka_ExceptionStackItem exception_preserved_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
int exception_keeper_lineno_18;
};
#endif

static PyObject *watchdog$utils$dirsnapshot$$$function__17_walk$$$genobj__1_walk_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct watchdog$utils$dirsnapshot$$$function__17_walk$$$genobj__1_walk_locals *generator_heap = (struct watchdog$utils$dirsnapshot$$$function__17_walk$$$genobj__1_walk_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_paths = NULL;
generator_heap->var_e = NULL;
generator_heap->var_entries = NULL;
generator_heap->var_p = NULL;
generator_heap->var_entry = NULL;
generator_heap->var_path = NULL;
generator_heap->var_st = NULL;
generator_heap->outline_0_var_entry = NULL;
generator_heap->tmp_for_loop_1__for_iterator = NULL;
generator_heap->tmp_for_loop_1__iter_value = NULL;
generator_heap->tmp_for_loop_2__for_iterator = NULL;
generator_heap->tmp_for_loop_2__iter_value = NULL;
generator_heap->tmp_listcomp_1__$0 = NULL;
generator_heap->tmp_listcomp_1__contraction = NULL;
generator_heap->tmp_listcomp_1__iter_value_0 = NULL;
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
generator_heap->tmp_with_1__enter = NULL;
generator_heap->tmp_with_1__exit = NULL;
generator_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
generator_heap->tmp_with_1__source = NULL;
generator_heap->tmp_with_2__enter = NULL;
generator_heap->tmp_with_2__exit = NULL;
generator_heap->tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
generator_heap->tmp_with_2__source = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_34e69b8250345f19a04e7345bf82acdb, module_watchdog$utils$dirsnapshot, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
{
PyObject *tmp_assign_source_1;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 320;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_3;
}

tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_listdir);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 320;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_3;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_root);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 320;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_3;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
generator->m_frame->m_frame.f_lineno = 320;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 320;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_3;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 320;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_3;
}
assert(generator_heap->tmp_listcomp_1__$0 == NULL);
generator_heap->tmp_listcomp_1__$0 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 0);
assert(generator_heap->tmp_listcomp_1__contraction == NULL);
generator_heap->tmp_listcomp_1__contraction = tmp_assign_source_3;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_4;
CHECK_OBJECT(generator_heap->tmp_listcomp_1__$0);
tmp_next_source_1 = generator_heap->tmp_listcomp_1__$0;
tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "ccooooooo";
generator_heap->exception_lineno = 320;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = generator_heap->tmp_listcomp_1__iter_value_0;
    generator_heap->tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(generator_heap->tmp_listcomp_1__iter_value_0);
tmp_assign_source_5 = generator_heap->tmp_listcomp_1__iter_value_0;
{
    PyObject *old = generator_heap->outline_0_var_entry;
    generator_heap->outline_0_var_entry = tmp_assign_source_5;
    Py_INCREF(generator_heap->outline_0_var_entry);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction);
tmp_append_list_1 = generator_heap->tmp_listcomp_1__contraction;
tmp_expression_value_2 = IMPORT_HARD_NTPATH();
assert(!(tmp_expression_value_2 == NULL));
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_join);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 320;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_4;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_root);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 320;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_4;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
CHECK_OBJECT(generator_heap->outline_0_var_entry);
tmp_expression_value_3 = generator_heap->outline_0_var_entry;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_name);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_2);

generator_heap->exception_lineno = 320;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_4;
}
generator->m_frame->m_frame.f_lineno = 320;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 320;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_4;
}
generator_heap->tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 320;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_4;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 320;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_4;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction);
tmp_assign_source_1 = generator_heap->tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_1);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
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
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
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
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto try_except_handler_3;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_XDECREF(generator_heap->outline_0_var_entry);
generator_heap->outline_0_var_entry = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->outline_0_var_entry);
generator_heap->outline_0_var_entry = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
generator_heap->exception_lineno = 320;
goto try_except_handler_2;
outline_result_1:;
assert(generator_heap->var_paths == NULL);
generator_heap->var_paths = tmp_assign_source_1;
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
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
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_OSError;
generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(generator_heap->tmp_res == -1));
tmp_condition_result_1 = (generator_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_6); 
assert(generator_heap->var_e == NULL);
Py_INCREF(tmp_assign_source_6);
generator_heap->var_e = tmp_assign_source_6;
}
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(generator_heap->var_e);
tmp_expression_value_4 = generator_heap->var_e;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_errno);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 326;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_6;
}
tmp_expression_value_5 = module_var_accessor_watchdog$utils$dirsnapshot$errno(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_errno);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_cmp_expr_left_2);

generator_heap->exception_lineno = 326;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_6;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_ENOENT);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

generator_heap->exception_lineno = 326;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_6;
}
tmp_cmp_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyTuple_SET_ITEM(tmp_cmp_expr_right_2, 0, tmp_tuple_element_1);
tmp_expression_value_6 = module_var_accessor_watchdog$utils$dirsnapshot$errno(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_errno);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 326;
generator_heap->type_description_1 = "ccooooooo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_ENOTDIR);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 326;
generator_heap->type_description_1 = "ccooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_cmp_expr_right_2, 1, tmp_tuple_element_1);
tmp_expression_value_7 = module_var_accessor_watchdog$utils$dirsnapshot$errno(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_errno);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 326;
generator_heap->type_description_1 = "ccooooooo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_EINVAL);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 326;
generator_heap->type_description_1 = "ccooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_cmp_expr_right_2, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_right_2);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 326;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_6;
}
tmp_condition_result_2 = (generator_heap->tmp_res == 1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
generator_heap->tmp_return_value = Py_None;
Py_INCREF(generator_heap->tmp_return_value);
goto try_return_handler_6;
goto branch_end_2;
branch_no_2:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 329;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "ccooooooo";
goto try_except_handler_6;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_XDECREF(generator_heap->var_e);
generator_heap->var_e = NULL;

goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_e);
generator_heap->var_e = NULL;

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
goto branch_end_1;
branch_no_1:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 319;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "ccooooooo";
goto try_except_handler_5;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

goto frame_return_exit_1;
// Exception handler code:
try_except_handler_5:;
generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_5 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_5;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = MAKE_LIST_EMPTY(tstate, 0);
assert(generator_heap->var_entries == NULL);
generator_heap->var_entries = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(generator_heap->var_paths);
tmp_iter_arg_2 = generator_heap->var_paths;
tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 332;
generator_heap->type_description_1 = "ccooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_8;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_9;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
tmp_next_source_2 = generator_heap->tmp_for_loop_1__for_iterator;
tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_9 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "ccooooooo";
generator_heap->exception_lineno = 332;
        goto try_except_handler_7;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
    generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_10 = generator_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = generator_heap->var_p;
    generator_heap->var_p = tmp_assign_source_10;
    Py_INCREF(generator_heap->var_p);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_watchdog$utils$dirsnapshot$contextlib(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_contextlib);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 333;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_8;
}
generator->m_frame->m_frame.f_lineno = 333;
tmp_assign_source_11 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_suppress,
    PyTuple_GET_ITEM(mod_consts.const_tuple_type_OSError_tuple, 0)
);

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 333;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = generator_heap->tmp_with_1__source;
    generator_heap->tmp_with_1__source = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(generator_heap->tmp_with_1__source);
tmp_expression_value_8 = generator_heap->tmp_with_1__source;
tmp_called_value_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_8, const_str_plain___enter__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 333;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_8;
}
generator->m_frame->m_frame.f_lineno = 333;
tmp_assign_source_12 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 333;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = generator_heap->tmp_with_1__enter;
    generator_heap->tmp_with_1__enter = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(generator_heap->tmp_with_1__source);
tmp_expression_value_9 = generator_heap->tmp_with_1__source;
tmp_assign_source_13 = LOOKUP_SPECIAL(tstate, tmp_expression_value_9, const_str_plain___exit__);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 333;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = generator_heap->tmp_with_1__exit;
    generator_heap->tmp_with_1__exit = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_assign_source_14;
tmp_assign_source_14 = NUITKA_BOOL_TRUE;
generator_heap->tmp_with_1__indicator = tmp_assign_source_14;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(generator_heap->var_p);
tmp_tuple_element_2 = generator_heap->var_p;
tmp_assign_source_15 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_4;
PyTuple_SET_ITEM0(tmp_assign_source_15, 0, tmp_tuple_element_2);
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 334;
generator_heap->type_description_1 = "ccooooooo";
    goto tuple_build_exception_2;
}

tmp_called_instance_2 = Nuitka_Cell_GET(generator->m_closure[1]);
CHECK_OBJECT(generator_heap->var_p);
tmp_args_element_value_4 = generator_heap->var_p;
generator->m_frame->m_frame.f_lineno = 334;
tmp_tuple_element_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, const_str_plain_stat, tmp_args_element_value_4);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 334;
generator_heap->type_description_1 = "ccooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_15, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_assign_source_15);
goto try_except_handler_10;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
{
    PyObject *old = generator_heap->var_entry;
    generator_heap->var_entry = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
if (generator_heap->var_entries == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_entries);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 335;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_10;
}

tmp_list_arg_value_1 = generator_heap->var_entries;
CHECK_OBJECT(generator_heap->var_entry);
tmp_item_value_1 = generator_heap->var_entry;
generator_heap->tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(generator_heap->tmp_result == false));
}
{
PyObject *tmp_expression_value_10;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_entry);
tmp_expression_value_10 = generator_heap->var_entry;
Py_INCREF(tmp_expression_value_10);
generator->m_yield_return_index = 1;
return tmp_expression_value_10;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 336;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_10;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
goto try_end_2;
// Exception handler code:
try_except_handler_10:;
generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_6 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Preserve existing published exception id 2.
generator_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_6);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_6);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_6, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_6 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_6);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_6, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_6);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = PyExc_BaseException;
generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
assert(!(generator_heap->tmp_res == -1));
tmp_condition_result_3 = (generator_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
nuitka_bool tmp_assign_source_16;
tmp_assign_source_16 = NUITKA_BOOL_FALSE;
generator_heap->tmp_with_1__indicator = tmp_assign_source_16;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_4 = generator_heap->tmp_with_1__exit;
tmp_args_element_value_5 = EXC_TYPE(tstate);
tmp_args_element_value_6 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_6); 
tmp_args_element_value_7 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_7 == NULL) {
    tmp_args_element_value_7 = Py_None;
}
generator->m_frame->m_frame.f_lineno = 333;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 333;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_11;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 333;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_11;
}
tmp_condition_result_4 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 333;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "ccooooooo";
goto try_except_handler_11;
branch_no_4:;
goto branch_end_3;
branch_no_3:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 333;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "ccooooooo";
goto try_except_handler_11;
branch_end_3:;
goto try_end_3;
// Exception handler code:
try_except_handler_11:;
generator_heap->exception_keeper_lineno_7 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_7 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_2);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_7;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_7;

goto try_except_handler_9;
// End of try:
try_end_3:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_2);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
goto try_end_4;
// Exception handler code:
try_except_handler_9:;
generator_heap->exception_keeper_lineno_8 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_8 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

{
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_4;
nuitka_bool tmp_cmp_expr_right_4;
assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_4 = generator_heap->tmp_with_1__indicator;
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
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_1;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_5 = generator_heap->tmp_with_1__exit;
generator->m_frame->m_frame.f_lineno = 333;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&generator_heap->exception_keeper_name_8);

generator_heap->exception_lineno = 333;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_5:;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_8;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_8;

goto try_except_handler_8;
// End of try:
try_end_4:;
{
bool tmp_condition_result_6;
nuitka_bool tmp_cmp_expr_left_5;
nuitka_bool tmp_cmp_expr_right_5;
assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_5 = generator_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
tmp_condition_result_6 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_2;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_6 = generator_heap->tmp_with_1__exit;
generator->m_frame->m_frame.f_lineno = 333;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 333;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_6:;
goto try_end_5;
// Exception handler code:
try_except_handler_8:;
generator_heap->exception_keeper_lineno_9 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_9 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_with_1__source);
generator_heap->tmp_with_1__source = NULL;
Py_XDECREF(generator_heap->tmp_with_1__enter);
generator_heap->tmp_with_1__enter = NULL;
Py_XDECREF(generator_heap->tmp_with_1__exit);
generator_heap->tmp_with_1__exit = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_9;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_9;

goto try_except_handler_7;
// End of try:
try_end_5:;
CHECK_OBJECT(generator_heap->tmp_with_1__source);
CHECK_OBJECT(generator_heap->tmp_with_1__source);
Py_DECREF(generator_heap->tmp_with_1__source);
generator_heap->tmp_with_1__source = NULL;
CHECK_OBJECT(generator_heap->tmp_with_1__enter);
CHECK_OBJECT(generator_heap->tmp_with_1__enter);
Py_DECREF(generator_heap->tmp_with_1__enter);
generator_heap->tmp_with_1__enter = NULL;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
Py_DECREF(generator_heap->tmp_with_1__exit);
generator_heap->tmp_with_1__exit = NULL;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 332;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_7;
}
goto loop_start_2;
loop_end_2:;
goto try_end_6;
// Exception handler code:
try_except_handler_7:;
generator_heap->exception_keeper_lineno_10 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_10 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_10;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_expression_value_11;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 338;
generator_heap->type_description_1 = "ccooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_11 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_recursive);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 338;
generator_heap->type_description_1 = "ccooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_attribute_value_1);

generator_heap->exception_lineno = 338;
generator_heap->type_description_1 = "ccooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_iter_arg_3;
if (generator_heap->var_entries == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_entries);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 339;
generator_heap->type_description_1 = "ccooooooo";
    goto frame_exception_exit_1;
}

tmp_iter_arg_3 = generator_heap->var_entries;
tmp_assign_source_17 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 339;
generator_heap->type_description_1 = "ccooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->tmp_for_loop_2__for_iterator == NULL);
generator_heap->tmp_for_loop_2__for_iterator = tmp_assign_source_17;
}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_18;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
tmp_next_source_3 = generator_heap->tmp_for_loop_2__for_iterator;
tmp_assign_source_18 = ITERATOR_NEXT_ITERATOR(tmp_next_source_3);
if (tmp_assign_source_18 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "ccooooooo";
generator_heap->exception_lineno = 339;
        goto try_except_handler_12;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_2__iter_value;
    generator_heap->tmp_for_loop_2__iter_value = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_iter_arg_4;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__iter_value);
tmp_iter_arg_4 = generator_heap->tmp_for_loop_2__iter_value;
tmp_assign_source_19 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 339;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_13;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
    generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_20;
PyObject *tmp_unpack_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_20 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 339;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_14;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
    generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_unpack_2;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_21 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 339;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_14;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
    generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
generator_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &generator_heap->exception_state, tmp_iterator_name_1, 2);
if (generator_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 339;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_14;
}
}
goto try_end_7;
// Exception handler code:
try_except_handler_14:;
generator_heap->exception_keeper_lineno_11 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_11 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_11;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_11;

goto try_except_handler_13;
// End of try:
try_end_7:;
goto try_end_8;
// Exception handler code:
try_except_handler_13:;
generator_heap->exception_keeper_lineno_12 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_12 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_12;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_12;

goto try_except_handler_12;
// End of try:
try_end_8:;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_22;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
tmp_assign_source_22 = generator_heap->tmp_tuple_unpack_1__element_1;
{
    PyObject *old = generator_heap->var_path;
    generator_heap->var_path = tmp_assign_source_22;
    Py_INCREF(generator_heap->var_path);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_23;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_23 = generator_heap->tmp_tuple_unpack_1__element_2;
{
    PyObject *old = generator_heap->var_st;
    generator_heap->var_st = tmp_assign_source_23;
    Py_INCREF(generator_heap->var_st);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_24;
PyObject *tmp_called_instance_3;
tmp_called_instance_3 = module_var_accessor_watchdog$utils$dirsnapshot$contextlib(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_contextlib);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 340;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_15;
}
generator->m_frame->m_frame.f_lineno = 340;
tmp_assign_source_24 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_suppress,
    PyTuple_GET_ITEM(mod_consts.const_tuple_type_PermissionError_tuple, 0)
);

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 340;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_15;
}
{
    PyObject *old = generator_heap->tmp_with_2__source;
    generator_heap->tmp_with_2__source = tmp_assign_source_24;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(generator_heap->tmp_with_2__source);
tmp_expression_value_12 = generator_heap->tmp_with_2__source;
tmp_called_value_7 = LOOKUP_SPECIAL(tstate, tmp_expression_value_12, const_str_plain___enter__);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 340;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_15;
}
generator->m_frame->m_frame.f_lineno = 340;
tmp_assign_source_25 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_7);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 340;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_15;
}
{
    PyObject *old = generator_heap->tmp_with_2__enter;
    generator_heap->tmp_with_2__enter = tmp_assign_source_25;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(generator_heap->tmp_with_2__source);
tmp_expression_value_13 = generator_heap->tmp_with_2__source;
tmp_assign_source_26 = LOOKUP_SPECIAL(tstate, tmp_expression_value_13, const_str_plain___exit__);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 340;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_15;
}
{
    PyObject *old = generator_heap->tmp_with_2__exit;
    generator_heap->tmp_with_2__exit = tmp_assign_source_26;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_assign_source_27;
tmp_assign_source_27 = NUITKA_BOOL_TRUE;
generator_heap->tmp_with_2__indicator = tmp_assign_source_27;
}
// Tried code:
// Tried code:
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_called_value_8;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_14;
int tmp_truth_name_2;
tmp_called_value_8 = module_var_accessor_watchdog$utils$dirsnapshot$S_ISDIR(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_S_ISDIR);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 341;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_17;
}
CHECK_OBJECT(generator_heap->var_st);
tmp_expression_value_14 = generator_heap->var_st;
tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_st_mode);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 341;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_17;
}
generator->m_frame->m_frame.f_lineno = 341;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_8);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 341;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_17;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_call_result_3);

generator_heap->exception_lineno = 341;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_17;
}
tmp_condition_result_8 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_expression_value_15;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_9;
PyObject *tmp_yieldfrom_result_1;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 342;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_17;
}

tmp_called_instance_4 = Nuitka_Cell_GET(generator->m_closure[1]);
CHECK_OBJECT(generator_heap->var_path);
tmp_args_element_value_9 = generator_heap->var_path;
generator->m_frame->m_frame.f_lineno = 342;
tmp_expression_value_15 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_walk, tmp_args_element_value_9);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 342;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_17;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_instance_4, sizeof(PyObject *), &tmp_args_element_value_9, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 2;
generator->m_yield_from = tmp_expression_value_15;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_instance_4, sizeof(PyObject *), &tmp_args_element_value_9, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 342;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_17;
}
tmp_yieldfrom_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yieldfrom_result_1);
Py_DECREF(tmp_yieldfrom_result_1);
}
branch_no_8:;
goto try_end_9;
// Exception handler code:
try_except_handler_17:;
generator_heap->exception_keeper_lineno_13 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_13 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Preserve existing published exception id 3.
generator_heap->exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_13);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_13);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_13, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_13 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_13);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_13, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_13);
// Tried code:
{
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
tmp_cmp_expr_left_6 = EXC_TYPE(tstate);
tmp_cmp_expr_right_6 = PyExc_BaseException;
generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
assert(!(generator_heap->tmp_res == -1));
tmp_condition_result_9 = (generator_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
nuitka_bool tmp_assign_source_28;
tmp_assign_source_28 = NUITKA_BOOL_FALSE;
generator_heap->tmp_with_2__indicator = tmp_assign_source_28;
}
{
bool tmp_condition_result_10;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
CHECK_OBJECT(generator_heap->tmp_with_2__exit);
tmp_called_value_9 = generator_heap->tmp_with_2__exit;
tmp_args_element_value_10 = EXC_TYPE(tstate);
tmp_args_element_value_11 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_11); 
tmp_args_element_value_12 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_12 == NULL) {
    tmp_args_element_value_12 = Py_None;
}
generator->m_frame->m_frame.f_lineno = 340;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_9, call_args);
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 340;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_18;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 340;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_18;
}
tmp_condition_result_10 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 340;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "ccooooooo";
goto try_except_handler_18;
branch_no_10:;
goto branch_end_9;
branch_no_9:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 340;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "ccooooooo";
goto try_except_handler_18;
branch_end_9:;
goto try_end_10;
// Exception handler code:
try_except_handler_18:;
generator_heap->exception_keeper_lineno_14 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_14 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_3);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_14;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_14;

goto try_except_handler_16;
// End of try:
try_end_10:;
// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_3);

goto try_end_9;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_9:;
goto try_end_11;
// Exception handler code:
try_except_handler_16:;
generator_heap->exception_keeper_lineno_15 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_15 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

{
bool tmp_condition_result_11;
nuitka_bool tmp_cmp_expr_left_7;
nuitka_bool tmp_cmp_expr_right_7;
assert(generator_heap->tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_7 = generator_heap->tmp_with_2__indicator;
tmp_cmp_expr_right_7 = NUITKA_BOOL_TRUE;
tmp_condition_result_11 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_called_value_10;
PyObject *tmp_call_result_4;
CHECK_OBJECT(generator_heap->tmp_with_2__exit);
tmp_called_value_10 = generator_heap->tmp_with_2__exit;
generator->m_frame->m_frame.f_lineno = 340;
tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_10, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&generator_heap->exception_keeper_name_15);

generator_heap->exception_lineno = 340;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_15;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_11:;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_15;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_15;

goto try_except_handler_15;
// End of try:
try_end_11:;
{
bool tmp_condition_result_12;
nuitka_bool tmp_cmp_expr_left_8;
nuitka_bool tmp_cmp_expr_right_8;
assert(generator_heap->tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_8 = generator_heap->tmp_with_2__indicator;
tmp_cmp_expr_right_8 = NUITKA_BOOL_TRUE;
tmp_condition_result_12 = (tmp_cmp_expr_left_8 == tmp_cmp_expr_right_8) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_called_value_11;
PyObject *tmp_call_result_5;
CHECK_OBJECT(generator_heap->tmp_with_2__exit);
tmp_called_value_11 = generator_heap->tmp_with_2__exit;
generator->m_frame->m_frame.f_lineno = 340;
tmp_call_result_5 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_11, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 340;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_15;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_no_12:;
goto try_end_12;
// Exception handler code:
try_except_handler_15:;
generator_heap->exception_keeper_lineno_16 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_16 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_with_2__source);
generator_heap->tmp_with_2__source = NULL;
Py_XDECREF(generator_heap->tmp_with_2__enter);
generator_heap->tmp_with_2__enter = NULL;
Py_XDECREF(generator_heap->tmp_with_2__exit);
generator_heap->tmp_with_2__exit = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_16;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_16;

goto try_except_handler_12;
// End of try:
try_end_12:;
CHECK_OBJECT(generator_heap->tmp_with_2__source);
CHECK_OBJECT(generator_heap->tmp_with_2__source);
Py_DECREF(generator_heap->tmp_with_2__source);
generator_heap->tmp_with_2__source = NULL;
CHECK_OBJECT(generator_heap->tmp_with_2__enter);
CHECK_OBJECT(generator_heap->tmp_with_2__enter);
Py_DECREF(generator_heap->tmp_with_2__enter);
generator_heap->tmp_with_2__enter = NULL;
CHECK_OBJECT(generator_heap->tmp_with_2__exit);
CHECK_OBJECT(generator_heap->tmp_with_2__exit);
Py_DECREF(generator_heap->tmp_with_2__exit);
generator_heap->tmp_with_2__exit = NULL;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 339;
generator_heap->type_description_1 = "ccooooooo";
    goto try_except_handler_12;
}
goto loop_start_3;
loop_end_3:;
goto try_end_13;
// Exception handler code:
try_except_handler_12:;
generator_heap->exception_keeper_lineno_17 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_17 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
generator_heap->tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
generator_heap->tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_17;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_17;

goto frame_exception_exit_1;
// End of try:
try_end_13:;
Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
generator_heap->tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
generator_heap->tmp_for_loop_2__for_iterator = NULL;
branch_no_7:;

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

goto function_return_exit;

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
    generator->m_closure[0],
    generator_heap->var_paths,
    generator_heap->var_e,
    generator_heap->var_entries,
    generator_heap->var_p,
    generator_heap->var_entry,
    generator_heap->var_path,
    generator_heap->var_st
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
goto try_end_14;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_18 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_18 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_paths);
generator_heap->var_paths = NULL;
Py_XDECREF(generator_heap->var_entries);
generator_heap->var_entries = NULL;
Py_XDECREF(generator_heap->var_p);
generator_heap->var_p = NULL;
Py_XDECREF(generator_heap->var_entry);
generator_heap->var_entry = NULL;
Py_XDECREF(generator_heap->var_path);
generator_heap->var_path = NULL;
Py_XDECREF(generator_heap->var_st);
generator_heap->var_st = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_18;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_18;

goto function_exception_exit;
// End of try:
try_end_14:;
CHECK_OBJECT(generator_heap->var_paths);
CHECK_OBJECT(generator_heap->var_paths);
Py_DECREF(generator_heap->var_paths);
generator_heap->var_paths = NULL;
Py_XDECREF(generator_heap->var_entries);
generator_heap->var_entries = NULL;
Py_XDECREF(generator_heap->var_p);
generator_heap->var_p = NULL;
Py_XDECREF(generator_heap->var_entry);
generator_heap->var_entry = NULL;
Py_XDECREF(generator_heap->var_path);
generator_heap->var_path = NULL;
Py_XDECREF(generator_heap->var_st);
generator_heap->var_st = NULL;


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

static PyObject *MAKE_GENERATOR_watchdog$utils$dirsnapshot$$$function__17_walk$$$genobj__1_walk(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        watchdog$utils$dirsnapshot$$$function__17_walk$$$genobj__1_walk_context,
        module_watchdog$utils$dirsnapshot,
        mod_consts.const_str_plain_walk,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_fc52c7393f09a9950cc4b36563a0ca24,
#endif
        code_objects_34e69b8250345f19a04e7345bf82acdb,
        closure,
        2,
#if 1
        sizeof(struct watchdog$utils$dirsnapshot$$$function__17_walk$$$genobj__1_walk_locals)
#else
        0
#endif
    );
}


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__18_paths(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_watchdog$utils$dirsnapshot$$$function__18_paths;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$utils$dirsnapshot$$$function__18_paths = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__18_paths)) {
    Py_XDECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__18_paths);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$utils$dirsnapshot$$$function__18_paths == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__18_paths = MAKE_FUNCTION_FRAME(tstate, code_objects_b3748553e459fd44682aadc1c266230b, module_watchdog$utils$dirsnapshot, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__18_paths->m_type_description == NULL);
frame_frame_watchdog$utils$dirsnapshot$$$function__18_paths = cache_frame_frame_watchdog$utils$dirsnapshot$$$function__18_paths;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$dirsnapshot$$$function__18_paths);
assert(Py_REFCNT(frame_frame_watchdog$utils$dirsnapshot$$$function__18_paths) == 2);

// Framed code:
{
PyObject *tmp_set_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__stat_info);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_keys);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_watchdog$utils$dirsnapshot$$$function__18_paths->m_frame.f_lineno = 347;
tmp_set_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_set_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = PySet_New(tmp_set_arg_1);
CHECK_OBJECT(tmp_set_arg_1);
Py_DECREF(tmp_set_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$dirsnapshot$$$function__18_paths, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$dirsnapshot$$$function__18_paths->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$dirsnapshot$$$function__18_paths, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$utils$dirsnapshot$$$function__18_paths,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$utils$dirsnapshot$$$function__18_paths == cache_frame_frame_watchdog$utils$dirsnapshot$$$function__18_paths) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__18_paths);
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__18_paths = NULL;
}

assertFrameObject(frame_frame_watchdog$utils$dirsnapshot$$$function__18_paths);

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


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__19_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_uid = python_pars[1];
struct Nuitka_FrameObject *frame_frame_watchdog$utils$dirsnapshot$$$function__19_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$utils$dirsnapshot$$$function__19_path = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__19_path)) {
    Py_XDECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__19_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$utils$dirsnapshot$$$function__19_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__19_path = MAKE_FUNCTION_FRAME(tstate, code_objects_d24c548472c5fd44590760339f411d69, module_watchdog$utils$dirsnapshot, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__19_path->m_type_description == NULL);
frame_frame_watchdog$utils$dirsnapshot$$$function__19_path = cache_frame_frame_watchdog$utils$dirsnapshot$$$function__19_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$dirsnapshot$$$function__19_path);
assert(Py_REFCNT(frame_frame_watchdog$utils$dirsnapshot$$$function__19_path) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__inode_to_path);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_uid);
tmp_args_element_value_1 = par_uid;
frame_frame_watchdog$utils$dirsnapshot$$$function__19_path->m_frame.f_lineno = 351;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$dirsnapshot$$$function__19_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$dirsnapshot$$$function__19_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$dirsnapshot$$$function__19_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$utils$dirsnapshot$$$function__19_path,
    type_description_1,
    par_self,
    par_uid
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$utils$dirsnapshot$$$function__19_path == cache_frame_frame_watchdog$utils$dirsnapshot$$$function__19_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__19_path);
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__19_path = NULL;
}

assertFrameObject(frame_frame_watchdog$utils$dirsnapshot$$$function__19_path);

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
CHECK_OBJECT(par_uid);
Py_DECREF(par_uid);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_uid);
Py_DECREF(par_uid);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__20_inode(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_path = python_pars[1];
PyObject *var_st = NULL;
struct Nuitka_FrameObject *frame_frame_watchdog$utils$dirsnapshot$$$function__20_inode;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$utils$dirsnapshot$$$function__20_inode = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__20_inode)) {
    Py_XDECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__20_inode);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$utils$dirsnapshot$$$function__20_inode == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__20_inode = MAKE_FUNCTION_FRAME(tstate, code_objects_9d3c51d6840ce4f90506a041defe5d90, module_watchdog$utils$dirsnapshot, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__20_inode->m_type_description == NULL);
frame_frame_watchdog$utils$dirsnapshot$$$function__20_inode = cache_frame_frame_watchdog$utils$dirsnapshot$$$function__20_inode;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$dirsnapshot$$$function__20_inode);
assert(Py_REFCNT(frame_frame_watchdog$utils$dirsnapshot$$$function__20_inode) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__stat_info);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_path);
tmp_subscript_value_1 = par_path;
tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_st == NULL);
var_st = tmp_assign_source_1;
}
{
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_st);
tmp_expression_value_3 = var_st;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_st_ino);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_4;
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_st);
tmp_expression_value_4 = var_st;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_st_dev);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$dirsnapshot$$$function__20_inode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$dirsnapshot$$$function__20_inode->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$dirsnapshot$$$function__20_inode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$utils$dirsnapshot$$$function__20_inode,
    type_description_1,
    par_self,
    par_path,
    var_st
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$utils$dirsnapshot$$$function__20_inode == cache_frame_frame_watchdog$utils$dirsnapshot$$$function__20_inode) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__20_inode);
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__20_inode = NULL;
}

assertFrameObject(frame_frame_watchdog$utils$dirsnapshot$$$function__20_inode);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_st);
CHECK_OBJECT(var_st);
Py_DECREF(var_st);
var_st = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_st);
var_st = NULL;
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


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__21_isdir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_path = python_pars[1];
struct Nuitka_FrameObject *frame_frame_watchdog$utils$dirsnapshot$$$function__21_isdir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$utils$dirsnapshot$$$function__21_isdir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__21_isdir)) {
    Py_XDECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__21_isdir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$utils$dirsnapshot$$$function__21_isdir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__21_isdir = MAKE_FUNCTION_FRAME(tstate, code_objects_8b6f0fc27e6f507e529da0c542fcfbcc, module_watchdog$utils$dirsnapshot, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__21_isdir->m_type_description == NULL);
frame_frame_watchdog$utils$dirsnapshot$$$function__21_isdir = cache_frame_frame_watchdog$utils$dirsnapshot$$$function__21_isdir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$dirsnapshot$$$function__21_isdir);
assert(Py_REFCNT(frame_frame_watchdog$utils$dirsnapshot$$$function__21_isdir) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
tmp_called_value_1 = module_var_accessor_watchdog$utils$dirsnapshot$S_ISDIR(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_S_ISDIR);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 359;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__stat_info);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_path);
tmp_subscript_value_1 = par_path;
tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_st_mode);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_watchdog$utils$dirsnapshot$$$function__21_isdir->m_frame.f_lineno = 359;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$dirsnapshot$$$function__21_isdir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$dirsnapshot$$$function__21_isdir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$dirsnapshot$$$function__21_isdir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$utils$dirsnapshot$$$function__21_isdir,
    type_description_1,
    par_self,
    par_path
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$utils$dirsnapshot$$$function__21_isdir == cache_frame_frame_watchdog$utils$dirsnapshot$$$function__21_isdir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__21_isdir);
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__21_isdir = NULL;
}

assertFrameObject(frame_frame_watchdog$utils$dirsnapshot$$$function__21_isdir);

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


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__22_mtime(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_path = python_pars[1];
struct Nuitka_FrameObject *frame_frame_watchdog$utils$dirsnapshot$$$function__22_mtime;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$utils$dirsnapshot$$$function__22_mtime = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__22_mtime)) {
    Py_XDECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__22_mtime);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$utils$dirsnapshot$$$function__22_mtime == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__22_mtime = MAKE_FUNCTION_FRAME(tstate, code_objects_f25052e14ad0c0b4d9b320aa471fe58e, module_watchdog$utils$dirsnapshot, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__22_mtime->m_type_description == NULL);
frame_frame_watchdog$utils$dirsnapshot$$$function__22_mtime = cache_frame_frame_watchdog$utils$dirsnapshot$$$function__22_mtime;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$dirsnapshot$$$function__22_mtime);
assert(Py_REFCNT(frame_frame_watchdog$utils$dirsnapshot$$$function__22_mtime) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__stat_info);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_path);
tmp_subscript_value_1 = par_path;
tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_st_mtime);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$dirsnapshot$$$function__22_mtime, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$dirsnapshot$$$function__22_mtime->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$dirsnapshot$$$function__22_mtime, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$utils$dirsnapshot$$$function__22_mtime,
    type_description_1,
    par_self,
    par_path
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$utils$dirsnapshot$$$function__22_mtime == cache_frame_frame_watchdog$utils$dirsnapshot$$$function__22_mtime) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__22_mtime);
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__22_mtime = NULL;
}

assertFrameObject(frame_frame_watchdog$utils$dirsnapshot$$$function__22_mtime);

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


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__23_size(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_path = python_pars[1];
struct Nuitka_FrameObject *frame_frame_watchdog$utils$dirsnapshot$$$function__23_size;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$utils$dirsnapshot$$$function__23_size = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__23_size)) {
    Py_XDECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__23_size);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$utils$dirsnapshot$$$function__23_size == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__23_size = MAKE_FUNCTION_FRAME(tstate, code_objects_9ad24c2a2496ae7cb1b0e5b700ba537e, module_watchdog$utils$dirsnapshot, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__23_size->m_type_description == NULL);
frame_frame_watchdog$utils$dirsnapshot$$$function__23_size = cache_frame_frame_watchdog$utils$dirsnapshot$$$function__23_size;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$dirsnapshot$$$function__23_size);
assert(Py_REFCNT(frame_frame_watchdog$utils$dirsnapshot$$$function__23_size) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__stat_info);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_path);
tmp_subscript_value_1 = par_path;
tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_st_size);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$dirsnapshot$$$function__23_size, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$dirsnapshot$$$function__23_size->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$dirsnapshot$$$function__23_size, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$utils$dirsnapshot$$$function__23_size,
    type_description_1,
    par_self,
    par_path
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$utils$dirsnapshot$$$function__23_size == cache_frame_frame_watchdog$utils$dirsnapshot$$$function__23_size) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__23_size);
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__23_size = NULL;
}

assertFrameObject(frame_frame_watchdog$utils$dirsnapshot$$$function__23_size);

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


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__24_stat_info(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_path = python_pars[1];
struct Nuitka_FrameObject *frame_frame_watchdog$utils$dirsnapshot$$$function__24_stat_info;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$utils$dirsnapshot$$$function__24_stat_info = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__24_stat_info)) {
    Py_XDECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__24_stat_info);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$utils$dirsnapshot$$$function__24_stat_info == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__24_stat_info = MAKE_FUNCTION_FRAME(tstate, code_objects_398971d8917a403d2f683ff4b2c191c6, module_watchdog$utils$dirsnapshot, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__24_stat_info->m_type_description == NULL);
frame_frame_watchdog$utils$dirsnapshot$$$function__24_stat_info = cache_frame_frame_watchdog$utils$dirsnapshot$$$function__24_stat_info;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$dirsnapshot$$$function__24_stat_info);
assert(Py_REFCNT(frame_frame_watchdog$utils$dirsnapshot$$$function__24_stat_info) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__stat_info);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_path);
tmp_subscript_value_1 = par_path;
tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$dirsnapshot$$$function__24_stat_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$dirsnapshot$$$function__24_stat_info->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$dirsnapshot$$$function__24_stat_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$utils$dirsnapshot$$$function__24_stat_info,
    type_description_1,
    par_self,
    par_path
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$utils$dirsnapshot$$$function__24_stat_info == cache_frame_frame_watchdog$utils$dirsnapshot$$$function__24_stat_info) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__24_stat_info);
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__24_stat_info = NULL;
}

assertFrameObject(frame_frame_watchdog$utils$dirsnapshot$$$function__24_stat_info);

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


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__25___sub__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_previous_dirsnap = python_pars[1];
struct Nuitka_FrameObject *frame_frame_watchdog$utils$dirsnapshot$$$function__25___sub__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$utils$dirsnapshot$$$function__25___sub__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__25___sub__)) {
    Py_XDECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__25___sub__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$utils$dirsnapshot$$$function__25___sub__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__25___sub__ = MAKE_FUNCTION_FRAME(tstate, code_objects_fe991c8f3eb6308524a30197be82f2c2, module_watchdog$utils$dirsnapshot, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__25___sub__->m_type_description == NULL);
frame_frame_watchdog$utils$dirsnapshot$$$function__25___sub__ = cache_frame_frame_watchdog$utils$dirsnapshot$$$function__25___sub__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$dirsnapshot$$$function__25___sub__);
assert(Py_REFCNT(frame_frame_watchdog$utils$dirsnapshot$$$function__25___sub__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_watchdog$utils$dirsnapshot$DirectorySnapshotDiff(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DirectorySnapshotDiff);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 388;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_previous_dirsnap);
tmp_args_element_value_1 = par_previous_dirsnap;
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
frame_frame_watchdog$utils$dirsnapshot$$$function__25___sub__->m_frame.f_lineno = 388;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$dirsnapshot$$$function__25___sub__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$dirsnapshot$$$function__25___sub__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$dirsnapshot$$$function__25___sub__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$utils$dirsnapshot$$$function__25___sub__,
    type_description_1,
    par_self,
    par_previous_dirsnap
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$utils$dirsnapshot$$$function__25___sub__ == cache_frame_frame_watchdog$utils$dirsnapshot$$$function__25___sub__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__25___sub__);
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__25___sub__ = NULL;
}

assertFrameObject(frame_frame_watchdog$utils$dirsnapshot$$$function__25___sub__);

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
CHECK_OBJECT(par_previous_dirsnap);
Py_DECREF(par_previous_dirsnap);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_previous_dirsnap);
Py_DECREF(par_previous_dirsnap);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__26___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_watchdog$utils$dirsnapshot$$$function__26___str__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$utils$dirsnapshot$$$function__26___str__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__26___str__)) {
    Py_XDECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__26___str__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$utils$dirsnapshot$$$function__26___str__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__26___str__ = MAKE_FUNCTION_FRAME(tstate, code_objects_ae9c1864bc833065e07bee10b0b973a4, module_watchdog$utils$dirsnapshot, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__26___str__->m_type_description == NULL);
frame_frame_watchdog$utils$dirsnapshot$$$function__26___str__ = cache_frame_frame_watchdog$utils$dirsnapshot$$$function__26___str__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$dirsnapshot$$$function__26___str__);
assert(Py_REFCNT(frame_frame_watchdog$utils$dirsnapshot$$$function__26___str__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_watchdog$utils$dirsnapshot$$$function__26___str__->m_frame.f_lineno = 391;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain___repr__);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$dirsnapshot$$$function__26___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$dirsnapshot$$$function__26___str__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$dirsnapshot$$$function__26___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$utils$dirsnapshot$$$function__26___str__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$utils$dirsnapshot$$$function__26___str__ == cache_frame_frame_watchdog$utils$dirsnapshot$$$function__26___str__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__26___str__);
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__26___str__ = NULL;
}

assertFrameObject(frame_frame_watchdog$utils$dirsnapshot$$$function__26___str__);

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


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__27___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_watchdog$utils$dirsnapshot$$$function__27___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$utils$dirsnapshot$$$function__27___repr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__27___repr__)) {
    Py_XDECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__27___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$utils$dirsnapshot$$$function__27___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__27___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_2dcb9512f8f41ffd2fba2de59b5b4511, module_watchdog$utils$dirsnapshot, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__27___repr__->m_type_description == NULL);
frame_frame_watchdog$utils$dirsnapshot$$$function__27___repr__ = cache_frame_frame_watchdog$utils$dirsnapshot$$$function__27___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$dirsnapshot$$$function__27___repr__);
assert(Py_REFCNT(frame_frame_watchdog$utils$dirsnapshot$$$function__27___repr__) == 2);

// Framed code:
{
PyObject *tmp_unicode_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_unicode_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__stat_info);
if (tmp_unicode_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 394;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = BUILTIN_UNICODE1(tmp_unicode_arg_1);
CHECK_OBJECT(tmp_unicode_arg_1);
Py_DECREF(tmp_unicode_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 394;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$dirsnapshot$$$function__27___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$dirsnapshot$$$function__27___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$dirsnapshot$$$function__27___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$utils$dirsnapshot$$$function__27___repr__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$utils$dirsnapshot$$$function__27___repr__ == cache_frame_frame_watchdog$utils$dirsnapshot$$$function__27___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$utils$dirsnapshot$$$function__27___repr__);
    cache_frame_frame_watchdog$utils$dirsnapshot$$$function__27___repr__ = NULL;
}

assertFrameObject(frame_frame_watchdog$utils$dirsnapshot$$$function__27___repr__);

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


static PyObject *impl_watchdog$utils$dirsnapshot$$$function__30_paths(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *tmp_return_value = NULL;

    // Actual function body.
tmp_return_value = PySet_New(NULL);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
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



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__10_dirs_deleted(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__10_dirs_deleted,
        mod_consts.const_str_plain_dirs_deleted,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_282f8ced7e85f1bd6057d17c33c4039c,
#endif
        code_objects_9f78a58bf4467da36055030884a51f20,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$utils$dirsnapshot,
        mod_consts.const_str_digest_507c6b66f25cf7fb9544bece1f7d3603,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__11_dirs_created(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__11_dirs_created,
        mod_consts.const_str_plain_dirs_created,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_93f8156ff5a06c4dc6c5e40484b71c9a,
#endif
        code_objects_a7a67c1700a52ca64b928d669f836e86,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$utils$dirsnapshot,
        mod_consts.const_str_digest_36d3e7b86ddde55a3d4fb0c3ef57d943,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__12___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__12___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_eb9134b30f2cf3f7820341fc66e4bab5,
#endif
        code_objects_ec256f452d97282dd10d2e8336a8c391,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_watchdog$utils$dirsnapshot,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__13___enter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__13___enter__,
        const_str_plain___enter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3c674753c44a4666e5b040e2fc4b326c,
#endif
        code_objects_2ade1a51abddb4ca0b244e909ed76faf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$utils$dirsnapshot,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__14___exit__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__14___exit__,
        const_str_plain___exit__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_05ac9b51b6c07b6e48592a45298c6313,
#endif
        code_objects_ff7539da70627de43d7c1e7381d759d7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$utils$dirsnapshot,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__15_get_snapshot(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__15_get_snapshot,
        mod_consts.const_str_plain_get_snapshot,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0953cc72b85fb794b979289d2f5dce53,
#endif
        code_objects_fccfbc23363d5e637c7e5d5d09789ca5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$utils$dirsnapshot,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__16___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__16___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b18e255c5787ad1eea32486c088bf5cc,
#endif
        code_objects_86c1a6cf3198cddd25b1b42c4133c626,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_watchdog$utils$dirsnapshot,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__17_walk(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__17_walk,
        mod_consts.const_str_plain_walk,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fc52c7393f09a9950cc4b36563a0ca24,
#endif
        code_objects_34e69b8250345f19a04e7345bf82acdb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$utils$dirsnapshot,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__18_paths(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__18_paths,
        mod_consts.const_str_plain_paths,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_71a235abe3d47e9fd7b1d8f0547575fe,
#endif
        code_objects_b3748553e459fd44682aadc1c266230b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$utils$dirsnapshot,
        mod_consts.const_str_digest_b8d60c720562092e1df946cd126fd97c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__19_path(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__19_path,
        const_str_plain_path,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fea9adb9179aba203dba3f3177c62a45,
#endif
        code_objects_d24c548472c5fd44590760339f411d69,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$utils$dirsnapshot,
        mod_consts.const_str_digest_fbf0038f2ef234dcb744cf60db8624a7,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__1___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c76b1bcc00487a8424606a4816d3a9b6,
#endif
        code_objects_658784ff4d7184a71d8408e2cab3d613,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_watchdog$utils$dirsnapshot,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__1_get_inode(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__1_get_inode,
        mod_consts.const_str_plain_get_inode,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_477556a8859866526c0afac0f7ccf55e,
#endif
        code_objects_3a6267d591979da1eb9c0a93181f0d2d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$utils$dirsnapshot,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__2_get_inode(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__2_get_inode,
        mod_consts.const_str_plain_get_inode,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_477556a8859866526c0afac0f7ccf55e,
#endif
        code_objects_9a97a62a036a49ada0cfad99470eefc3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$utils$dirsnapshot,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__20_inode(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__20_inode,
        mod_consts.const_str_plain_inode,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1d967c2943181fbe0c2cf6d1aa500f2e,
#endif
        code_objects_9d3c51d6840ce4f90506a041defe5d90,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$utils$dirsnapshot,
        mod_consts.const_str_digest_0999e84eab6dbac8400b2fd51adf1ee0,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__21_isdir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__21_isdir,
        const_str_plain_isdir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4598e968a6d5006e6f088a64238fcd80,
#endif
        code_objects_8b6f0fc27e6f507e529da0c542fcfbcc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$utils$dirsnapshot,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__22_mtime(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__22_mtime,
        mod_consts.const_str_plain_mtime,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_25dda1bea2b1a1f3431c5e4785ec413f,
#endif
        code_objects_f25052e14ad0c0b4d9b320aa471fe58e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$utils$dirsnapshot,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__23_size(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__23_size,
        mod_consts.const_str_plain_size,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_417d62c4d60e127fbbb05abcb971ce58,
#endif
        code_objects_9ad24c2a2496ae7cb1b0e5b700ba537e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$utils$dirsnapshot,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__24_stat_info(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__24_stat_info,
        mod_consts.const_str_plain_stat_info,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_064eec4dcfdaf5669bac901c99336d81,
#endif
        code_objects_398971d8917a403d2f683ff4b2c191c6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$utils$dirsnapshot,
        mod_consts.const_str_digest_62ae3a33d677b123426086dbab51aeee,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__25___sub__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__25___sub__,
        mod_consts.const_str_plain___sub__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a948b94fd1503a88756ed47a4dd875e1,
#endif
        code_objects_fe991c8f3eb6308524a30197be82f2c2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$utils$dirsnapshot,
        mod_consts.const_str_digest_6684dc40390002acaf38560b98c7b3da,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__26___str__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__26___str__,
        mod_consts.const_str_plain___str__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b6095de55dad752f03005dea31db8238,
#endif
        code_objects_ae9c1864bc833065e07bee10b0b973a4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$utils$dirsnapshot,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__27___repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__27___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_00df2dc3150b5e76e39aba7fbcb7c9b1,
#endif
        code_objects_2dcb9512f8f41ffd2fba2de59b5b4511,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$utils$dirsnapshot,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__28___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8f4e76141bf5303361aeb91313bea67f,
#endif
        code_objects_523361f830436e6ae703558df8136eca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$utils$dirsnapshot,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__29_path(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_path,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2718f199f13959aab1a5dc0e030ef0a0,
#endif
        code_objects_a006282a4f3fe286c6f629fbe53860b6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$utils$dirsnapshot,
        mod_consts.const_str_digest_cde42f98f5cf79b39dfac0972c376bc5,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__2___str__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__2___str__,
        mod_consts.const_str_plain___str__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fcc23916aa9224eba4c69f4a4e577922,
#endif
        code_objects_6a866ad4b183a95998955610b1d992b6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$utils$dirsnapshot,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__30_paths(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__30_paths,
        mod_consts.const_str_plain_paths,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a377d5714e7d3a45785bcc883dc6eb42,
#endif
        code_objects_cab30b7b077cec15f5f9e392d80e8e84,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$utils$dirsnapshot,
        mod_consts.const_str_digest_0677623c015fa8161ebad711ce9f7e0c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__3___repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__3___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5d417d6242e04240b183a60b03d17f55,
#endif
        code_objects_c8bf95e877b980c31b62a8c6b36fb134,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$utils$dirsnapshot,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__4_files_created(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__4_files_created,
        mod_consts.const_str_plain_files_created,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6cd4fe0072a704b1e648bcb61c0e329a,
#endif
        code_objects_81a9bed71519c4ec1f5ddc645bad335f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$utils$dirsnapshot,
        mod_consts.const_str_digest_bddeebb2c72c77c0c98fbdf5442e3dfa,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__5_files_deleted(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__5_files_deleted,
        mod_consts.const_str_plain_files_deleted,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_77aa59554b5f03bb1fc6a87c1260f0d0,
#endif
        code_objects_69bed2d7abc68baa4d8566721c493eb5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$utils$dirsnapshot,
        mod_consts.const_str_digest_3ac2d352ae689e6de59023da9d0c20ef,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__6_files_modified(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__6_files_modified,
        mod_consts.const_str_plain_files_modified,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_cac2dd31acce5148086247755293eb28,
#endif
        code_objects_ee7694c0ec333651a98cda937bf4153f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$utils$dirsnapshot,
        mod_consts.const_str_digest_ad3b72ca8463bce61a3fd6b7c1ef4778,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__7_files_moved(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__7_files_moved,
        mod_consts.const_str_plain_files_moved,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_48acd2c1cad9a45ab3df1c140dd9ad82,
#endif
        code_objects_371d83801f1d7924058d6d3f3f82439f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$utils$dirsnapshot,
        mod_consts.const_str_digest_a9ca18a8f838072b3dac62b573629da6,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__8_dirs_modified(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__8_dirs_modified,
        mod_consts.const_str_plain_dirs_modified,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3b2bd542e2ddc7155305d0bc53e1f343,
#endif
        code_objects_d5711e5cbf566be64a14a2dc5a8c1b8d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$utils$dirsnapshot,
        mod_consts.const_str_digest_8a2dc76cf4f04bec2394dcbd2cd38dfa,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__9_dirs_moved(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$dirsnapshot$$$function__9_dirs_moved,
        mod_consts.const_str_plain_dirs_moved,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_54799a963ea0863c8ef031c6c373f4f4,
#endif
        code_objects_234d119fe84073d9063c8586a67a1884,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$utils$dirsnapshot,
        mod_consts.const_str_digest_150627e3a24fe6fe5d167f8243ef8dfa,
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

static function_impl_code const function_table_watchdog$utils$dirsnapshot[] = {
impl_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__1_get_inode,
impl_watchdog$utils$dirsnapshot$$$function__1___init__$$$function__2_get_inode,
impl_watchdog$utils$dirsnapshot$$$function__1___init__,
impl_watchdog$utils$dirsnapshot$$$function__2___str__,
impl_watchdog$utils$dirsnapshot$$$function__3___repr__,
impl_watchdog$utils$dirsnapshot$$$function__4_files_created,
impl_watchdog$utils$dirsnapshot$$$function__5_files_deleted,
impl_watchdog$utils$dirsnapshot$$$function__6_files_modified,
impl_watchdog$utils$dirsnapshot$$$function__7_files_moved,
impl_watchdog$utils$dirsnapshot$$$function__8_dirs_modified,
impl_watchdog$utils$dirsnapshot$$$function__9_dirs_moved,
impl_watchdog$utils$dirsnapshot$$$function__10_dirs_deleted,
impl_watchdog$utils$dirsnapshot$$$function__11_dirs_created,
impl_watchdog$utils$dirsnapshot$$$function__12___init__,
impl_watchdog$utils$dirsnapshot$$$function__13___enter__,
impl_watchdog$utils$dirsnapshot$$$function__14___exit__,
impl_watchdog$utils$dirsnapshot$$$function__15_get_snapshot,
impl_watchdog$utils$dirsnapshot$$$function__16___init__,
impl_watchdog$utils$dirsnapshot$$$function__17_walk,
impl_watchdog$utils$dirsnapshot$$$function__18_paths,
impl_watchdog$utils$dirsnapshot$$$function__19_path,
impl_watchdog$utils$dirsnapshot$$$function__20_inode,
impl_watchdog$utils$dirsnapshot$$$function__21_isdir,
impl_watchdog$utils$dirsnapshot$$$function__22_mtime,
impl_watchdog$utils$dirsnapshot$$$function__23_size,
impl_watchdog$utils$dirsnapshot$$$function__24_stat_info,
impl_watchdog$utils$dirsnapshot$$$function__25___sub__,
impl_watchdog$utils$dirsnapshot$$$function__26___str__,
impl_watchdog$utils$dirsnapshot$$$function__27___repr__,
impl_watchdog$utils$dirsnapshot$$$function__30_paths,
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

    return Nuitka_Function_GetFunctionState(function, function_table_watchdog$utils$dirsnapshot);
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
        module_watchdog$utils$dirsnapshot,
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
        function_table_watchdog$utils$dirsnapshot,
        sizeof(function_table_watchdog$utils$dirsnapshot) / sizeof(function_impl_code)
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
static char const *module_full_name = "watchdog.utils.dirsnapshot";
#endif

// Internal entry point for module code.
PyObject *module_code_watchdog$utils$dirsnapshot(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("watchdog$utils$dirsnapshot");

    // Store the module for future use.
    module_watchdog$utils$dirsnapshot = module;

    moduledict_watchdog$utils$dirsnapshot = MODULE_DICT(module_watchdog$utils$dirsnapshot);

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
        PRINT_STRING("watchdog$utils$dirsnapshot: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("watchdog$utils$dirsnapshot: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("watchdog$utils$dirsnapshot: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "watchdog.utils.dirsnapshot" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initwatchdog$utils$dirsnapshot\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_watchdog$utils$dirsnapshot,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_watchdog$utils$dirsnapshot,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_watchdog$utils$dirsnapshot,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_watchdog$utils$dirsnapshot,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_watchdog$utils$dirsnapshot,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_watchdog$utils$dirsnapshot);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_watchdog$utils$dirsnapshot);
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

        UPDATE_STRING_DICT1(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
PyObject *tmp_DirectorySnapshotDiff$class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_DirectorySnapshotDiff$class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_class_container$class_creation_3__bases = NULL;
PyObject *tmp_class_container$class_creation_3__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_3__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_3__metaclass = NULL;
PyObject *tmp_class_container$class_creation_3__prepared = NULL;
struct Nuitka_FrameObject *frame_frame_watchdog$utils$dirsnapshot;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_45 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
PyObject *locals_watchdog$utils$dirsnapshot$$$class__2_ContextManager_204 = NULL;
struct Nuitka_FrameObject *frame_frame_watchdog$utils$dirsnapshot$$$class__2_ContextManager_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
int tmp_res;
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
PyObject *locals_watchdog$utils$dirsnapshot$$$class__3_DirectorySnapshot_272 = NULL;
struct Nuitka_FrameObject *frame_frame_watchdog$utils$dirsnapshot$$$class__3_DirectorySnapshot_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
PyObject *locals_watchdog$utils$dirsnapshot$$$class__4_EmptyDirectorySnapshot_397 = NULL;
struct Nuitka_FrameObject *frame_frame_watchdog$utils$dirsnapshot$$$class__4_EmptyDirectorySnapshot_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_bbc568bd87041519006d967a36391962;
UPDATE_STRING_DICT0(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_watchdog$utils$dirsnapshot = MAKE_MODULE_FRAME(code_objects_471dd1f553037de085cf587647dfb828, module_watchdog$utils$dirsnapshot);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$dirsnapshot);
assert(Py_REFCNT(frame_frame_watchdog$utils$dirsnapshot) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_watchdog$utils$dirsnapshot$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_watchdog$utils$dirsnapshot$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_contextlib;
tmp_globals_arg_value_1 = (PyObject *)moduledict_watchdog$utils$dirsnapshot;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_watchdog$utils$dirsnapshot->m_frame.f_lineno = 34;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_errno;
tmp_globals_arg_value_2 = (PyObject *)moduledict_watchdog$utils$dirsnapshot;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_watchdog$utils$dirsnapshot->m_frame.f_lineno = 35;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts.const_str_plain_errno, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT0(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = const_str_plain_stat;
tmp_globals_arg_value_3 = (PyObject *)moduledict_watchdog$utils$dirsnapshot;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_S_ISDIR_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_watchdog$utils$dirsnapshot->m_frame.f_lineno = 37;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_watchdog$utils$dirsnapshot,
        mod_consts.const_str_plain_S_ISDIR,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_S_ISDIR);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts.const_str_plain_S_ISDIR, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = Py_False;
UPDATE_STRING_DICT0(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_9);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_11;
}
// Tried code:
{
PyObject *tmp_assign_source_12;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_45 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_0a598dd4163c9d6bb169d3bb339a1c2b;
tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_45, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_2b67a380eade886efa79fb1042da3773;
tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_45, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_DirectorySnapshotDiff;
tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_45, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_45;
tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_45, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_1;
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_666dcc3bcee0e4283158b56b35376b07);
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_c9cd08342b91a37170a6bf1e397c94ab);

tmp_dictset_value = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__1___init__(tstate, tmp_kw_defaults_1, tmp_annotations_1);

tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_45, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__2___str__(tstate, tmp_annotations_2);

tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_45, mod_consts.const_str_plain___str__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__3___repr__(tstate, tmp_annotations_3);

tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_45, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
// Tried code:
// Tried code:
frame_frame_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_2 = MAKE_CLASS_FRAME(tstate, code_objects_54642865220154f5fd23330dfb202eab, module_watchdog$utils$dirsnapshot, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_2);
assert(Py_REFCNT(frame_frame_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_2) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_4;
tmp_called_value_1 = (PyObject *)&PyProperty_Type;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_3f7939f2c4ec3aabec015f7d638c81ee);

tmp_args_element_value_1 = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__4_files_created(tstate, tmp_annotations_4);

frame_frame_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_2->m_frame.f_lineno = 156;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_45, mod_consts.const_str_plain_files_created, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_5;
tmp_called_value_2 = (PyObject *)&PyProperty_Type;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_3f7939f2c4ec3aabec015f7d638c81ee);

tmp_args_element_value_2 = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__5_files_deleted(tstate, tmp_annotations_5);

frame_frame_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_2->m_frame.f_lineno = 161;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_45, mod_consts.const_str_plain_files_deleted, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_6;
tmp_called_value_3 = (PyObject *)&PyProperty_Type;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_3f7939f2c4ec3aabec015f7d638c81ee);

tmp_args_element_value_3 = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__6_files_modified(tstate, tmp_annotations_6);

frame_frame_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_2->m_frame.f_lineno = 166;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_45, mod_consts.const_str_plain_files_modified, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_7;
tmp_called_value_4 = (PyObject *)&PyProperty_Type;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_5de5ec6b0074ab1a64bea4a07fae9aea);

tmp_args_element_value_4 = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__7_files_moved(tstate, tmp_annotations_7);

frame_frame_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_2->m_frame.f_lineno = 171;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_45, mod_consts.const_str_plain_files_moved, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_5;
PyObject *tmp_annotations_8;
tmp_called_value_5 = (PyObject *)&PyProperty_Type;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_3f7939f2c4ec3aabec015f7d638c81ee);

tmp_args_element_value_5 = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__8_dirs_modified(tstate, tmp_annotations_8);

frame_frame_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_2->m_frame.f_lineno = 180;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_45, mod_consts.const_str_plain_dirs_modified, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_6;
PyObject *tmp_annotations_9;
tmp_called_value_6 = (PyObject *)&PyProperty_Type;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_5de5ec6b0074ab1a64bea4a07fae9aea);

tmp_args_element_value_6 = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__9_dirs_moved(tstate, tmp_annotations_9);

frame_frame_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_2->m_frame.f_lineno = 185;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_45, mod_consts.const_str_plain_dirs_moved, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_7;
PyObject *tmp_annotations_10;
tmp_called_value_7 = (PyObject *)&PyProperty_Type;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_3f7939f2c4ec3aabec015f7d638c81ee);

tmp_args_element_value_7 = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__10_dirs_deleted(tstate, tmp_annotations_10);

frame_frame_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_2->m_frame.f_lineno = 194;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_45, mod_consts.const_str_plain_dirs_deleted, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_8;
PyObject *tmp_annotations_11;
tmp_called_value_8 = (PyObject *)&PyProperty_Type;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_3f7939f2c4ec3aabec015f7d638c81ee);

tmp_args_element_value_8 = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__11_dirs_created(tstate, tmp_annotations_11);

frame_frame_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_2->m_frame.f_lineno = 199;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_8);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_45, mod_consts.const_str_plain_dirs_created, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_outline_return_value_2;
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = MAKE_DICT_EMPTY(tstate);
assert(tmp_DirectorySnapshotDiff$class_container$class_creation_1__class_decl_dict == NULL);
tmp_DirectorySnapshotDiff$class_container$class_creation_1__class_decl_dict = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = MAKE_DICT_EMPTY(tstate);
assert(tmp_DirectorySnapshotDiff$class_container$class_creation_1__prepared == NULL);
tmp_DirectorySnapshotDiff$class_container$class_creation_1__prepared = tmp_assign_source_14;
}
// Tried code:
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_DirectorySnapshotDiff$class_container$class_creation_1__prepared);
tmp_set_locals_2 = tmp_DirectorySnapshotDiff$class_container$class_creation_1__prepared;
locals_watchdog$utils$dirsnapshot$$$class__2_ContextManager_204 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
tmp_dictset_value = mod_consts.const_str_digest_0a598dd4163c9d6bb169d3bb339a1c2b;
tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__2_ContextManager_204, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_006e4eb6e2f474dc14e34fb27e89b243;
tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__2_ContextManager_204, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_2a220cd70159add3cecb106d293ca3ee;
tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__2_ContextManager_204, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_204;
tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__2_ContextManager_204, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_watchdog$utils$dirsnapshot$$$class__2_ContextManager_3 = MAKE_CLASS_FRAME(tstate, code_objects_0c96941adebc4e9223e7bd7e4f42e22d, module_watchdog$utils$dirsnapshot, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$dirsnapshot$$$class__2_ContextManager_3);
assert(Py_REFCNT(frame_frame_watchdog$utils$dirsnapshot$$$class__2_ContextManager_3) == 2);

// Framed code:
{
PyObject *tmp_kw_defaults_2;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_annotations_12;
tmp_dict_key_1 = mod_consts.const_str_plain_recursive;
tmp_dict_value_1 = Py_True;
tmp_kw_defaults_2 = _PyDict_NewPresized( 4 );
{
PyObject *tmp_expression_value_1;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = const_str_plain_stat;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, const_str_plain_stat);
}
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = const_str_plain_listdir;
tmp_expression_value_1 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_1 == NULL));
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_scandir);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_3 = "o";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_ignore_device;
tmp_dict_value_1 = Py_False;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_kw_defaults_2);
goto frame_exception_exit_3;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_1af20983ebe323feeb2f97d2c9a72dd1);

tmp_dictset_value = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__12___init__(tstate, tmp_kw_defaults_2, tmp_annotations_12);

tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__2_ContextManager_204, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_3 = "o";
    goto frame_exception_exit_3;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$dirsnapshot$$$class__2_ContextManager_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$dirsnapshot$$$class__2_ContextManager_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$dirsnapshot$$$class__2_ContextManager_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$utils$dirsnapshot$$$class__2_ContextManager_3,
    type_description_3,
    outline_1_var___class__
);



assertFrameObject(frame_frame_watchdog$utils$dirsnapshot$$$class__2_ContextManager_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_2:;
type_description_2 = "o";
goto try_except_handler_6;
skip_nested_handling_1:;
{
PyObject *tmp_annotations_13;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__13___enter__(tstate, tmp_annotations_13);

tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__2_ContextManager_204, const_str_plain___enter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_14;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_2f973a2c95d8c7809f41ffe014dc3a1f);

tmp_dictset_value = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__14___exit__(tstate, tmp_annotations_14);

tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__2_ContextManager_204, const_str_plain___exit__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_15;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_376a346f6fd0569c80c5e9828ef29298);

tmp_dictset_value = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__15_get_snapshot(tstate, tmp_annotations_15);

tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__2_ContextManager_204, mod_consts.const_str_plain_get_snapshot, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_a1312c8cc586c73154e22bb892b6217d_tuple;
tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__2_ContextManager_204, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_9;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_9 = (PyObject *)&PyType_Type;
tmp_tuple_element_1 = mod_consts.const_str_plain_ContextManager;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = locals_watchdog$utils$dirsnapshot$$$class__2_ContextManager_204;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(tmp_DirectorySnapshotDiff$class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_DirectorySnapshotDiff$class_container$class_creation_1__class_decl_dict;
frame_frame_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_2->m_frame.f_lineno = 204;
tmp_assign_source_15 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_2 = "o";
    goto try_except_handler_6;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_15;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_dictset_value = outline_1_var___class__;
Py_INCREF(tmp_dictset_value);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_watchdog$utils$dirsnapshot$$$class__2_ContextManager_204);
locals_watchdog$utils$dirsnapshot$$$class__2_ContextManager_204 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_watchdog$utils$dirsnapshot$$$class__2_ContextManager_204);
locals_watchdog$utils$dirsnapshot$$$class__2_ContextManager_204 = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

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
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 204;
goto try_except_handler_4;
outline_result_4:;
tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_45, mod_consts.const_str_plain_ContextManager, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_2 = "o";
    goto try_except_handler_4;
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_DirectorySnapshotDiff$class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_DirectorySnapshotDiff$class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_DirectorySnapshotDiff$class_container$class_creation_1__class_decl_dict);
tmp_DirectorySnapshotDiff$class_container$class_creation_1__class_decl_dict = NULL;
CHECK_OBJECT(tmp_DirectorySnapshotDiff$class_container$class_creation_1__prepared);
CHECK_OBJECT(tmp_DirectorySnapshotDiff$class_container$class_creation_1__prepared);
Py_DECREF(tmp_DirectorySnapshotDiff$class_container$class_creation_1__prepared);
tmp_DirectorySnapshotDiff$class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_2;
// End of try:
try_end_1:;
CHECK_OBJECT(tmp_DirectorySnapshotDiff$class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_DirectorySnapshotDiff$class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_DirectorySnapshotDiff$class_container$class_creation_1__class_decl_dict);
tmp_DirectorySnapshotDiff$class_container$class_creation_1__class_decl_dict = NULL;
CHECK_OBJECT(tmp_DirectorySnapshotDiff$class_container$class_creation_1__prepared);
CHECK_OBJECT(tmp_DirectorySnapshotDiff$class_container$class_creation_1__prepared);
Py_DECREF(tmp_DirectorySnapshotDiff$class_container$class_creation_1__prepared);
tmp_DirectorySnapshotDiff$class_container$class_creation_1__prepared = NULL;
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

goto frame_no_exception_2;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_1:;

goto try_except_handler_3;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_d9c3b24ba5cee12043a972aeb2907f93_tuple;
tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_45, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_10;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_2;
tmp_called_value_10 = (PyObject *)&PyType_Type;
tmp_tuple_element_2 = mod_consts.const_str_plain_DirectorySnapshotDiff;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_45;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_watchdog$utils$dirsnapshot->m_frame.f_lineno = 45;
tmp_assign_source_16 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_3;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_16;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_12 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_12);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_45);
locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_45 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_45);
locals_watchdog$utils$dirsnapshot$$$class__1_DirectorySnapshotDiff_45 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

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
exception_lineno = 45;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts.const_str_plain_DirectorySnapshotDiff, tmp_assign_source_12);
}
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
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
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
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
PyObject *tmp_outline_return_value_3;
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_17;
}
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_18;
}
// Tried code:
{
PyObject *tmp_assign_source_19;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_2__prepared;
locals_watchdog$utils$dirsnapshot$$$class__3_DirectorySnapshot_272 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
tmp_dictset_value = mod_consts.const_str_digest_0a598dd4163c9d6bb169d3bb339a1c2b;
tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__3_DirectorySnapshot_272, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_69f3490ab921a4747f8b58c680756aea;
tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__3_DirectorySnapshot_272, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_DirectorySnapshot;
tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__3_DirectorySnapshot_272, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_272;
tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__3_DirectorySnapshot_272, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_watchdog$utils$dirsnapshot$$$class__3_DirectorySnapshot_4 = MAKE_CLASS_FRAME(tstate, code_objects_82a90a663b0527b742bea1d2f49a565f, module_watchdog$utils$dirsnapshot, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$dirsnapshot$$$class__3_DirectorySnapshot_4);
assert(Py_REFCNT(frame_frame_watchdog$utils$dirsnapshot$$$class__3_DirectorySnapshot_4) == 2);

// Framed code:
{
PyObject *tmp_kw_defaults_3;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_annotations_16;
tmp_dict_key_2 = mod_consts.const_str_plain_recursive;
tmp_dict_value_2 = Py_True;
tmp_kw_defaults_3 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_2;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = const_str_plain_stat;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, const_str_plain_stat);
}
assert(!(tmp_dict_value_2 == NULL));
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = const_str_plain_listdir;
tmp_expression_value_2 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_2 == NULL));
tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_scandir);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_kw_defaults_3);
goto frame_exception_exit_4;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_52ae08f4dffbfeb8b551f6dd4cb64d47);

tmp_dictset_value = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__16___init__(tstate, tmp_kw_defaults_3, tmp_annotations_16);

tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__3_DirectorySnapshot_272, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_17;
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_f6aa91b07aa6d5dfbbb441194b2d33b6);

tmp_dictset_value = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__17_walk(tstate, tmp_annotations_17);

tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__3_DirectorySnapshot_272, mod_consts.const_str_plain_walk, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_9;
PyObject *tmp_annotations_18;
tmp_called_value_11 = (PyObject *)&PyProperty_Type;
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_43c1ece82390535da8c0f8d9fc078acc);

tmp_args_element_value_9 = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__18_paths(tstate, tmp_annotations_18);

frame_frame_watchdog$utils$dirsnapshot$$$class__3_DirectorySnapshot_4->m_frame.f_lineno = 344;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_9);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__3_DirectorySnapshot_272, mod_consts.const_str_plain_paths, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$dirsnapshot$$$class__3_DirectorySnapshot_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$dirsnapshot$$$class__3_DirectorySnapshot_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$dirsnapshot$$$class__3_DirectorySnapshot_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$utils$dirsnapshot$$$class__3_DirectorySnapshot_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_watchdog$utils$dirsnapshot$$$class__3_DirectorySnapshot_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_9;
skip_nested_handling_3:;
{
PyObject *tmp_annotations_19;
tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_17b4e6c4e41cddaf59a02ca6914d3af6);

tmp_dictset_value = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__19_path(tstate, tmp_annotations_19);

tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__3_DirectorySnapshot_272, const_str_plain_path, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_20;
tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_34a456ce6eeba287940e45236dc29b1a);

tmp_dictset_value = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__20_inode(tstate, tmp_annotations_20);

tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__3_DirectorySnapshot_272, mod_consts.const_str_plain_inode, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_21;
tmp_annotations_21 = DICT_COPY(tstate, mod_consts.const_dict_9ea98f92b4e01010c94e859da0008027);

tmp_dictset_value = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__21_isdir(tstate, tmp_annotations_21);

tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__3_DirectorySnapshot_272, const_str_plain_isdir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_22;
tmp_annotations_22 = DICT_COPY(tstate, mod_consts.const_dict_c45cd66ef8b834a6402c9bc522c9e368);

tmp_dictset_value = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__22_mtime(tstate, tmp_annotations_22);

tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__3_DirectorySnapshot_272, mod_consts.const_str_plain_mtime, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_23;
tmp_annotations_23 = DICT_COPY(tstate, mod_consts.const_dict_7ce79acfae9a34ca0ae4480aaaf236da);

tmp_dictset_value = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__23_size(tstate, tmp_annotations_23);

tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__3_DirectorySnapshot_272, mod_consts.const_str_plain_size, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_24;
tmp_annotations_24 = DICT_COPY(tstate, mod_consts.const_dict_a2d409302f72fc082b5fd3b6b5d6b9a5);

tmp_dictset_value = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__24_stat_info(tstate, tmp_annotations_24);

tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__3_DirectorySnapshot_272, mod_consts.const_str_plain_stat_info, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_25;
tmp_annotations_25 = DICT_COPY(tstate, mod_consts.const_dict_806062beb777482b081b23758f0791ec);

tmp_dictset_value = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__25___sub__(tstate, tmp_annotations_25);

tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__3_DirectorySnapshot_272, mod_consts.const_str_plain___sub__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_26;
tmp_annotations_26 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__26___str__(tstate, tmp_annotations_26);

tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__3_DirectorySnapshot_272, mod_consts.const_str_plain___str__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_27;
tmp_annotations_27 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__27___repr__(tstate, tmp_annotations_27);

tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__3_DirectorySnapshot_272, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_a07b0dd509287a64eb0dfe9decde2ff0_tuple;
tmp_result = DICT_SET_ITEM(locals_watchdog$utils$dirsnapshot$$$class__3_DirectorySnapshot_272, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_20;
PyObject *tmp_called_value_12;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_3;
tmp_called_value_12 = (PyObject *)&PyType_Type;
tmp_tuple_element_3 = mod_consts.const_str_plain_DirectorySnapshot;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = locals_watchdog$utils$dirsnapshot$$$class__3_DirectorySnapshot_272;
PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_watchdog$utils$dirsnapshot->m_frame.f_lineno = 272;
tmp_assign_source_20 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;

    goto try_except_handler_9;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_20;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_19 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_19);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_DECREF(locals_watchdog$utils$dirsnapshot$$$class__3_DirectorySnapshot_272);
locals_watchdog$utils$dirsnapshot$$$class__3_DirectorySnapshot_272 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_watchdog$utils$dirsnapshot$$$class__3_DirectorySnapshot_272);
locals_watchdog$utils$dirsnapshot$$$class__3_DirectorySnapshot_272 = NULL;
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
exception_lineno = 272;
goto try_except_handler_7;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts.const_str_plain_DirectorySnapshot, tmp_assign_source_19);
}
goto try_end_3;
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
try_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
Py_DECREF(tmp_class_container$class_creation_2__prepared);
tmp_class_container$class_creation_2__prepared = NULL;
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
{
PyObject *tmp_assign_source_21;
PyObject *tmp_tuple_element_4;
tmp_tuple_element_4 = module_var_accessor_watchdog$utils$dirsnapshot$DirectorySnapshot(tstate);
assert(!(tmp_tuple_element_4 == NULL));
tmp_assign_source_21 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_21, 0, tmp_tuple_element_4);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_21;
}
// Tried code:
{
PyObject *tmp_assign_source_22;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_22 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_23;
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;

    goto try_except_handler_10;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_3 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;

    goto try_except_handler_10;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;

    goto try_except_handler_10;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_24 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_24;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_4 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;

    goto try_except_handler_10;
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
PyObject *tmp_assign_source_25;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;

    goto try_except_handler_10;
}
tmp_tuple_element_5 = mod_consts.const_str_plain_EmptyDirectorySnapshot;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_5 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_watchdog$utils$dirsnapshot->m_frame.f_lineno = 397;
tmp_assign_source_25 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_25;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_6 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_6, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;

    goto try_except_handler_10;
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
PyObject *tmp_tuple_element_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_name_value_4;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_7 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_4 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_6 = BUILTIN_GETATTR(tstate, tmp_expression_value_7, tmp_name_value_4, tmp_default_value_1);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;

    goto try_except_handler_10;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_8;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_8 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_8 == NULL));
tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_6);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_10;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;

    goto try_except_handler_10;
}
frame_frame_watchdog$utils$dirsnapshot->m_frame.f_lineno = 397;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 397;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_10;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_26;
}
branch_end_1:;
{
PyObject *tmp_assign_source_27;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_3__prepared;
locals_watchdog$utils$dirsnapshot$$$class__4_EmptyDirectorySnapshot_397 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_0a598dd4163c9d6bb169d3bb339a1c2b;
tmp_res = PyObject_SetItem(locals_watchdog$utils$dirsnapshot$$$class__4_EmptyDirectorySnapshot_397, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_digest_f227d3dbfedefa796cc443713d51ac41;
tmp_res = PyObject_SetItem(locals_watchdog$utils$dirsnapshot$$$class__4_EmptyDirectorySnapshot_397, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_plain_EmptyDirectorySnapshot;
tmp_res = PyObject_SetItem(locals_watchdog$utils$dirsnapshot$$$class__4_EmptyDirectorySnapshot_397, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_int_pos_397;
tmp_res = PyObject_SetItem(locals_watchdog$utils$dirsnapshot$$$class__4_EmptyDirectorySnapshot_397, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;

    goto try_except_handler_12;
}
frame_frame_watchdog$utils$dirsnapshot$$$class__4_EmptyDirectorySnapshot_5 = MAKE_CLASS_FRAME(tstate, code_objects_0fa64ee1b1b1bc65ad0e5841efa9a2d6, module_watchdog$utils$dirsnapshot, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$dirsnapshot$$$class__4_EmptyDirectorySnapshot_5);
assert(Py_REFCNT(frame_frame_watchdog$utils$dirsnapshot$$$class__4_EmptyDirectorySnapshot_5) == 2);

// Framed code:
{
PyObject *tmp_annotations_28;
tmp_annotations_28 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__28___init__(tstate, tmp_annotations_28);

tmp_res = PyObject_SetItem(locals_watchdog$utils$dirsnapshot$$$class__4_EmptyDirectorySnapshot_397, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 403;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_10;
PyObject *tmp_annotations_29;
tmp_called_value_14 = PyObject_GetItem(locals_watchdog$utils$dirsnapshot$$$class__4_EmptyDirectorySnapshot_397, const_str_plain_staticmethod);

if (tmp_called_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_14 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_annotations_29 = DICT_COPY(tstate, mod_consts.const_dict_a3ec4c86b0f829b939cd446bed0df39f);

tmp_args_element_value_10 = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__29_path(tstate, tmp_annotations_29);

frame_frame_watchdog$utils$dirsnapshot$$$class__4_EmptyDirectorySnapshot_5->m_frame.f_lineno = 406;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_res = PyObject_SetItem(locals_watchdog$utils$dirsnapshot$$$class__4_EmptyDirectorySnapshot_397, const_str_plain_path, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_11;
PyObject *tmp_annotations_30;
tmp_called_value_15 = PyObject_GetItem(locals_watchdog$utils$dirsnapshot$$$class__4_EmptyDirectorySnapshot_397, mod_consts.const_str_plain_property);

if (tmp_called_value_15 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_15 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_15);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_annotations_30 = DICT_COPY(tstate, mod_consts.const_dict_ce734dfc67fbffa7ee4eb87ed3552a49);

tmp_args_element_value_11 = MAKE_FUNCTION_watchdog$utils$dirsnapshot$$$function__30_paths(tstate, tmp_annotations_30);

frame_frame_watchdog$utils$dirsnapshot$$$class__4_EmptyDirectorySnapshot_5->m_frame.f_lineno = 416;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_res = PyObject_SetItem(locals_watchdog$utils$dirsnapshot$$$class__4_EmptyDirectorySnapshot_397, mod_consts.const_str_plain_paths, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$dirsnapshot$$$class__4_EmptyDirectorySnapshot_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$dirsnapshot$$$class__4_EmptyDirectorySnapshot_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$dirsnapshot$$$class__4_EmptyDirectorySnapshot_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$utils$dirsnapshot$$$class__4_EmptyDirectorySnapshot_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_watchdog$utils$dirsnapshot$$$class__4_EmptyDirectorySnapshot_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_12;
skip_nested_handling_4:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_watchdog$utils$dirsnapshot$$$class__4_EmptyDirectorySnapshot_397, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;

    goto try_except_handler_12;
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


exception_lineno = 397;

    goto try_except_handler_12;
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
tmp_res = PyObject_SetItem(locals_watchdog$utils$dirsnapshot$$$class__4_EmptyDirectorySnapshot_397, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;

    goto try_except_handler_12;
}
branch_no_3:;
{
PyObject *tmp_assign_source_28;
PyObject *tmp_called_value_16;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_7;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_16 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_7 = mod_consts.const_str_plain_EmptyDirectorySnapshot;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_7 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_7);
tmp_tuple_element_7 = locals_watchdog$utils$dirsnapshot$$$class__4_EmptyDirectorySnapshot_397;
PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_watchdog$utils$dirsnapshot->m_frame.f_lineno = 397;
tmp_assign_source_28 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;

    goto try_except_handler_12;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_28;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_27 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_27);
goto try_return_handler_12;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
Py_DECREF(locals_watchdog$utils$dirsnapshot$$$class__4_EmptyDirectorySnapshot_397);
locals_watchdog$utils$dirsnapshot$$$class__4_EmptyDirectorySnapshot_397 = NULL;
goto try_return_handler_11;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_watchdog$utils$dirsnapshot$$$class__4_EmptyDirectorySnapshot_397);
locals_watchdog$utils$dirsnapshot$$$class__4_EmptyDirectorySnapshot_397 = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_11;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 397;
goto try_except_handler_10;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)mod_consts.const_str_plain_EmptyDirectorySnapshot, tmp_assign_source_27);
}
goto try_end_4;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
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
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

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
tmp_outline_return_value_4 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_4);
goto outline_result_7;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_7:;
CHECK_OBJECT(tmp_outline_return_value_4);
Py_DECREF(tmp_outline_return_value_4);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_5;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$dirsnapshot, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$dirsnapshot->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$dirsnapshot, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_watchdog$utils$dirsnapshot);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_5:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("watchdog$utils$dirsnapshot", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "watchdog.utils.dirsnapshot" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_watchdog$utils$dirsnapshot);
    return module_watchdog$utils$dirsnapshot;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$dirsnapshot, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("watchdog$utils$dirsnapshot", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

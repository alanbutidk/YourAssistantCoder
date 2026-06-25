/* Generated code for Python module 'platformdirs$windows'
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



/* The "module_platformdirs$windows" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_platformdirs$windows;
PyDictObject *moduledict_platformdirs$windows;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_roaming;
PyObject *const_str_plain_CSIDL_APPDATA;
PyObject *const_str_plain_CSIDL_LOCAL_APPDATA;
PyObject *const_str_plain_get_win_folder;
PyObject *const_str_plain__append_parts;
PyObject *const_str_digest_18f69b8f0ef9a7e3c54e4b48ee0afbe8;
PyObject *const_str_plain_appname;
PyObject *const_str_plain_appauthor;
PyObject *const_str_plain_opinion;
PyObject *const_str_plain_version;
PyObject *const_str_plain_join;
PyObject *const_str_plain__optionally_create_directory;
PyObject *const_tuple_str_plain_CSIDL_COMMON_APPDATA_tuple;
PyObject *const_str_digest_34f15e3eb716fefbe18618b193bc92ac;
PyObject *const_str_plain_user_data_dir;
PyObject *const_str_digest_2ccc230d8f96e4fd1f3d18845bbeeb1d;
PyObject *const_str_plain_site_data_dir;
PyObject *const_str_digest_39178adfdd59c386c6bfc3c9035405d2;
PyObject *const_tuple_str_plain_CSIDL_LOCAL_APPDATA_tuple;
PyObject *const_dict_9e6f6f4eb3dae09fa3f3830439c76bbf;
PyObject *const_str_digest_243767ebd057ef1338276ee40c2cbbc0;
PyObject *const_str_digest_334706327b8049942bec86070f6b6faa;
PyObject *const_str_digest_68cb5fd9a9688506895787dd74fddac5;
PyObject *const_str_plain_Logs;
PyObject *const_str_digest_640f3c680d6e9a54be7d97cbee8cf035;
PyObject *const_tuple_str_plain_CSIDL_PERSONAL_tuple;
PyObject *const_str_digest_1d19b1c77aed88a6e2c29b9c946eb5ab;
PyObject *const_tuple_str_plain_CSIDL_DOWNLOADS_tuple;
PyObject *const_str_digest_e3830b7aee99967a5f3a4b208e1cd6ad;
PyObject *const_tuple_str_plain_CSIDL_MYPICTURES_tuple;
PyObject *const_str_digest_894cb776395ea9ec8b8e26b38559c747;
PyObject *const_tuple_str_plain_CSIDL_MYVIDEO_tuple;
PyObject *const_str_digest_928df1072d71336d682a88c9f83c5f72;
PyObject *const_tuple_str_plain_CSIDL_MYMUSIC_tuple;
PyObject *const_str_digest_280ab7fbb020e18c885950af6271d848;
PyObject *const_tuple_str_plain_CSIDL_DESKTOPDIRECTORY_tuple;
PyObject *const_str_digest_f5637587fb03298852e67e4e7f46d909;
PyObject *const_str_plain_Temp;
PyObject *const_str_digest_cba82e1881e36aa3ed1596ce9b1042c7;
PyObject *const_str_plain_user_runtime_dir;
PyObject *const_str_digest_dd9add8832f7d6248ea8afd80bb101f2;
PyObject *const_str_plain_get_win_folder_if_csidl_name_not_env_var;
PyObject *const_dict_8f6139c43576e977e8edc9c706649f81;
PyObject *const_str_digest_30fb76995d1f3f513023602317ad68fc;
PyObject *const_str_plain_environ;
PyObject *const_str_digest_b16502bad6dd9535da7236e5a52bed48;
PyObject *const_str_digest_4bd4cef311c68dc95339cbe9ea148dda;
PyObject *const_str_plain_CSIDL_PERSONAL;
PyObject *const_str_plain_USERPROFILE;
PyObject *const_str_plain_Documents;
PyObject *const_str_plain_CSIDL_DOWNLOADS;
PyObject *const_str_plain_Downloads;
PyObject *const_str_plain_CSIDL_MYPICTURES;
PyObject *const_str_plain_Pictures;
PyObject *const_str_plain_CSIDL_MYVIDEO;
PyObject *const_str_plain_Videos;
PyObject *const_str_plain_CSIDL_MYMUSIC;
PyObject *const_str_plain_Music;
PyObject *const_str_digest_b01b7144adda4d95965441ed2c25e312;
PyObject *const_set_c60bea34cf475cb2172c804802147b1a;
PyObject *const_dict_6a14ab83dbe0e04bfd9bf8145eac5b9e;
PyObject *const_str_plain_winreg;
PyObject *const_str_plain_HKEY_LOCAL_MACHINE;
PyObject *const_str_plain_HKEY_CURRENT_USER;
PyObject *const_str_plain_OpenKey;
PyObject *const_str_digest_1b4042a02fb8475b9acd9563e7c2d582;
PyObject *const_str_plain_QueryValueEx;
PyObject *const_str_digest_ba3a1337fec674818a30b8c3ebcae8a9;
PyObject *const_dict_c50afb8afc468dfd9372e549e14f7609;
PyObject *const_str_plain_create_unicode_buffer;
PyObject *const_tuple_int_pos_1024_tuple;
PyObject *const_str_plain_windll;
PyObject *const_str_plain_shell32;
PyObject *const_str_plain_SHGetFolderPathW;
PyObject *const_str_plain_kernel32;
PyObject *const_str_plain_GetShortPathNameW;
PyObject *const_str_plain_value;
PyObject *const_int_pos_1024;
PyObject *const_str_plain_buf;
PyObject *const_str_digest_3fe88a5b4fb86499fed69347b914644e;
PyObject *const_int_pos_255;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_4f078f31a76ed07db6382be9eebb64ba;
PyObject *const_str_plain_get_win_folder_via_ctypes;
PyObject *const_str_plain_get_win_folder_from_env_vars;
PyObject *const_str_plain_get_win_folder_from_registry;
PyObject *const_str_digest_cda9673884a889d71f0de0ef5065cf27;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_os;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_lru_cache;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_api;
PyObject *const_tuple_str_plain_PlatformDirsABC_tuple;
PyObject *const_str_plain_PlatformDirsABC;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_Windows;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_d0bf41bdb1d3c3a4e8b25d918611477f;
PyObject *const_str_digest_882869ceeeae8bf0228c244672becac2;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_16;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_property;
PyObject *const_dict_e8d16ece775461636da8aedac2f07d6b;
PyObject *const_str_digest_c08737a3acd5783e39c72c2ee26a47a8;
PyObject *const_dict_75075450b7799732e2408a418b3ad7ac;
PyObject *const_dict_97384862b7dc2939fe84d4923754712e;
PyObject *const_str_digest_d09baf8fa4475c2ad711fd150e039167;
PyObject *const_str_digest_a419899b3242947ee03637315f6d6242;
PyObject *const_str_plain_user_config_dir;
PyObject *const_str_digest_b3770b687df4228dcd6b925306985e5e;
PyObject *const_str_plain_site_config_dir;
PyObject *const_str_digest_8cec0827bf485ac858aaa8af4c8ff302;
PyObject *const_str_plain_user_cache_dir;
PyObject *const_str_digest_6a3341dd8953a56e370b0a3e7100bb6f;
PyObject *const_str_plain_site_cache_dir;
PyObject *const_str_digest_3a705beac7969fa31a66fa280425d21b;
PyObject *const_str_plain_user_state_dir;
PyObject *const_str_digest_2a811233f53c7afdb09ab7ca3845a3f6;
PyObject *const_str_plain_user_log_dir;
PyObject *const_str_digest_4973166039fa081d3edb67399f052dbf;
PyObject *const_str_plain_user_documents_dir;
PyObject *const_str_digest_1ad0485317b30db541112cceb300118a;
PyObject *const_str_plain_user_downloads_dir;
PyObject *const_str_digest_366563647b6f79ac96ae0701b5f9ddc0;
PyObject *const_str_plain_user_pictures_dir;
PyObject *const_str_digest_98cac45849e965e03148447bbfa3bd77;
PyObject *const_str_plain_user_videos_dir;
PyObject *const_str_digest_c0b7041ad742b6c88725079166e8ad15;
PyObject *const_str_plain_user_music_dir;
PyObject *const_str_digest_62c61509e6b929a300178a93870ffc21;
PyObject *const_str_plain_user_desktop_dir;
PyObject *const_str_digest_78be0d0d4852e03096a0b5d364c69eab;
PyObject *const_str_digest_b5fe2894a54b898ad142c05f7f50136d;
PyObject *const_str_plain_site_runtime_dir;
PyObject *const_str_digest_a5a7c34fd54994d782bcc072859c6be8;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_dict_44933cc5b37d42dc39fd828d1e339030;
PyObject *const_dict_5dbe648a37d33c71513f70b0793ee8a6;
PyObject *const_dict_2926723be0e093de36e4aaad848ef298;
PyObject *const_str_plain__pick_get_win_folder;
PyObject *const_tuple_none_tuple;
PyObject *const_tuple_str_plain_maxsize_tuple;
PyObject *const_str_digest_e26ceefca4551b0e8576f2cf8f02d4b9;
PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_c_tuple;
PyObject *const_str_digest_f294ea6d9f5a4c2fcb2977186630b5b5;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_c5451c33b8c7db9ea069401c37d34565_tuple;
PyObject *const_tuple_str_plain_ctypes_str_plain_winreg_tuple;
PyObject *const_tuple_6c2d21f5e3bd7d17a646390167df97b5_tuple;
PyObject *const_tuple_2e4b6e98e0ceb3ead65031e24ef71609_tuple;
PyObject *const_tuple_str_plain_csidl_name_tuple;
PyObject *const_tuple_f2641cb2ef38db95a02b59864fbd96c1_tuple;
PyObject *const_tuple_str_plain_self_str_plain_path_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_const_str_plain_path_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[162];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("platformdirs.windows"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_roaming);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_CSIDL_APPDATA);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_CSIDL_LOCAL_APPDATA);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_win_folder);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain__append_parts);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_18f69b8f0ef9a7e3c54e4b48ee0afbe8);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_appname);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_appauthor);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_opinion);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_version);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_join);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain__optionally_create_directory);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CSIDL_COMMON_APPDATA_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_34f15e3eb716fefbe18618b193bc92ac);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_data_dir);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_2ccc230d8f96e4fd1f3d18845bbeeb1d);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_site_data_dir);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_39178adfdd59c386c6bfc3c9035405d2);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CSIDL_LOCAL_APPDATA_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_dict_9e6f6f4eb3dae09fa3f3830439c76bbf);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_243767ebd057ef1338276ee40c2cbbc0);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_334706327b8049942bec86070f6b6faa);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_68cb5fd9a9688506895787dd74fddac5);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_Logs);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_640f3c680d6e9a54be7d97cbee8cf035);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CSIDL_PERSONAL_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_1d19b1c77aed88a6e2c29b9c946eb5ab);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CSIDL_DOWNLOADS_tuple);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_e3830b7aee99967a5f3a4b208e1cd6ad);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CSIDL_MYPICTURES_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_894cb776395ea9ec8b8e26b38559c747);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CSIDL_MYVIDEO_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_928df1072d71336d682a88c9f83c5f72);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CSIDL_MYMUSIC_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_280ab7fbb020e18c885950af6271d848);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CSIDL_DESKTOPDIRECTORY_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_f5637587fb03298852e67e4e7f46d909);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_Temp);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_cba82e1881e36aa3ed1596ce9b1042c7);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_runtime_dir);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_dd9add8832f7d6248ea8afd80bb101f2);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_win_folder_if_csidl_name_not_env_var);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_dict_8f6139c43576e977e8edc9c706649f81);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_30fb76995d1f3f513023602317ad68fc);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_b16502bad6dd9535da7236e5a52bed48);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_4bd4cef311c68dc95339cbe9ea148dda);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_CSIDL_PERSONAL);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_USERPROFILE);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_Documents);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_CSIDL_DOWNLOADS);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_Downloads);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_CSIDL_MYPICTURES);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_Pictures);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_CSIDL_MYVIDEO);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_Videos);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_CSIDL_MYMUSIC);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_Music);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_b01b7144adda4d95965441ed2c25e312);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_set_c60bea34cf475cb2172c804802147b1a);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_dict_6a14ab83dbe0e04bfd9bf8145eac5b9e);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_winreg);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_HKEY_LOCAL_MACHINE);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_HKEY_CURRENT_USER);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_OpenKey);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_1b4042a02fb8475b9acd9563e7c2d582);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_QueryValueEx);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_ba3a1337fec674818a30b8c3ebcae8a9);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_dict_c50afb8afc468dfd9372e549e14f7609);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_unicode_buffer);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1024_tuple);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_windll);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_shell32);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_SHGetFolderPathW);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_kernel32);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_GetShortPathNameW);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_value);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_int_pos_1024);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_buf);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_3fe88a5b4fb86499fed69347b914644e);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_int_pos_255);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_4f078f31a76ed07db6382be9eebb64ba);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_win_folder_via_ctypes);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_win_folder_from_env_vars);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_win_folder_from_registry);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_digest_cda9673884a889d71f0de0ef5065cf27);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_lru_cache);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_api);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PlatformDirsABC_tuple);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_PlatformDirsABC);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_Windows);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_d0bf41bdb1d3c3a4e8b25d918611477f);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_882869ceeeae8bf0228c244672becac2);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_int_pos_16);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_c08737a3acd5783e39c72c2ee26a47a8);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_dict_75075450b7799732e2408a418b3ad7ac);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_dict_97384862b7dc2939fe84d4923754712e);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_d09baf8fa4475c2ad711fd150e039167);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_digest_a419899b3242947ee03637315f6d6242);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_config_dir);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_b3770b687df4228dcd6b925306985e5e);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_site_config_dir);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_8cec0827bf485ac858aaa8af4c8ff302);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_cache_dir);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_digest_6a3341dd8953a56e370b0a3e7100bb6f);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_site_cache_dir);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_digest_3a705beac7969fa31a66fa280425d21b);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_state_dir);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_digest_2a811233f53c7afdb09ab7ca3845a3f6);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_log_dir);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_digest_4973166039fa081d3edb67399f052dbf);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_documents_dir);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_1ad0485317b30db541112cceb300118a);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_downloads_dir);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_366563647b6f79ac96ae0701b5f9ddc0);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_pictures_dir);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_98cac45849e965e03148447bbfa3bd77);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_videos_dir);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_c0b7041ad742b6c88725079166e8ad15);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_music_dir);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_digest_62c61509e6b929a300178a93870ffc21);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_desktop_dir);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_digest_78be0d0d4852e03096a0b5d364c69eab);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_digest_b5fe2894a54b898ad142c05f7f50136d);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_site_runtime_dir);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_digest_a5a7c34fd54994d782bcc072859c6be8);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_dict_44933cc5b37d42dc39fd828d1e339030);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_dict_5dbe648a37d33c71513f70b0793ee8a6);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_dict_2926723be0e093de36e4aaad848ef298);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain__pick_get_win_folder);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maxsize_tuple);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_digest_e26ceefca4551b0e8576f2cf8f02d4b9);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_c_tuple);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_digest_f294ea6d9f5a4c2fcb2977186630b5b5);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_tuple_c5451c33b8c7db9ea069401c37d34565_tuple);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ctypes_str_plain_winreg_tuple);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_tuple_6c2d21f5e3bd7d17a646390167df97b5_tuple);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_tuple_2e4b6e98e0ceb3ead65031e24ef71609_tuple);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_csidl_name_tuple);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_tuple_f2641cb2ef38db95a02b59864fbd96c1_tuple);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_path_tuple);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_const_str_plain_path_tuple);
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
void checkModuleConstants_platformdirs$windows(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_roaming));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_roaming);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_CSIDL_APPDATA));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CSIDL_APPDATA);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_CSIDL_LOCAL_APPDATA));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CSIDL_LOCAL_APPDATA);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_win_folder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_win_folder);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain__append_parts));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__append_parts);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_18f69b8f0ef9a7e3c54e4b48ee0afbe8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_18f69b8f0ef9a7e3c54e4b48ee0afbe8);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_appname));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_appname);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_appauthor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_appauthor);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_opinion));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_opinion);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_version));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_version);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_join));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_join);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain__optionally_create_directory));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__optionally_create_directory);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CSIDL_COMMON_APPDATA_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CSIDL_COMMON_APPDATA_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_34f15e3eb716fefbe18618b193bc92ac));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_34f15e3eb716fefbe18618b193bc92ac);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_data_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_data_dir);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_2ccc230d8f96e4fd1f3d18845bbeeb1d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2ccc230d8f96e4fd1f3d18845bbeeb1d);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_site_data_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_site_data_dir);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_39178adfdd59c386c6bfc3c9035405d2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_39178adfdd59c386c6bfc3c9035405d2);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CSIDL_LOCAL_APPDATA_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CSIDL_LOCAL_APPDATA_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_dict_9e6f6f4eb3dae09fa3f3830439c76bbf));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9e6f6f4eb3dae09fa3f3830439c76bbf);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_243767ebd057ef1338276ee40c2cbbc0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_243767ebd057ef1338276ee40c2cbbc0);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_334706327b8049942bec86070f6b6faa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_334706327b8049942bec86070f6b6faa);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_68cb5fd9a9688506895787dd74fddac5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_68cb5fd9a9688506895787dd74fddac5);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_Logs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Logs);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_640f3c680d6e9a54be7d97cbee8cf035));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_640f3c680d6e9a54be7d97cbee8cf035);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CSIDL_PERSONAL_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CSIDL_PERSONAL_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_1d19b1c77aed88a6e2c29b9c946eb5ab));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1d19b1c77aed88a6e2c29b9c946eb5ab);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CSIDL_DOWNLOADS_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CSIDL_DOWNLOADS_tuple);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_e3830b7aee99967a5f3a4b208e1cd6ad));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e3830b7aee99967a5f3a4b208e1cd6ad);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CSIDL_MYPICTURES_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CSIDL_MYPICTURES_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_894cb776395ea9ec8b8e26b38559c747));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_894cb776395ea9ec8b8e26b38559c747);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CSIDL_MYVIDEO_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CSIDL_MYVIDEO_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_928df1072d71336d682a88c9f83c5f72));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_928df1072d71336d682a88c9f83c5f72);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CSIDL_MYMUSIC_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CSIDL_MYMUSIC_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_280ab7fbb020e18c885950af6271d848));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_280ab7fbb020e18c885950af6271d848);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CSIDL_DESKTOPDIRECTORY_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CSIDL_DESKTOPDIRECTORY_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_f5637587fb03298852e67e4e7f46d909));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f5637587fb03298852e67e4e7f46d909);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_Temp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Temp);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_cba82e1881e36aa3ed1596ce9b1042c7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cba82e1881e36aa3ed1596ce9b1042c7);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_runtime_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_runtime_dir);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_dd9add8832f7d6248ea8afd80bb101f2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dd9add8832f7d6248ea8afd80bb101f2);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_win_folder_if_csidl_name_not_env_var));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_win_folder_if_csidl_name_not_env_var);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_dict_8f6139c43576e977e8edc9c706649f81));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8f6139c43576e977e8edc9c706649f81);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_30fb76995d1f3f513023602317ad68fc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_30fb76995d1f3f513023602317ad68fc);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_b16502bad6dd9535da7236e5a52bed48));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b16502bad6dd9535da7236e5a52bed48);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_4bd4cef311c68dc95339cbe9ea148dda));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4bd4cef311c68dc95339cbe9ea148dda);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_CSIDL_PERSONAL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CSIDL_PERSONAL);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_USERPROFILE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_USERPROFILE);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_Documents));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Documents);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_CSIDL_DOWNLOADS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CSIDL_DOWNLOADS);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_Downloads));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Downloads);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_CSIDL_MYPICTURES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CSIDL_MYPICTURES);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_Pictures));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Pictures);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_CSIDL_MYVIDEO));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CSIDL_MYVIDEO);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_Videos));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Videos);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_CSIDL_MYMUSIC));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CSIDL_MYMUSIC);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_Music));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Music);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_b01b7144adda4d95965441ed2c25e312));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b01b7144adda4d95965441ed2c25e312);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_set_c60bea34cf475cb2172c804802147b1a));
CHECK_OBJECT_DEEP(mod_consts.const_set_c60bea34cf475cb2172c804802147b1a);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_dict_6a14ab83dbe0e04bfd9bf8145eac5b9e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6a14ab83dbe0e04bfd9bf8145eac5b9e);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_winreg));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_winreg);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_HKEY_LOCAL_MACHINE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HKEY_LOCAL_MACHINE);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_HKEY_CURRENT_USER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HKEY_CURRENT_USER);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_OpenKey));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OpenKey);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_1b4042a02fb8475b9acd9563e7c2d582));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1b4042a02fb8475b9acd9563e7c2d582);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_QueryValueEx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_QueryValueEx);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_ba3a1337fec674818a30b8c3ebcae8a9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ba3a1337fec674818a30b8c3ebcae8a9);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_dict_c50afb8afc468dfd9372e549e14f7609));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c50afb8afc468dfd9372e549e14f7609);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_unicode_buffer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_unicode_buffer);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1024_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_1024_tuple);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_windll));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_windll);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_shell32));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shell32);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_SHGetFolderPathW));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SHGetFolderPathW);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_kernel32));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_kernel32);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_GetShortPathNameW));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GetShortPathNameW);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_value);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_int_pos_1024));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_1024);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_buf));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_buf);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_3fe88a5b4fb86499fed69347b914644e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3fe88a5b4fb86499fed69347b914644e);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_int_pos_255));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_255);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_4f078f31a76ed07db6382be9eebb64ba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4f078f31a76ed07db6382be9eebb64ba);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_win_folder_via_ctypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_win_folder_via_ctypes);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_win_folder_from_env_vars));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_win_folder_from_env_vars);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_win_folder_from_registry));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_win_folder_from_registry);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_digest_cda9673884a889d71f0de0ef5065cf27));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cda9673884a889d71f0de0ef5065cf27);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_lru_cache));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lru_cache);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_api));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_api);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PlatformDirsABC_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_PlatformDirsABC_tuple);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_PlatformDirsABC));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PlatformDirsABC);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_Windows));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Windows);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_d0bf41bdb1d3c3a4e8b25d918611477f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d0bf41bdb1d3c3a4e8b25d918611477f);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_882869ceeeae8bf0228c244672becac2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_882869ceeeae8bf0228c244672becac2);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_int_pos_16));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_16);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_c08737a3acd5783e39c72c2ee26a47a8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c08737a3acd5783e39c72c2ee26a47a8);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_dict_75075450b7799732e2408a418b3ad7ac));
CHECK_OBJECT_DEEP(mod_consts.const_dict_75075450b7799732e2408a418b3ad7ac);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_dict_97384862b7dc2939fe84d4923754712e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_97384862b7dc2939fe84d4923754712e);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_d09baf8fa4475c2ad711fd150e039167));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d09baf8fa4475c2ad711fd150e039167);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_digest_a419899b3242947ee03637315f6d6242));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a419899b3242947ee03637315f6d6242);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_config_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_config_dir);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_b3770b687df4228dcd6b925306985e5e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b3770b687df4228dcd6b925306985e5e);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_site_config_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_site_config_dir);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_8cec0827bf485ac858aaa8af4c8ff302));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8cec0827bf485ac858aaa8af4c8ff302);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_cache_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_cache_dir);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_digest_6a3341dd8953a56e370b0a3e7100bb6f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6a3341dd8953a56e370b0a3e7100bb6f);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_site_cache_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_site_cache_dir);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_digest_3a705beac7969fa31a66fa280425d21b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3a705beac7969fa31a66fa280425d21b);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_state_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_state_dir);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_digest_2a811233f53c7afdb09ab7ca3845a3f6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2a811233f53c7afdb09ab7ca3845a3f6);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_log_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_log_dir);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_digest_4973166039fa081d3edb67399f052dbf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4973166039fa081d3edb67399f052dbf);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_documents_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_documents_dir);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_1ad0485317b30db541112cceb300118a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1ad0485317b30db541112cceb300118a);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_downloads_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_downloads_dir);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_366563647b6f79ac96ae0701b5f9ddc0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_366563647b6f79ac96ae0701b5f9ddc0);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_pictures_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_pictures_dir);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_98cac45849e965e03148447bbfa3bd77));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_98cac45849e965e03148447bbfa3bd77);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_videos_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_videos_dir);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_c0b7041ad742b6c88725079166e8ad15));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c0b7041ad742b6c88725079166e8ad15);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_music_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_music_dir);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_digest_62c61509e6b929a300178a93870ffc21));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_62c61509e6b929a300178a93870ffc21);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_desktop_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_desktop_dir);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_digest_78be0d0d4852e03096a0b5d364c69eab));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_78be0d0d4852e03096a0b5d364c69eab);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_digest_b5fe2894a54b898ad142c05f7f50136d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b5fe2894a54b898ad142c05f7f50136d);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_site_runtime_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_site_runtime_dir);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_digest_a5a7c34fd54994d782bcc072859c6be8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a5a7c34fd54994d782bcc072859c6be8);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_dict_44933cc5b37d42dc39fd828d1e339030));
CHECK_OBJECT_DEEP(mod_consts.const_dict_44933cc5b37d42dc39fd828d1e339030);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_dict_5dbe648a37d33c71513f70b0793ee8a6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5dbe648a37d33c71513f70b0793ee8a6);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_dict_2926723be0e093de36e4aaad848ef298));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2926723be0e093de36e4aaad848ef298);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain__pick_get_win_folder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__pick_get_win_folder);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maxsize_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_maxsize_tuple);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_digest_e26ceefca4551b0e8576f2cf8f02d4b9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e26ceefca4551b0e8576f2cf8f02d4b9);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_c_tuple);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_digest_f294ea6d9f5a4c2fcb2977186630b5b5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f294ea6d9f5a4c2fcb2977186630b5b5);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_tuple_c5451c33b8c7db9ea069401c37d34565_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c5451c33b8c7db9ea069401c37d34565_tuple);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ctypes_str_plain_winreg_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ctypes_str_plain_winreg_tuple);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_tuple_6c2d21f5e3bd7d17a646390167df97b5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6c2d21f5e3bd7d17a646390167df97b5_tuple);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_tuple_2e4b6e98e0ceb3ead65031e24ef71609_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2e4b6e98e0ceb3ead65031e24ef71609_tuple);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_csidl_name_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_csidl_name_tuple);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_tuple_f2641cb2ef38db95a02b59864fbd96c1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f2641cb2ef38db95a02b59864fbd96c1_tuple);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_path_tuple);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_const_str_plain_path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_const_str_plain_path_tuple);
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
static PyObject *module_var_accessor_platformdirs$windows$PlatformDirsABC(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_platformdirs$windows->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_platformdirs$windows->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$windows, (Nuitka_StringObject *)mod_consts.const_str_plain_PlatformDirsABC);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_platformdirs$windows->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PlatformDirsABC);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PlatformDirsABC, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PlatformDirsABC);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PlatformDirsABC, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$windows, (Nuitka_StringObject *)mod_consts.const_str_plain_PlatformDirsABC);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_platformdirs$windows, (Nuitka_StringObject *)mod_consts.const_str_plain_PlatformDirsABC);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PlatformDirsABC);
    }

    return result;
}

static PyObject *module_var_accessor_platformdirs$windows$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_platformdirs$windows->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_platformdirs$windows->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$windows, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_platformdirs$windows->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$windows, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_platformdirs$windows, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_platformdirs$windows$_pick_get_win_folder(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_platformdirs$windows->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_platformdirs$windows->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$windows, (Nuitka_StringObject *)mod_consts.const_str_plain__pick_get_win_folder);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_platformdirs$windows->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__pick_get_win_folder);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__pick_get_win_folder, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__pick_get_win_folder);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__pick_get_win_folder, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$windows, (Nuitka_StringObject *)mod_consts.const_str_plain__pick_get_win_folder);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_platformdirs$windows, (Nuitka_StringObject *)mod_consts.const_str_plain__pick_get_win_folder);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__pick_get_win_folder);
    }

    return result;
}

static PyObject *module_var_accessor_platformdirs$windows$get_win_folder(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_platformdirs$windows->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_platformdirs$windows->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$windows, (Nuitka_StringObject *)mod_consts.const_str_plain_get_win_folder);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_platformdirs$windows->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_win_folder);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_win_folder, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_win_folder);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_win_folder, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$windows, (Nuitka_StringObject *)mod_consts.const_str_plain_get_win_folder);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_platformdirs$windows, (Nuitka_StringObject *)mod_consts.const_str_plain_get_win_folder);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_win_folder);
    }

    return result;
}

static PyObject *module_var_accessor_platformdirs$windows$get_win_folder_from_env_vars(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_platformdirs$windows->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_platformdirs$windows->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$windows, (Nuitka_StringObject *)mod_consts.const_str_plain_get_win_folder_from_env_vars);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_platformdirs$windows->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_win_folder_from_env_vars);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_win_folder_from_env_vars, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_win_folder_from_env_vars);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_win_folder_from_env_vars, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$windows, (Nuitka_StringObject *)mod_consts.const_str_plain_get_win_folder_from_env_vars);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_platformdirs$windows, (Nuitka_StringObject *)mod_consts.const_str_plain_get_win_folder_from_env_vars);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_win_folder_from_env_vars);
    }

    return result;
}

static PyObject *module_var_accessor_platformdirs$windows$get_win_folder_from_registry(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_platformdirs$windows->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_platformdirs$windows->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$windows, (Nuitka_StringObject *)mod_consts.const_str_plain_get_win_folder_from_registry);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_platformdirs$windows->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_win_folder_from_registry);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_win_folder_from_registry, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_win_folder_from_registry);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_win_folder_from_registry, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$windows, (Nuitka_StringObject *)mod_consts.const_str_plain_get_win_folder_from_registry);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_platformdirs$windows, (Nuitka_StringObject *)mod_consts.const_str_plain_get_win_folder_from_registry);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_win_folder_from_registry);
    }

    return result;
}

static PyObject *module_var_accessor_platformdirs$windows$get_win_folder_if_csidl_name_not_env_var(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_platformdirs$windows->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_platformdirs$windows->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$windows, (Nuitka_StringObject *)mod_consts.const_str_plain_get_win_folder_if_csidl_name_not_env_var);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_platformdirs$windows->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_win_folder_if_csidl_name_not_env_var);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_win_folder_if_csidl_name_not_env_var, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_win_folder_if_csidl_name_not_env_var);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_win_folder_if_csidl_name_not_env_var, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$windows, (Nuitka_StringObject *)mod_consts.const_str_plain_get_win_folder_if_csidl_name_not_env_var);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_platformdirs$windows, (Nuitka_StringObject *)mod_consts.const_str_plain_get_win_folder_if_csidl_name_not_env_var);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_win_folder_if_csidl_name_not_env_var);
    }

    return result;
}

static PyObject *module_var_accessor_platformdirs$windows$get_win_folder_via_ctypes(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_platformdirs$windows->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_platformdirs$windows->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$windows, (Nuitka_StringObject *)mod_consts.const_str_plain_get_win_folder_via_ctypes);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_platformdirs$windows->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_win_folder_via_ctypes);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_win_folder_via_ctypes, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_win_folder_via_ctypes);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_win_folder_via_ctypes, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$windows, (Nuitka_StringObject *)mod_consts.const_str_plain_get_win_folder_via_ctypes);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_platformdirs$windows, (Nuitka_StringObject *)mod_consts.const_str_plain_get_win_folder_via_ctypes);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_win_folder_via_ctypes);
    }

    return result;
}

static PyObject *module_var_accessor_platformdirs$windows$lru_cache(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_platformdirs$windows->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_platformdirs$windows->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$windows, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_platformdirs$windows->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$windows, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_platformdirs$windows, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_a3503296fabb40573d2159b271827133;
static PyCodeObject *code_objects_dfc5ba195e2a58b0cbc201722301f361;
static PyCodeObject *code_objects_99eaf045405b4fe42766d273a7764f5a;
static PyCodeObject *code_objects_b952f7e0613f8cc49f8ca5e18fa2fbbd;
static PyCodeObject *code_objects_7808f8e7b45f1225bfbd8dd07130b558;
static PyCodeObject *code_objects_8e4c1f8eba782367e9530388b87f0aae;
static PyCodeObject *code_objects_1c6cc4cf0ae76d271558a62cec7f5d02;
static PyCodeObject *code_objects_358aa84db41ab1faa5198b503dbf1092;
static PyCodeObject *code_objects_3acd7b2cb506134a17c2e484142019d1;
static PyCodeObject *code_objects_c18822b504a6571389c5832c13d0fbbd;
static PyCodeObject *code_objects_fa91d55522457b34f74d619f8505d953;
static PyCodeObject *code_objects_eebc52c8ea3655e16b9d4a3f8cbc0d48;
static PyCodeObject *code_objects_9075cc2a240c27a64b1968e40308c0c9;
static PyCodeObject *code_objects_d3cfbcee33a3f27bb2666ab79b645aee;
static PyCodeObject *code_objects_fac7203d25d7dcdd1a56277c60f3663b;
static PyCodeObject *code_objects_e571c83ef18006a327bcb6d798616296;
static PyCodeObject *code_objects_e90117cfc9bc3af91437adac51760a66;
static PyCodeObject *code_objects_105c3322a9eceb5ecd755259469bc77b;
static PyCodeObject *code_objects_d0cd96cfdc7e8b7eb24ecb8a0f47be26;
static PyCodeObject *code_objects_5b200f26f47768575a56467807bfa3dd;
static PyCodeObject *code_objects_bb1b9306da972c6eae43ab1f07609cb7;
static PyCodeObject *code_objects_a879d751e139bc2080b2c5168ba164ec;
static PyCodeObject *code_objects_bc18de584857168d756ee7a468985dc0;
static PyCodeObject *code_objects_c9f25602c3ecb131d3fb3cb414cd9298;
static PyCodeObject *code_objects_68e772ccfb7692811aaee9e6b4ab47fb;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_e26ceefca4551b0e8576f2cf8f02d4b9); CHECK_OBJECT(module_filename_obj);
code_objects_a3503296fabb40573d2159b271827133 = MAKE_CODE_OBJECT(module_filename_obj, 247, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_4f078f31a76ed07db6382be9eebb64ba, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_c_tuple, NULL, 1, 0, 0);
code_objects_dfc5ba195e2a58b0cbc201722301f361 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_f294ea6d9f5a4c2fcb2977186630b5b5, mod_consts.const_str_digest_f294ea6d9f5a4c2fcb2977186630b5b5, NULL, NULL, 0, 0, 0);
code_objects_99eaf045405b4fe42766d273a7764f5a = MAKE_CODE_OBJECT(module_filename_obj, 16, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Windows, mod_consts.const_str_plain_Windows, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_b952f7e0613f8cc49f8ca5e18fa2fbbd = MAKE_CODE_OBJECT(module_filename_obj, 38, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__append_parts, mod_consts.const_str_digest_d09baf8fa4475c2ad711fd150e039167, mod_consts.const_tuple_c5451c33b8c7db9ea069401c37d34565_tuple, NULL, 2, 1, 0);
code_objects_7808f8e7b45f1225bfbd8dd07130b558 = MAKE_CODE_OBJECT(module_filename_obj, 258, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__pick_get_win_folder, mod_consts.const_str_plain__pick_get_win_folder, mod_consts.const_tuple_str_plain_ctypes_str_plain_winreg_tuple, NULL, 0, 0, 0);
code_objects_8e4c1f8eba782367e9530388b87f0aae = MAKE_CODE_OBJECT(module_filename_obj, 143, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_win_folder_from_env_vars, mod_consts.const_str_plain_get_win_folder_from_env_vars, mod_consts.const_tuple_6c2d21f5e3bd7d17a646390167df97b5_tuple, NULL, 1, 0, 0);
code_objects_1c6cc4cf0ae76d271558a62cec7f5d02 = MAKE_CODE_OBJECT(module_filename_obj, 183, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_win_folder_from_registry, mod_consts.const_str_plain_get_win_folder_from_registry, mod_consts.const_tuple_2e4b6e98e0ceb3ead65031e24ef71609_tuple, NULL, 1, 0, 0);
code_objects_358aa84db41ab1faa5198b503dbf1092 = MAKE_CODE_OBJECT(module_filename_obj, 164, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_win_folder_if_csidl_name_not_env_var, mod_consts.const_str_plain_get_win_folder_if_csidl_name_not_env_var, mod_consts.const_tuple_str_plain_csidl_name_tuple, NULL, 1, 0, 0);
code_objects_3acd7b2cb506134a17c2e484142019d1 = MAKE_CODE_OBJECT(module_filename_obj, 219, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_win_folder_via_ctypes, mod_consts.const_str_plain_get_win_folder_via_ctypes, mod_consts.const_tuple_f2641cb2ef38db95a02b59864fbd96c1_tuple, NULL, 1, 0, 0);
code_objects_c18822b504a6571389c5832c13d0fbbd = MAKE_CODE_OBJECT(module_filename_obj, 79, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_site_cache_dir, mod_consts.const_str_digest_3a705beac7969fa31a66fa280425d21b, mod_consts.const_tuple_str_plain_self_str_plain_path_tuple, NULL, 1, 0, 0);
code_objects_fa91d55522457b34f74d619f8505d953 = MAKE_CODE_OBJECT(module_filename_obj, 65, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_site_config_dir, mod_consts.const_str_digest_8cec0827bf485ac858aaa8af4c8ff302, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_eebc52c8ea3655e16b9d4a3f8cbc0d48 = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_site_data_dir, mod_consts.const_str_digest_a419899b3242947ee03637315f6d6242, mod_consts.const_tuple_str_plain_self_str_plain_path_tuple, NULL, 1, 0, 0);
code_objects_9075cc2a240c27a64b1968e40308c0c9 = MAKE_CODE_OBJECT(module_filename_obj, 138, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_site_runtime_dir, mod_consts.const_str_digest_a5a7c34fd54994d782bcc072859c6be8, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_d3cfbcee33a3f27bb2666ab79b645aee = MAKE_CODE_OBJECT(module_filename_obj, 70, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_cache_dir, mod_consts.const_str_digest_6a3341dd8953a56e370b0a3e7100bb6f, mod_consts.const_tuple_str_plain_self_str_plain_path_tuple, NULL, 1, 0, 0);
code_objects_fac7203d25d7dcdd1a56277c60f3663b = MAKE_CODE_OBJECT(module_filename_obj, 60, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_config_dir, mod_consts.const_str_digest_b3770b687df4228dcd6b925306985e5e, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_e571c83ef18006a327bcb6d798616296 = MAKE_CODE_OBJECT(module_filename_obj, 28, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_data_dir, mod_consts.const_str_digest_c08737a3acd5783e39c72c2ee26a47a8, mod_consts.const_tuple_str_plain_self_str_plain_const_str_plain_path_tuple, NULL, 1, 0, 0);
code_objects_e90117cfc9bc3af91437adac51760a66 = MAKE_CODE_OBJECT(module_filename_obj, 124, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_desktop_dir, mod_consts.const_str_digest_78be0d0d4852e03096a0b5d364c69eab, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_105c3322a9eceb5ecd755259469bc77b = MAKE_CODE_OBJECT(module_filename_obj, 99, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_documents_dir, mod_consts.const_str_digest_1ad0485317b30db541112cceb300118a, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_d0cd96cfdc7e8b7eb24ecb8a0f47be26 = MAKE_CODE_OBJECT(module_filename_obj, 104, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_downloads_dir, mod_consts.const_str_digest_366563647b6f79ac96ae0701b5f9ddc0, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_5b200f26f47768575a56467807bfa3dd = MAKE_CODE_OBJECT(module_filename_obj, 90, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_log_dir, mod_consts.const_str_digest_4973166039fa081d3edb67399f052dbf, mod_consts.const_tuple_str_plain_self_str_plain_path_tuple, NULL, 1, 0, 0);
code_objects_bb1b9306da972c6eae43ab1f07609cb7 = MAKE_CODE_OBJECT(module_filename_obj, 119, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_music_dir, mod_consts.const_str_digest_62c61509e6b929a300178a93870ffc21, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_a879d751e139bc2080b2c5168ba164ec = MAKE_CODE_OBJECT(module_filename_obj, 109, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_pictures_dir, mod_consts.const_str_digest_98cac45849e965e03148447bbfa3bd77, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_bc18de584857168d756ee7a468985dc0 = MAKE_CODE_OBJECT(module_filename_obj, 129, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_runtime_dir, mod_consts.const_str_digest_b5fe2894a54b898ad142c05f7f50136d, mod_consts.const_tuple_str_plain_self_str_plain_path_tuple, NULL, 1, 0, 0);
code_objects_c9f25602c3ecb131d3fb3cb414cd9298 = MAKE_CODE_OBJECT(module_filename_obj, 85, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_state_dir, mod_consts.const_str_digest_2a811233f53c7afdb09ab7ca3845a3f6, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_68e772ccfb7692811aaee9e6b4ab47fb = MAKE_CODE_OBJECT(module_filename_obj, 114, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_videos_dir, mod_consts.const_str_digest_c0b7041ad742b6c88725079166e8ad15, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_platformdirs$windows$$$function__21_get_win_folder_via_ctypes$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__10_user_documents_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__11_user_downloads_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__12_user_pictures_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__13_user_videos_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__14_user_music_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__15_user_desktop_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__16_user_runtime_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__17_site_runtime_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__18_get_win_folder_from_env_vars(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__19_get_win_folder_if_csidl_name_not_env_var(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__1_user_data_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__20_get_win_folder_from_registry(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__21_get_win_folder_via_ctypes(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__22__pick_get_win_folder(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__2__append_parts(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__3_site_data_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__4_user_config_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__5_site_config_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__6_user_cache_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__7_site_cache_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__8_user_state_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__9_user_log_dir(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_platformdirs$windows$$$function__1_user_data_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_const = NULL;
PyObject *var_path = NULL;
struct Nuitka_FrameObject *frame_frame_platformdirs$windows$$$function__1_user_data_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$windows$$$function__1_user_data_dir = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_platformdirs$windows$$$function__1_user_data_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$windows$$$function__1_user_data_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$windows$$$function__1_user_data_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$windows$$$function__1_user_data_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_e571c83ef18006a327bcb6d798616296, module_platformdirs$windows, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$windows$$$function__1_user_data_dir->m_type_description == NULL);
frame_frame_platformdirs$windows$$$function__1_user_data_dir = cache_frame_frame_platformdirs$windows$$$function__1_user_data_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$windows$$$function__1_user_data_dir);
assert(Py_REFCNT(frame_frame_platformdirs$windows$$$function__1_user_data_dir) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_roaming);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 34;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_assign_source_1 = mod_consts.const_str_plain_CSIDL_APPDATA;
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_1 = mod_consts.const_str_plain_CSIDL_LOCAL_APPDATA;
condexpr_end_1:;
assert(var_const == NULL);
Py_INCREF(tmp_assign_source_1);
var_const = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_path_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$windows$get_win_folder(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_win_folder);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 35;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_const);
tmp_args_element_value_1 = var_const;
frame_frame_platformdirs$windows$$$function__1_user_data_dir->m_frame.f_lineno = 35;
tmp_path_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_path_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = OS_PATH_NORMPATH(tstate, tmp_path_arg_1);
CHECK_OBJECT(tmp_path_arg_1);
Py_DECREF(tmp_path_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_path == NULL);
var_path = tmp_assign_source_2;
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(var_path);
tmp_args_element_value_2 = var_path;
frame_frame_platformdirs$windows$$$function__1_user_data_dir->m_frame.f_lineno = 36;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__append_parts, tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$windows$$$function__1_user_data_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$windows$$$function__1_user_data_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$windows$$$function__1_user_data_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$windows$$$function__1_user_data_dir,
    type_description_1,
    par_self,
    var_const,
    var_path
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$windows$$$function__1_user_data_dir == cache_frame_frame_platformdirs$windows$$$function__1_user_data_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$windows$$$function__1_user_data_dir);
    cache_frame_frame_platformdirs$windows$$$function__1_user_data_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$windows$$$function__1_user_data_dir);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_const);
CHECK_OBJECT(var_const);
Py_DECREF(var_const);
var_const = NULL;
CHECK_OBJECT(var_path);
CHECK_OBJECT(var_path);
Py_DECREF(var_path);
var_path = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_const);
var_const = NULL;
Py_XDECREF(var_path);
var_path = NULL;
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


static PyObject *impl_platformdirs$windows$$$function__2__append_parts(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_path = python_pars[1];
PyObject *par_opinion_value = python_pars[2];
PyObject *var_params = NULL;
PyObject *var_author = NULL;
struct Nuitka_FrameObject *frame_frame_platformdirs$windows$$$function__2__append_parts;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$windows$$$function__2__append_parts = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_params == NULL);
var_params = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_platformdirs$windows$$$function__2__append_parts)) {
    Py_XDECREF(cache_frame_frame_platformdirs$windows$$$function__2__append_parts);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$windows$$$function__2__append_parts == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$windows$$$function__2__append_parts = MAKE_FUNCTION_FRAME(tstate, code_objects_b952f7e0613f8cc49f8ca5e18fa2fbbd, module_platformdirs$windows, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$windows$$$function__2__append_parts->m_type_description == NULL);
frame_frame_platformdirs$windows$$$function__2__append_parts = cache_frame_frame_platformdirs$windows$$$function__2__append_parts;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$windows$$$function__2__append_parts);
assert(Py_REFCNT(frame_frame_platformdirs$windows$$$function__2__append_parts) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_appname);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 40;
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
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_appauthor);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_False;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_2;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_appauthor);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 42;
type_description_1 = "ooooo";
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
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_or_right_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_appname);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assign_source_2 = tmp_or_left_value_1;
or_end_1:;
assert(var_author == NULL);
var_author = tmp_assign_source_2;
}
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
CHECK_OBJECT(var_params);
tmp_list_arg_value_1 = var_params;
CHECK_OBJECT(var_author);
tmp_item_value_1 = var_author;
tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
branch_no_2:;
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_params);
tmp_list_arg_value_2 = var_params;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_item_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_appname);
if (tmp_item_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
{
nuitka_bool tmp_condition_result_3;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_opinion_value);
tmp_cmp_expr_left_2 = par_opinion_value;
tmp_cmp_expr_right_2 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_opinion);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 45;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
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
PyObject *tmp_list_arg_value_3;
PyObject *tmp_item_value_3;
CHECK_OBJECT(var_params);
tmp_list_arg_value_3 = var_params;
CHECK_OBJECT(par_opinion_value);
tmp_item_value_3 = par_opinion_value;
tmp_result = LIST_APPEND0(tmp_list_arg_value_3, tmp_item_value_3);
assert(!(tmp_result == false));
}
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_attribute_value_3;
int tmp_truth_name_3;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_version);
if (tmp_attribute_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_3);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_3);

exception_lineno = 47;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_3);
Py_DECREF(tmp_attribute_value_3);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_list_arg_value_4;
PyObject *tmp_item_value_4;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(var_params);
tmp_list_arg_value_4 = var_params;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_item_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_version);
if (tmp_item_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_4, tmp_item_value_4);
assert(!(tmp_result == false));
}
branch_no_4:;
branch_no_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
tmp_expression_value_9 = IMPORT_HARD_NTPATH();
assert(!(tmp_expression_value_9 == NULL));
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_join);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_path);
tmp_tuple_element_1 = par_path;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_params);
tmp_direct_call_arg3_1 = var_params;
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_assign_source_3 = impl___main__$$$helper_function_complex_call_helper_pos_star_list(tstate, dir_call_args);
}
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_path;
    assert(old != NULL);
    par_path = tmp_assign_source_3;
    Py_DECREF(old);
}

}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_path);
tmp_args_element_value_1 = par_path;
frame_frame_platformdirs$windows$$$function__2__append_parts->m_frame.f_lineno = 50;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__optionally_create_directory, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$windows$$$function__2__append_parts, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$windows$$$function__2__append_parts->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$windows$$$function__2__append_parts, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$windows$$$function__2__append_parts,
    type_description_1,
    par_self,
    par_path,
    par_opinion_value,
    var_params,
    var_author
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$windows$$$function__2__append_parts == cache_frame_frame_platformdirs$windows$$$function__2__append_parts) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$windows$$$function__2__append_parts);
    cache_frame_frame_platformdirs$windows$$$function__2__append_parts = NULL;
}

assertFrameObject(frame_frame_platformdirs$windows$$$function__2__append_parts);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(par_path);
tmp_return_value = par_path;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_path);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
par_path = NULL;
CHECK_OBJECT(var_params);
CHECK_OBJECT(var_params);
Py_DECREF(var_params);
var_params = NULL;
Py_XDECREF(var_author);
var_author = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_path);
par_path = NULL;
CHECK_OBJECT(var_params);
CHECK_OBJECT(var_params);
Py_DECREF(var_params);
var_params = NULL;
Py_XDECREF(var_author);
var_author = NULL;
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
CHECK_OBJECT(par_opinion_value);
Py_DECREF(par_opinion_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_opinion_value);
Py_DECREF(par_opinion_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_platformdirs$windows$$$function__3_site_data_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_path = NULL;
struct Nuitka_FrameObject *frame_frame_platformdirs$windows$$$function__3_site_data_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$windows$$$function__3_site_data_dir = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_platformdirs$windows$$$function__3_site_data_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$windows$$$function__3_site_data_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$windows$$$function__3_site_data_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$windows$$$function__3_site_data_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_eebc52c8ea3655e16b9d4a3f8cbc0d48, module_platformdirs$windows, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$windows$$$function__3_site_data_dir->m_type_description == NULL);
frame_frame_platformdirs$windows$$$function__3_site_data_dir = cache_frame_frame_platformdirs$windows$$$function__3_site_data_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$windows$$$function__3_site_data_dir);
assert(Py_REFCNT(frame_frame_platformdirs$windows$$$function__3_site_data_dir) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_path_arg_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$windows$get_win_folder(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_win_folder);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 56;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$windows$$$function__3_site_data_dir->m_frame.f_lineno = 56;
tmp_path_arg_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_CSIDL_COMMON_APPDATA_tuple);

if (tmp_path_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = OS_PATH_NORMPATH(tstate, tmp_path_arg_1);
CHECK_OBJECT(tmp_path_arg_1);
Py_DECREF(tmp_path_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_path == NULL);
var_path = tmp_assign_source_1;
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(var_path);
tmp_args_element_value_1 = var_path;
frame_frame_platformdirs$windows$$$function__3_site_data_dir->m_frame.f_lineno = 57;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__append_parts, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$windows$$$function__3_site_data_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$windows$$$function__3_site_data_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$windows$$$function__3_site_data_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$windows$$$function__3_site_data_dir,
    type_description_1,
    par_self,
    var_path
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$windows$$$function__3_site_data_dir == cache_frame_frame_platformdirs$windows$$$function__3_site_data_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$windows$$$function__3_site_data_dir);
    cache_frame_frame_platformdirs$windows$$$function__3_site_data_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$windows$$$function__3_site_data_dir);

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
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_path);
var_path = NULL;
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


static PyObject *impl_platformdirs$windows$$$function__4_user_config_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$windows$$$function__4_user_config_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$windows$$$function__4_user_config_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$windows$$$function__4_user_config_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$windows$$$function__4_user_config_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$windows$$$function__4_user_config_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$windows$$$function__4_user_config_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_fac7203d25d7dcdd1a56277c60f3663b, module_platformdirs$windows, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$windows$$$function__4_user_config_dir->m_type_description == NULL);
frame_frame_platformdirs$windows$$$function__4_user_config_dir = cache_frame_frame_platformdirs$windows$$$function__4_user_config_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$windows$$$function__4_user_config_dir);
assert(Py_REFCNT(frame_frame_platformdirs$windows$$$function__4_user_config_dir) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_data_dir);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$windows$$$function__4_user_config_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$windows$$$function__4_user_config_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$windows$$$function__4_user_config_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$windows$$$function__4_user_config_dir,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$windows$$$function__4_user_config_dir == cache_frame_frame_platformdirs$windows$$$function__4_user_config_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$windows$$$function__4_user_config_dir);
    cache_frame_frame_platformdirs$windows$$$function__4_user_config_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$windows$$$function__4_user_config_dir);

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


static PyObject *impl_platformdirs$windows$$$function__5_site_config_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$windows$$$function__5_site_config_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$windows$$$function__5_site_config_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$windows$$$function__5_site_config_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$windows$$$function__5_site_config_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$windows$$$function__5_site_config_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$windows$$$function__5_site_config_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_fa91d55522457b34f74d619f8505d953, module_platformdirs$windows, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$windows$$$function__5_site_config_dir->m_type_description == NULL);
frame_frame_platformdirs$windows$$$function__5_site_config_dir = cache_frame_frame_platformdirs$windows$$$function__5_site_config_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$windows$$$function__5_site_config_dir);
assert(Py_REFCNT(frame_frame_platformdirs$windows$$$function__5_site_config_dir) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_site_data_dir);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$windows$$$function__5_site_config_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$windows$$$function__5_site_config_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$windows$$$function__5_site_config_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$windows$$$function__5_site_config_dir,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$windows$$$function__5_site_config_dir == cache_frame_frame_platformdirs$windows$$$function__5_site_config_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$windows$$$function__5_site_config_dir);
    cache_frame_frame_platformdirs$windows$$$function__5_site_config_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$windows$$$function__5_site_config_dir);

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


static PyObject *impl_platformdirs$windows$$$function__6_user_cache_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_path = NULL;
struct Nuitka_FrameObject *frame_frame_platformdirs$windows$$$function__6_user_cache_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$windows$$$function__6_user_cache_dir = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_platformdirs$windows$$$function__6_user_cache_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$windows$$$function__6_user_cache_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$windows$$$function__6_user_cache_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$windows$$$function__6_user_cache_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_d3cfbcee33a3f27bb2666ab79b645aee, module_platformdirs$windows, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$windows$$$function__6_user_cache_dir->m_type_description == NULL);
frame_frame_platformdirs$windows$$$function__6_user_cache_dir = cache_frame_frame_platformdirs$windows$$$function__6_user_cache_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$windows$$$function__6_user_cache_dir);
assert(Py_REFCNT(frame_frame_platformdirs$windows$$$function__6_user_cache_dir) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_path_arg_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$windows$get_win_folder(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_win_folder);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 75;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$windows$$$function__6_user_cache_dir->m_frame.f_lineno = 75;
tmp_path_arg_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_CSIDL_LOCAL_APPDATA_tuple);

if (tmp_path_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = OS_PATH_NORMPATH(tstate, tmp_path_arg_1);
CHECK_OBJECT(tmp_path_arg_1);
Py_DECREF(tmp_path_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_path == NULL);
var_path = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__append_parts);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_path);
tmp_tuple_element_1 = var_path;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_9e6f6f4eb3dae09fa3f3830439c76bbf);
frame_frame_platformdirs$windows$$$function__6_user_cache_dir->m_frame.f_lineno = 76;
tmp_return_value = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$windows$$$function__6_user_cache_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$windows$$$function__6_user_cache_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$windows$$$function__6_user_cache_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$windows$$$function__6_user_cache_dir,
    type_description_1,
    par_self,
    var_path
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$windows$$$function__6_user_cache_dir == cache_frame_frame_platformdirs$windows$$$function__6_user_cache_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$windows$$$function__6_user_cache_dir);
    cache_frame_frame_platformdirs$windows$$$function__6_user_cache_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$windows$$$function__6_user_cache_dir);

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
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_path);
var_path = NULL;
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


static PyObject *impl_platformdirs$windows$$$function__7_site_cache_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_path = NULL;
struct Nuitka_FrameObject *frame_frame_platformdirs$windows$$$function__7_site_cache_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$windows$$$function__7_site_cache_dir = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_platformdirs$windows$$$function__7_site_cache_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$windows$$$function__7_site_cache_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$windows$$$function__7_site_cache_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$windows$$$function__7_site_cache_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_c18822b504a6571389c5832c13d0fbbd, module_platformdirs$windows, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$windows$$$function__7_site_cache_dir->m_type_description == NULL);
frame_frame_platformdirs$windows$$$function__7_site_cache_dir = cache_frame_frame_platformdirs$windows$$$function__7_site_cache_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$windows$$$function__7_site_cache_dir);
assert(Py_REFCNT(frame_frame_platformdirs$windows$$$function__7_site_cache_dir) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_path_arg_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$windows$get_win_folder(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_win_folder);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 81;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$windows$$$function__7_site_cache_dir->m_frame.f_lineno = 81;
tmp_path_arg_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_CSIDL_COMMON_APPDATA_tuple);

if (tmp_path_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = OS_PATH_NORMPATH(tstate, tmp_path_arg_1);
CHECK_OBJECT(tmp_path_arg_1);
Py_DECREF(tmp_path_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_path == NULL);
var_path = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__append_parts);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_path);
tmp_tuple_element_1 = var_path;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_9e6f6f4eb3dae09fa3f3830439c76bbf);
frame_frame_platformdirs$windows$$$function__7_site_cache_dir->m_frame.f_lineno = 82;
tmp_return_value = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$windows$$$function__7_site_cache_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$windows$$$function__7_site_cache_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$windows$$$function__7_site_cache_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$windows$$$function__7_site_cache_dir,
    type_description_1,
    par_self,
    var_path
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$windows$$$function__7_site_cache_dir == cache_frame_frame_platformdirs$windows$$$function__7_site_cache_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$windows$$$function__7_site_cache_dir);
    cache_frame_frame_platformdirs$windows$$$function__7_site_cache_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$windows$$$function__7_site_cache_dir);

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
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_path);
var_path = NULL;
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


static PyObject *impl_platformdirs$windows$$$function__8_user_state_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$windows$$$function__8_user_state_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$windows$$$function__8_user_state_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$windows$$$function__8_user_state_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$windows$$$function__8_user_state_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$windows$$$function__8_user_state_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$windows$$$function__8_user_state_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_c9f25602c3ecb131d3fb3cb414cd9298, module_platformdirs$windows, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$windows$$$function__8_user_state_dir->m_type_description == NULL);
frame_frame_platformdirs$windows$$$function__8_user_state_dir = cache_frame_frame_platformdirs$windows$$$function__8_user_state_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$windows$$$function__8_user_state_dir);
assert(Py_REFCNT(frame_frame_platformdirs$windows$$$function__8_user_state_dir) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_data_dir);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$windows$$$function__8_user_state_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$windows$$$function__8_user_state_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$windows$$$function__8_user_state_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$windows$$$function__8_user_state_dir,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$windows$$$function__8_user_state_dir == cache_frame_frame_platformdirs$windows$$$function__8_user_state_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$windows$$$function__8_user_state_dir);
    cache_frame_frame_platformdirs$windows$$$function__8_user_state_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$windows$$$function__8_user_state_dir);

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


static PyObject *impl_platformdirs$windows$$$function__9_user_log_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_path = NULL;
struct Nuitka_FrameObject *frame_frame_platformdirs$windows$$$function__9_user_log_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$windows$$$function__9_user_log_dir = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_platformdirs$windows$$$function__9_user_log_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$windows$$$function__9_user_log_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$windows$$$function__9_user_log_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$windows$$$function__9_user_log_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_5b200f26f47768575a56467807bfa3dd, module_platformdirs$windows, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$windows$$$function__9_user_log_dir->m_type_description == NULL);
frame_frame_platformdirs$windows$$$function__9_user_log_dir = cache_frame_frame_platformdirs$windows$$$function__9_user_log_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$windows$$$function__9_user_log_dir);
assert(Py_REFCNT(frame_frame_platformdirs$windows$$$function__9_user_log_dir) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_data_dir);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_path == NULL);
var_path = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_opinion);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 93;
type_description_1 = "oo";
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
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_3 = IMPORT_HARD_NTPATH();
assert(!(tmp_expression_value_3 == NULL));
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_join);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_path);
tmp_args_element_value_1 = var_path;
tmp_args_element_value_2 = mod_consts.const_str_plain_Logs;
frame_frame_platformdirs$windows$$$function__9_user_log_dir->m_frame.f_lineno = 94;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_path;
    assert(old != NULL);
    var_path = tmp_assign_source_2;
    Py_DECREF(old);
}

}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(var_path);
tmp_args_element_value_3 = var_path;
frame_frame_platformdirs$windows$$$function__9_user_log_dir->m_frame.f_lineno = 95;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__optionally_create_directory, tmp_args_element_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
if (var_path == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_path);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 96;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_path;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$windows$$$function__9_user_log_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$windows$$$function__9_user_log_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$windows$$$function__9_user_log_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$windows$$$function__9_user_log_dir,
    type_description_1,
    par_self,
    var_path
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$windows$$$function__9_user_log_dir == cache_frame_frame_platformdirs$windows$$$function__9_user_log_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$windows$$$function__9_user_log_dir);
    cache_frame_frame_platformdirs$windows$$$function__9_user_log_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$windows$$$function__9_user_log_dir);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_path);
var_path = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_path);
var_path = NULL;
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


static PyObject *impl_platformdirs$windows$$$function__10_user_documents_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$windows$$$function__10_user_documents_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$windows$$$function__10_user_documents_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$windows$$$function__10_user_documents_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$windows$$$function__10_user_documents_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$windows$$$function__10_user_documents_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$windows$$$function__10_user_documents_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_105c3322a9eceb5ecd755259469bc77b, module_platformdirs$windows, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$windows$$$function__10_user_documents_dir->m_type_description == NULL);
frame_frame_platformdirs$windows$$$function__10_user_documents_dir = cache_frame_frame_platformdirs$windows$$$function__10_user_documents_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$windows$$$function__10_user_documents_dir);
assert(Py_REFCNT(frame_frame_platformdirs$windows$$$function__10_user_documents_dir) == 2);

// Framed code:
{
PyObject *tmp_path_arg_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$windows$get_win_folder(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_win_folder);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 101;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$windows$$$function__10_user_documents_dir->m_frame.f_lineno = 101;
tmp_path_arg_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_CSIDL_PERSONAL_tuple);

if (tmp_path_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = OS_PATH_NORMPATH(tstate, tmp_path_arg_1);
CHECK_OBJECT(tmp_path_arg_1);
Py_DECREF(tmp_path_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$windows$$$function__10_user_documents_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$windows$$$function__10_user_documents_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$windows$$$function__10_user_documents_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$windows$$$function__10_user_documents_dir,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$windows$$$function__10_user_documents_dir == cache_frame_frame_platformdirs$windows$$$function__10_user_documents_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$windows$$$function__10_user_documents_dir);
    cache_frame_frame_platformdirs$windows$$$function__10_user_documents_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$windows$$$function__10_user_documents_dir);

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


static PyObject *impl_platformdirs$windows$$$function__11_user_downloads_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$windows$$$function__11_user_downloads_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$windows$$$function__11_user_downloads_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$windows$$$function__11_user_downloads_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$windows$$$function__11_user_downloads_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$windows$$$function__11_user_downloads_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$windows$$$function__11_user_downloads_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_d0cd96cfdc7e8b7eb24ecb8a0f47be26, module_platformdirs$windows, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$windows$$$function__11_user_downloads_dir->m_type_description == NULL);
frame_frame_platformdirs$windows$$$function__11_user_downloads_dir = cache_frame_frame_platformdirs$windows$$$function__11_user_downloads_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$windows$$$function__11_user_downloads_dir);
assert(Py_REFCNT(frame_frame_platformdirs$windows$$$function__11_user_downloads_dir) == 2);

// Framed code:
{
PyObject *tmp_path_arg_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$windows$get_win_folder(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_win_folder);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 106;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$windows$$$function__11_user_downloads_dir->m_frame.f_lineno = 106;
tmp_path_arg_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_CSIDL_DOWNLOADS_tuple);

if (tmp_path_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = OS_PATH_NORMPATH(tstate, tmp_path_arg_1);
CHECK_OBJECT(tmp_path_arg_1);
Py_DECREF(tmp_path_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$windows$$$function__11_user_downloads_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$windows$$$function__11_user_downloads_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$windows$$$function__11_user_downloads_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$windows$$$function__11_user_downloads_dir,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$windows$$$function__11_user_downloads_dir == cache_frame_frame_platformdirs$windows$$$function__11_user_downloads_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$windows$$$function__11_user_downloads_dir);
    cache_frame_frame_platformdirs$windows$$$function__11_user_downloads_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$windows$$$function__11_user_downloads_dir);

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


static PyObject *impl_platformdirs$windows$$$function__12_user_pictures_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$windows$$$function__12_user_pictures_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$windows$$$function__12_user_pictures_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$windows$$$function__12_user_pictures_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$windows$$$function__12_user_pictures_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$windows$$$function__12_user_pictures_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$windows$$$function__12_user_pictures_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_a879d751e139bc2080b2c5168ba164ec, module_platformdirs$windows, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$windows$$$function__12_user_pictures_dir->m_type_description == NULL);
frame_frame_platformdirs$windows$$$function__12_user_pictures_dir = cache_frame_frame_platformdirs$windows$$$function__12_user_pictures_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$windows$$$function__12_user_pictures_dir);
assert(Py_REFCNT(frame_frame_platformdirs$windows$$$function__12_user_pictures_dir) == 2);

// Framed code:
{
PyObject *tmp_path_arg_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$windows$get_win_folder(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_win_folder);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 111;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$windows$$$function__12_user_pictures_dir->m_frame.f_lineno = 111;
tmp_path_arg_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_CSIDL_MYPICTURES_tuple);

if (tmp_path_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = OS_PATH_NORMPATH(tstate, tmp_path_arg_1);
CHECK_OBJECT(tmp_path_arg_1);
Py_DECREF(tmp_path_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$windows$$$function__12_user_pictures_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$windows$$$function__12_user_pictures_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$windows$$$function__12_user_pictures_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$windows$$$function__12_user_pictures_dir,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$windows$$$function__12_user_pictures_dir == cache_frame_frame_platformdirs$windows$$$function__12_user_pictures_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$windows$$$function__12_user_pictures_dir);
    cache_frame_frame_platformdirs$windows$$$function__12_user_pictures_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$windows$$$function__12_user_pictures_dir);

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


static PyObject *impl_platformdirs$windows$$$function__13_user_videos_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$windows$$$function__13_user_videos_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$windows$$$function__13_user_videos_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$windows$$$function__13_user_videos_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$windows$$$function__13_user_videos_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$windows$$$function__13_user_videos_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$windows$$$function__13_user_videos_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_68e772ccfb7692811aaee9e6b4ab47fb, module_platformdirs$windows, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$windows$$$function__13_user_videos_dir->m_type_description == NULL);
frame_frame_platformdirs$windows$$$function__13_user_videos_dir = cache_frame_frame_platformdirs$windows$$$function__13_user_videos_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$windows$$$function__13_user_videos_dir);
assert(Py_REFCNT(frame_frame_platformdirs$windows$$$function__13_user_videos_dir) == 2);

// Framed code:
{
PyObject *tmp_path_arg_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$windows$get_win_folder(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_win_folder);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 116;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$windows$$$function__13_user_videos_dir->m_frame.f_lineno = 116;
tmp_path_arg_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_CSIDL_MYVIDEO_tuple);

if (tmp_path_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = OS_PATH_NORMPATH(tstate, tmp_path_arg_1);
CHECK_OBJECT(tmp_path_arg_1);
Py_DECREF(tmp_path_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$windows$$$function__13_user_videos_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$windows$$$function__13_user_videos_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$windows$$$function__13_user_videos_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$windows$$$function__13_user_videos_dir,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$windows$$$function__13_user_videos_dir == cache_frame_frame_platformdirs$windows$$$function__13_user_videos_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$windows$$$function__13_user_videos_dir);
    cache_frame_frame_platformdirs$windows$$$function__13_user_videos_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$windows$$$function__13_user_videos_dir);

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


static PyObject *impl_platformdirs$windows$$$function__14_user_music_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$windows$$$function__14_user_music_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$windows$$$function__14_user_music_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$windows$$$function__14_user_music_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$windows$$$function__14_user_music_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$windows$$$function__14_user_music_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$windows$$$function__14_user_music_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_bb1b9306da972c6eae43ab1f07609cb7, module_platformdirs$windows, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$windows$$$function__14_user_music_dir->m_type_description == NULL);
frame_frame_platformdirs$windows$$$function__14_user_music_dir = cache_frame_frame_platformdirs$windows$$$function__14_user_music_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$windows$$$function__14_user_music_dir);
assert(Py_REFCNT(frame_frame_platformdirs$windows$$$function__14_user_music_dir) == 2);

// Framed code:
{
PyObject *tmp_path_arg_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$windows$get_win_folder(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_win_folder);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 121;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$windows$$$function__14_user_music_dir->m_frame.f_lineno = 121;
tmp_path_arg_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_CSIDL_MYMUSIC_tuple);

if (tmp_path_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = OS_PATH_NORMPATH(tstate, tmp_path_arg_1);
CHECK_OBJECT(tmp_path_arg_1);
Py_DECREF(tmp_path_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$windows$$$function__14_user_music_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$windows$$$function__14_user_music_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$windows$$$function__14_user_music_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$windows$$$function__14_user_music_dir,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$windows$$$function__14_user_music_dir == cache_frame_frame_platformdirs$windows$$$function__14_user_music_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$windows$$$function__14_user_music_dir);
    cache_frame_frame_platformdirs$windows$$$function__14_user_music_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$windows$$$function__14_user_music_dir);

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


static PyObject *impl_platformdirs$windows$$$function__15_user_desktop_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$windows$$$function__15_user_desktop_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$windows$$$function__15_user_desktop_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$windows$$$function__15_user_desktop_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$windows$$$function__15_user_desktop_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$windows$$$function__15_user_desktop_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$windows$$$function__15_user_desktop_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_e90117cfc9bc3af91437adac51760a66, module_platformdirs$windows, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$windows$$$function__15_user_desktop_dir->m_type_description == NULL);
frame_frame_platformdirs$windows$$$function__15_user_desktop_dir = cache_frame_frame_platformdirs$windows$$$function__15_user_desktop_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$windows$$$function__15_user_desktop_dir);
assert(Py_REFCNT(frame_frame_platformdirs$windows$$$function__15_user_desktop_dir) == 2);

// Framed code:
{
PyObject *tmp_path_arg_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$windows$get_win_folder(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_win_folder);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 126;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$windows$$$function__15_user_desktop_dir->m_frame.f_lineno = 126;
tmp_path_arg_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_CSIDL_DESKTOPDIRECTORY_tuple);

if (tmp_path_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = OS_PATH_NORMPATH(tstate, tmp_path_arg_1);
CHECK_OBJECT(tmp_path_arg_1);
Py_DECREF(tmp_path_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$windows$$$function__15_user_desktop_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$windows$$$function__15_user_desktop_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$windows$$$function__15_user_desktop_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$windows$$$function__15_user_desktop_dir,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$windows$$$function__15_user_desktop_dir == cache_frame_frame_platformdirs$windows$$$function__15_user_desktop_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$windows$$$function__15_user_desktop_dir);
    cache_frame_frame_platformdirs$windows$$$function__15_user_desktop_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$windows$$$function__15_user_desktop_dir);

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


static PyObject *impl_platformdirs$windows$$$function__16_user_runtime_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_path = NULL;
struct Nuitka_FrameObject *frame_frame_platformdirs$windows$$$function__16_user_runtime_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$windows$$$function__16_user_runtime_dir = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_platformdirs$windows$$$function__16_user_runtime_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$windows$$$function__16_user_runtime_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$windows$$$function__16_user_runtime_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$windows$$$function__16_user_runtime_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_bc18de584857168d756ee7a468985dc0, module_platformdirs$windows, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$windows$$$function__16_user_runtime_dir->m_type_description == NULL);
frame_frame_platformdirs$windows$$$function__16_user_runtime_dir = cache_frame_frame_platformdirs$windows$$$function__16_user_runtime_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$windows$$$function__16_user_runtime_dir);
assert(Py_REFCNT(frame_frame_platformdirs$windows$$$function__16_user_runtime_dir) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_path_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
tmp_expression_value_1 = IMPORT_HARD_NTPATH();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_join);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = module_var_accessor_platformdirs$windows$get_win_folder(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_win_folder);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 134;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$windows$$$function__16_user_runtime_dir->m_frame.f_lineno = 134;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_CSIDL_LOCAL_APPDATA_tuple);

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 134;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = mod_consts.const_str_plain_Temp;
frame_frame_platformdirs$windows$$$function__16_user_runtime_dir->m_frame.f_lineno = 134;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_path_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_path_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = OS_PATH_NORMPATH(tstate, tmp_path_arg_1);
CHECK_OBJECT(tmp_path_arg_1);
Py_DECREF(tmp_path_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_path == NULL);
var_path = tmp_assign_source_1;
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(var_path);
tmp_args_element_value_3 = var_path;
frame_frame_platformdirs$windows$$$function__16_user_runtime_dir->m_frame.f_lineno = 135;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__append_parts, tmp_args_element_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$windows$$$function__16_user_runtime_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$windows$$$function__16_user_runtime_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$windows$$$function__16_user_runtime_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$windows$$$function__16_user_runtime_dir,
    type_description_1,
    par_self,
    var_path
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$windows$$$function__16_user_runtime_dir == cache_frame_frame_platformdirs$windows$$$function__16_user_runtime_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$windows$$$function__16_user_runtime_dir);
    cache_frame_frame_platformdirs$windows$$$function__16_user_runtime_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$windows$$$function__16_user_runtime_dir);

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
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_path);
var_path = NULL;
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


static PyObject *impl_platformdirs$windows$$$function__17_site_runtime_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$windows$$$function__17_site_runtime_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$windows$$$function__17_site_runtime_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$windows$$$function__17_site_runtime_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$windows$$$function__17_site_runtime_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$windows$$$function__17_site_runtime_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$windows$$$function__17_site_runtime_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_9075cc2a240c27a64b1968e40308c0c9, module_platformdirs$windows, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$windows$$$function__17_site_runtime_dir->m_type_description == NULL);
frame_frame_platformdirs$windows$$$function__17_site_runtime_dir = cache_frame_frame_platformdirs$windows$$$function__17_site_runtime_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$windows$$$function__17_site_runtime_dir);
assert(Py_REFCNT(frame_frame_platformdirs$windows$$$function__17_site_runtime_dir) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_runtime_dir);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$windows$$$function__17_site_runtime_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$windows$$$function__17_site_runtime_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$windows$$$function__17_site_runtime_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$windows$$$function__17_site_runtime_dir,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$windows$$$function__17_site_runtime_dir == cache_frame_frame_platformdirs$windows$$$function__17_site_runtime_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$windows$$$function__17_site_runtime_dir);
    cache_frame_frame_platformdirs$windows$$$function__17_site_runtime_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$windows$$$function__17_site_runtime_dir);

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


static PyObject *impl_platformdirs$windows$$$function__18_get_win_folder_from_env_vars(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_csidl_name = python_pars[0];
PyObject *var_result = NULL;
PyObject *var_env_var_name = NULL;
PyObject *var_msg = NULL;
struct Nuitka_FrameObject *frame_frame_platformdirs$windows$$$function__18_get_win_folder_from_env_vars;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$windows$$$function__18_get_win_folder_from_env_vars = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_platformdirs$windows$$$function__18_get_win_folder_from_env_vars)) {
    Py_XDECREF(cache_frame_frame_platformdirs$windows$$$function__18_get_win_folder_from_env_vars);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$windows$$$function__18_get_win_folder_from_env_vars == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$windows$$$function__18_get_win_folder_from_env_vars = MAKE_FUNCTION_FRAME(tstate, code_objects_8e4c1f8eba782367e9530388b87f0aae, module_platformdirs$windows, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$windows$$$function__18_get_win_folder_from_env_vars->m_type_description == NULL);
frame_frame_platformdirs$windows$$$function__18_get_win_folder_from_env_vars = cache_frame_frame_platformdirs$windows$$$function__18_get_win_folder_from_env_vars;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$windows$$$function__18_get_win_folder_from_env_vars);
assert(Py_REFCNT(frame_frame_platformdirs$windows$$$function__18_get_win_folder_from_env_vars) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$windows$get_win_folder_if_csidl_name_not_env_var(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_win_folder_if_csidl_name_not_env_var);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 145;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_csidl_name);
tmp_args_element_value_1 = par_csidl_name;
frame_frame_platformdirs$windows$$$function__18_get_win_folder_from_env_vars->m_frame.f_lineno = 145;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_result == NULL);
var_result = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_result);
tmp_cmp_expr_left_1 = var_result;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
CHECK_OBJECT(var_result);
tmp_return_value = var_result;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
tmp_dict_arg_value_1 = DICT_COPY(tstate, mod_consts.const_dict_8f6139c43576e977e8edc9c706649f81);
CHECK_OBJECT(par_csidl_name);
tmp_key_value_1 = par_csidl_name;
tmp_assign_source_2 = DICT_GET_ITEM_WITH_HASH_ERROR1(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
if (tmp_assign_source_2 == NULL && !HAS_ERROR_OCCURRED(tstate)) {
    tmp_assign_source_2 = Py_None;
    Py_INCREF_IMMORTAL(tmp_assign_source_2);
}
CHECK_OBJECT(tmp_dict_arg_value_1);
Py_DECREF(tmp_dict_arg_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_env_var_name == NULL);
var_env_var_name = tmp_assign_source_2;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_env_var_name);
tmp_cmp_expr_left_2 = var_env_var_name;
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
PyObject *tmp_assign_source_3;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_30fb76995d1f3f513023602317ad68fc;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_csidl_name);
tmp_format_value_1 = par_csidl_name;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oooo";
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
tmp_assign_source_3 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_3 == NULL));
assert(var_msg == NULL);
var_msg = tmp_assign_source_3;
}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
CHECK_OBJECT(var_msg);
tmp_make_exception_arg_1 = var_msg;
frame_frame_platformdirs$windows$$$function__18_get_win_folder_from_env_vars->m_frame.f_lineno = 156;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 156;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
tmp_expression_value_2 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_2 == NULL));
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_environ);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_env_var_name);
tmp_args_element_value_2 = var_env_var_name;
frame_frame_platformdirs$windows$$$function__18_get_win_folder_from_env_vars->m_frame.f_lineno = 157;
tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_result;
    assert(old != NULL);
    var_result = tmp_assign_source_4;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_result);
tmp_cmp_expr_left_3 = var_result;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_b16502bad6dd9535da7236e5a52bed48;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_env_var_name);
tmp_format_value_2 = var_env_var_name;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "oooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_assign_source_5 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_assign_source_5 == NULL));
assert(var_msg == NULL);
var_msg = tmp_assign_source_5;
}
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
CHECK_OBJECT(var_msg);
tmp_make_exception_arg_2 = var_msg;
frame_frame_platformdirs$windows$$$function__18_get_win_folder_from_env_vars->m_frame.f_lineno = 160;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 160;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$windows$$$function__18_get_win_folder_from_env_vars, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$windows$$$function__18_get_win_folder_from_env_vars->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$windows$$$function__18_get_win_folder_from_env_vars, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$windows$$$function__18_get_win_folder_from_env_vars,
    type_description_1,
    par_csidl_name,
    var_result,
    var_env_var_name,
    var_msg
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$windows$$$function__18_get_win_folder_from_env_vars == cache_frame_frame_platformdirs$windows$$$function__18_get_win_folder_from_env_vars) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$windows$$$function__18_get_win_folder_from_env_vars);
    cache_frame_frame_platformdirs$windows$$$function__18_get_win_folder_from_env_vars = NULL;
}

assertFrameObject(frame_frame_platformdirs$windows$$$function__18_get_win_folder_from_env_vars);

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
CHECK_OBJECT(var_result);
CHECK_OBJECT(var_result);
Py_DECREF(var_result);
var_result = NULL;
Py_XDECREF(var_env_var_name);
var_env_var_name = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_result);
var_result = NULL;
Py_XDECREF(var_env_var_name);
var_env_var_name = NULL;
Py_XDECREF(var_msg);
var_msg = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_csidl_name);
Py_DECREF(par_csidl_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_csidl_name);
Py_DECREF(par_csidl_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_platformdirs$windows$$$function__19_get_win_folder_if_csidl_name_not_env_var(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_csidl_name = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$windows$$$function__19_get_win_folder_if_csidl_name_not_env_var;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$windows$$$function__19_get_win_folder_if_csidl_name_not_env_var = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$windows$$$function__19_get_win_folder_if_csidl_name_not_env_var)) {
    Py_XDECREF(cache_frame_frame_platformdirs$windows$$$function__19_get_win_folder_if_csidl_name_not_env_var);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$windows$$$function__19_get_win_folder_if_csidl_name_not_env_var == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$windows$$$function__19_get_win_folder_if_csidl_name_not_env_var = MAKE_FUNCTION_FRAME(tstate, code_objects_358aa84db41ab1faa5198b503dbf1092, module_platformdirs$windows, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$windows$$$function__19_get_win_folder_if_csidl_name_not_env_var->m_type_description == NULL);
frame_frame_platformdirs$windows$$$function__19_get_win_folder_if_csidl_name_not_env_var = cache_frame_frame_platformdirs$windows$$$function__19_get_win_folder_if_csidl_name_not_env_var;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$windows$$$function__19_get_win_folder_if_csidl_name_not_env_var);
assert(Py_REFCNT(frame_frame_platformdirs$windows$$$function__19_get_win_folder_if_csidl_name_not_env_var) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_csidl_name);
tmp_cmp_expr_left_1 = par_csidl_name;
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_CSIDL_PERSONAL;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_path_arg_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_1 = IMPORT_HARD_NTPATH();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_join);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_3 == NULL));
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_environ);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 167;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_str_plain_USERPROFILE;
tmp_path_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_path_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 167;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = OS_PATH_NORMPATH(tstate, tmp_path_arg_1);
CHECK_OBJECT(tmp_path_arg_1);
Py_DECREF(tmp_path_arg_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 167;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = mod_consts.const_str_plain_Documents;
frame_frame_platformdirs$windows$$$function__19_get_win_folder_if_csidl_name_not_env_var->m_frame.f_lineno = 167;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_csidl_name);
tmp_cmp_expr_left_2 = par_csidl_name;
tmp_cmp_expr_right_2 = mod_consts.const_str_plain_CSIDL_DOWNLOADS;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
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
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_path_arg_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
PyObject *tmp_args_element_value_4;
tmp_expression_value_4 = IMPORT_HARD_NTPATH();
assert(!(tmp_expression_value_4 == NULL));
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_join);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_6 == NULL));
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_environ);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 170;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = mod_consts.const_str_plain_USERPROFILE;
tmp_path_arg_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_path_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 170;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = OS_PATH_NORMPATH(tstate, tmp_path_arg_2);
CHECK_OBJECT(tmp_path_arg_2);
Py_DECREF(tmp_path_arg_2);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 170;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = mod_consts.const_str_plain_Downloads;
frame_frame_platformdirs$windows$$$function__19_get_win_folder_if_csidl_name_not_env_var->m_frame.f_lineno = 170;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_csidl_name);
tmp_cmp_expr_left_3 = par_csidl_name;
tmp_cmp_expr_right_3 = mod_consts.const_str_plain_CSIDL_MYPICTURES;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "o";
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
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_5;
PyObject *tmp_path_arg_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_3;
PyObject *tmp_args_element_value_6;
tmp_expression_value_7 = IMPORT_HARD_NTPATH();
assert(!(tmp_expression_value_7 == NULL));
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_join);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_9 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_9 == NULL));
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_environ);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 173;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = mod_consts.const_str_plain_USERPROFILE;
tmp_path_arg_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_path_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 173;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = OS_PATH_NORMPATH(tstate, tmp_path_arg_3);
CHECK_OBJECT(tmp_path_arg_3);
Py_DECREF(tmp_path_arg_3);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 173;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = mod_consts.const_str_plain_Pictures;
frame_frame_platformdirs$windows$$$function__19_get_win_folder_if_csidl_name_not_env_var->m_frame.f_lineno = 173;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(par_csidl_name);
tmp_cmp_expr_left_4 = par_csidl_name;
tmp_cmp_expr_right_4 = mod_consts.const_str_plain_CSIDL_MYVIDEO;
tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "o";
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
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_7;
PyObject *tmp_path_arg_4;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_4;
PyObject *tmp_args_element_value_8;
tmp_expression_value_10 = IMPORT_HARD_NTPATH();
assert(!(tmp_expression_value_10 == NULL));
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_join);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_12 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_12 == NULL));
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_environ);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 176;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_subscript_value_4 = mod_consts.const_str_plain_USERPROFILE;
tmp_path_arg_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_4);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_path_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 176;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = OS_PATH_NORMPATH(tstate, tmp_path_arg_4);
CHECK_OBJECT(tmp_path_arg_4);
Py_DECREF(tmp_path_arg_4);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 176;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_8 = mod_consts.const_str_plain_Videos;
frame_frame_platformdirs$windows$$$function__19_get_win_folder_if_csidl_name_not_env_var->m_frame.f_lineno = 176;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(par_csidl_name);
tmp_cmp_expr_left_5 = par_csidl_name;
tmp_cmp_expr_right_5 = mod_consts.const_str_plain_CSIDL_MYMUSIC;
tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "o";
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
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_9;
PyObject *tmp_path_arg_5;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_5;
PyObject *tmp_args_element_value_10;
tmp_expression_value_13 = IMPORT_HARD_NTPATH();
assert(!(tmp_expression_value_13 == NULL));
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_join);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_15 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_15 == NULL));
tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_environ);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 179;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_subscript_value_5 = mod_consts.const_str_plain_USERPROFILE;
tmp_path_arg_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_5);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_path_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 179;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_9 = OS_PATH_NORMPATH(tstate, tmp_path_arg_5);
CHECK_OBJECT(tmp_path_arg_5);
Py_DECREF(tmp_path_arg_5);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 179;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_10 = mod_consts.const_str_plain_Music;
frame_frame_platformdirs$windows$$$function__19_get_win_folder_if_csidl_name_not_env_var->m_frame.f_lineno = 179;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_5:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$windows$$$function__19_get_win_folder_if_csidl_name_not_env_var, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$windows$$$function__19_get_win_folder_if_csidl_name_not_env_var->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$windows$$$function__19_get_win_folder_if_csidl_name_not_env_var, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$windows$$$function__19_get_win_folder_if_csidl_name_not_env_var,
    type_description_1,
    par_csidl_name
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$windows$$$function__19_get_win_folder_if_csidl_name_not_env_var == cache_frame_frame_platformdirs$windows$$$function__19_get_win_folder_if_csidl_name_not_env_var) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$windows$$$function__19_get_win_folder_if_csidl_name_not_env_var);
    cache_frame_frame_platformdirs$windows$$$function__19_get_win_folder_if_csidl_name_not_env_var = NULL;
}

assertFrameObject(frame_frame_platformdirs$windows$$$function__19_get_win_folder_if_csidl_name_not_env_var);

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
CHECK_OBJECT(par_csidl_name);
Py_DECREF(par_csidl_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_csidl_name);
Py_DECREF(par_csidl_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_platformdirs$windows$$$function__20_get_win_folder_from_registry(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_csidl_name = python_pars[0];
PyObject *var_machine_names = NULL;
PyObject *var_shell_folder_name = NULL;
PyObject *var_msg = NULL;
PyObject *var_winreg = NULL;
PyObject *var_hkey = NULL;
PyObject *var_key = NULL;
PyObject *var_directory = NULL;
PyObject *var__ = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_platformdirs$windows$$$function__20_get_win_folder_from_registry;
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
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$windows$$$function__20_get_win_folder_from_registry = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = PySet_New(mod_consts.const_set_c60bea34cf475cb2172c804802147b1a);
assert(var_machine_names == NULL);
var_machine_names = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_platformdirs$windows$$$function__20_get_win_folder_from_registry)) {
    Py_XDECREF(cache_frame_frame_platformdirs$windows$$$function__20_get_win_folder_from_registry);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$windows$$$function__20_get_win_folder_from_registry == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$windows$$$function__20_get_win_folder_from_registry = MAKE_FUNCTION_FRAME(tstate, code_objects_1c6cc4cf0ae76d271558a62cec7f5d02, module_platformdirs$windows, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$windows$$$function__20_get_win_folder_from_registry->m_type_description == NULL);
frame_frame_platformdirs$windows$$$function__20_get_win_folder_from_registry = cache_frame_frame_platformdirs$windows$$$function__20_get_win_folder_from_registry;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$windows$$$function__20_get_win_folder_from_registry);
assert(Py_REFCNT(frame_frame_platformdirs$windows$$$function__20_get_win_folder_from_registry) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
tmp_dict_arg_value_1 = DICT_COPY(tstate, mod_consts.const_dict_6a14ab83dbe0e04bfd9bf8145eac5b9e);
CHECK_OBJECT(par_csidl_name);
tmp_key_value_1 = par_csidl_name;
tmp_assign_source_2 = DICT_GET_ITEM_WITH_HASH_ERROR1(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
if (tmp_assign_source_2 == NULL && !HAS_ERROR_OCCURRED(tstate)) {
    tmp_assign_source_2 = Py_None;
    Py_INCREF_IMMORTAL(tmp_assign_source_2);
}
CHECK_OBJECT(tmp_dict_arg_value_1);
Py_DECREF(tmp_dict_arg_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_shell_folder_name == NULL);
var_shell_folder_name = tmp_assign_source_2;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_shell_folder_name);
tmp_cmp_expr_left_1 = var_shell_folder_name;
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
PyObject *tmp_assign_source_3;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_30fb76995d1f3f513023602317ad68fc;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_csidl_name);
tmp_format_value_1 = par_csidl_name;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "ooooooooo";
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
tmp_assign_source_3 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_3 == NULL));
assert(var_msg == NULL);
var_msg = tmp_assign_source_3;
}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
CHECK_OBJECT(var_msg);
tmp_make_exception_arg_1 = var_msg;
frame_frame_platformdirs$windows$$$function__20_get_win_folder_from_registry->m_frame.f_lineno = 206;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 206;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_winreg;
tmp_globals_arg_value_1 = (PyObject *)moduledict_platformdirs$windows;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_platformdirs$windows$$$function__20_get_win_folder_from_registry->m_frame.f_lineno = 209;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_winreg == NULL);
var_winreg = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_csidl_name);
tmp_cmp_expr_left_2 = par_csidl_name;
CHECK_OBJECT(var_machine_names);
tmp_cmp_expr_right_2 = var_machine_names;
tmp_res = PySet_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(var_winreg);
tmp_expression_value_1 = var_winreg;
tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_HKEY_LOCAL_MACHINE);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(var_winreg);
tmp_expression_value_2 = var_winreg;
tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_HKEY_CURRENT_USER);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
assert(var_hkey == NULL);
var_hkey = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var_winreg);
tmp_called_instance_1 = var_winreg;
CHECK_OBJECT(var_hkey);
tmp_args_element_value_1 = var_hkey;
tmp_args_element_value_2 = mod_consts.const_str_digest_1b4042a02fb8475b9acd9563e7c2d582;
frame_frame_platformdirs$windows$$$function__20_get_win_folder_from_registry->m_frame.f_lineno = 214;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_6 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_OpenKey,
        call_args
    );
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_key == NULL);
var_key = tmp_assign_source_6;
}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(var_winreg);
tmp_called_instance_2 = var_winreg;
CHECK_OBJECT(var_key);
tmp_args_element_value_3 = var_key;
CHECK_OBJECT(var_shell_folder_name);
tmp_args_element_value_4 = var_shell_folder_name;
frame_frame_platformdirs$windows$$$function__20_get_win_folder_from_registry->m_frame.f_lineno = 215;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_QueryValueEx,
        call_args
    );
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
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



exception_lineno = 215;
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



exception_lineno = 215;
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



exception_lineno = 215;
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
assert(var_directory == NULL);
Py_INCREF(tmp_assign_source_10);
var_directory = tmp_assign_source_10;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;
assert(var__ == NULL);
Py_INCREF(tmp_assign_source_11);
var__ = tmp_assign_source_11;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_unicode_arg_1;
CHECK_OBJECT(var_directory);
tmp_unicode_arg_1 = var_directory;
tmp_return_value = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "ooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$windows$$$function__20_get_win_folder_from_registry, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$windows$$$function__20_get_win_folder_from_registry->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$windows$$$function__20_get_win_folder_from_registry, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$windows$$$function__20_get_win_folder_from_registry,
    type_description_1,
    par_csidl_name,
    var_machine_names,
    var_shell_folder_name,
    var_msg,
    var_winreg,
    var_hkey,
    var_key,
    var_directory,
    var__
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$windows$$$function__20_get_win_folder_from_registry == cache_frame_frame_platformdirs$windows$$$function__20_get_win_folder_from_registry) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$windows$$$function__20_get_win_folder_from_registry);
    cache_frame_frame_platformdirs$windows$$$function__20_get_win_folder_from_registry = NULL;
}

assertFrameObject(frame_frame_platformdirs$windows$$$function__20_get_win_folder_from_registry);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_machine_names);
CHECK_OBJECT(var_machine_names);
Py_DECREF(var_machine_names);
var_machine_names = NULL;
CHECK_OBJECT(var_shell_folder_name);
CHECK_OBJECT(var_shell_folder_name);
Py_DECREF(var_shell_folder_name);
var_shell_folder_name = NULL;
CHECK_OBJECT(var_winreg);
CHECK_OBJECT(var_winreg);
Py_DECREF(var_winreg);
var_winreg = NULL;
CHECK_OBJECT(var_hkey);
CHECK_OBJECT(var_hkey);
Py_DECREF(var_hkey);
var_hkey = NULL;
CHECK_OBJECT(var_key);
CHECK_OBJECT(var_key);
Py_DECREF(var_key);
var_key = NULL;
CHECK_OBJECT(var_directory);
CHECK_OBJECT(var_directory);
Py_DECREF(var_directory);
var_directory = NULL;
CHECK_OBJECT(var__);
CHECK_OBJECT(var__);
Py_DECREF(var__);
var__ = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_machine_names);
CHECK_OBJECT(var_machine_names);
Py_DECREF(var_machine_names);
var_machine_names = NULL;
Py_XDECREF(var_shell_folder_name);
var_shell_folder_name = NULL;
Py_XDECREF(var_msg);
var_msg = NULL;
Py_XDECREF(var_winreg);
var_winreg = NULL;
Py_XDECREF(var_hkey);
var_hkey = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_directory);
var_directory = NULL;
Py_XDECREF(var__);
var__ = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_csidl_name);
Py_DECREF(par_csidl_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_csidl_name);
Py_DECREF(par_csidl_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_platformdirs$windows$$$function__21_get_win_folder_via_ctypes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_csidl_name = python_pars[0];
PyObject *var_ctypes = NULL;
PyObject *var_csidl_const = NULL;
PyObject *var_msg = NULL;
PyObject *var_buf = NULL;
PyObject *var_windll = NULL;
PyObject *var_buf2 = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
struct Nuitka_FrameObject *frame_frame_platformdirs$windows$$$function__21_get_win_folder_via_ctypes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$windows$$$function__21_get_win_folder_via_ctypes = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_assign_source_1 == NULL));
assert(var_ctypes == NULL);
Py_INCREF(tmp_assign_source_1);
var_ctypes = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_platformdirs$windows$$$function__21_get_win_folder_via_ctypes)) {
    Py_XDECREF(cache_frame_frame_platformdirs$windows$$$function__21_get_win_folder_via_ctypes);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$windows$$$function__21_get_win_folder_via_ctypes == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$windows$$$function__21_get_win_folder_via_ctypes = MAKE_FUNCTION_FRAME(tstate, code_objects_3acd7b2cb506134a17c2e484142019d1, module_platformdirs$windows, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$windows$$$function__21_get_win_folder_via_ctypes->m_type_description == NULL);
frame_frame_platformdirs$windows$$$function__21_get_win_folder_via_ctypes = cache_frame_frame_platformdirs$windows$$$function__21_get_win_folder_via_ctypes;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$windows$$$function__21_get_win_folder_via_ctypes);
assert(Py_REFCNT(frame_frame_platformdirs$windows$$$function__21_get_win_folder_via_ctypes) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
tmp_dict_arg_value_1 = DICT_COPY(tstate, mod_consts.const_dict_c50afb8afc468dfd9372e549e14f7609);
CHECK_OBJECT(par_csidl_name);
tmp_key_value_1 = par_csidl_name;
tmp_assign_source_2 = DICT_GET_ITEM_WITH_HASH_ERROR1(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
if (tmp_assign_source_2 == NULL && !HAS_ERROR_OCCURRED(tstate)) {
    tmp_assign_source_2 = Py_None;
    Py_INCREF_IMMORTAL(tmp_assign_source_2);
}
CHECK_OBJECT(tmp_dict_arg_value_1);
Py_DECREF(tmp_dict_arg_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_csidl_const == NULL);
var_csidl_const = tmp_assign_source_2;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_csidl_const);
tmp_cmp_expr_left_1 = var_csidl_const;
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
PyObject *tmp_assign_source_3;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_30fb76995d1f3f513023602317ad68fc;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_csidl_name);
tmp_format_value_1 = par_csidl_name;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "ooooooo";
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
tmp_assign_source_3 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_3 == NULL));
assert(var_msg == NULL);
var_msg = tmp_assign_source_3;
}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
CHECK_OBJECT(var_msg);
tmp_make_exception_arg_1 = var_msg;
frame_frame_platformdirs$windows$$$function__21_get_win_folder_via_ctypes->m_frame.f_lineno = 240;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 240;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_called_instance_1 == NULL));
frame_frame_platformdirs$windows$$$function__21_get_win_folder_via_ctypes->m_frame.f_lineno = 242;
tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_create_unicode_buffer,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_1024_tuple, 0)
);

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_buf == NULL);
var_buf = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_1;
PyObject *tmp_name_value_1;
tmp_expression_value_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_1 == NULL));
tmp_name_value_1 = mod_consts.const_str_plain_windll;
tmp_assign_source_5 = BUILTIN_GETATTR(tstate, tmp_expression_value_1, tmp_name_value_1, NULL);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_windll == NULL);
var_windll = tmp_assign_source_5;
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(var_windll);
tmp_expression_value_2 = var_windll;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_shell32);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = Py_None;
CHECK_OBJECT(var_csidl_const);
tmp_args_element_value_2 = var_csidl_const;
tmp_args_element_value_3 = Py_None;
tmp_args_element_value_4 = const_int_0;
CHECK_OBJECT(var_buf);
tmp_args_element_value_5 = var_buf;
frame_frame_platformdirs$windows$$$function__21_get_win_folder_via_ctypes->m_frame.f_lineno = 244;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS5(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_SHGetFolderPathW,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
bool tmp_condition_result_2;
PyObject *tmp_any_arg_1;
PyObject *tmp_capi_result_1;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_buf);
tmp_iter_arg_1 = var_buf;
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_6;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_any_arg_1 = MAKE_GENERATOR_platformdirs$windows$$$function__21_get_win_folder_via_ctypes$$$genexpr__1_genexpr(tstate, tmp_closure_1);

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
tmp_capi_result_1 = BUILTIN_ANY(tstate, tmp_any_arg_1);
CHECK_OBJECT(tmp_any_arg_1);
Py_DECREF(tmp_any_arg_1);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = CHECK_IF_TRUE(tmp_capi_result_1) == 1;
CHECK_OBJECT(tmp_capi_result_1);
Py_DECREF(tmp_capi_result_1);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_instance_3;
tmp_called_instance_3 = IMPORT_HARD_CTYPES();
assert(!(tmp_called_instance_3 == NULL));
frame_frame_platformdirs$windows$$$function__21_get_win_folder_via_ctypes->m_frame.f_lineno = 248;
tmp_assign_source_7 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_create_unicode_buffer,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_1024_tuple, 0)
);

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_buf2 == NULL);
var_buf2 = tmp_assign_source_7;
}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
int tmp_truth_name_1;
CHECK_OBJECT(var_windll);
tmp_expression_value_4 = var_windll;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_kernel32);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_GetShortPathNameW);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_buf);
tmp_expression_value_5 = var_buf;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_value);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 249;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_buf2);
tmp_args_element_value_7 = var_buf2;
tmp_args_element_value_8 = mod_consts.const_int_pos_1024;
frame_frame_platformdirs$windows$$$function__21_get_win_folder_via_ctypes->m_frame.f_lineno = 249;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 249;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
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
PyObject *tmp_assign_source_8;
CHECK_OBJECT(var_buf2);
tmp_assign_source_8 = var_buf2;
{
    PyObject *old = var_buf;
    assert(old != NULL);
    var_buf = tmp_assign_source_8;
    Py_INCREF(var_buf);
    Py_DECREF(old);
}

}
branch_no_3:;
branch_no_2:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_csidl_name);
tmp_cmp_expr_left_2 = par_csidl_name;
tmp_cmp_expr_right_2 = mod_consts.const_str_plain_CSIDL_DOWNLOADS;
tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooooo";
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
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_10;
tmp_expression_value_6 = IMPORT_HARD_NTPATH();
assert(!(tmp_expression_value_6 == NULL));
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_join);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (var_buf == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_buf);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 253;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_7 = var_buf;
tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_value);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 253;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_10 = mod_consts.const_str_plain_Downloads;
frame_frame_platformdirs$windows$$$function__21_get_win_folder_via_ctypes->m_frame.f_lineno = 253;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_4:;
{
PyObject *tmp_expression_value_8;
if (var_buf == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_buf);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 255;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = var_buf;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_value);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$windows$$$function__21_get_win_folder_via_ctypes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$windows$$$function__21_get_win_folder_via_ctypes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$windows$$$function__21_get_win_folder_via_ctypes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$windows$$$function__21_get_win_folder_via_ctypes,
    type_description_1,
    par_csidl_name,
    var_ctypes,
    var_csidl_const,
    var_msg,
    var_buf,
    var_windll,
    var_buf2
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$windows$$$function__21_get_win_folder_via_ctypes == cache_frame_frame_platformdirs$windows$$$function__21_get_win_folder_via_ctypes) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$windows$$$function__21_get_win_folder_via_ctypes);
    cache_frame_frame_platformdirs$windows$$$function__21_get_win_folder_via_ctypes = NULL;
}

assertFrameObject(frame_frame_platformdirs$windows$$$function__21_get_win_folder_via_ctypes);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_ctypes);
CHECK_OBJECT(var_ctypes);
Py_DECREF(var_ctypes);
var_ctypes = NULL;
CHECK_OBJECT(var_csidl_const);
CHECK_OBJECT(var_csidl_const);
Py_DECREF(var_csidl_const);
var_csidl_const = NULL;
Py_XDECREF(var_buf);
var_buf = NULL;
CHECK_OBJECT(var_windll);
CHECK_OBJECT(var_windll);
Py_DECREF(var_windll);
var_windll = NULL;
Py_XDECREF(var_buf2);
var_buf2 = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_ctypes);
CHECK_OBJECT(var_ctypes);
Py_DECREF(var_ctypes);
var_ctypes = NULL;
Py_XDECREF(var_csidl_const);
var_csidl_const = NULL;
Py_XDECREF(var_msg);
var_msg = NULL;
Py_XDECREF(var_buf);
var_buf = NULL;
Py_XDECREF(var_windll);
var_windll = NULL;
Py_XDECREF(var_buf2);
var_buf2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_csidl_name);
Py_DECREF(par_csidl_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_csidl_name);
Py_DECREF(par_csidl_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct platformdirs$windows$$$function__21_get_win_folder_via_ctypes$$$genexpr__1_genexpr_locals {
PyObject *var_c;
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

static PyObject *platformdirs$windows$$$function__21_get_win_folder_via_ctypes$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct platformdirs$windows$$$function__21_get_win_folder_via_ctypes$$$genexpr__1_genexpr_locals *generator_heap = (struct platformdirs$windows$$$function__21_get_win_folder_via_ctypes$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_a3503296fabb40573d2159b271827133, module_platformdirs$windows, sizeof(void *)+sizeof(void *));
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
generator_heap->exception_lineno = 247;
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
PyObject *tmp_ord_arg_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_c);
tmp_ord_arg_1 = generator_heap->var_c;
tmp_cmp_expr_left_1 = BUILTIN_ORD(tmp_ord_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 247;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = mod_consts.const_int_pos_255;
tmp_expression_value_1 = RICH_COMPARE_GT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 247;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_ord_arg_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_ord_arg_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 247;
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


generator_heap->exception_lineno = 247;
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
    generator_heap->var_c
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

static PyObject *MAKE_GENERATOR_platformdirs$windows$$$function__21_get_win_folder_via_ctypes$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        platformdirs$windows$$$function__21_get_win_folder_via_ctypes$$$genexpr__1_genexpr_context,
        module_platformdirs$windows,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_4f078f31a76ed07db6382be9eebb64ba,
#endif
        code_objects_a3503296fabb40573d2159b271827133,
        closure,
        1,
#if 1
        sizeof(struct platformdirs$windows$$$function__21_get_win_folder_via_ctypes$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_platformdirs$windows$$$function__22__pick_get_win_folder(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_ctypes = NULL;
PyObject *var_winreg = NULL;
struct Nuitka_FrameObject *frame_frame_platformdirs$windows$$$function__22__pick_get_win_folder;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$windows$$$function__22__pick_get_win_folder = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_assign_source_1 == NULL));
assert(var_ctypes == NULL);
Py_INCREF(tmp_assign_source_1);
var_ctypes = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_platformdirs$windows$$$function__22__pick_get_win_folder)) {
    Py_XDECREF(cache_frame_frame_platformdirs$windows$$$function__22__pick_get_win_folder);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$windows$$$function__22__pick_get_win_folder == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$windows$$$function__22__pick_get_win_folder = MAKE_FUNCTION_FRAME(tstate, code_objects_7808f8e7b45f1225bfbd8dd07130b558, module_platformdirs$windows, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$windows$$$function__22__pick_get_win_folder->m_type_description == NULL);
frame_frame_platformdirs$windows$$$function__22__pick_get_win_folder = cache_frame_frame_platformdirs$windows$$$function__22__pick_get_win_folder;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$windows$$$function__22__pick_get_win_folder);
assert(Py_REFCNT(frame_frame_platformdirs$windows$$$function__22__pick_get_win_folder) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_1 == NULL));
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts.const_str_plain_windll);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "oo";
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
tmp_return_value = module_var_accessor_platformdirs$windows$get_win_folder_via_ctypes(tstate);
if (unlikely(tmp_return_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_win_folder_via_ctypes);
}

if (tmp_return_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 265;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_winreg;
tmp_globals_arg_value_1 = (PyObject *)moduledict_platformdirs$windows;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_platformdirs$windows$$$function__22__pick_get_win_folder->m_frame.f_lineno = 267;
tmp_assign_source_2 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "oo";
    goto try_except_handler_2;
}
assert(var_winreg == NULL);
var_winreg = tmp_assign_source_2;
}
goto try_end_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$windows$$$function__22__pick_get_win_folder, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$windows$$$function__22__pick_get_win_folder, exception_keeper_lineno_1);
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
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_return_value = module_var_accessor_platformdirs$windows$get_win_folder_from_env_vars(tstate);
if (unlikely(tmp_return_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_win_folder_from_env_vars);
}

if (tmp_return_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 269;
type_description_1 = "oo";
    goto try_except_handler_3;
}
Py_INCREF(tmp_return_value);
goto try_return_handler_3;
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 266;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_platformdirs$windows$$$function__22__pick_get_win_folder->m_frame)) {
        frame_frame_platformdirs$windows$$$function__22__pick_get_win_folder->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_3;
branch_end_2:;
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
try_end_1:;
tmp_return_value = module_var_accessor_platformdirs$windows$get_win_folder_from_registry(tstate);
if (unlikely(tmp_return_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_win_folder_from_registry);
}

if (tmp_return_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 271;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$windows$$$function__22__pick_get_win_folder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$windows$$$function__22__pick_get_win_folder->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$windows$$$function__22__pick_get_win_folder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$windows$$$function__22__pick_get_win_folder,
    type_description_1,
    var_ctypes,
    var_winreg
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$windows$$$function__22__pick_get_win_folder == cache_frame_frame_platformdirs$windows$$$function__22__pick_get_win_folder) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$windows$$$function__22__pick_get_win_folder);
    cache_frame_frame_platformdirs$windows$$$function__22__pick_get_win_folder = NULL;
}

assertFrameObject(frame_frame_platformdirs$windows$$$function__22__pick_get_win_folder);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_ctypes);
CHECK_OBJECT(var_ctypes);
Py_DECREF(var_ctypes);
var_ctypes = NULL;
Py_XDECREF(var_winreg);
var_winreg = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_ctypes);
CHECK_OBJECT(var_ctypes);
Py_DECREF(var_ctypes);
var_ctypes = NULL;
Py_XDECREF(var_winreg);
var_winreg = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

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



static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__10_user_documents_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$windows$$$function__10_user_documents_dir,
        mod_consts.const_str_plain_user_documents_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1ad0485317b30db541112cceb300118a,
#endif
        code_objects_105c3322a9eceb5ecd755259469bc77b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$windows,
        mod_consts.const_str_digest_1d19b1c77aed88a6e2c29b9c946eb5ab,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__11_user_downloads_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$windows$$$function__11_user_downloads_dir,
        mod_consts.const_str_plain_user_downloads_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_366563647b6f79ac96ae0701b5f9ddc0,
#endif
        code_objects_d0cd96cfdc7e8b7eb24ecb8a0f47be26,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$windows,
        mod_consts.const_str_digest_e3830b7aee99967a5f3a4b208e1cd6ad,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__12_user_pictures_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$windows$$$function__12_user_pictures_dir,
        mod_consts.const_str_plain_user_pictures_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_98cac45849e965e03148447bbfa3bd77,
#endif
        code_objects_a879d751e139bc2080b2c5168ba164ec,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$windows,
        mod_consts.const_str_digest_894cb776395ea9ec8b8e26b38559c747,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__13_user_videos_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$windows$$$function__13_user_videos_dir,
        mod_consts.const_str_plain_user_videos_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c0b7041ad742b6c88725079166e8ad15,
#endif
        code_objects_68e772ccfb7692811aaee9e6b4ab47fb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$windows,
        mod_consts.const_str_digest_928df1072d71336d682a88c9f83c5f72,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__14_user_music_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$windows$$$function__14_user_music_dir,
        mod_consts.const_str_plain_user_music_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_62c61509e6b929a300178a93870ffc21,
#endif
        code_objects_bb1b9306da972c6eae43ab1f07609cb7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$windows,
        mod_consts.const_str_digest_280ab7fbb020e18c885950af6271d848,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__15_user_desktop_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$windows$$$function__15_user_desktop_dir,
        mod_consts.const_str_plain_user_desktop_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_78be0d0d4852e03096a0b5d364c69eab,
#endif
        code_objects_e90117cfc9bc3af91437adac51760a66,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$windows,
        mod_consts.const_str_digest_f5637587fb03298852e67e4e7f46d909,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__16_user_runtime_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$windows$$$function__16_user_runtime_dir,
        mod_consts.const_str_plain_user_runtime_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b5fe2894a54b898ad142c05f7f50136d,
#endif
        code_objects_bc18de584857168d756ee7a468985dc0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$windows,
        mod_consts.const_str_digest_cba82e1881e36aa3ed1596ce9b1042c7,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__17_site_runtime_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$windows$$$function__17_site_runtime_dir,
        mod_consts.const_str_plain_site_runtime_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a5a7c34fd54994d782bcc072859c6be8,
#endif
        code_objects_9075cc2a240c27a64b1968e40308c0c9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$windows,
        mod_consts.const_str_digest_dd9add8832f7d6248ea8afd80bb101f2,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__18_get_win_folder_from_env_vars(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$windows$$$function__18_get_win_folder_from_env_vars,
        mod_consts.const_str_plain_get_win_folder_from_env_vars,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8e4c1f8eba782367e9530388b87f0aae,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$windows,
        mod_consts.const_str_digest_4bd4cef311c68dc95339cbe9ea148dda,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__19_get_win_folder_if_csidl_name_not_env_var(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$windows$$$function__19_get_win_folder_if_csidl_name_not_env_var,
        mod_consts.const_str_plain_get_win_folder_if_csidl_name_not_env_var,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_358aa84db41ab1faa5198b503dbf1092,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$windows,
        mod_consts.const_str_digest_b01b7144adda4d95965441ed2c25e312,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__1_user_data_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$windows$$$function__1_user_data_dir,
        mod_consts.const_str_plain_user_data_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c08737a3acd5783e39c72c2ee26a47a8,
#endif
        code_objects_e571c83ef18006a327bcb6d798616296,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$windows,
        mod_consts.const_str_digest_18f69b8f0ef9a7e3c54e4b48ee0afbe8,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__20_get_win_folder_from_registry(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$windows$$$function__20_get_win_folder_from_registry,
        mod_consts.const_str_plain_get_win_folder_from_registry,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1c6cc4cf0ae76d271558a62cec7f5d02,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$windows,
        mod_consts.const_str_digest_ba3a1337fec674818a30b8c3ebcae8a9,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__21_get_win_folder_via_ctypes(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$windows$$$function__21_get_win_folder_via_ctypes,
        mod_consts.const_str_plain_get_win_folder_via_ctypes,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3acd7b2cb506134a17c2e484142019d1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$windows,
        mod_consts.const_str_digest_3fe88a5b4fb86499fed69347b914644e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__22__pick_get_win_folder(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$windows$$$function__22__pick_get_win_folder,
        mod_consts.const_str_plain__pick_get_win_folder,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7808f8e7b45f1225bfbd8dd07130b558,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$windows,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__2__append_parts(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$windows$$$function__2__append_parts,
        mod_consts.const_str_plain__append_parts,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d09baf8fa4475c2ad711fd150e039167,
#endif
        code_objects_b952f7e0613f8cc49f8ca5e18fa2fbbd,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_platformdirs$windows,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__3_site_data_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$windows$$$function__3_site_data_dir,
        mod_consts.const_str_plain_site_data_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a419899b3242947ee03637315f6d6242,
#endif
        code_objects_eebc52c8ea3655e16b9d4a3f8cbc0d48,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$windows,
        mod_consts.const_str_digest_34f15e3eb716fefbe18618b193bc92ac,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__4_user_config_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$windows$$$function__4_user_config_dir,
        mod_consts.const_str_plain_user_config_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b3770b687df4228dcd6b925306985e5e,
#endif
        code_objects_fac7203d25d7dcdd1a56277c60f3663b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$windows,
        mod_consts.const_str_digest_2ccc230d8f96e4fd1f3d18845bbeeb1d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__5_site_config_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$windows$$$function__5_site_config_dir,
        mod_consts.const_str_plain_site_config_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8cec0827bf485ac858aaa8af4c8ff302,
#endif
        code_objects_fa91d55522457b34f74d619f8505d953,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$windows,
        mod_consts.const_str_digest_39178adfdd59c386c6bfc3c9035405d2,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__6_user_cache_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$windows$$$function__6_user_cache_dir,
        mod_consts.const_str_plain_user_cache_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6a3341dd8953a56e370b0a3e7100bb6f,
#endif
        code_objects_d3cfbcee33a3f27bb2666ab79b645aee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$windows,
        mod_consts.const_str_digest_243767ebd057ef1338276ee40c2cbbc0,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__7_site_cache_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$windows$$$function__7_site_cache_dir,
        mod_consts.const_str_plain_site_cache_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3a705beac7969fa31a66fa280425d21b,
#endif
        code_objects_c18822b504a6571389c5832c13d0fbbd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$windows,
        mod_consts.const_str_digest_334706327b8049942bec86070f6b6faa,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__8_user_state_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$windows$$$function__8_user_state_dir,
        mod_consts.const_str_plain_user_state_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2a811233f53c7afdb09ab7ca3845a3f6,
#endif
        code_objects_c9f25602c3ecb131d3fb3cb414cd9298,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$windows,
        mod_consts.const_str_digest_68cb5fd9a9688506895787dd74fddac5,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$windows$$$function__9_user_log_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$windows$$$function__9_user_log_dir,
        mod_consts.const_str_plain_user_log_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4973166039fa081d3edb67399f052dbf,
#endif
        code_objects_5b200f26f47768575a56467807bfa3dd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$windows,
        mod_consts.const_str_digest_640f3c680d6e9a54be7d97cbee8cf035,
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

static function_impl_code const function_table_platformdirs$windows[] = {
impl_platformdirs$windows$$$function__1_user_data_dir,
impl_platformdirs$windows$$$function__2__append_parts,
impl_platformdirs$windows$$$function__3_site_data_dir,
impl_platformdirs$windows$$$function__4_user_config_dir,
impl_platformdirs$windows$$$function__5_site_config_dir,
impl_platformdirs$windows$$$function__6_user_cache_dir,
impl_platformdirs$windows$$$function__7_site_cache_dir,
impl_platformdirs$windows$$$function__8_user_state_dir,
impl_platformdirs$windows$$$function__9_user_log_dir,
impl_platformdirs$windows$$$function__10_user_documents_dir,
impl_platformdirs$windows$$$function__11_user_downloads_dir,
impl_platformdirs$windows$$$function__12_user_pictures_dir,
impl_platformdirs$windows$$$function__13_user_videos_dir,
impl_platformdirs$windows$$$function__14_user_music_dir,
impl_platformdirs$windows$$$function__15_user_desktop_dir,
impl_platformdirs$windows$$$function__16_user_runtime_dir,
impl_platformdirs$windows$$$function__17_site_runtime_dir,
impl_platformdirs$windows$$$function__18_get_win_folder_from_env_vars,
impl_platformdirs$windows$$$function__19_get_win_folder_if_csidl_name_not_env_var,
impl_platformdirs$windows$$$function__20_get_win_folder_from_registry,
impl_platformdirs$windows$$$function__21_get_win_folder_via_ctypes,
impl_platformdirs$windows$$$function__22__pick_get_win_folder,
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

    return Nuitka_Function_GetFunctionState(function, function_table_platformdirs$windows);
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
        module_platformdirs$windows,
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
        function_table_platformdirs$windows,
        sizeof(function_table_platformdirs$windows) / sizeof(function_impl_code)
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
static char const *module_full_name = "platformdirs.windows";
#endif

// Internal entry point for module code.
PyObject *module_code_platformdirs$windows(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("platformdirs$windows");

    // Store the module for future use.
    module_platformdirs$windows = module;

    moduledict_platformdirs$windows = MODULE_DICT(module_platformdirs$windows);

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
        PRINT_STRING("platformdirs$windows: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("platformdirs$windows: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("platformdirs$windows: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "platformdirs.windows" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initplatformdirs$windows\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_platformdirs$windows, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_platformdirs$windows,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_platformdirs$windows,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_platformdirs$windows, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_platformdirs$windows,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_platformdirs$windows, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_platformdirs$windows,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_platformdirs$windows, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_platformdirs$windows,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_platformdirs$windows);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_platformdirs$windows, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_platformdirs$windows, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_platformdirs$windows, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_platformdirs$windows, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_platformdirs$windows);
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

        UPDATE_STRING_DICT1(moduledict_platformdirs$windows, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
struct Nuitka_FrameObject *frame_frame_platformdirs$windows;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_platformdirs$windows$$$class__1_Windows_16 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_platformdirs$windows$$$class__1_Windows_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_cda9673884a889d71f0de0ef5065cf27;
UPDATE_STRING_DICT0(moduledict_platformdirs$windows, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_platformdirs$windows, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_platformdirs$windows = MAKE_MODULE_FRAME(code_objects_dfc5ba195e2a58b0cbc201722301f361, module_platformdirs$windows);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$windows);
assert(Py_REFCNT(frame_frame_platformdirs$windows) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_platformdirs$windows$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_platformdirs$windows$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_platformdirs$windows, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_platformdirs$windows, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict_platformdirs$windows, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_platformdirs$windows, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
tmp_import_name_from_1 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_import_name_from_1 == NULL));
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_platformdirs$windows,
        mod_consts.const_str_plain_lru_cache,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_lru_cache);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_platformdirs$windows, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = Py_False;
UPDATE_STRING_DICT0(moduledict_platformdirs$windows, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_api;
tmp_globals_arg_value_1 = (PyObject *)moduledict_platformdirs$windows;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_PlatformDirsABC_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_platformdirs$windows->m_frame.f_lineno = 10;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_platformdirs$windows,
        mod_consts.const_str_plain_PlatformDirsABC,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_PlatformDirsABC);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_platformdirs$windows, (Nuitka_StringObject *)mod_consts.const_str_plain_PlatformDirsABC, tmp_assign_source_9);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_platformdirs$windows$PlatformDirsABC(tstate);
assert(!(tmp_tuple_element_1 == NULL));
tmp_assign_source_10 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_10, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_10;
}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_11 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
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


exception_lineno = 16;

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
tmp_expression_value_1 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_1;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_13 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_13;
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


exception_lineno = 16;

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
PyObject *tmp_assign_source_14;
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


exception_lineno = 16;

    goto try_except_handler_1;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_Windows;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_platformdirs$windows->m_frame.f_lineno = 16;
tmp_assign_source_14 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_14;
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


exception_lineno = 16;

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
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_2;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_2 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_2, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_1;
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


exception_lineno = 16;

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


exception_lineno = 16;

    goto try_except_handler_1;
}
frame_frame_platformdirs$windows->m_frame.f_lineno = 16;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 16;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_15;
}
branch_end_1:;
{
PyObject *tmp_assign_source_16;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_platformdirs$windows$$$class__1_Windows_16 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_d0bf41bdb1d3c3a4e8b25d918611477f;
tmp_res = PyObject_SetItem(locals_platformdirs$windows$$$class__1_Windows_16, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_digest_882869ceeeae8bf0228c244672becac2;
tmp_res = PyObject_SetItem(locals_platformdirs$windows$$$class__1_Windows_16, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_plain_Windows;
tmp_res = PyObject_SetItem(locals_platformdirs$windows$$$class__1_Windows_16, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_int_pos_16;
tmp_res = PyObject_SetItem(locals_platformdirs$windows$$$class__1_Windows_16, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_3;
}
frame_frame_platformdirs$windows$$$class__1_Windows_2 = MAKE_CLASS_FRAME(tstate, code_objects_99eaf045405b4fe42766d273a7764f5a, module_platformdirs$windows, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$windows$$$class__1_Windows_2);
assert(Py_REFCNT(frame_frame_platformdirs$windows$$$class__1_Windows_2) == 2);

// Framed code:
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_1;
tmp_called_value_2 = PyObject_GetItem(locals_platformdirs$windows$$$class__1_Windows_16, mod_consts.const_str_plain_property);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_1 = MAKE_FUNCTION_platformdirs$windows$$$function__1_user_data_dir(tstate, tmp_annotations_1);

frame_frame_platformdirs$windows$$$class__1_Windows_2->m_frame.f_lineno = 27;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$windows$$$class__1_Windows_16, mod_consts.const_str_plain_user_data_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_2;
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_75075450b7799732e2408a418b3ad7ac);
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_97384862b7dc2939fe84d4923754712e);

tmp_dictset_value = MAKE_FUNCTION_platformdirs$windows$$$function__2__append_parts(tstate, tmp_kw_defaults_1, tmp_annotations_2);

tmp_res = PyObject_SetItem(locals_platformdirs$windows$$$class__1_Windows_16, mod_consts.const_str_plain__append_parts, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_3;
tmp_called_value_3 = PyObject_GetItem(locals_platformdirs$windows$$$class__1_Windows_16, mod_consts.const_str_plain_property);

if (tmp_called_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_3 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_2 = MAKE_FUNCTION_platformdirs$windows$$$function__3_site_data_dir(tstate, tmp_annotations_3);

frame_frame_platformdirs$windows$$$class__1_Windows_2->m_frame.f_lineno = 53;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$windows$$$class__1_Windows_16, mod_consts.const_str_plain_site_data_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_4;
tmp_called_value_4 = PyObject_GetItem(locals_platformdirs$windows$$$class__1_Windows_16, mod_consts.const_str_plain_property);

if (tmp_called_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_4 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_3 = MAKE_FUNCTION_platformdirs$windows$$$function__4_user_config_dir(tstate, tmp_annotations_4);

frame_frame_platformdirs$windows$$$class__1_Windows_2->m_frame.f_lineno = 59;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$windows$$$class__1_Windows_16, mod_consts.const_str_plain_user_config_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_5;
tmp_called_value_5 = PyObject_GetItem(locals_platformdirs$windows$$$class__1_Windows_16, mod_consts.const_str_plain_property);

if (tmp_called_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_5 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_4 = MAKE_FUNCTION_platformdirs$windows$$$function__5_site_config_dir(tstate, tmp_annotations_5);

frame_frame_platformdirs$windows$$$class__1_Windows_2->m_frame.f_lineno = 64;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$windows$$$class__1_Windows_16, mod_consts.const_str_plain_site_config_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_5;
PyObject *tmp_annotations_6;
tmp_called_value_6 = PyObject_GetItem(locals_platformdirs$windows$$$class__1_Windows_16, mod_consts.const_str_plain_property);

if (tmp_called_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_6 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_5 = MAKE_FUNCTION_platformdirs$windows$$$function__6_user_cache_dir(tstate, tmp_annotations_6);

frame_frame_platformdirs$windows$$$class__1_Windows_2->m_frame.f_lineno = 69;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$windows$$$class__1_Windows_16, mod_consts.const_str_plain_user_cache_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_6;
PyObject *tmp_annotations_7;
tmp_called_value_7 = PyObject_GetItem(locals_platformdirs$windows$$$class__1_Windows_16, mod_consts.const_str_plain_property);

if (tmp_called_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_7 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_6 = MAKE_FUNCTION_platformdirs$windows$$$function__7_site_cache_dir(tstate, tmp_annotations_7);

frame_frame_platformdirs$windows$$$class__1_Windows_2->m_frame.f_lineno = 78;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$windows$$$class__1_Windows_16, mod_consts.const_str_plain_site_cache_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_7;
PyObject *tmp_annotations_8;
tmp_called_value_8 = PyObject_GetItem(locals_platformdirs$windows$$$class__1_Windows_16, mod_consts.const_str_plain_property);

if (tmp_called_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_8 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_7 = MAKE_FUNCTION_platformdirs$windows$$$function__8_user_state_dir(tstate, tmp_annotations_8);

frame_frame_platformdirs$windows$$$class__1_Windows_2->m_frame.f_lineno = 84;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$windows$$$class__1_Windows_16, mod_consts.const_str_plain_user_state_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_8;
PyObject *tmp_annotations_9;
tmp_called_value_9 = PyObject_GetItem(locals_platformdirs$windows$$$class__1_Windows_16, mod_consts.const_str_plain_property);

if (tmp_called_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_9 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_8 = MAKE_FUNCTION_platformdirs$windows$$$function__9_user_log_dir(tstate, tmp_annotations_9);

frame_frame_platformdirs$windows$$$class__1_Windows_2->m_frame.f_lineno = 89;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$windows$$$class__1_Windows_16, mod_consts.const_str_plain_user_log_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_9;
PyObject *tmp_annotations_10;
tmp_called_value_10 = PyObject_GetItem(locals_platformdirs$windows$$$class__1_Windows_16, mod_consts.const_str_plain_property);

if (tmp_called_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_10 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_9 = MAKE_FUNCTION_platformdirs$windows$$$function__10_user_documents_dir(tstate, tmp_annotations_10);

frame_frame_platformdirs$windows$$$class__1_Windows_2->m_frame.f_lineno = 98;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$windows$$$class__1_Windows_16, mod_consts.const_str_plain_user_documents_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_10;
PyObject *tmp_annotations_11;
tmp_called_value_11 = PyObject_GetItem(locals_platformdirs$windows$$$class__1_Windows_16, mod_consts.const_str_plain_property);

if (tmp_called_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_11 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_10 = MAKE_FUNCTION_platformdirs$windows$$$function__11_user_downloads_dir(tstate, tmp_annotations_11);

frame_frame_platformdirs$windows$$$class__1_Windows_2->m_frame.f_lineno = 103;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$windows$$$class__1_Windows_16, mod_consts.const_str_plain_user_downloads_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_11;
PyObject *tmp_annotations_12;
tmp_called_value_12 = PyObject_GetItem(locals_platformdirs$windows$$$class__1_Windows_16, mod_consts.const_str_plain_property);

if (tmp_called_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_12 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_11 = MAKE_FUNCTION_platformdirs$windows$$$function__12_user_pictures_dir(tstate, tmp_annotations_12);

frame_frame_platformdirs$windows$$$class__1_Windows_2->m_frame.f_lineno = 108;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$windows$$$class__1_Windows_16, mod_consts.const_str_plain_user_pictures_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_12;
PyObject *tmp_annotations_13;
tmp_called_value_13 = PyObject_GetItem(locals_platformdirs$windows$$$class__1_Windows_16, mod_consts.const_str_plain_property);

if (tmp_called_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_13 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_12 = MAKE_FUNCTION_platformdirs$windows$$$function__13_user_videos_dir(tstate, tmp_annotations_13);

frame_frame_platformdirs$windows$$$class__1_Windows_2->m_frame.f_lineno = 113;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$windows$$$class__1_Windows_16, mod_consts.const_str_plain_user_videos_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_13;
PyObject *tmp_annotations_14;
tmp_called_value_14 = PyObject_GetItem(locals_platformdirs$windows$$$class__1_Windows_16, mod_consts.const_str_plain_property);

if (tmp_called_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_14 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_13 = MAKE_FUNCTION_platformdirs$windows$$$function__14_user_music_dir(tstate, tmp_annotations_14);

frame_frame_platformdirs$windows$$$class__1_Windows_2->m_frame.f_lineno = 118;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$windows$$$class__1_Windows_16, mod_consts.const_str_plain_user_music_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_14;
PyObject *tmp_annotations_15;
tmp_called_value_15 = PyObject_GetItem(locals_platformdirs$windows$$$class__1_Windows_16, mod_consts.const_str_plain_property);

if (tmp_called_value_15 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_15 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_15);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_14 = MAKE_FUNCTION_platformdirs$windows$$$function__15_user_desktop_dir(tstate, tmp_annotations_15);

frame_frame_platformdirs$windows$$$class__1_Windows_2->m_frame.f_lineno = 123;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$windows$$$class__1_Windows_16, mod_consts.const_str_plain_user_desktop_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_15;
PyObject *tmp_annotations_16;
tmp_called_value_16 = PyObject_GetItem(locals_platformdirs$windows$$$class__1_Windows_16, mod_consts.const_str_plain_property);

if (tmp_called_value_16 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_16 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_16);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_15 = MAKE_FUNCTION_platformdirs$windows$$$function__16_user_runtime_dir(tstate, tmp_annotations_16);

frame_frame_platformdirs$windows$$$class__1_Windows_2->m_frame.f_lineno = 128;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_15);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$windows$$$class__1_Windows_16, mod_consts.const_str_plain_user_runtime_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_16;
PyObject *tmp_annotations_17;
tmp_called_value_17 = PyObject_GetItem(locals_platformdirs$windows$$$class__1_Windows_16, mod_consts.const_str_plain_property);

if (tmp_called_value_17 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_17 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_17);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_16 = MAKE_FUNCTION_platformdirs$windows$$$function__17_site_runtime_dir(tstate, tmp_annotations_17);

frame_frame_platformdirs$windows$$$class__1_Windows_2->m_frame.f_lineno = 137;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_16);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$windows$$$class__1_Windows_16, mod_consts.const_str_plain_site_runtime_dir, tmp_dictset_value);
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$windows$$$class__1_Windows_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$windows$$$class__1_Windows_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$windows$$$class__1_Windows_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$windows$$$class__1_Windows_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_platformdirs$windows$$$class__1_Windows_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_3;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_platformdirs$windows$$$class__1_Windows_16, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

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


exception_lineno = 16;

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
tmp_res = PyObject_SetItem(locals_platformdirs$windows$$$class__1_Windows_16, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_3;
}
branch_no_3:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_18;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_18 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_Windows;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_platformdirs$windows$$$class__1_Windows_16;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_platformdirs$windows->m_frame.f_lineno = 16;
tmp_assign_source_17 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_3;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_17;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_16 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_16);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_platformdirs$windows$$$class__1_Windows_16);
locals_platformdirs$windows$$$class__1_Windows_16 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_platformdirs$windows$$$class__1_Windows_16);
locals_platformdirs$windows$$$class__1_Windows_16 = NULL;
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
exception_lineno = 16;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_platformdirs$windows, (Nuitka_StringObject *)mod_consts.const_str_plain_Windows, tmp_assign_source_16);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
Py_DECREF(tmp_class_container$class_creation_1__bases_orig);
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
PyObject *tmp_assign_source_18;
PyObject *tmp_annotations_18;
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_44933cc5b37d42dc39fd828d1e339030);

tmp_assign_source_18 = MAKE_FUNCTION_platformdirs$windows$$$function__18_get_win_folder_from_env_vars(tstate, tmp_annotations_18);

UPDATE_STRING_DICT1(moduledict_platformdirs$windows, (Nuitka_StringObject *)mod_consts.const_str_plain_get_win_folder_from_env_vars, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_annotations_19;
tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_5dbe648a37d33c71513f70b0793ee8a6);

tmp_assign_source_19 = MAKE_FUNCTION_platformdirs$windows$$$function__19_get_win_folder_if_csidl_name_not_env_var(tstate, tmp_annotations_19);

UPDATE_STRING_DICT1(moduledict_platformdirs$windows, (Nuitka_StringObject *)mod_consts.const_str_plain_get_win_folder_if_csidl_name_not_env_var, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_annotations_20;
tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_44933cc5b37d42dc39fd828d1e339030);

tmp_assign_source_20 = MAKE_FUNCTION_platformdirs$windows$$$function__20_get_win_folder_from_registry(tstate, tmp_annotations_20);

UPDATE_STRING_DICT1(moduledict_platformdirs$windows, (Nuitka_StringObject *)mod_consts.const_str_plain_get_win_folder_from_registry, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_annotations_21;
tmp_annotations_21 = DICT_COPY(tstate, mod_consts.const_dict_44933cc5b37d42dc39fd828d1e339030);

tmp_assign_source_21 = MAKE_FUNCTION_platformdirs$windows$$$function__21_get_win_folder_via_ctypes(tstate, tmp_annotations_21);

UPDATE_STRING_DICT1(moduledict_platformdirs$windows, (Nuitka_StringObject *)mod_consts.const_str_plain_get_win_folder_via_ctypes, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_annotations_22;
tmp_annotations_22 = DICT_COPY(tstate, mod_consts.const_dict_2926723be0e093de36e4aaad848ef298);

tmp_assign_source_22 = MAKE_FUNCTION_platformdirs$windows$$$function__22__pick_get_win_folder(tstate, tmp_annotations_22);

UPDATE_STRING_DICT1(moduledict_platformdirs$windows, (Nuitka_StringObject *)mod_consts.const_str_plain__pick_get_win_folder, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_called_value_19;
PyObject *tmp_called_value_20;
PyObject *tmp_args_element_value_17;
PyObject *tmp_called_value_21;
tmp_called_value_20 = module_var_accessor_platformdirs$windows$lru_cache(tstate);
if (unlikely(tmp_called_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lru_cache);
}

if (tmp_called_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 274;

    goto frame_exception_exit_1;
}
frame_frame_platformdirs$windows->m_frame.f_lineno = 274;
tmp_called_value_19 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_20, &PyTuple_GET_ITEM(mod_consts.const_tuple_none_tuple, 0), mod_consts.const_tuple_str_plain_maxsize_tuple);
if (tmp_called_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto frame_exception_exit_1;
}
tmp_called_value_21 = module_var_accessor_platformdirs$windows$_pick_get_win_folder(tstate);
if (unlikely(tmp_called_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__pick_get_win_folder);
}

if (tmp_called_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_19);

exception_lineno = 274;

    goto frame_exception_exit_1;
}
frame_frame_platformdirs$windows->m_frame.f_lineno = 274;
tmp_args_element_value_17 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_21);
if (tmp_args_element_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_19);

exception_lineno = 274;

    goto frame_exception_exit_1;
}
frame_frame_platformdirs$windows->m_frame.f_lineno = 274;
tmp_assign_source_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_17);
CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_platformdirs$windows, (Nuitka_StringObject *)mod_consts.const_str_plain_get_win_folder, tmp_assign_source_23);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$windows, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$windows->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$windows, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_platformdirs$windows);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = MAKE_LIST1(tstate, mod_consts.const_str_plain_Windows);
UPDATE_STRING_DICT1(moduledict_platformdirs$windows, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_24);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("platformdirs$windows", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "platformdirs.windows" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_platformdirs$windows);
    return module_platformdirs$windows;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_platformdirs$windows, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("platformdirs$windows", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

/* Generated code for Python module 'platformdirs$api'
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



/* The "module_platformdirs$api" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_platformdirs$api;
PyDictObject *moduledict_platformdirs$api;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_appname;
PyObject *const_str_plain_appauthor;
PyObject *const_str_plain_version;
PyObject *const_str_plain_roaming;
PyObject *const_str_plain_multipath;
PyObject *const_str_plain_opinion;
PyObject *const_str_plain_ensure_exists;
PyObject *const_str_digest_4c15c19f47e34fc53ef0e18bfa0f084f;
PyObject *const_slice_int_pos_1_none_none;
PyObject *const_str_plain_join;
PyObject *const_str_plain__optionally_create_directory;
PyObject *const_str_plain_Path;
PyObject *const_str_plain_mkdir;
PyObject *const_tuple_true_true_tuple;
PyObject *const_tuple_str_plain_parents_str_plain_exist_ok_tuple;
PyObject *const_str_plain_partition;
PyObject *const_tuple_str_chr_59_tuple;
PyObject *const_str_plain_user_data_dir;
PyObject *const_str_digest_601466516cde381444e98ca615a17aa9;
PyObject *const_str_plain_site_data_dir;
PyObject *const_str_digest_aba993262b5f0386a22c1074a7d46779;
PyObject *const_str_plain_user_config_dir;
PyObject *const_str_digest_87051034d10de29e61b4e195d2fc7474;
PyObject *const_str_plain_site_config_dir;
PyObject *const_str_digest_2cbc06fc5686e456e34b7b33e2f371af;
PyObject *const_str_plain_user_cache_dir;
PyObject *const_str_digest_158a519497fc35c5fa34e5a997a7f607;
PyObject *const_str_plain_site_cache_dir;
PyObject *const_str_digest_64ccfa723b4a356036125ff04d77e45e;
PyObject *const_str_plain_user_state_dir;
PyObject *const_str_digest_03e7536f55231cd18ad5aa7341cb0e18;
PyObject *const_str_plain_user_log_dir;
PyObject *const_str_digest_30112287e9f44f57b663be75a65182ed;
PyObject *const_str_plain_user_documents_dir;
PyObject *const_str_digest_03f5fe78fff311b525549f314be321bc;
PyObject *const_str_plain_user_downloads_dir;
PyObject *const_str_digest_53e3a9e0333594dba5fcd79ad15e14a4;
PyObject *const_str_plain_user_pictures_dir;
PyObject *const_str_digest_382576c9acbe6435e545578961e4db49;
PyObject *const_str_plain_user_videos_dir;
PyObject *const_str_digest_59eeb20133c7be25099f16a5ed1b25ee;
PyObject *const_str_plain_user_music_dir;
PyObject *const_str_digest_758c545b25a992686709986aea9218a0;
PyObject *const_str_plain_user_desktop_dir;
PyObject *const_str_digest_659f90cb0a920d7757f417686562c3e8;
PyObject *const_str_plain_user_runtime_dir;
PyObject *const_str_digest_8674848b56b44232f312d7a70c75ca4e;
PyObject *const_str_plain_site_runtime_dir;
PyObject *const_str_digest_db53076e588099003f2463f513861d3a;
PyObject *const_str_digest_7313a0bdb6eaccbcdcf3fe5ee7a16fb0;
PyObject *const_str_plain_self;
PyObject *const_str_plain_iter_config_dirs;
PyObject *const_str_digest_34994690b9828ac330619857de1864d9;
PyObject *const_str_digest_c5d5912ea7b595b95f0ba9245a3f34d3;
PyObject *const_str_plain_iter_data_dirs;
PyObject *const_str_digest_745e8e7bd370d0841378ed7db66bce72;
PyObject *const_str_digest_b95c09e7da13debe9b811ed52bc7b2bc;
PyObject *const_str_plain_iter_cache_dirs;
PyObject *const_str_digest_6d03d443f77bfb514349a8efe627c67b;
PyObject *const_str_digest_2e65e2fd551b74f33619cbb067d365e5;
PyObject *const_str_plain_iter_runtime_dirs;
PyObject *const_str_digest_f34b9893d331894a6e82784ee0e6322c;
PyObject *const_str_digest_3250f666f3cbb9ddf3b5863dd4f7ebfd;
PyObject *const_str_plain_iter_config_paths;
PyObject *const_str_digest_5434b9d3eec626f1595edfe19bfb2fe3;
PyObject *const_str_digest_5f3f798a273c1469ecf469855d77c4b4;
PyObject *const_str_plain_iter_data_paths;
PyObject *const_str_digest_63e535bdd06288c924cb5ccb437c7058;
PyObject *const_str_digest_ae5f632f2c13871b1d0f7be7fea2fb8c;
PyObject *const_str_plain_iter_cache_paths;
PyObject *const_str_digest_5028412c77d16cc40312d2b528c06e00;
PyObject *const_str_digest_e03fd4bdf4629c1905c7a2fd017b8d7e;
PyObject *const_str_plain_iter_runtime_paths;
PyObject *const_str_digest_318e3f584cf0b110f623c5fe3c5c694d;
PyObject *const_str_digest_3f95a33671df42a90a566f07b8e99951;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_os;
PyObject *const_str_plain_abc;
PyObject *const_tuple_str_plain_ABC_str_plain_abstractmethod_tuple;
PyObject *const_str_plain_ABC;
PyObject *const_str_plain_abstractmethod;
PyObject *const_str_plain_pathlib;
PyObject *const_tuple_str_plain_Path_tuple;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_PlatformDirsABC;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_515057460876abab6a84e50b95812956;
PyObject *const_str_digest_1a8468f9f430d40713a60c6261f0e0d6;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_15;
PyObject *const_str_plain___firstlineno__;
PyObject *const_tuple_none_none_none_false_false_true_false_tuple;
PyObject *const_dict_05091786e1ea7543a978a1df241edea0;
PyObject *const_str_digest_91dbd6edc08a9ef61417694d1fcdaf2d;
PyObject *const_dict_30fc14db9236f854568722eb86b6bc61;
PyObject *const_str_plain__append_app_name_and_version;
PyObject *const_str_digest_70e3400d4a2839d970e7b83d2248054b;
PyObject *const_dict_9d0308e8ec2e6a105d9090998714ca1c;
PyObject *const_str_digest_5694052832c642c60febc464de4a3db6;
PyObject *const_dict_15497dcf83faee6f5ca2583d9295f8a9;
PyObject *const_str_plain__first_item_as_path_if_multipath;
PyObject *const_str_digest_e027511e9c0d36c4ed2f50aa9623ecff;
PyObject *const_str_plain_property;
PyObject *const_dict_e8d16ece775461636da8aedac2f07d6b;
PyObject *const_str_digest_d03363c5dbc8b989d152f3c82bfd31db;
PyObject *const_str_digest_e6cf2ccefd13c5469d5c76ee2354926e;
PyObject *const_str_digest_0afbf273bca6b40c8f9f459494ce21de;
PyObject *const_str_digest_0608a2283872be46e0698a91ca52e25a;
PyObject *const_str_digest_0b14b11f1eeb8c0dcd6fe252096b66d1;
PyObject *const_str_digest_7ed861e307cb5a3117d77fe7a1c4ef95;
PyObject *const_str_digest_34295f1319ad05b82412a484ce64c2a4;
PyObject *const_str_digest_20ba1a05a32027eb55e2cedcd8642234;
PyObject *const_str_digest_8f6d1b06b28b2279ab325e24fdc1141b;
PyObject *const_str_digest_81c4785bcc062eebd41616a110a3b8c3;
PyObject *const_str_digest_a5e07401591661c84e7f0be8ef75f252;
PyObject *const_str_digest_81880757d5b5679e331b5dc7fe5fee1e;
PyObject *const_str_digest_ee6a62ef3cc456e4ca5b56452dc43a86;
PyObject *const_str_digest_59abff96a69577b37e29fc143862fabd;
PyObject *const_str_digest_abfc6755b80ad80c7ff7b7ec8629e864;
PyObject *const_str_digest_2a405ea3d71d0ccb09fc22366730e1df;
PyObject *const_str_digest_1758df85f823e040abe6984708a3ba71;
PyObject *const_str_digest_fc355f58f0ff77d8f77a00468820818d;
PyObject *const_str_digest_61d51b1d9b5569e5ca5dfd52ebe24174;
PyObject *const_str_digest_7d3fbc58335f38d2dfb8778792e13beb;
PyObject *const_str_digest_88c4a4e96a4f64b415cd2140821dfb44;
PyObject *const_str_digest_f171dbbe044cc1fa5946690cf2e1cd25;
PyObject *const_str_digest_054b0e8f97411b56f4009f05053c6e63;
PyObject *const_str_digest_13431501b652c04d86d309bfa8c65e3b;
PyObject *const_str_digest_85db2365a56eba6815f139a569c08b46;
PyObject *const_str_digest_5c7226d148b72fbc25f40214c3d38d62;
PyObject *const_str_digest_986b5baff975f926a5a2b36ef7b04178;
PyObject *const_str_digest_05c455110a48b77e672a07bef8724791;
PyObject *const_str_digest_9dcb748d52ececd009f33a916ac4f9fa;
PyObject *const_str_digest_c296f229907c52777e8512e56a500109;
PyObject *const_str_digest_8da3a281610c277bc9ceb3a11abf11cd;
PyObject *const_str_digest_7c63b261032349b6bce70b8df99e1411;
PyObject *const_dict_8bbfa897dce82badadbdad5bcd6f946d;
PyObject *const_str_plain_user_data_path;
PyObject *const_str_digest_5cbe4fc19a597dd3d25dbe8d23695c3f;
PyObject *const_str_plain_site_data_path;
PyObject *const_str_digest_9e095be67c3e525b976efd709a15df15;
PyObject *const_str_plain_user_config_path;
PyObject *const_str_digest_88300aef7cde70073ece592abe6135df;
PyObject *const_str_plain_site_config_path;
PyObject *const_str_digest_490c38bfe36f112d7e1eeca95097c03e;
PyObject *const_str_plain_user_cache_path;
PyObject *const_str_digest_be0dd4769ad4e571936ff9fd3c5b94b3;
PyObject *const_str_plain_site_cache_path;
PyObject *const_str_digest_41d6a71f1bb50b139737e59a4cab757f;
PyObject *const_str_plain_user_state_path;
PyObject *const_str_digest_a31d42a34ca2e6394abec0a310c03eae;
PyObject *const_str_plain_user_log_path;
PyObject *const_str_digest_2ef3ad18e39e10d3d454b5eae69502f8;
PyObject *const_str_plain_user_documents_path;
PyObject *const_str_digest_bba022d390a8cc3aec2eebd6be8833b3;
PyObject *const_str_plain_user_downloads_path;
PyObject *const_str_digest_f5b6f8477ec6934a96acb750755e26bc;
PyObject *const_str_plain_user_pictures_path;
PyObject *const_str_digest_5cb77269855d70c9c50f6eaeae638d91;
PyObject *const_str_plain_user_videos_path;
PyObject *const_str_digest_b9902c103f8ce98dd79d320785370715;
PyObject *const_str_plain_user_music_path;
PyObject *const_str_digest_5bf63837a5b53180610bfb6d1c959150;
PyObject *const_str_plain_user_desktop_path;
PyObject *const_str_digest_810c4c9d50f286bbab2e9203876876f5;
PyObject *const_str_plain_user_runtime_path;
PyObject *const_str_digest_18613d7a4b2626fd6aa3930ef4f1f6e7;
PyObject *const_str_plain_site_runtime_path;
PyObject *const_str_digest_22a6b83cfc6067a9df9677eeeab06b12;
PyObject *const_dict_b2f586a573796cb806fcf3b5316538bd;
PyObject *const_dict_9f2ffdfd475316a014aaac7a01bed3ff;
PyObject *const_tuple_0d4e60dadfda01b6adee3fa1b10fbf5a_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_4b88b92d5ae2deecf85264ef8b126e04;
PyObject *const_str_digest_23268fa8ba7e284b5c161d27f2f9dd75;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_bbc3ea9cb0969c15869025cae22cec4e_tuple;
PyObject *const_tuple_574ad597e12151428ea9df0c65b39a17_tuple;
PyObject *const_tuple_str_plain_self_str_plain_directory_tuple;
PyObject *const_tuple_str_plain_self_str_plain_path_tuple;
PyObject *const_tuple_str_plain_self_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[187];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("platformdirs.api"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_appname);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_appauthor);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_version);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_roaming);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_multipath);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_opinion);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_ensure_exists);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_4c15c19f47e34fc53ef0e18bfa0f084f);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_join);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain__optionally_create_directory);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_Path);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_mkdir);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_tuple_true_true_tuple);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_parents_str_plain_exist_ok_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_partition);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_59_tuple);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_data_dir);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_601466516cde381444e98ca615a17aa9);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_site_data_dir);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_aba993262b5f0386a22c1074a7d46779);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_config_dir);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_87051034d10de29e61b4e195d2fc7474);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_site_config_dir);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_2cbc06fc5686e456e34b7b33e2f371af);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_cache_dir);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_158a519497fc35c5fa34e5a997a7f607);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_site_cache_dir);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_64ccfa723b4a356036125ff04d77e45e);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_state_dir);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_03e7536f55231cd18ad5aa7341cb0e18);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_log_dir);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_30112287e9f44f57b663be75a65182ed);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_documents_dir);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_03f5fe78fff311b525549f314be321bc);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_downloads_dir);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_53e3a9e0333594dba5fcd79ad15e14a4);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_pictures_dir);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_382576c9acbe6435e545578961e4db49);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_videos_dir);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_59eeb20133c7be25099f16a5ed1b25ee);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_music_dir);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_758c545b25a992686709986aea9218a0);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_desktop_dir);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_659f90cb0a920d7757f417686562c3e8);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_runtime_dir);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_8674848b56b44232f312d7a70c75ca4e);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_site_runtime_dir);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_db53076e588099003f2463f513861d3a);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_7313a0bdb6eaccbcdcf3fe5ee7a16fb0);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_iter_config_dirs);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_34994690b9828ac330619857de1864d9);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_c5d5912ea7b595b95f0ba9245a3f34d3);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_iter_data_dirs);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_745e8e7bd370d0841378ed7db66bce72);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_b95c09e7da13debe9b811ed52bc7b2bc);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_iter_cache_dirs);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_6d03d443f77bfb514349a8efe627c67b);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_2e65e2fd551b74f33619cbb067d365e5);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_iter_runtime_dirs);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_f34b9893d331894a6e82784ee0e6322c);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_3250f666f3cbb9ddf3b5863dd4f7ebfd);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_iter_config_paths);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_5434b9d3eec626f1595edfe19bfb2fe3);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_5f3f798a273c1469ecf469855d77c4b4);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_iter_data_paths);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_63e535bdd06288c924cb5ccb437c7058);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_ae5f632f2c13871b1d0f7be7fea2fb8c);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_iter_cache_paths);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_5028412c77d16cc40312d2b528c06e00);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_e03fd4bdf4629c1905c7a2fd017b8d7e);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_iter_runtime_paths);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_318e3f584cf0b110f623c5fe3c5c694d);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_3f95a33671df42a90a566f07b8e99951);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_abc);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ABC_str_plain_abstractmethod_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_ABC);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_abstractmethod);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_pathlib);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Path_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_PlatformDirsABC);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_digest_515057460876abab6a84e50b95812956);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_1a8468f9f430d40713a60c6261f0e0d6);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_int_pos_15);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_false_false_true_false_tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_dict_05091786e1ea7543a978a1df241edea0);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_digest_91dbd6edc08a9ef61417694d1fcdaf2d);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_dict_30fc14db9236f854568722eb86b6bc61);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain__append_app_name_and_version);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_digest_70e3400d4a2839d970e7b83d2248054b);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_dict_9d0308e8ec2e6a105d9090998714ca1c);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_5694052832c642c60febc464de4a3db6);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_dict_15497dcf83faee6f5ca2583d9295f8a9);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain__first_item_as_path_if_multipath);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_digest_e027511e9c0d36c4ed2f50aa9623ecff);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_d03363c5dbc8b989d152f3c82bfd31db);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_e6cf2ccefd13c5469d5c76ee2354926e);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_digest_0afbf273bca6b40c8f9f459494ce21de);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_0608a2283872be46e0698a91ca52e25a);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_digest_0b14b11f1eeb8c0dcd6fe252096b66d1);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_7ed861e307cb5a3117d77fe7a1c4ef95);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_34295f1319ad05b82412a484ce64c2a4);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_digest_20ba1a05a32027eb55e2cedcd8642234);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_8f6d1b06b28b2279ab325e24fdc1141b);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_digest_81c4785bcc062eebd41616a110a3b8c3);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_digest_a5e07401591661c84e7f0be8ef75f252);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_digest_81880757d5b5679e331b5dc7fe5fee1e);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_digest_ee6a62ef3cc456e4ca5b56452dc43a86);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_digest_59abff96a69577b37e29fc143862fabd);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_digest_abfc6755b80ad80c7ff7b7ec8629e864);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_digest_2a405ea3d71d0ccb09fc22366730e1df);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_digest_1758df85f823e040abe6984708a3ba71);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_digest_fc355f58f0ff77d8f77a00468820818d);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_61d51b1d9b5569e5ca5dfd52ebe24174);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_digest_7d3fbc58335f38d2dfb8778792e13beb);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_88c4a4e96a4f64b415cd2140821dfb44);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_digest_f171dbbe044cc1fa5946690cf2e1cd25);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_054b0e8f97411b56f4009f05053c6e63);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_digest_13431501b652c04d86d309bfa8c65e3b);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_85db2365a56eba6815f139a569c08b46);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_digest_5c7226d148b72fbc25f40214c3d38d62);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_digest_986b5baff975f926a5a2b36ef7b04178);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_digest_05c455110a48b77e672a07bef8724791);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_digest_9dcb748d52ececd009f33a916ac4f9fa);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_digest_c296f229907c52777e8512e56a500109);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_digest_8da3a281610c277bc9ceb3a11abf11cd);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_digest_7c63b261032349b6bce70b8df99e1411);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_dict_8bbfa897dce82badadbdad5bcd6f946d);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_data_path);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_digest_5cbe4fc19a597dd3d25dbe8d23695c3f);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_site_data_path);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_digest_9e095be67c3e525b976efd709a15df15);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_config_path);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_digest_88300aef7cde70073ece592abe6135df);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_site_config_path);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_digest_490c38bfe36f112d7e1eeca95097c03e);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_cache_path);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_digest_be0dd4769ad4e571936ff9fd3c5b94b3);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_site_cache_path);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_digest_41d6a71f1bb50b139737e59a4cab757f);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_state_path);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_digest_a31d42a34ca2e6394abec0a310c03eae);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_log_path);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_digest_2ef3ad18e39e10d3d454b5eae69502f8);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_documents_path);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_digest_bba022d390a8cc3aec2eebd6be8833b3);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_downloads_path);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_digest_f5b6f8477ec6934a96acb750755e26bc);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_pictures_path);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_digest_5cb77269855d70c9c50f6eaeae638d91);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_videos_path);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_digest_b9902c103f8ce98dd79d320785370715);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_music_path);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_digest_5bf63837a5b53180610bfb6d1c959150);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_desktop_path);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_digest_810c4c9d50f286bbab2e9203876876f5);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_runtime_path);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_digest_18613d7a4b2626fd6aa3930ef4f1f6e7);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain_site_runtime_path);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_digest_22a6b83cfc6067a9df9677eeeab06b12);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_dict_b2f586a573796cb806fcf3b5316538bd);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_dict_9f2ffdfd475316a014aaac7a01bed3ff);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_tuple_0d4e60dadfda01b6adee3fa1b10fbf5a_tuple);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_digest_4b88b92d5ae2deecf85264ef8b126e04);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_digest_23268fa8ba7e284b5c161d27f2f9dd75);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_tuple_bbc3ea9cb0969c15869025cae22cec4e_tuple);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_tuple_574ad597e12151428ea9df0c65b39a17_tuple);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_directory_tuple);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_path_tuple);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
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
void checkModuleConstants_platformdirs$api(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_appname));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_appname);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_appauthor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_appauthor);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_version));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_version);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_roaming));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_roaming);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_multipath));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_multipath);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_opinion));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_opinion);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_ensure_exists));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ensure_exists);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_4c15c19f47e34fc53ef0e18bfa0f084f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4c15c19f47e34fc53ef0e18bfa0f084f);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_int_pos_1_none_none);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_join));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_join);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain__optionally_create_directory));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__optionally_create_directory);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_Path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Path);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_mkdir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mkdir);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_tuple_true_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_true_tuple);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_parents_str_plain_exist_ok_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_parents_str_plain_exist_ok_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_partition));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_partition);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_59_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_59_tuple);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_data_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_data_dir);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_601466516cde381444e98ca615a17aa9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_601466516cde381444e98ca615a17aa9);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_site_data_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_site_data_dir);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_aba993262b5f0386a22c1074a7d46779));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aba993262b5f0386a22c1074a7d46779);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_config_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_config_dir);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_87051034d10de29e61b4e195d2fc7474));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_87051034d10de29e61b4e195d2fc7474);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_site_config_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_site_config_dir);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_2cbc06fc5686e456e34b7b33e2f371af));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2cbc06fc5686e456e34b7b33e2f371af);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_cache_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_cache_dir);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_158a519497fc35c5fa34e5a997a7f607));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_158a519497fc35c5fa34e5a997a7f607);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_site_cache_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_site_cache_dir);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_64ccfa723b4a356036125ff04d77e45e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_64ccfa723b4a356036125ff04d77e45e);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_state_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_state_dir);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_03e7536f55231cd18ad5aa7341cb0e18));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_03e7536f55231cd18ad5aa7341cb0e18);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_log_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_log_dir);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_30112287e9f44f57b663be75a65182ed));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_30112287e9f44f57b663be75a65182ed);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_documents_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_documents_dir);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_03f5fe78fff311b525549f314be321bc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_03f5fe78fff311b525549f314be321bc);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_downloads_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_downloads_dir);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_53e3a9e0333594dba5fcd79ad15e14a4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_53e3a9e0333594dba5fcd79ad15e14a4);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_pictures_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_pictures_dir);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_382576c9acbe6435e545578961e4db49));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_382576c9acbe6435e545578961e4db49);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_videos_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_videos_dir);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_59eeb20133c7be25099f16a5ed1b25ee));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_59eeb20133c7be25099f16a5ed1b25ee);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_music_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_music_dir);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_758c545b25a992686709986aea9218a0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_758c545b25a992686709986aea9218a0);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_desktop_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_desktop_dir);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_659f90cb0a920d7757f417686562c3e8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_659f90cb0a920d7757f417686562c3e8);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_runtime_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_runtime_dir);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_8674848b56b44232f312d7a70c75ca4e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8674848b56b44232f312d7a70c75ca4e);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_site_runtime_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_site_runtime_dir);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_db53076e588099003f2463f513861d3a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_db53076e588099003f2463f513861d3a);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_7313a0bdb6eaccbcdcf3fe5ee7a16fb0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7313a0bdb6eaccbcdcf3fe5ee7a16fb0);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_iter_config_dirs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_iter_config_dirs);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_34994690b9828ac330619857de1864d9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_34994690b9828ac330619857de1864d9);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_c5d5912ea7b595b95f0ba9245a3f34d3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c5d5912ea7b595b95f0ba9245a3f34d3);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_iter_data_dirs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_iter_data_dirs);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_745e8e7bd370d0841378ed7db66bce72));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_745e8e7bd370d0841378ed7db66bce72);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_b95c09e7da13debe9b811ed52bc7b2bc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b95c09e7da13debe9b811ed52bc7b2bc);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_iter_cache_dirs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_iter_cache_dirs);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_6d03d443f77bfb514349a8efe627c67b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6d03d443f77bfb514349a8efe627c67b);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_2e65e2fd551b74f33619cbb067d365e5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2e65e2fd551b74f33619cbb067d365e5);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_iter_runtime_dirs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_iter_runtime_dirs);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_f34b9893d331894a6e82784ee0e6322c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f34b9893d331894a6e82784ee0e6322c);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_3250f666f3cbb9ddf3b5863dd4f7ebfd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3250f666f3cbb9ddf3b5863dd4f7ebfd);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_iter_config_paths));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_iter_config_paths);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_5434b9d3eec626f1595edfe19bfb2fe3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5434b9d3eec626f1595edfe19bfb2fe3);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_5f3f798a273c1469ecf469855d77c4b4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5f3f798a273c1469ecf469855d77c4b4);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_iter_data_paths));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_iter_data_paths);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_63e535bdd06288c924cb5ccb437c7058));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_63e535bdd06288c924cb5ccb437c7058);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_ae5f632f2c13871b1d0f7be7fea2fb8c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ae5f632f2c13871b1d0f7be7fea2fb8c);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_iter_cache_paths));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_iter_cache_paths);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_5028412c77d16cc40312d2b528c06e00));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5028412c77d16cc40312d2b528c06e00);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_e03fd4bdf4629c1905c7a2fd017b8d7e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e03fd4bdf4629c1905c7a2fd017b8d7e);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_iter_runtime_paths));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_iter_runtime_paths);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_318e3f584cf0b110f623c5fe3c5c694d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_318e3f584cf0b110f623c5fe3c5c694d);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_3f95a33671df42a90a566f07b8e99951));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3f95a33671df42a90a566f07b8e99951);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_abc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abc);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ABC_str_plain_abstractmethod_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ABC_str_plain_abstractmethod_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_ABC));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ABC);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_abstractmethod));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abstractmethod);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_pathlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pathlib);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Path_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_PlatformDirsABC));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PlatformDirsABC);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_digest_515057460876abab6a84e50b95812956));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_515057460876abab6a84e50b95812956);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_1a8468f9f430d40713a60c6261f0e0d6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1a8468f9f430d40713a60c6261f0e0d6);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_int_pos_15));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_15);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_false_false_true_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_false_false_true_false_tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_dict_05091786e1ea7543a978a1df241edea0));
CHECK_OBJECT_DEEP(mod_consts.const_dict_05091786e1ea7543a978a1df241edea0);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_digest_91dbd6edc08a9ef61417694d1fcdaf2d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_91dbd6edc08a9ef61417694d1fcdaf2d);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_dict_30fc14db9236f854568722eb86b6bc61));
CHECK_OBJECT_DEEP(mod_consts.const_dict_30fc14db9236f854568722eb86b6bc61);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain__append_app_name_and_version));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__append_app_name_and_version);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_digest_70e3400d4a2839d970e7b83d2248054b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_70e3400d4a2839d970e7b83d2248054b);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_dict_9d0308e8ec2e6a105d9090998714ca1c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9d0308e8ec2e6a105d9090998714ca1c);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_5694052832c642c60febc464de4a3db6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5694052832c642c60febc464de4a3db6);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_dict_15497dcf83faee6f5ca2583d9295f8a9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_15497dcf83faee6f5ca2583d9295f8a9);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain__first_item_as_path_if_multipath));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__first_item_as_path_if_multipath);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_digest_e027511e9c0d36c4ed2f50aa9623ecff));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e027511e9c0d36c4ed2f50aa9623ecff);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_d03363c5dbc8b989d152f3c82bfd31db));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d03363c5dbc8b989d152f3c82bfd31db);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_e6cf2ccefd13c5469d5c76ee2354926e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e6cf2ccefd13c5469d5c76ee2354926e);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_digest_0afbf273bca6b40c8f9f459494ce21de));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0afbf273bca6b40c8f9f459494ce21de);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_0608a2283872be46e0698a91ca52e25a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0608a2283872be46e0698a91ca52e25a);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_digest_0b14b11f1eeb8c0dcd6fe252096b66d1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0b14b11f1eeb8c0dcd6fe252096b66d1);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_7ed861e307cb5a3117d77fe7a1c4ef95));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7ed861e307cb5a3117d77fe7a1c4ef95);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_34295f1319ad05b82412a484ce64c2a4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_34295f1319ad05b82412a484ce64c2a4);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_digest_20ba1a05a32027eb55e2cedcd8642234));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_20ba1a05a32027eb55e2cedcd8642234);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_8f6d1b06b28b2279ab325e24fdc1141b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8f6d1b06b28b2279ab325e24fdc1141b);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_digest_81c4785bcc062eebd41616a110a3b8c3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_81c4785bcc062eebd41616a110a3b8c3);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_digest_a5e07401591661c84e7f0be8ef75f252));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a5e07401591661c84e7f0be8ef75f252);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_digest_81880757d5b5679e331b5dc7fe5fee1e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_81880757d5b5679e331b5dc7fe5fee1e);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_digest_ee6a62ef3cc456e4ca5b56452dc43a86));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ee6a62ef3cc456e4ca5b56452dc43a86);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_digest_59abff96a69577b37e29fc143862fabd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_59abff96a69577b37e29fc143862fabd);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_digest_abfc6755b80ad80c7ff7b7ec8629e864));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_abfc6755b80ad80c7ff7b7ec8629e864);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_digest_2a405ea3d71d0ccb09fc22366730e1df));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2a405ea3d71d0ccb09fc22366730e1df);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_digest_1758df85f823e040abe6984708a3ba71));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1758df85f823e040abe6984708a3ba71);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_digest_fc355f58f0ff77d8f77a00468820818d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fc355f58f0ff77d8f77a00468820818d);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_61d51b1d9b5569e5ca5dfd52ebe24174));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_61d51b1d9b5569e5ca5dfd52ebe24174);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_digest_7d3fbc58335f38d2dfb8778792e13beb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7d3fbc58335f38d2dfb8778792e13beb);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_88c4a4e96a4f64b415cd2140821dfb44));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_88c4a4e96a4f64b415cd2140821dfb44);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_digest_f171dbbe044cc1fa5946690cf2e1cd25));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f171dbbe044cc1fa5946690cf2e1cd25);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_054b0e8f97411b56f4009f05053c6e63));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_054b0e8f97411b56f4009f05053c6e63);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_digest_13431501b652c04d86d309bfa8c65e3b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_13431501b652c04d86d309bfa8c65e3b);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_85db2365a56eba6815f139a569c08b46));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_85db2365a56eba6815f139a569c08b46);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_digest_5c7226d148b72fbc25f40214c3d38d62));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5c7226d148b72fbc25f40214c3d38d62);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_digest_986b5baff975f926a5a2b36ef7b04178));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_986b5baff975f926a5a2b36ef7b04178);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_digest_05c455110a48b77e672a07bef8724791));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_05c455110a48b77e672a07bef8724791);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_digest_9dcb748d52ececd009f33a916ac4f9fa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9dcb748d52ececd009f33a916ac4f9fa);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_digest_c296f229907c52777e8512e56a500109));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c296f229907c52777e8512e56a500109);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_digest_8da3a281610c277bc9ceb3a11abf11cd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8da3a281610c277bc9ceb3a11abf11cd);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_digest_7c63b261032349b6bce70b8df99e1411));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7c63b261032349b6bce70b8df99e1411);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_dict_8bbfa897dce82badadbdad5bcd6f946d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8bbfa897dce82badadbdad5bcd6f946d);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_data_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_data_path);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_digest_5cbe4fc19a597dd3d25dbe8d23695c3f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5cbe4fc19a597dd3d25dbe8d23695c3f);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_site_data_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_site_data_path);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_digest_9e095be67c3e525b976efd709a15df15));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9e095be67c3e525b976efd709a15df15);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_config_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_config_path);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_digest_88300aef7cde70073ece592abe6135df));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_88300aef7cde70073ece592abe6135df);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_site_config_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_site_config_path);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_digest_490c38bfe36f112d7e1eeca95097c03e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_490c38bfe36f112d7e1eeca95097c03e);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_cache_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_cache_path);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_digest_be0dd4769ad4e571936ff9fd3c5b94b3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_be0dd4769ad4e571936ff9fd3c5b94b3);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_site_cache_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_site_cache_path);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_digest_41d6a71f1bb50b139737e59a4cab757f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_41d6a71f1bb50b139737e59a4cab757f);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_state_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_state_path);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_digest_a31d42a34ca2e6394abec0a310c03eae));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a31d42a34ca2e6394abec0a310c03eae);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_log_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_log_path);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_digest_2ef3ad18e39e10d3d454b5eae69502f8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2ef3ad18e39e10d3d454b5eae69502f8);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_documents_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_documents_path);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_digest_bba022d390a8cc3aec2eebd6be8833b3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bba022d390a8cc3aec2eebd6be8833b3);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_downloads_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_downloads_path);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_digest_f5b6f8477ec6934a96acb750755e26bc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f5b6f8477ec6934a96acb750755e26bc);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_pictures_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_pictures_path);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_digest_5cb77269855d70c9c50f6eaeae638d91));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5cb77269855d70c9c50f6eaeae638d91);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_videos_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_videos_path);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_digest_b9902c103f8ce98dd79d320785370715));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b9902c103f8ce98dd79d320785370715);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_music_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_music_path);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_digest_5bf63837a5b53180610bfb6d1c959150));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5bf63837a5b53180610bfb6d1c959150);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_desktop_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_desktop_path);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_digest_810c4c9d50f286bbab2e9203876876f5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_810c4c9d50f286bbab2e9203876876f5);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_runtime_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_runtime_path);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_digest_18613d7a4b2626fd6aa3930ef4f1f6e7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_18613d7a4b2626fd6aa3930ef4f1f6e7);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain_site_runtime_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_site_runtime_path);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_digest_22a6b83cfc6067a9df9677eeeab06b12));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_22a6b83cfc6067a9df9677eeeab06b12);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_dict_b2f586a573796cb806fcf3b5316538bd));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b2f586a573796cb806fcf3b5316538bd);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_dict_9f2ffdfd475316a014aaac7a01bed3ff));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9f2ffdfd475316a014aaac7a01bed3ff);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_tuple_0d4e60dadfda01b6adee3fa1b10fbf5a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0d4e60dadfda01b6adee3fa1b10fbf5a_tuple);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_digest_4b88b92d5ae2deecf85264ef8b126e04));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4b88b92d5ae2deecf85264ef8b126e04);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_digest_23268fa8ba7e284b5c161d27f2f9dd75));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_23268fa8ba7e284b5c161d27f2f9dd75);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_tuple_bbc3ea9cb0969c15869025cae22cec4e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bbc3ea9cb0969c15869025cae22cec4e_tuple);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_tuple_574ad597e12151428ea9df0c65b39a17_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_574ad597e12151428ea9df0c65b39a17_tuple);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_directory_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_directory_tuple);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_path_tuple);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 4
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
static PyObject *module_var_accessor_platformdirs$api$ABC(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_platformdirs$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_platformdirs$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$api, (Nuitka_StringObject *)mod_consts.const_str_plain_ABC);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_platformdirs$api->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$api, (Nuitka_StringObject *)mod_consts.const_str_plain_ABC);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_platformdirs$api, (Nuitka_StringObject *)mod_consts.const_str_plain_ABC);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ABC);
    }

    return result;
}

static PyObject *module_var_accessor_platformdirs$api$Path(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_platformdirs$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_platformdirs$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$api, (Nuitka_StringObject *)mod_consts.const_str_plain_Path);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_platformdirs$api->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$api, (Nuitka_StringObject *)mod_consts.const_str_plain_Path);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_platformdirs$api, (Nuitka_StringObject *)mod_consts.const_str_plain_Path);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Path);
    }

    return result;
}

static PyObject *module_var_accessor_platformdirs$api$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_platformdirs$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_platformdirs$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$api, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_platformdirs$api->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$api, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_platformdirs$api, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_platformdirs$api$abstractmethod(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_platformdirs$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_platformdirs$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$api, (Nuitka_StringObject *)mod_consts.const_str_plain_abstractmethod);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_platformdirs$api->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$api, (Nuitka_StringObject *)mod_consts.const_str_plain_abstractmethod);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_platformdirs$api, (Nuitka_StringObject *)mod_consts.const_str_plain_abstractmethod);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_abstractmethod);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_6f74084eda2f5104d0c0f89e2789f8af;
static PyCodeObject *code_objects_203a6dfb8742d54b5d52c3aa1ca17bae;
static PyCodeObject *code_objects_63fb1423e25ef87ac331fa1d3ce7d3e8;
static PyCodeObject *code_objects_ba0c9c86e3fe79ab30beda04affa8cf0;
static PyCodeObject *code_objects_e40d26035880d6fad20b4fa8eb6fda18;
static PyCodeObject *code_objects_ffad5081a6afb434f8a84dbe41cb5c24;
static PyCodeObject *code_objects_2cf3548e89b805abe4d6e91c9be97d2f;
static PyCodeObject *code_objects_5ad40ffaba718f45437a6ccd4c31c306;
static PyCodeObject *code_objects_5fb2598857a16f39f75b3f278d326820;
static PyCodeObject *code_objects_79718427cb932c682d4f516f179c7993;
static PyCodeObject *code_objects_5a59b0f34fdb38c119bdb2d522a7f970;
static PyCodeObject *code_objects_94666dc935d8e4e90ec7e908fd5f15f2;
static PyCodeObject *code_objects_6815ffaaa2e428f4a2ee6fed09cb5528;
static PyCodeObject *code_objects_83e8401cf11ac8dfdee048e2f4960a4e;
static PyCodeObject *code_objects_943a25d05fb1ab68f7e894e901970526;
static PyCodeObject *code_objects_cc6900ed07026300ffb0f944f0eccbfc;
static PyCodeObject *code_objects_42d2d700c41cbaab9d0df3ef5d82eba0;
static PyCodeObject *code_objects_e89ee23200c26e35c1b875cd2d0268a7;
static PyCodeObject *code_objects_8b46b6774ff63b488d75b9a0546a3509;
static PyCodeObject *code_objects_02abe4ad2a2e5a2f3426a604f422a1b7;
static PyCodeObject *code_objects_774287d72cc4e66742e9715f867326d5;
static PyCodeObject *code_objects_2e2d1584a34856a9a165930fbba5e710;
static PyCodeObject *code_objects_1133c9bd9c5e9da90da618f59ed951cd;
static PyCodeObject *code_objects_ad8830b2988fbc9ae42ea4b19baef954;
static PyCodeObject *code_objects_ce247d6bd0a0069b0f713a7c536927d4;
static PyCodeObject *code_objects_f25b60bb8843c7e270cf1159f40baf2b;
static PyCodeObject *code_objects_2874723dcab1bfcb932a4a48f3c280c7;
static PyCodeObject *code_objects_4ca57ac0a23d7e636412a39948c70036;
static PyCodeObject *code_objects_69c7ec3b5594152fe08b4c8073b24b50;
static PyCodeObject *code_objects_e489a3b3c765437b22dc0594bc58a4dc;
static PyCodeObject *code_objects_11b4c0047aef87a92eccb0f847edaa2d;
static PyCodeObject *code_objects_508445e078fe119846d702e8636a1b2e;
static PyCodeObject *code_objects_e904bf8d8fdc294a1aa0a8cdb2feecd7;
static PyCodeObject *code_objects_d8d4b407a785a29428843246c94f5e8e;
static PyCodeObject *code_objects_f4152540034997ada1566197e527bc07;
static PyCodeObject *code_objects_898ad031916e8ba608bdbf8de057890a;
static PyCodeObject *code_objects_78eee361fddd9c5b20bc762135ebe112;
static PyCodeObject *code_objects_66f44f231cc5d8cedd14be903df8368c;
static PyCodeObject *code_objects_2705b7446182525a723e459c819dcda1;
static PyCodeObject *code_objects_1a7baf28f7d63aae752587594adae170;
static PyCodeObject *code_objects_2cdaba15b506e28c29092117d58cbd73;
static PyCodeObject *code_objects_8457a3c1f2d6b179f912da948d82101b;
static PyCodeObject *code_objects_e6357d7da0531cda471dadd1d20ac26e;
static PyCodeObject *code_objects_9e106d86fd332b616760ff030db02b5b;
static PyCodeObject *code_objects_718494ad0ee4658126f14030ec61d0f3;
static PyCodeObject *code_objects_40a891eb7acf3d12e3aa9b44da9f68e1;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_4b88b92d5ae2deecf85264ef8b126e04); CHECK_OBJECT(module_filename_obj);
code_objects_6f74084eda2f5104d0c0f89e2789f8af = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_23268fa8ba7e284b5c161d27f2f9dd75, mod_consts.const_str_digest_23268fa8ba7e284b5c161d27f2f9dd75, NULL, NULL, 0, 0, 0);
code_objects_203a6dfb8742d54b5d52c3aa1ca17bae = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_PlatformDirsABC, mod_consts.const_str_plain_PlatformDirsABC, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_63fb1423e25ef87ac331fa1d3ce7d3e8 = MAKE_CODE_OBJECT(module_filename_obj, 18, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_91dbd6edc08a9ef61417694d1fcdaf2d, mod_consts.const_tuple_bbc3ea9cb0969c15869025cae22cec4e_tuple, NULL, 8, 0, 0);
code_objects_ba0c9c86e3fe79ab30beda04affa8cf0 = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__append_app_name_and_version, mod_consts.const_str_digest_70e3400d4a2839d970e7b83d2248054b, mod_consts.const_tuple_574ad597e12151428ea9df0c65b39a17_tuple, NULL, 1, 0, 0);
code_objects_e40d26035880d6fad20b4fa8eb6fda18 = MAKE_CODE_OBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__first_item_as_path_if_multipath, mod_consts.const_str_digest_e027511e9c0d36c4ed2f50aa9623ecff, mod_consts.const_tuple_str_plain_self_str_plain_directory_tuple, NULL, 2, 0, 0);
code_objects_ffad5081a6afb434f8a84dbe41cb5c24 = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__optionally_create_directory, mod_consts.const_str_digest_5694052832c642c60febc464de4a3db6, mod_consts.const_tuple_str_plain_self_str_plain_path_tuple, NULL, 2, 0, 0);
code_objects_2cf3548e89b805abe4d6e91c9be97d2f = MAKE_CODE_OBJECT(module_filename_obj, 271, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_iter_cache_dirs, mod_consts.const_str_digest_6d03d443f77bfb514349a8efe627c67b, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_5ad40ffaba718f45437a6ccd4c31c306 = MAKE_CODE_OBJECT(module_filename_obj, 291, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_iter_cache_paths, mod_consts.const_str_digest_5028412c77d16cc40312d2b528c06e00, mod_consts.const_tuple_str_plain_self_str_plain_path_tuple, NULL, 1, 0, 0);
code_objects_5fb2598857a16f39f75b3f278d326820 = MAKE_CODE_OBJECT(module_filename_obj, 261, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_iter_config_dirs, mod_consts.const_str_digest_34994690b9828ac330619857de1864d9, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_79718427cb932c682d4f516f179c7993 = MAKE_CODE_OBJECT(module_filename_obj, 281, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_iter_config_paths, mod_consts.const_str_digest_5434b9d3eec626f1595edfe19bfb2fe3, mod_consts.const_tuple_str_plain_self_str_plain_path_tuple, NULL, 1, 0, 0);
code_objects_5a59b0f34fdb38c119bdb2d522a7f970 = MAKE_CODE_OBJECT(module_filename_obj, 266, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_iter_data_dirs, mod_consts.const_str_digest_745e8e7bd370d0841378ed7db66bce72, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_94666dc935d8e4e90ec7e908fd5f15f2 = MAKE_CODE_OBJECT(module_filename_obj, 286, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_iter_data_paths, mod_consts.const_str_digest_63e535bdd06288c924cb5ccb437c7058, mod_consts.const_tuple_str_plain_self_str_plain_path_tuple, NULL, 1, 0, 0);
code_objects_6815ffaaa2e428f4a2ee6fed09cb5528 = MAKE_CODE_OBJECT(module_filename_obj, 276, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_iter_runtime_dirs, mod_consts.const_str_digest_f34b9893d331894a6e82784ee0e6322c, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_83e8401cf11ac8dfdee048e2f4960a4e = MAKE_CODE_OBJECT(module_filename_obj, 296, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_iter_runtime_paths, mod_consts.const_str_digest_318e3f584cf0b110f623c5fe3c5c694d, mod_consts.const_tuple_str_plain_self_str_plain_path_tuple, NULL, 1, 0, 0);
code_objects_943a25d05fb1ab68f7e894e901970526 = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_site_cache_dir, mod_consts.const_str_digest_81880757d5b5679e331b5dc7fe5fee1e, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_cc6900ed07026300ffb0f944f0eccbfc = MAKE_CODE_OBJECT(module_filename_obj, 207, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_site_cache_path, mod_consts.const_str_digest_41d6a71f1bb50b139737e59a4cab757f, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_42d2d700c41cbaab9d0df3ef5d82eba0 = MAKE_CODE_OBJECT(module_filename_obj, 118, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_site_config_dir, mod_consts.const_str_digest_20ba1a05a32027eb55e2cedcd8642234, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_e89ee23200c26e35c1b875cd2d0268a7 = MAKE_CODE_OBJECT(module_filename_obj, 197, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_site_config_path, mod_consts.const_str_digest_490c38bfe36f112d7e1eeca95097c03e, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_8b46b6774ff63b488d75b9a0546a3509 = MAKE_CODE_OBJECT(module_filename_obj, 108, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_site_data_dir, mod_consts.const_str_digest_0608a2283872be46e0698a91ca52e25a, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_02abe4ad2a2e5a2f3426a604f422a1b7 = MAKE_CODE_OBJECT(module_filename_obj, 187, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_site_data_path, mod_consts.const_str_digest_9e095be67c3e525b976efd709a15df15, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_774287d72cc4e66742e9715f867326d5 = MAKE_CODE_OBJECT(module_filename_obj, 178, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_site_runtime_dir, mod_consts.const_str_digest_7c63b261032349b6bce70b8df99e1411, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_2e2d1584a34856a9a165930fbba5e710 = MAKE_CODE_OBJECT(module_filename_obj, 257, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_site_runtime_path, mod_consts.const_str_digest_22a6b83cfc6067a9df9677eeeab06b12, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_1133c9bd9c5e9da90da618f59ed951cd = MAKE_CODE_OBJECT(module_filename_obj, 123, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_cache_dir, mod_consts.const_str_digest_81c4785bcc062eebd41616a110a3b8c3, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_ad8830b2988fbc9ae42ea4b19baef954 = MAKE_CODE_OBJECT(module_filename_obj, 202, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_cache_path, mod_consts.const_str_digest_be0dd4769ad4e571936ff9fd3c5b94b3, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_ce247d6bd0a0069b0f713a7c536927d4 = MAKE_CODE_OBJECT(module_filename_obj, 113, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_config_dir, mod_consts.const_str_digest_7ed861e307cb5a3117d77fe7a1c4ef95, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_f25b60bb8843c7e270cf1159f40baf2b = MAKE_CODE_OBJECT(module_filename_obj, 192, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_config_path, mod_consts.const_str_digest_88300aef7cde70073ece592abe6135df, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_2874723dcab1bfcb932a4a48f3c280c7 = MAKE_CODE_OBJECT(module_filename_obj, 103, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_data_dir, mod_consts.const_str_digest_e6cf2ccefd13c5469d5c76ee2354926e, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_4ca57ac0a23d7e636412a39948c70036 = MAKE_CODE_OBJECT(module_filename_obj, 182, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_data_path, mod_consts.const_str_digest_5cbe4fc19a597dd3d25dbe8d23695c3f, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_69c7ec3b5594152fe08b4c8073b24b50 = MAKE_CODE_OBJECT(module_filename_obj, 168, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_desktop_dir, mod_consts.const_str_digest_05c455110a48b77e672a07bef8724791, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_e489a3b3c765437b22dc0594bc58a4dc = MAKE_CODE_OBJECT(module_filename_obj, 247, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_desktop_path, mod_consts.const_str_digest_810c4c9d50f286bbab2e9203876876f5, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_11b4c0047aef87a92eccb0f847edaa2d = MAKE_CODE_OBJECT(module_filename_obj, 143, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_documents_dir, mod_consts.const_str_digest_fc355f58f0ff77d8f77a00468820818d, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_508445e078fe119846d702e8636a1b2e = MAKE_CODE_OBJECT(module_filename_obj, 222, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_documents_path, mod_consts.const_str_digest_bba022d390a8cc3aec2eebd6be8833b3, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_e904bf8d8fdc294a1aa0a8cdb2feecd7 = MAKE_CODE_OBJECT(module_filename_obj, 148, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_downloads_dir, mod_consts.const_str_digest_7d3fbc58335f38d2dfb8778792e13beb, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_d8d4b407a785a29428843246c94f5e8e = MAKE_CODE_OBJECT(module_filename_obj, 227, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_downloads_path, mod_consts.const_str_digest_f5b6f8477ec6934a96acb750755e26bc, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_f4152540034997ada1566197e527bc07 = MAKE_CODE_OBJECT(module_filename_obj, 138, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_log_dir, mod_consts.const_str_digest_2a405ea3d71d0ccb09fc22366730e1df, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_898ad031916e8ba608bdbf8de057890a = MAKE_CODE_OBJECT(module_filename_obj, 217, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_log_path, mod_consts.const_str_digest_2ef3ad18e39e10d3d454b5eae69502f8, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_78eee361fddd9c5b20bc762135ebe112 = MAKE_CODE_OBJECT(module_filename_obj, 163, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_music_dir, mod_consts.const_str_digest_5c7226d148b72fbc25f40214c3d38d62, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_66f44f231cc5d8cedd14be903df8368c = MAKE_CODE_OBJECT(module_filename_obj, 242, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_music_path, mod_consts.const_str_digest_5bf63837a5b53180610bfb6d1c959150, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_2705b7446182525a723e459c819dcda1 = MAKE_CODE_OBJECT(module_filename_obj, 153, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_pictures_dir, mod_consts.const_str_digest_f171dbbe044cc1fa5946690cf2e1cd25, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_1a7baf28f7d63aae752587594adae170 = MAKE_CODE_OBJECT(module_filename_obj, 232, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_pictures_path, mod_consts.const_str_digest_5cb77269855d70c9c50f6eaeae638d91, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_2cdaba15b506e28c29092117d58cbd73 = MAKE_CODE_OBJECT(module_filename_obj, 173, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_runtime_dir, mod_consts.const_str_digest_c296f229907c52777e8512e56a500109, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_8457a3c1f2d6b179f912da948d82101b = MAKE_CODE_OBJECT(module_filename_obj, 252, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_runtime_path, mod_consts.const_str_digest_18613d7a4b2626fd6aa3930ef4f1f6e7, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_e6357d7da0531cda471dadd1d20ac26e = MAKE_CODE_OBJECT(module_filename_obj, 133, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_state_dir, mod_consts.const_str_digest_59abff96a69577b37e29fc143862fabd, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_9e106d86fd332b616760ff030db02b5b = MAKE_CODE_OBJECT(module_filename_obj, 212, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_state_path, mod_consts.const_str_digest_a31d42a34ca2e6394abec0a310c03eae, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_718494ad0ee4658126f14030ec61d0f3 = MAKE_CODE_OBJECT(module_filename_obj, 158, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_videos_dir, mod_consts.const_str_digest_13431501b652c04d86d309bfa8c65e3b, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_40a891eb7acf3d12e3aa9b44da9f68e1 = MAKE_CODE_OBJECT(module_filename_obj, 237, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_videos_path, mod_consts.const_str_digest_b9902c103f8ce98dd79d320785370715, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_platformdirs$api$$$function__37_iter_config_dirs$$$genobj__1_iter_config_dirs(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_platformdirs$api$$$function__38_iter_data_dirs$$$genobj__1_iter_data_dirs(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_platformdirs$api$$$function__39_iter_cache_dirs$$$genobj__1_iter_cache_dirs(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_platformdirs$api$$$function__40_iter_runtime_dirs$$$genobj__1_iter_runtime_dirs(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_platformdirs$api$$$function__41_iter_config_paths$$$genobj__1_iter_config_paths(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_platformdirs$api$$$function__42_iter_data_paths$$$genobj__1_iter_data_paths(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_platformdirs$api$$$function__43_iter_cache_paths$$$genobj__1_iter_cache_paths(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_platformdirs$api$$$function__44_iter_runtime_paths$$$genobj__1_iter_runtime_paths(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__10_site_cache_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__11_user_state_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__12_user_log_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__13_user_documents_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__14_user_downloads_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__15_user_pictures_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__16_user_videos_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__17_user_music_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__18_user_desktop_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__19_user_runtime_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__20_site_runtime_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__21_user_data_path(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__22_site_data_path(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__23_user_config_path(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__24_site_config_path(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__25_user_cache_path(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__26_site_cache_path(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__27_user_state_path(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__28_user_log_path(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__29_user_documents_path(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__2__append_app_name_and_version(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__30_user_downloads_path(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__31_user_pictures_path(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__32_user_videos_path(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__33_user_music_path(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__34_user_desktop_path(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__35_user_runtime_path(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__36_site_runtime_path(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__37_iter_config_dirs(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__38_iter_data_dirs(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__39_iter_cache_dirs(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__3__optionally_create_directory(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__40_iter_runtime_dirs(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__41_iter_config_paths(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__42_iter_data_paths(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__43_iter_cache_paths(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__44_iter_runtime_paths(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__4__first_item_as_path_if_multipath(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__5_user_data_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__6_site_data_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__7_user_config_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__8_site_config_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__9_user_cache_dir(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_platformdirs$api$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_appname = python_pars[1];
PyObject *par_appauthor = python_pars[2];
PyObject *par_version = python_pars[3];
PyObject *par_roaming = python_pars[4];
PyObject *par_multipath = python_pars[5];
PyObject *par_opinion = python_pars[6];
PyObject *par_ensure_exists = python_pars[7];
struct Nuitka_FrameObject *frame_frame_platformdirs$api$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$api$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$api$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_platformdirs$api$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$api$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$api$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_63fb1423e25ef87ac331fa1d3ce7d3e8, module_platformdirs$api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$api$$$function__1___init__->m_type_description == NULL);
frame_frame_platformdirs$api$$$function__1___init__ = cache_frame_frame_platformdirs$api$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$api$$$function__1___init__);
assert(Py_REFCNT(frame_frame_platformdirs$api$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_appname);
tmp_assattr_value_1 = par_appname;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_appname, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_appauthor);
tmp_assattr_value_2 = par_appauthor;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_appauthor, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_version);
tmp_assattr_value_3 = par_version;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_version, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_roaming);
tmp_assattr_value_4 = par_roaming;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_roaming, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(par_multipath);
tmp_assattr_value_5 = par_multipath;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_multipath, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
CHECK_OBJECT(par_opinion);
tmp_assattr_value_6 = par_opinion;
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain_opinion, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_assattr_target_7;
CHECK_OBJECT(par_ensure_exists);
tmp_assattr_value_7 = par_ensure_exists;
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain_ensure_exists, tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "oooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$api$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$api$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$api$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$api$$$function__1___init__,
    type_description_1,
    par_self,
    par_appname,
    par_appauthor,
    par_version,
    par_roaming,
    par_multipath,
    par_opinion,
    par_ensure_exists
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$api$$$function__1___init__ == cache_frame_frame_platformdirs$api$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$api$$$function__1___init__);
    cache_frame_frame_platformdirs$api$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_platformdirs$api$$$function__1___init__);

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
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
CHECK_OBJECT(par_roaming);
Py_DECREF(par_roaming);
CHECK_OBJECT(par_multipath);
Py_DECREF(par_multipath);
CHECK_OBJECT(par_opinion);
Py_DECREF(par_opinion);
CHECK_OBJECT(par_ensure_exists);
Py_DECREF(par_ensure_exists);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
CHECK_OBJECT(par_roaming);
Py_DECREF(par_roaming);
CHECK_OBJECT(par_multipath);
Py_DECREF(par_multipath);
CHECK_OBJECT(par_opinion);
Py_DECREF(par_opinion);
CHECK_OBJECT(par_ensure_exists);
Py_DECREF(par_ensure_exists);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_platformdirs$api$$$function__2__append_app_name_and_version(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_base = python_pars[1];
PyObject *var_params = NULL;
PyObject *var_path = NULL;
struct Nuitka_FrameObject *frame_frame_platformdirs$api$$$function__2__append_app_name_and_version;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$api$$$function__2__append_app_name_and_version = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_platformdirs$api$$$function__2__append_app_name_and_version)) {
    Py_XDECREF(cache_frame_frame_platformdirs$api$$$function__2__append_app_name_and_version);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$api$$$function__2__append_app_name_and_version == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$api$$$function__2__append_app_name_and_version = MAKE_FUNCTION_FRAME(tstate, code_objects_ba0c9c86e3fe79ab30beda04affa8cf0, module_platformdirs$api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$api$$$function__2__append_app_name_and_version->m_type_description == NULL);
frame_frame_platformdirs$api$$$function__2__append_app_name_and_version = cache_frame_frame_platformdirs$api$$$function__2__append_app_name_and_version;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$api$$$function__2__append_app_name_and_version);
assert(Py_REFCNT(frame_frame_platformdirs$api$$$function__2__append_app_name_and_version) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_list_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_base);
tmp_expression_value_1 = par_base;
tmp_subscript_value_1 = mod_consts.const_slice_int_pos_1_none_none;
tmp_list_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_params == NULL);
var_params = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_appname);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 83;
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
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_params);
tmp_list_arg_value_1 = var_params;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_item_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_appname);
if (tmp_item_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_version);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 85;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_params);
tmp_list_arg_value_2 = var_params;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_item_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_version);
if (tmp_item_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
branch_no_2:;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
PyObject *tmp_direct_call_arg3_1;
tmp_expression_value_6 = IMPORT_HARD_NTPATH();
assert(!(tmp_expression_value_6 == NULL));
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_join);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_base);
tmp_expression_value_7 = par_base;
tmp_subscript_value_2 = const_int_0;
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 0);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_1);

exception_lineno = 87;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_params);
tmp_direct_call_arg3_1 = var_params;
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_assign_source_2 = impl___main__$$$helper_function_complex_call_helper_pos_star_list(tstate, dir_call_args);
}
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_path == NULL);
var_path = tmp_assign_source_2;
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(var_path);
tmp_args_element_value_1 = var_path;
frame_frame_platformdirs$api$$$function__2__append_app_name_and_version->m_frame.f_lineno = 88;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__optionally_create_directory, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$api$$$function__2__append_app_name_and_version, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$api$$$function__2__append_app_name_and_version->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$api$$$function__2__append_app_name_and_version, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$api$$$function__2__append_app_name_and_version,
    type_description_1,
    par_self,
    par_base,
    var_params,
    var_path
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$api$$$function__2__append_app_name_and_version == cache_frame_frame_platformdirs$api$$$function__2__append_app_name_and_version) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$api$$$function__2__append_app_name_and_version);
    cache_frame_frame_platformdirs$api$$$function__2__append_app_name_and_version = NULL;
}

assertFrameObject(frame_frame_platformdirs$api$$$function__2__append_app_name_and_version);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_path);
tmp_return_value = var_path;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_params);
CHECK_OBJECT(var_params);
Py_DECREF(var_params);
var_params = NULL;
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

Py_XDECREF(var_params);
var_params = NULL;
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
CHECK_OBJECT(par_base);
Py_DECREF(par_base);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_base);
Py_DECREF(par_base);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_platformdirs$api$$$function__3__optionally_create_directory(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_path = python_pars[1];
struct Nuitka_FrameObject *frame_frame_platformdirs$api$$$function__3__optionally_create_directory;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$api$$$function__3__optionally_create_directory = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$api$$$function__3__optionally_create_directory)) {
    Py_XDECREF(cache_frame_frame_platformdirs$api$$$function__3__optionally_create_directory);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$api$$$function__3__optionally_create_directory == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$api$$$function__3__optionally_create_directory = MAKE_FUNCTION_FRAME(tstate, code_objects_ffad5081a6afb434f8a84dbe41cb5c24, module_platformdirs$api, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$api$$$function__3__optionally_create_directory->m_type_description == NULL);
frame_frame_platformdirs$api$$$function__3__optionally_create_directory = cache_frame_frame_platformdirs$api$$$function__3__optionally_create_directory;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$api$$$function__3__optionally_create_directory);
assert(Py_REFCNT(frame_frame_platformdirs$api$$$function__3__optionally_create_directory) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ensure_exists);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 92;
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_call_result_1;
tmp_called_value_2 = module_var_accessor_platformdirs$api$Path(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 93;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_path);
tmp_args_element_value_1 = par_path;
frame_frame_platformdirs$api$$$function__3__optionally_create_directory->m_frame.f_lineno = 93;
tmp_expression_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_mkdir);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$api$$$function__3__optionally_create_directory->m_frame.f_lineno = 93;
tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_true_true_tuple, 0), mod_consts.const_tuple_str_plain_parents_str_plain_exist_ok_tuple);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$api$$$function__3__optionally_create_directory, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$api$$$function__3__optionally_create_directory->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$api$$$function__3__optionally_create_directory, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$api$$$function__3__optionally_create_directory,
    type_description_1,
    par_self,
    par_path
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$api$$$function__3__optionally_create_directory == cache_frame_frame_platformdirs$api$$$function__3__optionally_create_directory) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$api$$$function__3__optionally_create_directory);
    cache_frame_frame_platformdirs$api$$$function__3__optionally_create_directory = NULL;
}

assertFrameObject(frame_frame_platformdirs$api$$$function__3__optionally_create_directory);

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


static PyObject *impl_platformdirs$api$$$function__4__first_item_as_path_if_multipath(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_directory = python_pars[1];
struct Nuitka_FrameObject *frame_frame_platformdirs$api$$$function__4__first_item_as_path_if_multipath;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$api$$$function__4__first_item_as_path_if_multipath = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_platformdirs$api$$$function__4__first_item_as_path_if_multipath)) {
    Py_XDECREF(cache_frame_frame_platformdirs$api$$$function__4__first_item_as_path_if_multipath);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$api$$$function__4__first_item_as_path_if_multipath == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$api$$$function__4__first_item_as_path_if_multipath = MAKE_FUNCTION_FRAME(tstate, code_objects_e40d26035880d6fad20b4fa8eb6fda18, module_platformdirs$api, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$api$$$function__4__first_item_as_path_if_multipath->m_type_description == NULL);
frame_frame_platformdirs$api$$$function__4__first_item_as_path_if_multipath = cache_frame_frame_platformdirs$api$$$function__4__first_item_as_path_if_multipath;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$api$$$function__4__first_item_as_path_if_multipath);
assert(Py_REFCNT(frame_frame_platformdirs$api$$$function__4__first_item_as_path_if_multipath) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_multipath);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 96;
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
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_directory);
tmp_expression_value_3 = par_directory;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_partition);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$api$$$function__4__first_item_as_path_if_multipath->m_frame.f_lineno = 98;
tmp_expression_value_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_chr_59_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_directory;
    assert(old != NULL);
    par_directory = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
tmp_called_value_2 = module_var_accessor_platformdirs$api$Path(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 99;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_directory);
tmp_args_element_value_1 = par_directory;
frame_frame_platformdirs$api$$$function__4__first_item_as_path_if_multipath->m_frame.f_lineno = 99;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$api$$$function__4__first_item_as_path_if_multipath, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$api$$$function__4__first_item_as_path_if_multipath->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$api$$$function__4__first_item_as_path_if_multipath, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$api$$$function__4__first_item_as_path_if_multipath,
    type_description_1,
    par_self,
    par_directory
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$api$$$function__4__first_item_as_path_if_multipath == cache_frame_frame_platformdirs$api$$$function__4__first_item_as_path_if_multipath) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$api$$$function__4__first_item_as_path_if_multipath);
    cache_frame_frame_platformdirs$api$$$function__4__first_item_as_path_if_multipath = NULL;
}

assertFrameObject(frame_frame_platformdirs$api$$$function__4__first_item_as_path_if_multipath);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_directory);
CHECK_OBJECT(par_directory);
Py_DECREF(par_directory);
par_directory = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_directory);
par_directory = NULL;
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


static PyObject *impl_platformdirs$api$$$function__21_user_data_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$api$$$function__21_user_data_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$api$$$function__21_user_data_path = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$api$$$function__21_user_data_path)) {
    Py_XDECREF(cache_frame_frame_platformdirs$api$$$function__21_user_data_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$api$$$function__21_user_data_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$api$$$function__21_user_data_path = MAKE_FUNCTION_FRAME(tstate, code_objects_4ca57ac0a23d7e636412a39948c70036, module_platformdirs$api, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$api$$$function__21_user_data_path->m_type_description == NULL);
frame_frame_platformdirs$api$$$function__21_user_data_path = cache_frame_frame_platformdirs$api$$$function__21_user_data_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$api$$$function__21_user_data_path);
assert(Py_REFCNT(frame_frame_platformdirs$api$$$function__21_user_data_path) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$api$Path(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 184;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_data_dir);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$api$$$function__21_user_data_path->m_frame.f_lineno = 184;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$api$$$function__21_user_data_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$api$$$function__21_user_data_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$api$$$function__21_user_data_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$api$$$function__21_user_data_path,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$api$$$function__21_user_data_path == cache_frame_frame_platformdirs$api$$$function__21_user_data_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$api$$$function__21_user_data_path);
    cache_frame_frame_platformdirs$api$$$function__21_user_data_path = NULL;
}

assertFrameObject(frame_frame_platformdirs$api$$$function__21_user_data_path);

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


static PyObject *impl_platformdirs$api$$$function__22_site_data_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$api$$$function__22_site_data_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$api$$$function__22_site_data_path = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$api$$$function__22_site_data_path)) {
    Py_XDECREF(cache_frame_frame_platformdirs$api$$$function__22_site_data_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$api$$$function__22_site_data_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$api$$$function__22_site_data_path = MAKE_FUNCTION_FRAME(tstate, code_objects_02abe4ad2a2e5a2f3426a604f422a1b7, module_platformdirs$api, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$api$$$function__22_site_data_path->m_type_description == NULL);
frame_frame_platformdirs$api$$$function__22_site_data_path = cache_frame_frame_platformdirs$api$$$function__22_site_data_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$api$$$function__22_site_data_path);
assert(Py_REFCNT(frame_frame_platformdirs$api$$$function__22_site_data_path) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$api$Path(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 189;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_site_data_dir);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$api$$$function__22_site_data_path->m_frame.f_lineno = 189;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$api$$$function__22_site_data_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$api$$$function__22_site_data_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$api$$$function__22_site_data_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$api$$$function__22_site_data_path,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$api$$$function__22_site_data_path == cache_frame_frame_platformdirs$api$$$function__22_site_data_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$api$$$function__22_site_data_path);
    cache_frame_frame_platformdirs$api$$$function__22_site_data_path = NULL;
}

assertFrameObject(frame_frame_platformdirs$api$$$function__22_site_data_path);

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


static PyObject *impl_platformdirs$api$$$function__23_user_config_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$api$$$function__23_user_config_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$api$$$function__23_user_config_path = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$api$$$function__23_user_config_path)) {
    Py_XDECREF(cache_frame_frame_platformdirs$api$$$function__23_user_config_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$api$$$function__23_user_config_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$api$$$function__23_user_config_path = MAKE_FUNCTION_FRAME(tstate, code_objects_f25b60bb8843c7e270cf1159f40baf2b, module_platformdirs$api, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$api$$$function__23_user_config_path->m_type_description == NULL);
frame_frame_platformdirs$api$$$function__23_user_config_path = cache_frame_frame_platformdirs$api$$$function__23_user_config_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$api$$$function__23_user_config_path);
assert(Py_REFCNT(frame_frame_platformdirs$api$$$function__23_user_config_path) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$api$Path(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 194;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_config_dir);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$api$$$function__23_user_config_path->m_frame.f_lineno = 194;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$api$$$function__23_user_config_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$api$$$function__23_user_config_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$api$$$function__23_user_config_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$api$$$function__23_user_config_path,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$api$$$function__23_user_config_path == cache_frame_frame_platformdirs$api$$$function__23_user_config_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$api$$$function__23_user_config_path);
    cache_frame_frame_platformdirs$api$$$function__23_user_config_path = NULL;
}

assertFrameObject(frame_frame_platformdirs$api$$$function__23_user_config_path);

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


static PyObject *impl_platformdirs$api$$$function__24_site_config_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$api$$$function__24_site_config_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$api$$$function__24_site_config_path = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$api$$$function__24_site_config_path)) {
    Py_XDECREF(cache_frame_frame_platformdirs$api$$$function__24_site_config_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$api$$$function__24_site_config_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$api$$$function__24_site_config_path = MAKE_FUNCTION_FRAME(tstate, code_objects_e89ee23200c26e35c1b875cd2d0268a7, module_platformdirs$api, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$api$$$function__24_site_config_path->m_type_description == NULL);
frame_frame_platformdirs$api$$$function__24_site_config_path = cache_frame_frame_platformdirs$api$$$function__24_site_config_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$api$$$function__24_site_config_path);
assert(Py_REFCNT(frame_frame_platformdirs$api$$$function__24_site_config_path) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$api$Path(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 199;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_site_config_dir);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$api$$$function__24_site_config_path->m_frame.f_lineno = 199;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$api$$$function__24_site_config_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$api$$$function__24_site_config_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$api$$$function__24_site_config_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$api$$$function__24_site_config_path,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$api$$$function__24_site_config_path == cache_frame_frame_platformdirs$api$$$function__24_site_config_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$api$$$function__24_site_config_path);
    cache_frame_frame_platformdirs$api$$$function__24_site_config_path = NULL;
}

assertFrameObject(frame_frame_platformdirs$api$$$function__24_site_config_path);

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


static PyObject *impl_platformdirs$api$$$function__25_user_cache_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$api$$$function__25_user_cache_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$api$$$function__25_user_cache_path = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$api$$$function__25_user_cache_path)) {
    Py_XDECREF(cache_frame_frame_platformdirs$api$$$function__25_user_cache_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$api$$$function__25_user_cache_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$api$$$function__25_user_cache_path = MAKE_FUNCTION_FRAME(tstate, code_objects_ad8830b2988fbc9ae42ea4b19baef954, module_platformdirs$api, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$api$$$function__25_user_cache_path->m_type_description == NULL);
frame_frame_platformdirs$api$$$function__25_user_cache_path = cache_frame_frame_platformdirs$api$$$function__25_user_cache_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$api$$$function__25_user_cache_path);
assert(Py_REFCNT(frame_frame_platformdirs$api$$$function__25_user_cache_path) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$api$Path(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 204;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_cache_dir);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$api$$$function__25_user_cache_path->m_frame.f_lineno = 204;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$api$$$function__25_user_cache_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$api$$$function__25_user_cache_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$api$$$function__25_user_cache_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$api$$$function__25_user_cache_path,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$api$$$function__25_user_cache_path == cache_frame_frame_platformdirs$api$$$function__25_user_cache_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$api$$$function__25_user_cache_path);
    cache_frame_frame_platformdirs$api$$$function__25_user_cache_path = NULL;
}

assertFrameObject(frame_frame_platformdirs$api$$$function__25_user_cache_path);

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


static PyObject *impl_platformdirs$api$$$function__26_site_cache_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$api$$$function__26_site_cache_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$api$$$function__26_site_cache_path = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$api$$$function__26_site_cache_path)) {
    Py_XDECREF(cache_frame_frame_platformdirs$api$$$function__26_site_cache_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$api$$$function__26_site_cache_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$api$$$function__26_site_cache_path = MAKE_FUNCTION_FRAME(tstate, code_objects_cc6900ed07026300ffb0f944f0eccbfc, module_platformdirs$api, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$api$$$function__26_site_cache_path->m_type_description == NULL);
frame_frame_platformdirs$api$$$function__26_site_cache_path = cache_frame_frame_platformdirs$api$$$function__26_site_cache_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$api$$$function__26_site_cache_path);
assert(Py_REFCNT(frame_frame_platformdirs$api$$$function__26_site_cache_path) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$api$Path(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 209;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_site_cache_dir);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$api$$$function__26_site_cache_path->m_frame.f_lineno = 209;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$api$$$function__26_site_cache_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$api$$$function__26_site_cache_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$api$$$function__26_site_cache_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$api$$$function__26_site_cache_path,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$api$$$function__26_site_cache_path == cache_frame_frame_platformdirs$api$$$function__26_site_cache_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$api$$$function__26_site_cache_path);
    cache_frame_frame_platformdirs$api$$$function__26_site_cache_path = NULL;
}

assertFrameObject(frame_frame_platformdirs$api$$$function__26_site_cache_path);

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


static PyObject *impl_platformdirs$api$$$function__27_user_state_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$api$$$function__27_user_state_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$api$$$function__27_user_state_path = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$api$$$function__27_user_state_path)) {
    Py_XDECREF(cache_frame_frame_platformdirs$api$$$function__27_user_state_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$api$$$function__27_user_state_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$api$$$function__27_user_state_path = MAKE_FUNCTION_FRAME(tstate, code_objects_9e106d86fd332b616760ff030db02b5b, module_platformdirs$api, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$api$$$function__27_user_state_path->m_type_description == NULL);
frame_frame_platformdirs$api$$$function__27_user_state_path = cache_frame_frame_platformdirs$api$$$function__27_user_state_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$api$$$function__27_user_state_path);
assert(Py_REFCNT(frame_frame_platformdirs$api$$$function__27_user_state_path) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$api$Path(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 214;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_state_dir);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$api$$$function__27_user_state_path->m_frame.f_lineno = 214;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$api$$$function__27_user_state_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$api$$$function__27_user_state_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$api$$$function__27_user_state_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$api$$$function__27_user_state_path,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$api$$$function__27_user_state_path == cache_frame_frame_platformdirs$api$$$function__27_user_state_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$api$$$function__27_user_state_path);
    cache_frame_frame_platformdirs$api$$$function__27_user_state_path = NULL;
}

assertFrameObject(frame_frame_platformdirs$api$$$function__27_user_state_path);

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


static PyObject *impl_platformdirs$api$$$function__28_user_log_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$api$$$function__28_user_log_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$api$$$function__28_user_log_path = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$api$$$function__28_user_log_path)) {
    Py_XDECREF(cache_frame_frame_platformdirs$api$$$function__28_user_log_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$api$$$function__28_user_log_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$api$$$function__28_user_log_path = MAKE_FUNCTION_FRAME(tstate, code_objects_898ad031916e8ba608bdbf8de057890a, module_platformdirs$api, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$api$$$function__28_user_log_path->m_type_description == NULL);
frame_frame_platformdirs$api$$$function__28_user_log_path = cache_frame_frame_platformdirs$api$$$function__28_user_log_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$api$$$function__28_user_log_path);
assert(Py_REFCNT(frame_frame_platformdirs$api$$$function__28_user_log_path) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$api$Path(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 219;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_log_dir);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$api$$$function__28_user_log_path->m_frame.f_lineno = 219;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$api$$$function__28_user_log_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$api$$$function__28_user_log_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$api$$$function__28_user_log_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$api$$$function__28_user_log_path,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$api$$$function__28_user_log_path == cache_frame_frame_platformdirs$api$$$function__28_user_log_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$api$$$function__28_user_log_path);
    cache_frame_frame_platformdirs$api$$$function__28_user_log_path = NULL;
}

assertFrameObject(frame_frame_platformdirs$api$$$function__28_user_log_path);

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


static PyObject *impl_platformdirs$api$$$function__29_user_documents_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$api$$$function__29_user_documents_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$api$$$function__29_user_documents_path = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$api$$$function__29_user_documents_path)) {
    Py_XDECREF(cache_frame_frame_platformdirs$api$$$function__29_user_documents_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$api$$$function__29_user_documents_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$api$$$function__29_user_documents_path = MAKE_FUNCTION_FRAME(tstate, code_objects_508445e078fe119846d702e8636a1b2e, module_platformdirs$api, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$api$$$function__29_user_documents_path->m_type_description == NULL);
frame_frame_platformdirs$api$$$function__29_user_documents_path = cache_frame_frame_platformdirs$api$$$function__29_user_documents_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$api$$$function__29_user_documents_path);
assert(Py_REFCNT(frame_frame_platformdirs$api$$$function__29_user_documents_path) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$api$Path(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 224;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_documents_dir);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$api$$$function__29_user_documents_path->m_frame.f_lineno = 224;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$api$$$function__29_user_documents_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$api$$$function__29_user_documents_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$api$$$function__29_user_documents_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$api$$$function__29_user_documents_path,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$api$$$function__29_user_documents_path == cache_frame_frame_platformdirs$api$$$function__29_user_documents_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$api$$$function__29_user_documents_path);
    cache_frame_frame_platformdirs$api$$$function__29_user_documents_path = NULL;
}

assertFrameObject(frame_frame_platformdirs$api$$$function__29_user_documents_path);

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


static PyObject *impl_platformdirs$api$$$function__30_user_downloads_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$api$$$function__30_user_downloads_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$api$$$function__30_user_downloads_path = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$api$$$function__30_user_downloads_path)) {
    Py_XDECREF(cache_frame_frame_platformdirs$api$$$function__30_user_downloads_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$api$$$function__30_user_downloads_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$api$$$function__30_user_downloads_path = MAKE_FUNCTION_FRAME(tstate, code_objects_d8d4b407a785a29428843246c94f5e8e, module_platformdirs$api, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$api$$$function__30_user_downloads_path->m_type_description == NULL);
frame_frame_platformdirs$api$$$function__30_user_downloads_path = cache_frame_frame_platformdirs$api$$$function__30_user_downloads_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$api$$$function__30_user_downloads_path);
assert(Py_REFCNT(frame_frame_platformdirs$api$$$function__30_user_downloads_path) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$api$Path(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 229;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_downloads_dir);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$api$$$function__30_user_downloads_path->m_frame.f_lineno = 229;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$api$$$function__30_user_downloads_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$api$$$function__30_user_downloads_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$api$$$function__30_user_downloads_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$api$$$function__30_user_downloads_path,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$api$$$function__30_user_downloads_path == cache_frame_frame_platformdirs$api$$$function__30_user_downloads_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$api$$$function__30_user_downloads_path);
    cache_frame_frame_platformdirs$api$$$function__30_user_downloads_path = NULL;
}

assertFrameObject(frame_frame_platformdirs$api$$$function__30_user_downloads_path);

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


static PyObject *impl_platformdirs$api$$$function__31_user_pictures_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$api$$$function__31_user_pictures_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$api$$$function__31_user_pictures_path = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$api$$$function__31_user_pictures_path)) {
    Py_XDECREF(cache_frame_frame_platformdirs$api$$$function__31_user_pictures_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$api$$$function__31_user_pictures_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$api$$$function__31_user_pictures_path = MAKE_FUNCTION_FRAME(tstate, code_objects_1a7baf28f7d63aae752587594adae170, module_platformdirs$api, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$api$$$function__31_user_pictures_path->m_type_description == NULL);
frame_frame_platformdirs$api$$$function__31_user_pictures_path = cache_frame_frame_platformdirs$api$$$function__31_user_pictures_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$api$$$function__31_user_pictures_path);
assert(Py_REFCNT(frame_frame_platformdirs$api$$$function__31_user_pictures_path) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$api$Path(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 234;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_pictures_dir);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$api$$$function__31_user_pictures_path->m_frame.f_lineno = 234;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$api$$$function__31_user_pictures_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$api$$$function__31_user_pictures_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$api$$$function__31_user_pictures_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$api$$$function__31_user_pictures_path,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$api$$$function__31_user_pictures_path == cache_frame_frame_platformdirs$api$$$function__31_user_pictures_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$api$$$function__31_user_pictures_path);
    cache_frame_frame_platformdirs$api$$$function__31_user_pictures_path = NULL;
}

assertFrameObject(frame_frame_platformdirs$api$$$function__31_user_pictures_path);

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


static PyObject *impl_platformdirs$api$$$function__32_user_videos_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$api$$$function__32_user_videos_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$api$$$function__32_user_videos_path = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$api$$$function__32_user_videos_path)) {
    Py_XDECREF(cache_frame_frame_platformdirs$api$$$function__32_user_videos_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$api$$$function__32_user_videos_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$api$$$function__32_user_videos_path = MAKE_FUNCTION_FRAME(tstate, code_objects_40a891eb7acf3d12e3aa9b44da9f68e1, module_platformdirs$api, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$api$$$function__32_user_videos_path->m_type_description == NULL);
frame_frame_platformdirs$api$$$function__32_user_videos_path = cache_frame_frame_platformdirs$api$$$function__32_user_videos_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$api$$$function__32_user_videos_path);
assert(Py_REFCNT(frame_frame_platformdirs$api$$$function__32_user_videos_path) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$api$Path(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 239;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_videos_dir);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$api$$$function__32_user_videos_path->m_frame.f_lineno = 239;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$api$$$function__32_user_videos_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$api$$$function__32_user_videos_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$api$$$function__32_user_videos_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$api$$$function__32_user_videos_path,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$api$$$function__32_user_videos_path == cache_frame_frame_platformdirs$api$$$function__32_user_videos_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$api$$$function__32_user_videos_path);
    cache_frame_frame_platformdirs$api$$$function__32_user_videos_path = NULL;
}

assertFrameObject(frame_frame_platformdirs$api$$$function__32_user_videos_path);

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


static PyObject *impl_platformdirs$api$$$function__33_user_music_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$api$$$function__33_user_music_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$api$$$function__33_user_music_path = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$api$$$function__33_user_music_path)) {
    Py_XDECREF(cache_frame_frame_platformdirs$api$$$function__33_user_music_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$api$$$function__33_user_music_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$api$$$function__33_user_music_path = MAKE_FUNCTION_FRAME(tstate, code_objects_66f44f231cc5d8cedd14be903df8368c, module_platformdirs$api, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$api$$$function__33_user_music_path->m_type_description == NULL);
frame_frame_platformdirs$api$$$function__33_user_music_path = cache_frame_frame_platformdirs$api$$$function__33_user_music_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$api$$$function__33_user_music_path);
assert(Py_REFCNT(frame_frame_platformdirs$api$$$function__33_user_music_path) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$api$Path(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 244;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_music_dir);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$api$$$function__33_user_music_path->m_frame.f_lineno = 244;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$api$$$function__33_user_music_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$api$$$function__33_user_music_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$api$$$function__33_user_music_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$api$$$function__33_user_music_path,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$api$$$function__33_user_music_path == cache_frame_frame_platformdirs$api$$$function__33_user_music_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$api$$$function__33_user_music_path);
    cache_frame_frame_platformdirs$api$$$function__33_user_music_path = NULL;
}

assertFrameObject(frame_frame_platformdirs$api$$$function__33_user_music_path);

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


static PyObject *impl_platformdirs$api$$$function__34_user_desktop_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$api$$$function__34_user_desktop_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$api$$$function__34_user_desktop_path = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$api$$$function__34_user_desktop_path)) {
    Py_XDECREF(cache_frame_frame_platformdirs$api$$$function__34_user_desktop_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$api$$$function__34_user_desktop_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$api$$$function__34_user_desktop_path = MAKE_FUNCTION_FRAME(tstate, code_objects_e489a3b3c765437b22dc0594bc58a4dc, module_platformdirs$api, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$api$$$function__34_user_desktop_path->m_type_description == NULL);
frame_frame_platformdirs$api$$$function__34_user_desktop_path = cache_frame_frame_platformdirs$api$$$function__34_user_desktop_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$api$$$function__34_user_desktop_path);
assert(Py_REFCNT(frame_frame_platformdirs$api$$$function__34_user_desktop_path) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$api$Path(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 249;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_desktop_dir);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$api$$$function__34_user_desktop_path->m_frame.f_lineno = 249;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$api$$$function__34_user_desktop_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$api$$$function__34_user_desktop_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$api$$$function__34_user_desktop_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$api$$$function__34_user_desktop_path,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$api$$$function__34_user_desktop_path == cache_frame_frame_platformdirs$api$$$function__34_user_desktop_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$api$$$function__34_user_desktop_path);
    cache_frame_frame_platformdirs$api$$$function__34_user_desktop_path = NULL;
}

assertFrameObject(frame_frame_platformdirs$api$$$function__34_user_desktop_path);

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


static PyObject *impl_platformdirs$api$$$function__35_user_runtime_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$api$$$function__35_user_runtime_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$api$$$function__35_user_runtime_path = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$api$$$function__35_user_runtime_path)) {
    Py_XDECREF(cache_frame_frame_platformdirs$api$$$function__35_user_runtime_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$api$$$function__35_user_runtime_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$api$$$function__35_user_runtime_path = MAKE_FUNCTION_FRAME(tstate, code_objects_8457a3c1f2d6b179f912da948d82101b, module_platformdirs$api, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$api$$$function__35_user_runtime_path->m_type_description == NULL);
frame_frame_platformdirs$api$$$function__35_user_runtime_path = cache_frame_frame_platformdirs$api$$$function__35_user_runtime_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$api$$$function__35_user_runtime_path);
assert(Py_REFCNT(frame_frame_platformdirs$api$$$function__35_user_runtime_path) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$api$Path(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 254;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_runtime_dir);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$api$$$function__35_user_runtime_path->m_frame.f_lineno = 254;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$api$$$function__35_user_runtime_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$api$$$function__35_user_runtime_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$api$$$function__35_user_runtime_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$api$$$function__35_user_runtime_path,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$api$$$function__35_user_runtime_path == cache_frame_frame_platformdirs$api$$$function__35_user_runtime_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$api$$$function__35_user_runtime_path);
    cache_frame_frame_platformdirs$api$$$function__35_user_runtime_path = NULL;
}

assertFrameObject(frame_frame_platformdirs$api$$$function__35_user_runtime_path);

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


static PyObject *impl_platformdirs$api$$$function__36_site_runtime_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$api$$$function__36_site_runtime_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$api$$$function__36_site_runtime_path = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$api$$$function__36_site_runtime_path)) {
    Py_XDECREF(cache_frame_frame_platformdirs$api$$$function__36_site_runtime_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$api$$$function__36_site_runtime_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$api$$$function__36_site_runtime_path = MAKE_FUNCTION_FRAME(tstate, code_objects_2e2d1584a34856a9a165930fbba5e710, module_platformdirs$api, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$api$$$function__36_site_runtime_path->m_type_description == NULL);
frame_frame_platformdirs$api$$$function__36_site_runtime_path = cache_frame_frame_platformdirs$api$$$function__36_site_runtime_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$api$$$function__36_site_runtime_path);
assert(Py_REFCNT(frame_frame_platformdirs$api$$$function__36_site_runtime_path) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$api$Path(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 259;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_site_runtime_dir);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$api$$$function__36_site_runtime_path->m_frame.f_lineno = 259;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$api$$$function__36_site_runtime_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$api$$$function__36_site_runtime_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$api$$$function__36_site_runtime_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$api$$$function__36_site_runtime_path,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$api$$$function__36_site_runtime_path == cache_frame_frame_platformdirs$api$$$function__36_site_runtime_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$api$$$function__36_site_runtime_path);
    cache_frame_frame_platformdirs$api$$$function__36_site_runtime_path = NULL;
}

assertFrameObject(frame_frame_platformdirs$api$$$function__36_site_runtime_path);

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


static PyObject *impl_platformdirs$api$$$function__37_iter_config_dirs(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_GENERATOR_platformdirs$api$$$function__37_iter_config_dirs$$$genobj__1_iter_config_dirs(tstate, tmp_closure_1);

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
struct platformdirs$api$$$function__37_iter_config_dirs$$$genobj__1_iter_config_dirs_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *platformdirs$api$$$function__37_iter_config_dirs$$$genobj__1_iter_config_dirs_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct platformdirs$api$$$function__37_iter_config_dirs$$$genobj__1_iter_config_dirs_locals *generator_heap = (struct platformdirs$api$$$function__37_iter_config_dirs$$$genobj__1_iter_config_dirs_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 2: goto yield_return_2;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_5fb2598857a16f39f75b3f278d326820, module_platformdirs$api, sizeof(void *));
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
PyObject *tmp_expression_value_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 263;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_user_config_dir);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 263;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 263;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
{
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 264;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_site_config_dir);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 264;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 2;
return tmp_expression_value_3;
yield_return_2:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 264;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_2);
Py_DECREF(tmp_yield_result_2);
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
goto function_exception_exit;
frame_no_exception_1:;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_platformdirs$api$$$function__37_iter_config_dirs$$$genobj__1_iter_config_dirs(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        platformdirs$api$$$function__37_iter_config_dirs$$$genobj__1_iter_config_dirs_context,
        module_platformdirs$api,
        mod_consts.const_str_plain_iter_config_dirs,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_34994690b9828ac330619857de1864d9,
#endif
        code_objects_5fb2598857a16f39f75b3f278d326820,
        closure,
        1,
#if 1
        sizeof(struct platformdirs$api$$$function__37_iter_config_dirs$$$genobj__1_iter_config_dirs_locals)
#else
        0
#endif
    );
}


static PyObject *impl_platformdirs$api$$$function__38_iter_data_dirs(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_GENERATOR_platformdirs$api$$$function__38_iter_data_dirs$$$genobj__1_iter_data_dirs(tstate, tmp_closure_1);

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
struct platformdirs$api$$$function__38_iter_data_dirs$$$genobj__1_iter_data_dirs_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *platformdirs$api$$$function__38_iter_data_dirs$$$genobj__1_iter_data_dirs_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct platformdirs$api$$$function__38_iter_data_dirs$$$genobj__1_iter_data_dirs_locals *generator_heap = (struct platformdirs$api$$$function__38_iter_data_dirs$$$genobj__1_iter_data_dirs_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 2: goto yield_return_2;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_5a59b0f34fdb38c119bdb2d522a7f970, module_platformdirs$api, sizeof(void *));
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
PyObject *tmp_expression_value_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 268;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_user_data_dir);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 268;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 268;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
{
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 269;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_site_data_dir);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 269;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 2;
return tmp_expression_value_3;
yield_return_2:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 269;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_2);
Py_DECREF(tmp_yield_result_2);
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
goto function_exception_exit;
frame_no_exception_1:;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_platformdirs$api$$$function__38_iter_data_dirs$$$genobj__1_iter_data_dirs(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        platformdirs$api$$$function__38_iter_data_dirs$$$genobj__1_iter_data_dirs_context,
        module_platformdirs$api,
        mod_consts.const_str_plain_iter_data_dirs,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_745e8e7bd370d0841378ed7db66bce72,
#endif
        code_objects_5a59b0f34fdb38c119bdb2d522a7f970,
        closure,
        1,
#if 1
        sizeof(struct platformdirs$api$$$function__38_iter_data_dirs$$$genobj__1_iter_data_dirs_locals)
#else
        0
#endif
    );
}


static PyObject *impl_platformdirs$api$$$function__39_iter_cache_dirs(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_GENERATOR_platformdirs$api$$$function__39_iter_cache_dirs$$$genobj__1_iter_cache_dirs(tstate, tmp_closure_1);

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
struct platformdirs$api$$$function__39_iter_cache_dirs$$$genobj__1_iter_cache_dirs_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *platformdirs$api$$$function__39_iter_cache_dirs$$$genobj__1_iter_cache_dirs_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct platformdirs$api$$$function__39_iter_cache_dirs$$$genobj__1_iter_cache_dirs_locals *generator_heap = (struct platformdirs$api$$$function__39_iter_cache_dirs$$$genobj__1_iter_cache_dirs_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 2: goto yield_return_2;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_2cf3548e89b805abe4d6e91c9be97d2f, module_platformdirs$api, sizeof(void *));
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
PyObject *tmp_expression_value_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 273;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_user_cache_dir);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 273;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 273;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
{
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 274;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_site_cache_dir);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 274;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 2;
return tmp_expression_value_3;
yield_return_2:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 274;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_2);
Py_DECREF(tmp_yield_result_2);
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
goto function_exception_exit;
frame_no_exception_1:;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_platformdirs$api$$$function__39_iter_cache_dirs$$$genobj__1_iter_cache_dirs(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        platformdirs$api$$$function__39_iter_cache_dirs$$$genobj__1_iter_cache_dirs_context,
        module_platformdirs$api,
        mod_consts.const_str_plain_iter_cache_dirs,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_6d03d443f77bfb514349a8efe627c67b,
#endif
        code_objects_2cf3548e89b805abe4d6e91c9be97d2f,
        closure,
        1,
#if 1
        sizeof(struct platformdirs$api$$$function__39_iter_cache_dirs$$$genobj__1_iter_cache_dirs_locals)
#else
        0
#endif
    );
}


static PyObject *impl_platformdirs$api$$$function__40_iter_runtime_dirs(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_GENERATOR_platformdirs$api$$$function__40_iter_runtime_dirs$$$genobj__1_iter_runtime_dirs(tstate, tmp_closure_1);

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
struct platformdirs$api$$$function__40_iter_runtime_dirs$$$genobj__1_iter_runtime_dirs_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *platformdirs$api$$$function__40_iter_runtime_dirs$$$genobj__1_iter_runtime_dirs_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct platformdirs$api$$$function__40_iter_runtime_dirs$$$genobj__1_iter_runtime_dirs_locals *generator_heap = (struct platformdirs$api$$$function__40_iter_runtime_dirs$$$genobj__1_iter_runtime_dirs_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 2: goto yield_return_2;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_6815ffaaa2e428f4a2ee6fed09cb5528, module_platformdirs$api, sizeof(void *));
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
PyObject *tmp_expression_value_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 278;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_user_runtime_dir);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 278;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 278;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
{
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 279;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_site_runtime_dir);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 279;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 2;
return tmp_expression_value_3;
yield_return_2:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 279;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_2);
Py_DECREF(tmp_yield_result_2);
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
goto function_exception_exit;
frame_no_exception_1:;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_platformdirs$api$$$function__40_iter_runtime_dirs$$$genobj__1_iter_runtime_dirs(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        platformdirs$api$$$function__40_iter_runtime_dirs$$$genobj__1_iter_runtime_dirs_context,
        module_platformdirs$api,
        mod_consts.const_str_plain_iter_runtime_dirs,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_f34b9893d331894a6e82784ee0e6322c,
#endif
        code_objects_6815ffaaa2e428f4a2ee6fed09cb5528,
        closure,
        1,
#if 1
        sizeof(struct platformdirs$api$$$function__40_iter_runtime_dirs$$$genobj__1_iter_runtime_dirs_locals)
#else
        0
#endif
    );
}


static PyObject *impl_platformdirs$api$$$function__41_iter_config_paths(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_GENERATOR_platformdirs$api$$$function__41_iter_config_paths$$$genobj__1_iter_config_paths(tstate, tmp_closure_1);

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
struct platformdirs$api$$$function__41_iter_config_paths$$$genobj__1_iter_config_paths_locals {
PyObject *var_path;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
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

static PyObject *platformdirs$api$$$function__41_iter_config_paths$$$genobj__1_iter_config_paths_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct platformdirs$api$$$function__41_iter_config_paths$$$genobj__1_iter_config_paths_locals *generator_heap = (struct platformdirs$api$$$function__41_iter_config_paths$$$genobj__1_iter_config_paths_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_path = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_79718427cb932c682d4f516f179c7993, module_platformdirs$api, sizeof(void *)+sizeof(void *));
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
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 283;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_called_instance_1 = Nuitka_Cell_GET(generator->m_closure[0]);
generator->m_frame->m_frame.f_lineno = 283;
tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_iter_config_dirs);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 283;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 283;
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
generator_heap->exception_lineno = 283;
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
    PyObject *old = generator_heap->var_path;
    generator_heap->var_path = tmp_assign_source_3;
    Py_INCREF(generator_heap->var_path);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_called_value_1 = module_var_accessor_platformdirs$api$Path(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 284;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
CHECK_OBJECT(generator_heap->var_path);
tmp_args_element_value_1 = generator_heap->var_path;
generator->m_frame->m_frame.f_lineno = 284;
tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 284;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 284;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 283;
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
    generator_heap->var_path
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

Py_XDECREF(generator_heap->var_path);
generator_heap->var_path = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
Py_XDECREF(generator_heap->var_path);
generator_heap->var_path = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_platformdirs$api$$$function__41_iter_config_paths$$$genobj__1_iter_config_paths(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        platformdirs$api$$$function__41_iter_config_paths$$$genobj__1_iter_config_paths_context,
        module_platformdirs$api,
        mod_consts.const_str_plain_iter_config_paths,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_5434b9d3eec626f1595edfe19bfb2fe3,
#endif
        code_objects_79718427cb932c682d4f516f179c7993,
        closure,
        1,
#if 1
        sizeof(struct platformdirs$api$$$function__41_iter_config_paths$$$genobj__1_iter_config_paths_locals)
#else
        0
#endif
    );
}


static PyObject *impl_platformdirs$api$$$function__42_iter_data_paths(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_GENERATOR_platformdirs$api$$$function__42_iter_data_paths$$$genobj__1_iter_data_paths(tstate, tmp_closure_1);

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
struct platformdirs$api$$$function__42_iter_data_paths$$$genobj__1_iter_data_paths_locals {
PyObject *var_path;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
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

static PyObject *platformdirs$api$$$function__42_iter_data_paths$$$genobj__1_iter_data_paths_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct platformdirs$api$$$function__42_iter_data_paths$$$genobj__1_iter_data_paths_locals *generator_heap = (struct platformdirs$api$$$function__42_iter_data_paths$$$genobj__1_iter_data_paths_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_path = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_94666dc935d8e4e90ec7e908fd5f15f2, module_platformdirs$api, sizeof(void *)+sizeof(void *));
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
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 288;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_called_instance_1 = Nuitka_Cell_GET(generator->m_closure[0]);
generator->m_frame->m_frame.f_lineno = 288;
tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_iter_data_dirs);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 288;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 288;
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
generator_heap->exception_lineno = 288;
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
    PyObject *old = generator_heap->var_path;
    generator_heap->var_path = tmp_assign_source_3;
    Py_INCREF(generator_heap->var_path);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_called_value_1 = module_var_accessor_platformdirs$api$Path(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 289;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
CHECK_OBJECT(generator_heap->var_path);
tmp_args_element_value_1 = generator_heap->var_path;
generator->m_frame->m_frame.f_lineno = 289;
tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 289;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 289;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 288;
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
    generator_heap->var_path
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

Py_XDECREF(generator_heap->var_path);
generator_heap->var_path = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
Py_XDECREF(generator_heap->var_path);
generator_heap->var_path = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_platformdirs$api$$$function__42_iter_data_paths$$$genobj__1_iter_data_paths(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        platformdirs$api$$$function__42_iter_data_paths$$$genobj__1_iter_data_paths_context,
        module_platformdirs$api,
        mod_consts.const_str_plain_iter_data_paths,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_63e535bdd06288c924cb5ccb437c7058,
#endif
        code_objects_94666dc935d8e4e90ec7e908fd5f15f2,
        closure,
        1,
#if 1
        sizeof(struct platformdirs$api$$$function__42_iter_data_paths$$$genobj__1_iter_data_paths_locals)
#else
        0
#endif
    );
}


static PyObject *impl_platformdirs$api$$$function__43_iter_cache_paths(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_GENERATOR_platformdirs$api$$$function__43_iter_cache_paths$$$genobj__1_iter_cache_paths(tstate, tmp_closure_1);

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
struct platformdirs$api$$$function__43_iter_cache_paths$$$genobj__1_iter_cache_paths_locals {
PyObject *var_path;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
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

static PyObject *platformdirs$api$$$function__43_iter_cache_paths$$$genobj__1_iter_cache_paths_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct platformdirs$api$$$function__43_iter_cache_paths$$$genobj__1_iter_cache_paths_locals *generator_heap = (struct platformdirs$api$$$function__43_iter_cache_paths$$$genobj__1_iter_cache_paths_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_path = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_5ad40ffaba718f45437a6ccd4c31c306, module_platformdirs$api, sizeof(void *)+sizeof(void *));
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
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 293;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_called_instance_1 = Nuitka_Cell_GET(generator->m_closure[0]);
generator->m_frame->m_frame.f_lineno = 293;
tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_iter_cache_dirs);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 293;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 293;
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
generator_heap->exception_lineno = 293;
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
    PyObject *old = generator_heap->var_path;
    generator_heap->var_path = tmp_assign_source_3;
    Py_INCREF(generator_heap->var_path);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_called_value_1 = module_var_accessor_platformdirs$api$Path(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 294;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
CHECK_OBJECT(generator_heap->var_path);
tmp_args_element_value_1 = generator_heap->var_path;
generator->m_frame->m_frame.f_lineno = 294;
tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 294;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 294;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 293;
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
    generator_heap->var_path
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

Py_XDECREF(generator_heap->var_path);
generator_heap->var_path = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
Py_XDECREF(generator_heap->var_path);
generator_heap->var_path = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_platformdirs$api$$$function__43_iter_cache_paths$$$genobj__1_iter_cache_paths(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        platformdirs$api$$$function__43_iter_cache_paths$$$genobj__1_iter_cache_paths_context,
        module_platformdirs$api,
        mod_consts.const_str_plain_iter_cache_paths,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_5028412c77d16cc40312d2b528c06e00,
#endif
        code_objects_5ad40ffaba718f45437a6ccd4c31c306,
        closure,
        1,
#if 1
        sizeof(struct platformdirs$api$$$function__43_iter_cache_paths$$$genobj__1_iter_cache_paths_locals)
#else
        0
#endif
    );
}


static PyObject *impl_platformdirs$api$$$function__44_iter_runtime_paths(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_GENERATOR_platformdirs$api$$$function__44_iter_runtime_paths$$$genobj__1_iter_runtime_paths(tstate, tmp_closure_1);

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
struct platformdirs$api$$$function__44_iter_runtime_paths$$$genobj__1_iter_runtime_paths_locals {
PyObject *var_path;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
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

static PyObject *platformdirs$api$$$function__44_iter_runtime_paths$$$genobj__1_iter_runtime_paths_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct platformdirs$api$$$function__44_iter_runtime_paths$$$genobj__1_iter_runtime_paths_locals *generator_heap = (struct platformdirs$api$$$function__44_iter_runtime_paths$$$genobj__1_iter_runtime_paths_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_path = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_83e8401cf11ac8dfdee048e2f4960a4e, module_platformdirs$api, sizeof(void *)+sizeof(void *));
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
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 298;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_called_instance_1 = Nuitka_Cell_GET(generator->m_closure[0]);
generator->m_frame->m_frame.f_lineno = 298;
tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_iter_runtime_dirs);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 298;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 298;
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
generator_heap->exception_lineno = 298;
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
    PyObject *old = generator_heap->var_path;
    generator_heap->var_path = tmp_assign_source_3;
    Py_INCREF(generator_heap->var_path);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_called_value_1 = module_var_accessor_platformdirs$api$Path(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 299;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
CHECK_OBJECT(generator_heap->var_path);
tmp_args_element_value_1 = generator_heap->var_path;
generator->m_frame->m_frame.f_lineno = 299;
tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 299;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 299;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 298;
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
    generator_heap->var_path
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

Py_XDECREF(generator_heap->var_path);
generator_heap->var_path = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
Py_XDECREF(generator_heap->var_path);
generator_heap->var_path = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_platformdirs$api$$$function__44_iter_runtime_paths$$$genobj__1_iter_runtime_paths(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        platformdirs$api$$$function__44_iter_runtime_paths$$$genobj__1_iter_runtime_paths_context,
        module_platformdirs$api,
        mod_consts.const_str_plain_iter_runtime_paths,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_318e3f584cf0b110f623c5fe3c5c694d,
#endif
        code_objects_83e8401cf11ac8dfdee048e2f4960a4e,
        closure,
        1,
#if 1
        sizeof(struct platformdirs$api$$$function__44_iter_runtime_paths$$$genobj__1_iter_runtime_paths_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__10_site_cache_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_site_cache_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_81880757d5b5679e331b5dc7fe5fee1e,
#endif
        code_objects_943a25d05fb1ab68f7e894e901970526,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_a5e07401591661c84e7f0be8ef75f252,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__11_user_state_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_user_state_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_59abff96a69577b37e29fc143862fabd,
#endif
        code_objects_e6357d7da0531cda471dadd1d20ac26e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_ee6a62ef3cc456e4ca5b56452dc43a86,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__12_user_log_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_user_log_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2a405ea3d71d0ccb09fc22366730e1df,
#endif
        code_objects_f4152540034997ada1566197e527bc07,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_abfc6755b80ad80c7ff7b7ec8629e864,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__13_user_documents_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_user_documents_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fc355f58f0ff77d8f77a00468820818d,
#endif
        code_objects_11b4c0047aef87a92eccb0f847edaa2d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_1758df85f823e040abe6984708a3ba71,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__14_user_downloads_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_user_downloads_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7d3fbc58335f38d2dfb8778792e13beb,
#endif
        code_objects_e904bf8d8fdc294a1aa0a8cdb2feecd7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_61d51b1d9b5569e5ca5dfd52ebe24174,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__15_user_pictures_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_user_pictures_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f171dbbe044cc1fa5946690cf2e1cd25,
#endif
        code_objects_2705b7446182525a723e459c819dcda1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_88c4a4e96a4f64b415cd2140821dfb44,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__16_user_videos_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_user_videos_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_13431501b652c04d86d309bfa8c65e3b,
#endif
        code_objects_718494ad0ee4658126f14030ec61d0f3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_054b0e8f97411b56f4009f05053c6e63,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__17_user_music_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_user_music_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5c7226d148b72fbc25f40214c3d38d62,
#endif
        code_objects_78eee361fddd9c5b20bc762135ebe112,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_85db2365a56eba6815f139a569c08b46,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__18_user_desktop_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_user_desktop_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_05c455110a48b77e672a07bef8724791,
#endif
        code_objects_69c7ec3b5594152fe08b4c8073b24b50,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_986b5baff975f926a5a2b36ef7b04178,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__19_user_runtime_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_user_runtime_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c296f229907c52777e8512e56a500109,
#endif
        code_objects_2cdaba15b506e28c29092117d58cbd73,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_9dcb748d52ececd009f33a916ac4f9fa,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$api$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_91dbd6edc08a9ef61417694d1fcdaf2d,
#endif
        code_objects_63fb1423e25ef87ac331fa1d3ce7d3e8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_4c15c19f47e34fc53ef0e18bfa0f084f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__20_site_runtime_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_site_runtime_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7c63b261032349b6bce70b8df99e1411,
#endif
        code_objects_774287d72cc4e66742e9715f867326d5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_8da3a281610c277bc9ceb3a11abf11cd,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__21_user_data_path(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$api$$$function__21_user_data_path,
        mod_consts.const_str_plain_user_data_path,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5cbe4fc19a597dd3d25dbe8d23695c3f,
#endif
        code_objects_4ca57ac0a23d7e636412a39948c70036,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_601466516cde381444e98ca615a17aa9,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__22_site_data_path(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$api$$$function__22_site_data_path,
        mod_consts.const_str_plain_site_data_path,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9e095be67c3e525b976efd709a15df15,
#endif
        code_objects_02abe4ad2a2e5a2f3426a604f422a1b7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_aba993262b5f0386a22c1074a7d46779,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__23_user_config_path(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$api$$$function__23_user_config_path,
        mod_consts.const_str_plain_user_config_path,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_88300aef7cde70073ece592abe6135df,
#endif
        code_objects_f25b60bb8843c7e270cf1159f40baf2b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_87051034d10de29e61b4e195d2fc7474,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__24_site_config_path(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$api$$$function__24_site_config_path,
        mod_consts.const_str_plain_site_config_path,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_490c38bfe36f112d7e1eeca95097c03e,
#endif
        code_objects_e89ee23200c26e35c1b875cd2d0268a7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_2cbc06fc5686e456e34b7b33e2f371af,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__25_user_cache_path(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$api$$$function__25_user_cache_path,
        mod_consts.const_str_plain_user_cache_path,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_be0dd4769ad4e571936ff9fd3c5b94b3,
#endif
        code_objects_ad8830b2988fbc9ae42ea4b19baef954,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_158a519497fc35c5fa34e5a997a7f607,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__26_site_cache_path(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$api$$$function__26_site_cache_path,
        mod_consts.const_str_plain_site_cache_path,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_41d6a71f1bb50b139737e59a4cab757f,
#endif
        code_objects_cc6900ed07026300ffb0f944f0eccbfc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_64ccfa723b4a356036125ff04d77e45e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__27_user_state_path(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$api$$$function__27_user_state_path,
        mod_consts.const_str_plain_user_state_path,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a31d42a34ca2e6394abec0a310c03eae,
#endif
        code_objects_9e106d86fd332b616760ff030db02b5b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_03e7536f55231cd18ad5aa7341cb0e18,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__28_user_log_path(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$api$$$function__28_user_log_path,
        mod_consts.const_str_plain_user_log_path,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2ef3ad18e39e10d3d454b5eae69502f8,
#endif
        code_objects_898ad031916e8ba608bdbf8de057890a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_30112287e9f44f57b663be75a65182ed,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__29_user_documents_path(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$api$$$function__29_user_documents_path,
        mod_consts.const_str_plain_user_documents_path,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_bba022d390a8cc3aec2eebd6be8833b3,
#endif
        code_objects_508445e078fe119846d702e8636a1b2e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_03f5fe78fff311b525549f314be321bc,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__2__append_app_name_and_version(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$api$$$function__2__append_app_name_and_version,
        mod_consts.const_str_plain__append_app_name_and_version,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_70e3400d4a2839d970e7b83d2248054b,
#endif
        code_objects_ba0c9c86e3fe79ab30beda04affa8cf0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__30_user_downloads_path(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$api$$$function__30_user_downloads_path,
        mod_consts.const_str_plain_user_downloads_path,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f5b6f8477ec6934a96acb750755e26bc,
#endif
        code_objects_d8d4b407a785a29428843246c94f5e8e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_53e3a9e0333594dba5fcd79ad15e14a4,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__31_user_pictures_path(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$api$$$function__31_user_pictures_path,
        mod_consts.const_str_plain_user_pictures_path,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5cb77269855d70c9c50f6eaeae638d91,
#endif
        code_objects_1a7baf28f7d63aae752587594adae170,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_382576c9acbe6435e545578961e4db49,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__32_user_videos_path(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$api$$$function__32_user_videos_path,
        mod_consts.const_str_plain_user_videos_path,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b9902c103f8ce98dd79d320785370715,
#endif
        code_objects_40a891eb7acf3d12e3aa9b44da9f68e1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_59eeb20133c7be25099f16a5ed1b25ee,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__33_user_music_path(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$api$$$function__33_user_music_path,
        mod_consts.const_str_plain_user_music_path,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5bf63837a5b53180610bfb6d1c959150,
#endif
        code_objects_66f44f231cc5d8cedd14be903df8368c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_758c545b25a992686709986aea9218a0,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__34_user_desktop_path(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$api$$$function__34_user_desktop_path,
        mod_consts.const_str_plain_user_desktop_path,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_810c4c9d50f286bbab2e9203876876f5,
#endif
        code_objects_e489a3b3c765437b22dc0594bc58a4dc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_659f90cb0a920d7757f417686562c3e8,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__35_user_runtime_path(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$api$$$function__35_user_runtime_path,
        mod_consts.const_str_plain_user_runtime_path,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_18613d7a4b2626fd6aa3930ef4f1f6e7,
#endif
        code_objects_8457a3c1f2d6b179f912da948d82101b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_8674848b56b44232f312d7a70c75ca4e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__36_site_runtime_path(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$api$$$function__36_site_runtime_path,
        mod_consts.const_str_plain_site_runtime_path,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_22a6b83cfc6067a9df9677eeeab06b12,
#endif
        code_objects_2e2d1584a34856a9a165930fbba5e710,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_db53076e588099003f2463f513861d3a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__37_iter_config_dirs(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$api$$$function__37_iter_config_dirs,
        mod_consts.const_str_plain_iter_config_dirs,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_34994690b9828ac330619857de1864d9,
#endif
        code_objects_5fb2598857a16f39f75b3f278d326820,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_7313a0bdb6eaccbcdcf3fe5ee7a16fb0,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__38_iter_data_dirs(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$api$$$function__38_iter_data_dirs,
        mod_consts.const_str_plain_iter_data_dirs,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_745e8e7bd370d0841378ed7db66bce72,
#endif
        code_objects_5a59b0f34fdb38c119bdb2d522a7f970,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_c5d5912ea7b595b95f0ba9245a3f34d3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__39_iter_cache_dirs(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$api$$$function__39_iter_cache_dirs,
        mod_consts.const_str_plain_iter_cache_dirs,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6d03d443f77bfb514349a8efe627c67b,
#endif
        code_objects_2cf3548e89b805abe4d6e91c9be97d2f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_b95c09e7da13debe9b811ed52bc7b2bc,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__3__optionally_create_directory(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$api$$$function__3__optionally_create_directory,
        mod_consts.const_str_plain__optionally_create_directory,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5694052832c642c60febc464de4a3db6,
#endif
        code_objects_ffad5081a6afb434f8a84dbe41cb5c24,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__40_iter_runtime_dirs(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$api$$$function__40_iter_runtime_dirs,
        mod_consts.const_str_plain_iter_runtime_dirs,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f34b9893d331894a6e82784ee0e6322c,
#endif
        code_objects_6815ffaaa2e428f4a2ee6fed09cb5528,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_2e65e2fd551b74f33619cbb067d365e5,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__41_iter_config_paths(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$api$$$function__41_iter_config_paths,
        mod_consts.const_str_plain_iter_config_paths,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5434b9d3eec626f1595edfe19bfb2fe3,
#endif
        code_objects_79718427cb932c682d4f516f179c7993,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_3250f666f3cbb9ddf3b5863dd4f7ebfd,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__42_iter_data_paths(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$api$$$function__42_iter_data_paths,
        mod_consts.const_str_plain_iter_data_paths,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_63e535bdd06288c924cb5ccb437c7058,
#endif
        code_objects_94666dc935d8e4e90ec7e908fd5f15f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_5f3f798a273c1469ecf469855d77c4b4,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__43_iter_cache_paths(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$api$$$function__43_iter_cache_paths,
        mod_consts.const_str_plain_iter_cache_paths,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5028412c77d16cc40312d2b528c06e00,
#endif
        code_objects_5ad40ffaba718f45437a6ccd4c31c306,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_ae5f632f2c13871b1d0f7be7fea2fb8c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__44_iter_runtime_paths(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$api$$$function__44_iter_runtime_paths,
        mod_consts.const_str_plain_iter_runtime_paths,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_318e3f584cf0b110f623c5fe3c5c694d,
#endif
        code_objects_83e8401cf11ac8dfdee048e2f4960a4e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_e03fd4bdf4629c1905c7a2fd017b8d7e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__4__first_item_as_path_if_multipath(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$api$$$function__4__first_item_as_path_if_multipath,
        mod_consts.const_str_plain__first_item_as_path_if_multipath,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e027511e9c0d36c4ed2f50aa9623ecff,
#endif
        code_objects_e40d26035880d6fad20b4fa8eb6fda18,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__5_user_data_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_user_data_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e6cf2ccefd13c5469d5c76ee2354926e,
#endif
        code_objects_2874723dcab1bfcb932a4a48f3c280c7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_d03363c5dbc8b989d152f3c82bfd31db,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__6_site_data_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_site_data_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0608a2283872be46e0698a91ca52e25a,
#endif
        code_objects_8b46b6774ff63b488d75b9a0546a3509,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_0afbf273bca6b40c8f9f459494ce21de,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__7_user_config_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_user_config_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7ed861e307cb5a3117d77fe7a1c4ef95,
#endif
        code_objects_ce247d6bd0a0069b0f713a7c536927d4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_0b14b11f1eeb8c0dcd6fe252096b66d1,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__8_site_config_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_site_config_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_20ba1a05a32027eb55e2cedcd8642234,
#endif
        code_objects_42d2d700c41cbaab9d0df3ef5d82eba0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_34295f1319ad05b82412a484ce64c2a4,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$api$$$function__9_user_cache_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_user_cache_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_81c4785bcc062eebd41616a110a3b8c3,
#endif
        code_objects_1133c9bd9c5e9da90da618f59ed951cd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$api,
        mod_consts.const_str_digest_8f6d1b06b28b2279ab325e24fdc1141b,
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

static function_impl_code const function_table_platformdirs$api[] = {
impl_platformdirs$api$$$function__1___init__,
impl_platformdirs$api$$$function__2__append_app_name_and_version,
impl_platformdirs$api$$$function__3__optionally_create_directory,
impl_platformdirs$api$$$function__4__first_item_as_path_if_multipath,
impl_platformdirs$api$$$function__21_user_data_path,
impl_platformdirs$api$$$function__22_site_data_path,
impl_platformdirs$api$$$function__23_user_config_path,
impl_platformdirs$api$$$function__24_site_config_path,
impl_platformdirs$api$$$function__25_user_cache_path,
impl_platformdirs$api$$$function__26_site_cache_path,
impl_platformdirs$api$$$function__27_user_state_path,
impl_platformdirs$api$$$function__28_user_log_path,
impl_platformdirs$api$$$function__29_user_documents_path,
impl_platformdirs$api$$$function__30_user_downloads_path,
impl_platformdirs$api$$$function__31_user_pictures_path,
impl_platformdirs$api$$$function__32_user_videos_path,
impl_platformdirs$api$$$function__33_user_music_path,
impl_platformdirs$api$$$function__34_user_desktop_path,
impl_platformdirs$api$$$function__35_user_runtime_path,
impl_platformdirs$api$$$function__36_site_runtime_path,
impl_platformdirs$api$$$function__37_iter_config_dirs,
impl_platformdirs$api$$$function__38_iter_data_dirs,
impl_platformdirs$api$$$function__39_iter_cache_dirs,
impl_platformdirs$api$$$function__40_iter_runtime_dirs,
impl_platformdirs$api$$$function__41_iter_config_paths,
impl_platformdirs$api$$$function__42_iter_data_paths,
impl_platformdirs$api$$$function__43_iter_cache_paths,
impl_platformdirs$api$$$function__44_iter_runtime_paths,
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

    return Nuitka_Function_GetFunctionState(function, function_table_platformdirs$api);
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
        module_platformdirs$api,
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
        function_table_platformdirs$api,
        sizeof(function_table_platformdirs$api) / sizeof(function_impl_code)
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
static char const *module_full_name = "platformdirs.api";
#endif

// Internal entry point for module code.
PyObject *module_code_platformdirs$api(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("platformdirs$api");

    // Store the module for future use.
    module_platformdirs$api = module;

    moduledict_platformdirs$api = MODULE_DICT(module_platformdirs$api);

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
        PRINT_STRING("platformdirs$api: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("platformdirs$api: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("platformdirs$api: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "platformdirs.api" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initplatformdirs$api\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_platformdirs$api, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_platformdirs$api,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_platformdirs$api,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_platformdirs$api, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_platformdirs$api,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_platformdirs$api, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_platformdirs$api,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_platformdirs$api, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_platformdirs$api,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_platformdirs$api);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_platformdirs$api, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_platformdirs$api, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_platformdirs$api, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_platformdirs$api, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_platformdirs$api);
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

        UPDATE_STRING_DICT1(moduledict_platformdirs$api, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_platformdirs$api;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_platformdirs$api$$$class__1_PlatformDirsABC_15 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_3f95a33671df42a90a566f07b8e99951;
UPDATE_STRING_DICT0(moduledict_platformdirs$api, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_platformdirs$api, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_platformdirs$api = MAKE_MODULE_FRAME(code_objects_6f74084eda2f5104d0c0f89e2789f8af, module_platformdirs$api);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$api);
assert(Py_REFCNT(frame_frame_platformdirs$api) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_platformdirs$api$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_platformdirs$api$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_platformdirs$api, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_platformdirs$api, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict_platformdirs$api, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_abc;
tmp_globals_arg_value_1 = (PyObject *)moduledict_platformdirs$api;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_ABC_str_plain_abstractmethod_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_platformdirs$api->m_frame.f_lineno = 6;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_6;
}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_platformdirs$api,
        mod_consts.const_str_plain_ABC,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_ABC);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_platformdirs$api, (Nuitka_StringObject *)mod_consts.const_str_plain_ABC, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_platformdirs$api,
        mod_consts.const_str_plain_abstractmethod,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_platformdirs$api, (Nuitka_StringObject *)mod_consts.const_str_plain_abstractmethod, tmp_assign_source_8);
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
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_pathlib;
tmp_globals_arg_value_2 = (PyObject *)moduledict_platformdirs$api;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Path_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_platformdirs$api->m_frame.f_lineno = 7;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_platformdirs$api,
        mod_consts.const_str_plain_Path,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Path);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_platformdirs$api, (Nuitka_StringObject *)mod_consts.const_str_plain_Path, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = Py_False;
UPDATE_STRING_DICT0(moduledict_platformdirs$api, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_10);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_platformdirs$api$ABC(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ABC);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 15;

    goto try_except_handler_2;
}
tmp_assign_source_11 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_11, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_12 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
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


exception_lineno = 15;

    goto try_except_handler_2;
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


exception_lineno = 15;

    goto try_except_handler_2;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_14 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_14;
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


exception_lineno = 15;

    goto try_except_handler_2;
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
PyObject *tmp_assign_source_15;
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


exception_lineno = 15;

    goto try_except_handler_2;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_PlatformDirsABC;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_platformdirs$api->m_frame.f_lineno = 15;
tmp_assign_source_15 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_15;
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


exception_lineno = 15;

    goto try_except_handler_2;
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
PyObject *tmp_name_value_3;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_3 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_3, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_2;
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


exception_lineno = 15;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_2;
}
frame_frame_platformdirs$api->m_frame.f_lineno = 15;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 15;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_2;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_16;
}
branch_end_1:;
{
PyObject *tmp_assign_source_17;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_platformdirs$api$$$class__1_PlatformDirsABC_15 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_515057460876abab6a84e50b95812956;
tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_digest_1a8468f9f430d40713a60c6261f0e0d6;
tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_plain_PlatformDirsABC;
tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_int_pos_15;
tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_4;
}
frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2 = MAKE_CLASS_FRAME(tstate, code_objects_203a6dfb8742d54b5d52c3aa1ca17bae, module_platformdirs$api, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2);
assert(Py_REFCNT(frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2) == 2);

// Framed code:
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_1;
tmp_defaults_1 = mod_consts.const_tuple_none_none_none_false_false_true_false_tuple;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_05091786e1ea7543a978a1df241edea0);
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_platformdirs$api$$$function__1___init__(tstate, tmp_defaults_1, tmp_annotations_1);

tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_30fc14db9236f854568722eb86b6bc61);

tmp_dictset_value = MAKE_FUNCTION_platformdirs$api$$$function__2__append_app_name_and_version(tstate, tmp_annotations_2);

tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain__append_app_name_and_version, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_9d0308e8ec2e6a105d9090998714ca1c);

tmp_dictset_value = MAKE_FUNCTION_platformdirs$api$$$function__3__optionally_create_directory(tstate, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain__optionally_create_directory, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_15497dcf83faee6f5ca2583d9295f8a9);

tmp_dictset_value = MAKE_FUNCTION_platformdirs$api$$$function__4__first_item_as_path_if_multipath(tstate, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain__first_item_as_path_if_multipath, tmp_dictset_value);
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
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_5;
tmp_called_value_2 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_property);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_3 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_3 = module_var_accessor_platformdirs$api$abstractmethod(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 102;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_2 = MAKE_FUNCTION_platformdirs$api$$$function__5_user_data_dir(tstate, tmp_annotations_5);

frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 102;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 102;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 101;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_user_data_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_6;
tmp_called_value_4 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_property);

if (tmp_called_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_4 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_5 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_5 = module_var_accessor_platformdirs$api$abstractmethod(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 107;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_4 = MAKE_FUNCTION_platformdirs$api$$$function__6_site_data_dir(tstate, tmp_annotations_6);

frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 107;
tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 107;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 106;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_site_data_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_6;
PyObject *tmp_annotations_7;
tmp_called_value_6 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_property);

if (tmp_called_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_6 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_7 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_7 = module_var_accessor_platformdirs$api$abstractmethod(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 112;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_6 = MAKE_FUNCTION_platformdirs$api$$$function__7_user_config_dir(tstate, tmp_annotations_7);

frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 112;
tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 112;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 111;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_user_config_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_7;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_8;
PyObject *tmp_annotations_8;
tmp_called_value_8 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_property);

if (tmp_called_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_8 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_9 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_9 = module_var_accessor_platformdirs$api$abstractmethod(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_8);

exception_lineno = 117;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_8 = MAKE_FUNCTION_platformdirs$api$$$function__8_site_config_dir(tstate, tmp_annotations_8);

frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 117;
tmp_args_element_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 117;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 116;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_site_config_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_9;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_10;
PyObject *tmp_annotations_9;
tmp_called_value_10 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_property);

if (tmp_called_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_10 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_11 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_11 = module_var_accessor_platformdirs$api$abstractmethod(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_10);

exception_lineno = 122;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_10 = MAKE_FUNCTION_platformdirs$api$$$function__9_user_cache_dir(tstate, tmp_annotations_9);

frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 122;
tmp_args_element_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);

exception_lineno = 122;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 121;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_user_cache_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_11;
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_12;
PyObject *tmp_annotations_10;
tmp_called_value_12 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_property);

if (tmp_called_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_12 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_13 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_13 = module_var_accessor_platformdirs$api$abstractmethod(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_12);

exception_lineno = 127;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_12 = MAKE_FUNCTION_platformdirs$api$$$function__10_site_cache_dir(tstate, tmp_annotations_10);

frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 127;
tmp_args_element_value_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_12);

exception_lineno = 127;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 126;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_site_cache_dir, tmp_dictset_value);
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
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_13;
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_14;
PyObject *tmp_annotations_11;
tmp_called_value_14 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_property);

if (tmp_called_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_14 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_15 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_15 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_15 = module_var_accessor_platformdirs$api$abstractmethod(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_14);

exception_lineno = 132;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_15);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_14 = MAKE_FUNCTION_platformdirs$api$$$function__11_user_state_dir(tstate, tmp_annotations_11);

frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 132;
tmp_args_element_value_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_14);

exception_lineno = 132;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 131;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_user_state_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_15;
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_16;
PyObject *tmp_annotations_12;
tmp_called_value_16 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_property);

if (tmp_called_value_16 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_16 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_16);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_17 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_17 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_17 = module_var_accessor_platformdirs$api$abstractmethod(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_16);

exception_lineno = 137;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_17);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_16 = MAKE_FUNCTION_platformdirs$api$$$function__12_user_log_dir(tstate, tmp_annotations_12);

frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 137;
tmp_args_element_value_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_16);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_args_element_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_16);

exception_lineno = 137;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 136;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_15);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_user_log_dir, tmp_dictset_value);
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
{
PyObject *tmp_called_value_18;
PyObject *tmp_args_element_value_17;
PyObject *tmp_called_value_19;
PyObject *tmp_args_element_value_18;
PyObject *tmp_annotations_13;
tmp_called_value_18 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_property);

if (tmp_called_value_18 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_18 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_18);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_19 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_19 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_19 = module_var_accessor_platformdirs$api$abstractmethod(tstate);
if (unlikely(tmp_called_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_18);

exception_lineno = 142;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_19);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_18 = MAKE_FUNCTION_platformdirs$api$$$function__13_user_documents_dir(tstate, tmp_annotations_13);

frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 142;
tmp_args_element_value_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_18);
CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_args_element_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_18);

exception_lineno = 142;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 141;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_17);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_user_documents_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_20;
PyObject *tmp_args_element_value_19;
PyObject *tmp_called_value_21;
PyObject *tmp_args_element_value_20;
PyObject *tmp_annotations_14;
tmp_called_value_20 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_property);

if (tmp_called_value_20 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_20 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_20);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_21 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_21 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_21 = module_var_accessor_platformdirs$api$abstractmethod(tstate);
if (unlikely(tmp_called_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_20);

exception_lineno = 147;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_21);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_20 = MAKE_FUNCTION_platformdirs$api$$$function__14_user_downloads_dir(tstate, tmp_annotations_14);

frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 147;
tmp_args_element_value_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_20);
CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
CHECK_OBJECT(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_20);
if (tmp_args_element_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_20);

exception_lineno = 147;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 146;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_19);
CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_user_downloads_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_22;
PyObject *tmp_args_element_value_21;
PyObject *tmp_called_value_23;
PyObject *tmp_args_element_value_22;
PyObject *tmp_annotations_15;
tmp_called_value_22 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_property);

if (tmp_called_value_22 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_22 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_22);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_23 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_23 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_23 = module_var_accessor_platformdirs$api$abstractmethod(tstate);
if (unlikely(tmp_called_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_22);

exception_lineno = 152;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_23);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_22 = MAKE_FUNCTION_platformdirs$api$$$function__15_user_pictures_dir(tstate, tmp_annotations_15);

frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 152;
tmp_args_element_value_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_22);
CHECK_OBJECT(tmp_called_value_23);
Py_DECREF(tmp_called_value_23);
CHECK_OBJECT(tmp_args_element_value_22);
Py_DECREF(tmp_args_element_value_22);
if (tmp_args_element_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_22);

exception_lineno = 152;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 151;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_21);
CHECK_OBJECT(tmp_called_value_22);
Py_DECREF(tmp_called_value_22);
CHECK_OBJECT(tmp_args_element_value_21);
Py_DECREF(tmp_args_element_value_21);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_user_pictures_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_24;
PyObject *tmp_args_element_value_23;
PyObject *tmp_called_value_25;
PyObject *tmp_args_element_value_24;
PyObject *tmp_annotations_16;
tmp_called_value_24 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_property);

if (tmp_called_value_24 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_24 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_24);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_25 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_25 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_25 = module_var_accessor_platformdirs$api$abstractmethod(tstate);
if (unlikely(tmp_called_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_24);

exception_lineno = 157;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_25);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_24 = MAKE_FUNCTION_platformdirs$api$$$function__16_user_videos_dir(tstate, tmp_annotations_16);

frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 157;
tmp_args_element_value_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_24);
CHECK_OBJECT(tmp_called_value_25);
Py_DECREF(tmp_called_value_25);
CHECK_OBJECT(tmp_args_element_value_24);
Py_DECREF(tmp_args_element_value_24);
if (tmp_args_element_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_24);

exception_lineno = 157;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 156;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_23);
CHECK_OBJECT(tmp_called_value_24);
Py_DECREF(tmp_called_value_24);
CHECK_OBJECT(tmp_args_element_value_23);
Py_DECREF(tmp_args_element_value_23);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_user_videos_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_26;
PyObject *tmp_args_element_value_25;
PyObject *tmp_called_value_27;
PyObject *tmp_args_element_value_26;
PyObject *tmp_annotations_17;
tmp_called_value_26 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_property);

if (tmp_called_value_26 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_26 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_26);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_27 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_27 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_27 = module_var_accessor_platformdirs$api$abstractmethod(tstate);
if (unlikely(tmp_called_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_26);

exception_lineno = 162;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_27);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_26 = MAKE_FUNCTION_platformdirs$api$$$function__17_user_music_dir(tstate, tmp_annotations_17);

frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 162;
tmp_args_element_value_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_26);
CHECK_OBJECT(tmp_called_value_27);
Py_DECREF(tmp_called_value_27);
CHECK_OBJECT(tmp_args_element_value_26);
Py_DECREF(tmp_args_element_value_26);
if (tmp_args_element_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_26);

exception_lineno = 162;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 161;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_25);
CHECK_OBJECT(tmp_called_value_26);
Py_DECREF(tmp_called_value_26);
CHECK_OBJECT(tmp_args_element_value_25);
Py_DECREF(tmp_args_element_value_25);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_user_music_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_28;
PyObject *tmp_args_element_value_27;
PyObject *tmp_called_value_29;
PyObject *tmp_args_element_value_28;
PyObject *tmp_annotations_18;
tmp_called_value_28 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_property);

if (tmp_called_value_28 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_28 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_28);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_29 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_29 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_29 = module_var_accessor_platformdirs$api$abstractmethod(tstate);
if (unlikely(tmp_called_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_28);

exception_lineno = 167;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_29);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_28 = MAKE_FUNCTION_platformdirs$api$$$function__18_user_desktop_dir(tstate, tmp_annotations_18);

frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 167;
tmp_args_element_value_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_28);
CHECK_OBJECT(tmp_called_value_29);
Py_DECREF(tmp_called_value_29);
CHECK_OBJECT(tmp_args_element_value_28);
Py_DECREF(tmp_args_element_value_28);
if (tmp_args_element_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_28);

exception_lineno = 167;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 166;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_27);
CHECK_OBJECT(tmp_called_value_28);
Py_DECREF(tmp_called_value_28);
CHECK_OBJECT(tmp_args_element_value_27);
Py_DECREF(tmp_args_element_value_27);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_user_desktop_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_30;
PyObject *tmp_args_element_value_29;
PyObject *tmp_called_value_31;
PyObject *tmp_args_element_value_30;
PyObject *tmp_annotations_19;
tmp_called_value_30 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_property);

if (tmp_called_value_30 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_30 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_30);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_31 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_31 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_31 = module_var_accessor_platformdirs$api$abstractmethod(tstate);
if (unlikely(tmp_called_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_30);

exception_lineno = 172;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_31);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_30 = MAKE_FUNCTION_platformdirs$api$$$function__19_user_runtime_dir(tstate, tmp_annotations_19);

frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 172;
tmp_args_element_value_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_30);
CHECK_OBJECT(tmp_called_value_31);
Py_DECREF(tmp_called_value_31);
CHECK_OBJECT(tmp_args_element_value_30);
Py_DECREF(tmp_args_element_value_30);
if (tmp_args_element_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_30);

exception_lineno = 172;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 171;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_29);
CHECK_OBJECT(tmp_called_value_30);
Py_DECREF(tmp_called_value_30);
CHECK_OBJECT(tmp_args_element_value_29);
Py_DECREF(tmp_args_element_value_29);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_user_runtime_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_32;
PyObject *tmp_args_element_value_31;
PyObject *tmp_called_value_33;
PyObject *tmp_args_element_value_32;
PyObject *tmp_annotations_20;
tmp_called_value_32 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_property);

if (tmp_called_value_32 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_32 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_32);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_33 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_33 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_33 = module_var_accessor_platformdirs$api$abstractmethod(tstate);
if (unlikely(tmp_called_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_32);

exception_lineno = 177;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_33);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_32 = MAKE_FUNCTION_platformdirs$api$$$function__20_site_runtime_dir(tstate, tmp_annotations_20);

frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 177;
tmp_args_element_value_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_33, tmp_args_element_value_32);
CHECK_OBJECT(tmp_called_value_33);
Py_DECREF(tmp_called_value_33);
CHECK_OBJECT(tmp_args_element_value_32);
Py_DECREF(tmp_args_element_value_32);
if (tmp_args_element_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_32);

exception_lineno = 177;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 176;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_31);
CHECK_OBJECT(tmp_called_value_32);
Py_DECREF(tmp_called_value_32);
CHECK_OBJECT(tmp_args_element_value_31);
Py_DECREF(tmp_args_element_value_31);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_site_runtime_dir, tmp_dictset_value);
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
PyObject *tmp_called_value_34;
PyObject *tmp_args_element_value_33;
PyObject *tmp_annotations_21;
tmp_called_value_34 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_property);

if (tmp_called_value_34 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_34 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_34);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_21 = DICT_COPY(tstate, mod_consts.const_dict_8bbfa897dce82badadbdad5bcd6f946d);

tmp_args_element_value_33 = MAKE_FUNCTION_platformdirs$api$$$function__21_user_data_path(tstate, tmp_annotations_21);

frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 181;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_34, tmp_args_element_value_33);
CHECK_OBJECT(tmp_called_value_34);
Py_DECREF(tmp_called_value_34);
CHECK_OBJECT(tmp_args_element_value_33);
Py_DECREF(tmp_args_element_value_33);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_user_data_path, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_35;
PyObject *tmp_args_element_value_34;
PyObject *tmp_annotations_22;
tmp_called_value_35 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_property);

if (tmp_called_value_35 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_35 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_35);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_22 = DICT_COPY(tstate, mod_consts.const_dict_8bbfa897dce82badadbdad5bcd6f946d);

tmp_args_element_value_34 = MAKE_FUNCTION_platformdirs$api$$$function__22_site_data_path(tstate, tmp_annotations_22);

frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 186;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_35, tmp_args_element_value_34);
CHECK_OBJECT(tmp_called_value_35);
Py_DECREF(tmp_called_value_35);
CHECK_OBJECT(tmp_args_element_value_34);
Py_DECREF(tmp_args_element_value_34);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_site_data_path, tmp_dictset_value);
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
PyObject *tmp_called_value_36;
PyObject *tmp_args_element_value_35;
PyObject *tmp_annotations_23;
tmp_called_value_36 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_property);

if (tmp_called_value_36 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_36 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_36);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_23 = DICT_COPY(tstate, mod_consts.const_dict_8bbfa897dce82badadbdad5bcd6f946d);

tmp_args_element_value_35 = MAKE_FUNCTION_platformdirs$api$$$function__23_user_config_path(tstate, tmp_annotations_23);

frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 191;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_36, tmp_args_element_value_35);
CHECK_OBJECT(tmp_called_value_36);
Py_DECREF(tmp_called_value_36);
CHECK_OBJECT(tmp_args_element_value_35);
Py_DECREF(tmp_args_element_value_35);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_user_config_path, tmp_dictset_value);
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
PyObject *tmp_called_value_37;
PyObject *tmp_args_element_value_36;
PyObject *tmp_annotations_24;
tmp_called_value_37 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_property);

if (tmp_called_value_37 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_37 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_37);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_24 = DICT_COPY(tstate, mod_consts.const_dict_8bbfa897dce82badadbdad5bcd6f946d);

tmp_args_element_value_36 = MAKE_FUNCTION_platformdirs$api$$$function__24_site_config_path(tstate, tmp_annotations_24);

frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 196;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_37, tmp_args_element_value_36);
CHECK_OBJECT(tmp_called_value_37);
Py_DECREF(tmp_called_value_37);
CHECK_OBJECT(tmp_args_element_value_36);
Py_DECREF(tmp_args_element_value_36);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_site_config_path, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_38;
PyObject *tmp_args_element_value_37;
PyObject *tmp_annotations_25;
tmp_called_value_38 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_property);

if (tmp_called_value_38 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_38 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_38);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_25 = DICT_COPY(tstate, mod_consts.const_dict_8bbfa897dce82badadbdad5bcd6f946d);

tmp_args_element_value_37 = MAKE_FUNCTION_platformdirs$api$$$function__25_user_cache_path(tstate, tmp_annotations_25);

frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 201;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_38, tmp_args_element_value_37);
CHECK_OBJECT(tmp_called_value_38);
Py_DECREF(tmp_called_value_38);
CHECK_OBJECT(tmp_args_element_value_37);
Py_DECREF(tmp_args_element_value_37);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_user_cache_path, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_39;
PyObject *tmp_args_element_value_38;
PyObject *tmp_annotations_26;
tmp_called_value_39 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_property);

if (tmp_called_value_39 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_39 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_39);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_26 = DICT_COPY(tstate, mod_consts.const_dict_8bbfa897dce82badadbdad5bcd6f946d);

tmp_args_element_value_38 = MAKE_FUNCTION_platformdirs$api$$$function__26_site_cache_path(tstate, tmp_annotations_26);

frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 206;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_39, tmp_args_element_value_38);
CHECK_OBJECT(tmp_called_value_39);
Py_DECREF(tmp_called_value_39);
CHECK_OBJECT(tmp_args_element_value_38);
Py_DECREF(tmp_args_element_value_38);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_site_cache_path, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_40;
PyObject *tmp_args_element_value_39;
PyObject *tmp_annotations_27;
tmp_called_value_40 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_property);

if (tmp_called_value_40 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_40 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_40);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_27 = DICT_COPY(tstate, mod_consts.const_dict_8bbfa897dce82badadbdad5bcd6f946d);

tmp_args_element_value_39 = MAKE_FUNCTION_platformdirs$api$$$function__27_user_state_path(tstate, tmp_annotations_27);

frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 211;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_40, tmp_args_element_value_39);
CHECK_OBJECT(tmp_called_value_40);
Py_DECREF(tmp_called_value_40);
CHECK_OBJECT(tmp_args_element_value_39);
Py_DECREF(tmp_args_element_value_39);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_user_state_path, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_41;
PyObject *tmp_args_element_value_40;
PyObject *tmp_annotations_28;
tmp_called_value_41 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_property);

if (tmp_called_value_41 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_41 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_41);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_28 = DICT_COPY(tstate, mod_consts.const_dict_8bbfa897dce82badadbdad5bcd6f946d);

tmp_args_element_value_40 = MAKE_FUNCTION_platformdirs$api$$$function__28_user_log_path(tstate, tmp_annotations_28);

frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 216;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_41, tmp_args_element_value_40);
CHECK_OBJECT(tmp_called_value_41);
Py_DECREF(tmp_called_value_41);
CHECK_OBJECT(tmp_args_element_value_40);
Py_DECREF(tmp_args_element_value_40);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_user_log_path, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_42;
PyObject *tmp_args_element_value_41;
PyObject *tmp_annotations_29;
tmp_called_value_42 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_property);

if (tmp_called_value_42 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_42 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_42);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_29 = DICT_COPY(tstate, mod_consts.const_dict_8bbfa897dce82badadbdad5bcd6f946d);

tmp_args_element_value_41 = MAKE_FUNCTION_platformdirs$api$$$function__29_user_documents_path(tstate, tmp_annotations_29);

frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 221;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_42, tmp_args_element_value_41);
CHECK_OBJECT(tmp_called_value_42);
Py_DECREF(tmp_called_value_42);
CHECK_OBJECT(tmp_args_element_value_41);
Py_DECREF(tmp_args_element_value_41);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_user_documents_path, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_43;
PyObject *tmp_args_element_value_42;
PyObject *tmp_annotations_30;
tmp_called_value_43 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_property);

if (tmp_called_value_43 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_43 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_43);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_30 = DICT_COPY(tstate, mod_consts.const_dict_8bbfa897dce82badadbdad5bcd6f946d);

tmp_args_element_value_42 = MAKE_FUNCTION_platformdirs$api$$$function__30_user_downloads_path(tstate, tmp_annotations_30);

frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 226;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_43, tmp_args_element_value_42);
CHECK_OBJECT(tmp_called_value_43);
Py_DECREF(tmp_called_value_43);
CHECK_OBJECT(tmp_args_element_value_42);
Py_DECREF(tmp_args_element_value_42);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_user_downloads_path, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_44;
PyObject *tmp_args_element_value_43;
PyObject *tmp_annotations_31;
tmp_called_value_44 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_property);

if (tmp_called_value_44 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_44 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_44);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_31 = DICT_COPY(tstate, mod_consts.const_dict_8bbfa897dce82badadbdad5bcd6f946d);

tmp_args_element_value_43 = MAKE_FUNCTION_platformdirs$api$$$function__31_user_pictures_path(tstate, tmp_annotations_31);

frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 231;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_44, tmp_args_element_value_43);
CHECK_OBJECT(tmp_called_value_44);
Py_DECREF(tmp_called_value_44);
CHECK_OBJECT(tmp_args_element_value_43);
Py_DECREF(tmp_args_element_value_43);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_user_pictures_path, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_45;
PyObject *tmp_args_element_value_44;
PyObject *tmp_annotations_32;
tmp_called_value_45 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_property);

if (tmp_called_value_45 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_45 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_45);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_32 = DICT_COPY(tstate, mod_consts.const_dict_8bbfa897dce82badadbdad5bcd6f946d);

tmp_args_element_value_44 = MAKE_FUNCTION_platformdirs$api$$$function__32_user_videos_path(tstate, tmp_annotations_32);

frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 236;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_45, tmp_args_element_value_44);
CHECK_OBJECT(tmp_called_value_45);
Py_DECREF(tmp_called_value_45);
CHECK_OBJECT(tmp_args_element_value_44);
Py_DECREF(tmp_args_element_value_44);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_user_videos_path, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_46;
PyObject *tmp_args_element_value_45;
PyObject *tmp_annotations_33;
tmp_called_value_46 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_property);

if (tmp_called_value_46 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_46 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_46);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_33 = DICT_COPY(tstate, mod_consts.const_dict_8bbfa897dce82badadbdad5bcd6f946d);

tmp_args_element_value_45 = MAKE_FUNCTION_platformdirs$api$$$function__33_user_music_path(tstate, tmp_annotations_33);

frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 241;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_46, tmp_args_element_value_45);
CHECK_OBJECT(tmp_called_value_46);
Py_DECREF(tmp_called_value_46);
CHECK_OBJECT(tmp_args_element_value_45);
Py_DECREF(tmp_args_element_value_45);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_user_music_path, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_47;
PyObject *tmp_args_element_value_46;
PyObject *tmp_annotations_34;
tmp_called_value_47 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_property);

if (tmp_called_value_47 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_47 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_47);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_34 = DICT_COPY(tstate, mod_consts.const_dict_8bbfa897dce82badadbdad5bcd6f946d);

tmp_args_element_value_46 = MAKE_FUNCTION_platformdirs$api$$$function__34_user_desktop_path(tstate, tmp_annotations_34);

frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 246;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_47, tmp_args_element_value_46);
CHECK_OBJECT(tmp_called_value_47);
Py_DECREF(tmp_called_value_47);
CHECK_OBJECT(tmp_args_element_value_46);
Py_DECREF(tmp_args_element_value_46);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_user_desktop_path, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_48;
PyObject *tmp_args_element_value_47;
PyObject *tmp_annotations_35;
tmp_called_value_48 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_property);

if (tmp_called_value_48 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_48 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_48);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_35 = DICT_COPY(tstate, mod_consts.const_dict_8bbfa897dce82badadbdad5bcd6f946d);

tmp_args_element_value_47 = MAKE_FUNCTION_platformdirs$api$$$function__35_user_runtime_path(tstate, tmp_annotations_35);

frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 251;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_48, tmp_args_element_value_47);
CHECK_OBJECT(tmp_called_value_48);
Py_DECREF(tmp_called_value_48);
CHECK_OBJECT(tmp_args_element_value_47);
Py_DECREF(tmp_args_element_value_47);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_user_runtime_path, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_49;
PyObject *tmp_args_element_value_48;
PyObject *tmp_annotations_36;
tmp_called_value_49 = PyObject_GetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_property);

if (tmp_called_value_49 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_49 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_49);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_36 = DICT_COPY(tstate, mod_consts.const_dict_8bbfa897dce82badadbdad5bcd6f946d);

tmp_args_element_value_48 = MAKE_FUNCTION_platformdirs$api$$$function__36_site_runtime_path(tstate, tmp_annotations_36);

frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame.f_lineno = 256;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_49, tmp_args_element_value_48);
CHECK_OBJECT(tmp_called_value_49);
Py_DECREF(tmp_called_value_49);
CHECK_OBJECT(tmp_args_element_value_48);
Py_DECREF(tmp_args_element_value_48);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_site_runtime_path, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_37;
tmp_annotations_37 = DICT_COPY(tstate, mod_consts.const_dict_b2f586a573796cb806fcf3b5316538bd);

tmp_dictset_value = MAKE_FUNCTION_platformdirs$api$$$function__37_iter_config_dirs(tstate, tmp_annotations_37);

tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_iter_config_dirs, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_38;
tmp_annotations_38 = DICT_COPY(tstate, mod_consts.const_dict_b2f586a573796cb806fcf3b5316538bd);

tmp_dictset_value = MAKE_FUNCTION_platformdirs$api$$$function__38_iter_data_dirs(tstate, tmp_annotations_38);

tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_iter_data_dirs, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_39;
tmp_annotations_39 = DICT_COPY(tstate, mod_consts.const_dict_b2f586a573796cb806fcf3b5316538bd);

tmp_dictset_value = MAKE_FUNCTION_platformdirs$api$$$function__39_iter_cache_dirs(tstate, tmp_annotations_39);

tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_iter_cache_dirs, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_40;
tmp_annotations_40 = DICT_COPY(tstate, mod_consts.const_dict_b2f586a573796cb806fcf3b5316538bd);

tmp_dictset_value = MAKE_FUNCTION_platformdirs$api$$$function__40_iter_runtime_dirs(tstate, tmp_annotations_40);

tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_iter_runtime_dirs, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_41;
tmp_annotations_41 = DICT_COPY(tstate, mod_consts.const_dict_9f2ffdfd475316a014aaac7a01bed3ff);

tmp_dictset_value = MAKE_FUNCTION_platformdirs$api$$$function__41_iter_config_paths(tstate, tmp_annotations_41);

tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_iter_config_paths, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_42;
tmp_annotations_42 = DICT_COPY(tstate, mod_consts.const_dict_9f2ffdfd475316a014aaac7a01bed3ff);

tmp_dictset_value = MAKE_FUNCTION_platformdirs$api$$$function__42_iter_data_paths(tstate, tmp_annotations_42);

tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_iter_data_paths, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_43;
tmp_annotations_43 = DICT_COPY(tstate, mod_consts.const_dict_9f2ffdfd475316a014aaac7a01bed3ff);

tmp_dictset_value = MAKE_FUNCTION_platformdirs$api$$$function__43_iter_cache_paths(tstate, tmp_annotations_43);

tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_iter_cache_paths, tmp_dictset_value);
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
{
PyObject *tmp_annotations_44;
tmp_annotations_44 = DICT_COPY(tstate, mod_consts.const_dict_9f2ffdfd475316a014aaac7a01bed3ff);

tmp_dictset_value = MAKE_FUNCTION_platformdirs$api$$$function__44_iter_runtime_paths(tstate, tmp_annotations_44);

tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain_iter_runtime_paths, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_platformdirs$api$$$class__1_PlatformDirsABC_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_4;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_0d4e60dadfda01b6adee3fa1b10fbf5a_tuple;
tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_4;
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


exception_lineno = 15;

    goto try_except_handler_4;
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
tmp_res = PyObject_SetItem(locals_platformdirs$api$$$class__1_PlatformDirsABC_15, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_4;
}
branch_no_3:;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_50;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_50 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_PlatformDirsABC;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_platformdirs$api$$$class__1_PlatformDirsABC_15;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_platformdirs$api->m_frame.f_lineno = 15;
tmp_assign_source_18 = CALL_FUNCTION(tstate, tmp_called_value_50, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_4;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_18;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_17 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_17);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_platformdirs$api$$$class__1_PlatformDirsABC_15);
locals_platformdirs$api$$$class__1_PlatformDirsABC_15 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_platformdirs$api$$$class__1_PlatformDirsABC_15);
locals_platformdirs$api$$$class__1_PlatformDirsABC_15 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 15;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_platformdirs$api, (Nuitka_StringObject *)mod_consts.const_str_plain_PlatformDirsABC, tmp_assign_source_17);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
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
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$api, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$api->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$api, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_platformdirs$api);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("platformdirs$api", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "platformdirs.api" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_platformdirs$api);
    return module_platformdirs$api;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_platformdirs$api, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("platformdirs$api", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

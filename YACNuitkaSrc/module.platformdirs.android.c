/* Generated code for Python module 'platformdirs$android'
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



/* The "module_platformdirs$android" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_platformdirs$android;
PyDictObject *moduledict_platformdirs$android;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain__append_app_name_and_version;
PyObject *const_str_plain_cast;
PyObject *const_str_plain_str;
PyObject *const_str_plain__android_folder;
PyObject *const_str_plain_files;
PyObject *const_str_digest_249a838e487c34bc9e0b4cde310e843d;
PyObject *const_str_plain_user_data_dir;
PyObject *const_str_digest_136455292a3e15956a0fa684fa617866;
PyObject *const_str_plain_shared_prefs;
PyObject *const_str_digest_d427c807a4b4c868f7ed6e31eb1e15f3;
PyObject *const_str_plain_user_config_dir;
PyObject *const_str_digest_736b48e19a6495d22599f72b237881cc;
PyObject *const_str_plain_cache;
PyObject *const_str_digest_9b19ad2440f6f6dd13952f9ea2b38c90;
PyObject *const_str_plain_user_cache_dir;
PyObject *const_str_digest_3ef3fce76f33660759bf5667f297951e;
PyObject *const_str_digest_68cb5fd9a9688506895787dd74fddac5;
PyObject *const_str_plain_opinion;
PyObject *const_str_plain_join;
PyObject *const_str_plain_log;
PyObject *const_str_digest_1b4710591d9501d3cffb9d8858c351d1;
PyObject *const_str_plain__android_documents_folder;
PyObject *const_str_digest_8e5d87b88efdca500978ffd5ca673b0e;
PyObject *const_str_plain__android_downloads_folder;
PyObject *const_str_digest_7ea4a4e4415bbb6149bd5959426cb160;
PyObject *const_str_plain__android_pictures_folder;
PyObject *const_str_digest_b6da4007f0e9cea1da494e27e8563c95;
PyObject *const_str_plain__android_videos_folder;
PyObject *const_str_digest_a7fd13679d22374f91bef217cda30a61;
PyObject *const_str_plain__android_music_folder;
PyObject *const_str_digest_74b22351309c871baf9b5d923fb065b8;
PyObject *const_str_plain_tmp;
PyObject *const_str_digest_79f384f8c2a2bb49079edbd588cf5767;
PyObject *const_str_plain_user_runtime_dir;
PyObject *const_str_digest_dd9add8832f7d6248ea8afd80bb101f2;
PyObject *const_str_plain_android;
PyObject *const_tuple_str_plain_mActivity_tuple;
PyObject *const_str_plain_mActivity;
PyObject *const_str_digest_f5cffff30dbfdc7d5397bfab6d2742a0;
PyObject *const_str_plain_getApplicationContext;
PyObject *const_str_plain_getFilesDir;
PyObject *const_str_plain_getParentFile;
PyObject *const_str_plain_getAbsolutePath;
PyObject *const_str_plain_jnius;
PyObject *const_tuple_str_plain_autoclass_tuple;
PyObject *const_str_plain_autoclass;
PyObject *const_tuple_str_digest_f5cffff30dbfdc7d5397bfab6d2742a0_tuple;
PyObject *const_str_plain_re;
PyObject *const_tuple_str_digest_d5a4d4bfb7fbe57918f378bcf3f41843_tuple;
PyObject *const_str_plain_pattern;
PyObject *const_str_plain_match;
PyObject *const_tuple_str_digest_0bfcf269629626c3e3a28a177837b532_tuple;
PyObject *const_tuple_str_digest_4a3c8a18e5e95adb558bdc59fb4b83a6_tuple;
PyObject *const_str_digest_eff92bee8ac54155d2b764053fe55ad9;
PyObject *const_tuple_str_digest_892f97a709ebc7748638768195f5f448_tuple;
PyObject *const_str_plain_getExternalFilesDir;
PyObject *const_str_plain_DIRECTORY_DOCUMENTS;
PyObject *const_str_digest_22810745e7a5c8f5e1131feaaa2f4ba4;
PyObject *const_str_digest_d481dfa5cb1d7410c5b1537a36032e9f;
PyObject *const_str_plain_DIRECTORY_DOWNLOADS;
PyObject *const_str_digest_fec6dfba36222f84241a70b1bff92ec5;
PyObject *const_str_digest_dcbf1bd9be3132488ab2253a929beaf7;
PyObject *const_str_plain_DIRECTORY_PICTURES;
PyObject *const_str_digest_4c9ad605cf4976bde5adf99babfbe57b;
PyObject *const_str_digest_cd357259b09d2cc8e63d654fe7094148;
PyObject *const_str_plain_DIRECTORY_DCIM;
PyObject *const_str_digest_7354566455d7ff64d0356e785826d889;
PyObject *const_str_digest_d46878c0dddd1b5061163cfdeb766f02;
PyObject *const_str_plain_DIRECTORY_MUSIC;
PyObject *const_str_digest_2f8d033f72f1e53901befd898c1c5150;
PyObject *const_str_digest_87ae4572e95ae7abcc3fc7d1d08bbac3;
PyObject *const_str_digest_bcc52924f0e23b9c6a5efe1fadcaa165;
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
PyObject *const_str_plain_Android;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_a9897efd4a2697dd3745fb758f5e6366;
PyObject *const_str_digest_b41630b8703d33dfe116bca61f2e3768;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_14;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_property;
PyObject *const_dict_e8d16ece775461636da8aedac2f07d6b;
PyObject *const_str_digest_cf459c6600db7a5f75b852896b910db8;
PyObject *const_str_plain_site_data_dir;
PyObject *const_str_digest_a656117684c26191ac018187f1fd1011;
PyObject *const_str_digest_3f03e5d0e7d6a7e4b1c95410f00af7ed;
PyObject *const_str_plain_site_config_dir;
PyObject *const_str_digest_4ba3d6693e9c0fcb8bf34b0c06aaaf69;
PyObject *const_str_digest_4ab5b56d44ea948aaf5f3eb05b9408d0;
PyObject *const_str_plain_site_cache_dir;
PyObject *const_str_digest_0f8f1d7a28438f379f436819795793d6;
PyObject *const_str_plain_user_state_dir;
PyObject *const_str_digest_33602506d12c8d946d4722cecbc9bd5f;
PyObject *const_str_plain_user_log_dir;
PyObject *const_str_digest_d22d52b77eede3a6db649fe374cebd3c;
PyObject *const_str_plain_user_documents_dir;
PyObject *const_str_digest_1cb3ae0d9250887f7b4aa3082aea8521;
PyObject *const_str_plain_user_downloads_dir;
PyObject *const_str_digest_af575e08da50a2e66a937dff94db5820;
PyObject *const_str_plain_user_pictures_dir;
PyObject *const_str_digest_a75f8cffaaa7fc9cbf0e90cd8c8f4223;
PyObject *const_str_plain_user_videos_dir;
PyObject *const_str_digest_ee046e64de695a13c5d93adfb17a96e5;
PyObject *const_str_plain_user_music_dir;
PyObject *const_str_digest_559c3f94d931c5d9444158748e7283bd;
PyObject *const_str_digest_60e5b4856a46174510a47ef718b46caa;
PyObject *const_str_digest_2865c1bc2d884b935de187d63f9ac0ff;
PyObject *const_str_plain_user_desktop_dir;
PyObject *const_str_digest_f219b6050a3a5b336b45ae3783523385;
PyObject *const_str_digest_8fa74ab464805664c503e9087592f952;
PyObject *const_str_plain_site_runtime_dir;
PyObject *const_str_digest_469246c88de26f23d7fe447be002f0ed;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_tuple_int_pos_1_tuple;
PyObject *const_tuple_str_plain_maxsize_tuple;
PyObject *const_dict_fb2aef63cbe899ae3db5a90391a96071;
PyObject *const_str_digest_1b71285e729b52eeacf86af8f8cab96f;
PyObject *const_str_digest_f4c061c48ba2116f56835af91014b9ef;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_113ae4006967a9d5cd77d3020804529e_tuple;
PyObject *const_tuple_dc267c31cfee2432e2d40cb01749dc09_tuple;
PyObject *const_tuple_f81009275f73685600b5ffed10a1ff2d_tuple;
PyObject *const_tuple_f02190d6ad7cb13bcdbc9afc3bd8fe1d_tuple;
PyObject *const_tuple_2a469b3ee0743368ced617b83f4c5558_tuple;
PyObject *const_tuple_547ec2dc6ba52fc03c38be5960c4ed66_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_path_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[140];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("platformdirs.android"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain__append_app_name_and_version);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_cast);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_str);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain__android_folder);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_files);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_249a838e487c34bc9e0b4cde310e843d);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_data_dir);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_136455292a3e15956a0fa684fa617866);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_shared_prefs);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_d427c807a4b4c868f7ed6e31eb1e15f3);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_config_dir);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_736b48e19a6495d22599f72b237881cc);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_cache);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_9b19ad2440f6f6dd13952f9ea2b38c90);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_cache_dir);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_3ef3fce76f33660759bf5667f297951e);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_68cb5fd9a9688506895787dd74fddac5);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_opinion);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_join);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_log);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_1b4710591d9501d3cffb9d8858c351d1);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain__android_documents_folder);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_8e5d87b88efdca500978ffd5ca673b0e);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain__android_downloads_folder);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_7ea4a4e4415bbb6149bd5959426cb160);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain__android_pictures_folder);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_b6da4007f0e9cea1da494e27e8563c95);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain__android_videos_folder);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_a7fd13679d22374f91bef217cda30a61);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain__android_music_folder);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_74b22351309c871baf9b5d923fb065b8);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_tmp);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_79f384f8c2a2bb49079edbd588cf5767);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_runtime_dir);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_dd9add8832f7d6248ea8afd80bb101f2);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_android);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_mActivity_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_mActivity);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_f5cffff30dbfdc7d5397bfab6d2742a0);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_getApplicationContext);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_getFilesDir);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_getParentFile);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_getAbsolutePath);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_jnius);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_autoclass_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_autoclass);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_f5cffff30dbfdc7d5397bfab6d2742a0_tuple);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d5a4d4bfb7fbe57918f378bcf3f41843_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_pattern);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_match);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_0bfcf269629626c3e3a28a177837b532_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_4a3c8a18e5e95adb558bdc59fb4b83a6_tuple);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_eff92bee8ac54155d2b764053fe55ad9);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_892f97a709ebc7748638768195f5f448_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_getExternalFilesDir);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_DIRECTORY_DOCUMENTS);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_22810745e7a5c8f5e1131feaaa2f4ba4);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_d481dfa5cb1d7410c5b1537a36032e9f);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_DIRECTORY_DOWNLOADS);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_fec6dfba36222f84241a70b1bff92ec5);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_dcbf1bd9be3132488ab2253a929beaf7);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_DIRECTORY_PICTURES);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_4c9ad605cf4976bde5adf99babfbe57b);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_cd357259b09d2cc8e63d654fe7094148);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_DIRECTORY_DCIM);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_7354566455d7ff64d0356e785826d889);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_d46878c0dddd1b5061163cfdeb766f02);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_DIRECTORY_MUSIC);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_2f8d033f72f1e53901befd898c1c5150);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_87ae4572e95ae7abcc3fc7d1d08bbac3);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_bcc52924f0e23b9c6a5efe1fadcaa165);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_lru_cache);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_api);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PlatformDirsABC_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_PlatformDirsABC);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_Android);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_a9897efd4a2697dd3745fb758f5e6366);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_digest_b41630b8703d33dfe116bca61f2e3768);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_int_pos_14);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_digest_cf459c6600db7a5f75b852896b910db8);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_site_data_dir);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_a656117684c26191ac018187f1fd1011);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_3f03e5d0e7d6a7e4b1c95410f00af7ed);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_site_config_dir);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_4ba3d6693e9c0fcb8bf34b0c06aaaf69);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_digest_4ab5b56d44ea948aaf5f3eb05b9408d0);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_site_cache_dir);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_0f8f1d7a28438f379f436819795793d6);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_state_dir);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_digest_33602506d12c8d946d4722cecbc9bd5f);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_log_dir);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_digest_d22d52b77eede3a6db649fe374cebd3c);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_documents_dir);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_1cb3ae0d9250887f7b4aa3082aea8521);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_downloads_dir);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_af575e08da50a2e66a937dff94db5820);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_pictures_dir);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_a75f8cffaaa7fc9cbf0e90cd8c8f4223);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_videos_dir);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_ee046e64de695a13c5d93adfb17a96e5);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_music_dir);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_digest_559c3f94d931c5d9444158748e7283bd);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_60e5b4856a46174510a47ef718b46caa);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_digest_2865c1bc2d884b935de187d63f9ac0ff);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_desktop_dir);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_digest_f219b6050a3a5b336b45ae3783523385);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_digest_8fa74ab464805664c503e9087592f952);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_site_runtime_dir);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_digest_469246c88de26f23d7fe447be002f0ed);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maxsize_tuple);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_1b71285e729b52eeacf86af8f8cab96f);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_digest_f4c061c48ba2116f56835af91014b9ef);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_tuple_113ae4006967a9d5cd77d3020804529e_tuple);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_tuple_dc267c31cfee2432e2d40cb01749dc09_tuple);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_tuple_f81009275f73685600b5ffed10a1ff2d_tuple);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_tuple_f02190d6ad7cb13bcdbc9afc3bd8fe1d_tuple);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_tuple_2a469b3ee0743368ced617b83f4c5558_tuple);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_tuple_547ec2dc6ba52fc03c38be5960c4ed66_tuple);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_path_tuple);
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
void checkModuleConstants_platformdirs$android(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain__append_app_name_and_version));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__append_app_name_and_version);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_cast));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cast);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_str));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_str);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain__android_folder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__android_folder);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_files));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_files);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_249a838e487c34bc9e0b4cde310e843d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_249a838e487c34bc9e0b4cde310e843d);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_data_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_data_dir);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_136455292a3e15956a0fa684fa617866));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_136455292a3e15956a0fa684fa617866);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_shared_prefs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shared_prefs);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_d427c807a4b4c868f7ed6e31eb1e15f3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d427c807a4b4c868f7ed6e31eb1e15f3);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_config_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_config_dir);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_736b48e19a6495d22599f72b237881cc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_736b48e19a6495d22599f72b237881cc);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_cache));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cache);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_9b19ad2440f6f6dd13952f9ea2b38c90));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9b19ad2440f6f6dd13952f9ea2b38c90);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_cache_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_cache_dir);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_3ef3fce76f33660759bf5667f297951e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3ef3fce76f33660759bf5667f297951e);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_68cb5fd9a9688506895787dd74fddac5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_68cb5fd9a9688506895787dd74fddac5);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_opinion));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_opinion);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_join));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_join);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_log));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_log);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_1b4710591d9501d3cffb9d8858c351d1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1b4710591d9501d3cffb9d8858c351d1);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain__android_documents_folder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__android_documents_folder);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_8e5d87b88efdca500978ffd5ca673b0e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8e5d87b88efdca500978ffd5ca673b0e);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain__android_downloads_folder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__android_downloads_folder);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_7ea4a4e4415bbb6149bd5959426cb160));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7ea4a4e4415bbb6149bd5959426cb160);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain__android_pictures_folder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__android_pictures_folder);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_b6da4007f0e9cea1da494e27e8563c95));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b6da4007f0e9cea1da494e27e8563c95);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain__android_videos_folder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__android_videos_folder);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_a7fd13679d22374f91bef217cda30a61));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a7fd13679d22374f91bef217cda30a61);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain__android_music_folder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__android_music_folder);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_74b22351309c871baf9b5d923fb065b8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_74b22351309c871baf9b5d923fb065b8);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_tmp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tmp);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_79f384f8c2a2bb49079edbd588cf5767));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_79f384f8c2a2bb49079edbd588cf5767);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_runtime_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_runtime_dir);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_dd9add8832f7d6248ea8afd80bb101f2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dd9add8832f7d6248ea8afd80bb101f2);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_android));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_android);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_mActivity_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_mActivity_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_mActivity));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mActivity);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_f5cffff30dbfdc7d5397bfab6d2742a0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f5cffff30dbfdc7d5397bfab6d2742a0);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_getApplicationContext));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getApplicationContext);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_getFilesDir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getFilesDir);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_getParentFile));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getParentFile);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_getAbsolutePath));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getAbsolutePath);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_jnius));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_jnius);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_autoclass_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_autoclass_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_autoclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_autoclass);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_f5cffff30dbfdc7d5397bfab6d2742a0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_f5cffff30dbfdc7d5397bfab6d2742a0_tuple);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_re);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d5a4d4bfb7fbe57918f378bcf3f41843_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_d5a4d4bfb7fbe57918f378bcf3f41843_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_pattern));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pattern);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_match));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_match);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_0bfcf269629626c3e3a28a177837b532_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_0bfcf269629626c3e3a28a177837b532_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_4a3c8a18e5e95adb558bdc59fb4b83a6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_4a3c8a18e5e95adb558bdc59fb4b83a6_tuple);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_eff92bee8ac54155d2b764053fe55ad9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eff92bee8ac54155d2b764053fe55ad9);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_892f97a709ebc7748638768195f5f448_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_892f97a709ebc7748638768195f5f448_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_getExternalFilesDir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getExternalFilesDir);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_DIRECTORY_DOCUMENTS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DIRECTORY_DOCUMENTS);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_22810745e7a5c8f5e1131feaaa2f4ba4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_22810745e7a5c8f5e1131feaaa2f4ba4);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_d481dfa5cb1d7410c5b1537a36032e9f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d481dfa5cb1d7410c5b1537a36032e9f);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_DIRECTORY_DOWNLOADS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DIRECTORY_DOWNLOADS);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_fec6dfba36222f84241a70b1bff92ec5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fec6dfba36222f84241a70b1bff92ec5);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_dcbf1bd9be3132488ab2253a929beaf7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dcbf1bd9be3132488ab2253a929beaf7);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_DIRECTORY_PICTURES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DIRECTORY_PICTURES);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_4c9ad605cf4976bde5adf99babfbe57b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4c9ad605cf4976bde5adf99babfbe57b);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_cd357259b09d2cc8e63d654fe7094148));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cd357259b09d2cc8e63d654fe7094148);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_DIRECTORY_DCIM));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DIRECTORY_DCIM);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_7354566455d7ff64d0356e785826d889));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7354566455d7ff64d0356e785826d889);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_d46878c0dddd1b5061163cfdeb766f02));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d46878c0dddd1b5061163cfdeb766f02);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_DIRECTORY_MUSIC));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DIRECTORY_MUSIC);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_2f8d033f72f1e53901befd898c1c5150));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2f8d033f72f1e53901befd898c1c5150);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_87ae4572e95ae7abcc3fc7d1d08bbac3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_87ae4572e95ae7abcc3fc7d1d08bbac3);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_bcc52924f0e23b9c6a5efe1fadcaa165));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bcc52924f0e23b9c6a5efe1fadcaa165);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_lru_cache));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lru_cache);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_api));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_api);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PlatformDirsABC_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_PlatformDirsABC_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_PlatformDirsABC));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PlatformDirsABC);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_Android));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Android);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_a9897efd4a2697dd3745fb758f5e6366));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a9897efd4a2697dd3745fb758f5e6366);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_digest_b41630b8703d33dfe116bca61f2e3768));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b41630b8703d33dfe116bca61f2e3768);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_int_pos_14));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_14);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_digest_cf459c6600db7a5f75b852896b910db8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cf459c6600db7a5f75b852896b910db8);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_site_data_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_site_data_dir);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_a656117684c26191ac018187f1fd1011));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a656117684c26191ac018187f1fd1011);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_3f03e5d0e7d6a7e4b1c95410f00af7ed));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3f03e5d0e7d6a7e4b1c95410f00af7ed);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_site_config_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_site_config_dir);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_4ba3d6693e9c0fcb8bf34b0c06aaaf69));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4ba3d6693e9c0fcb8bf34b0c06aaaf69);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_digest_4ab5b56d44ea948aaf5f3eb05b9408d0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4ab5b56d44ea948aaf5f3eb05b9408d0);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_site_cache_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_site_cache_dir);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_0f8f1d7a28438f379f436819795793d6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0f8f1d7a28438f379f436819795793d6);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_state_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_state_dir);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_digest_33602506d12c8d946d4722cecbc9bd5f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_33602506d12c8d946d4722cecbc9bd5f);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_log_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_log_dir);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_digest_d22d52b77eede3a6db649fe374cebd3c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d22d52b77eede3a6db649fe374cebd3c);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_documents_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_documents_dir);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_1cb3ae0d9250887f7b4aa3082aea8521));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1cb3ae0d9250887f7b4aa3082aea8521);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_downloads_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_downloads_dir);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_af575e08da50a2e66a937dff94db5820));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_af575e08da50a2e66a937dff94db5820);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_pictures_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_pictures_dir);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_a75f8cffaaa7fc9cbf0e90cd8c8f4223));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a75f8cffaaa7fc9cbf0e90cd8c8f4223);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_videos_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_videos_dir);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_ee046e64de695a13c5d93adfb17a96e5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ee046e64de695a13c5d93adfb17a96e5);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_music_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_music_dir);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_digest_559c3f94d931c5d9444158748e7283bd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_559c3f94d931c5d9444158748e7283bd);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_60e5b4856a46174510a47ef718b46caa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_60e5b4856a46174510a47ef718b46caa);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_digest_2865c1bc2d884b935de187d63f9ac0ff));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2865c1bc2d884b935de187d63f9ac0ff);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_desktop_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_desktop_dir);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_digest_f219b6050a3a5b336b45ae3783523385));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f219b6050a3a5b336b45ae3783523385);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_digest_8fa74ab464805664c503e9087592f952));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8fa74ab464805664c503e9087592f952);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_site_runtime_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_site_runtime_dir);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_digest_469246c88de26f23d7fe447be002f0ed));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_469246c88de26f23d7fe447be002f0ed);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_1_tuple);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maxsize_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_maxsize_tuple);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071));
CHECK_OBJECT_DEEP(mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_1b71285e729b52eeacf86af8f8cab96f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1b71285e729b52eeacf86af8f8cab96f);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_digest_f4c061c48ba2116f56835af91014b9ef));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f4c061c48ba2116f56835af91014b9ef);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_tuple_113ae4006967a9d5cd77d3020804529e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_113ae4006967a9d5cd77d3020804529e_tuple);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_tuple_dc267c31cfee2432e2d40cb01749dc09_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_dc267c31cfee2432e2d40cb01749dc09_tuple);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_tuple_f81009275f73685600b5ffed10a1ff2d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f81009275f73685600b5ffed10a1ff2d_tuple);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_tuple_f02190d6ad7cb13bcdbc9afc3bd8fe1d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f02190d6ad7cb13bcdbc9afc3bd8fe1d_tuple);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_tuple_2a469b3ee0743368ced617b83f4c5558_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2a469b3ee0743368ced617b83f4c5558_tuple);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_tuple_547ec2dc6ba52fc03c38be5960c4ed66_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_547ec2dc6ba52fc03c38be5960c4ed66_tuple);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_path_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 11
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
static PyObject *module_var_accessor_platformdirs$android$PlatformDirsABC(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_platformdirs$android->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_platformdirs$android->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain_PlatformDirsABC);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_platformdirs$android->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain_PlatformDirsABC);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain_PlatformDirsABC);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PlatformDirsABC);
    }

    return result;
}

static PyObject *module_var_accessor_platformdirs$android$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_platformdirs$android->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_platformdirs$android->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$android, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_platformdirs$android->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$android, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_platformdirs$android, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_platformdirs$android$_android_documents_folder(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_platformdirs$android->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_platformdirs$android->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain__android_documents_folder);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_platformdirs$android->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__android_documents_folder);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__android_documents_folder, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__android_documents_folder);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__android_documents_folder, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain__android_documents_folder);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain__android_documents_folder);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__android_documents_folder);
    }

    return result;
}

static PyObject *module_var_accessor_platformdirs$android$_android_downloads_folder(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_platformdirs$android->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_platformdirs$android->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain__android_downloads_folder);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_platformdirs$android->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__android_downloads_folder);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__android_downloads_folder, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__android_downloads_folder);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__android_downloads_folder, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain__android_downloads_folder);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain__android_downloads_folder);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__android_downloads_folder);
    }

    return result;
}

static PyObject *module_var_accessor_platformdirs$android$_android_folder(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_platformdirs$android->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_platformdirs$android->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain__android_folder);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_platformdirs$android->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__android_folder);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__android_folder, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__android_folder);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__android_folder, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain__android_folder);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain__android_folder);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__android_folder);
    }

    return result;
}

static PyObject *module_var_accessor_platformdirs$android$_android_music_folder(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_platformdirs$android->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_platformdirs$android->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain__android_music_folder);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_platformdirs$android->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__android_music_folder);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__android_music_folder, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__android_music_folder);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__android_music_folder, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain__android_music_folder);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain__android_music_folder);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__android_music_folder);
    }

    return result;
}

static PyObject *module_var_accessor_platformdirs$android$_android_pictures_folder(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_platformdirs$android->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_platformdirs$android->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain__android_pictures_folder);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_platformdirs$android->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__android_pictures_folder);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__android_pictures_folder, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__android_pictures_folder);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__android_pictures_folder, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain__android_pictures_folder);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain__android_pictures_folder);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__android_pictures_folder);
    }

    return result;
}

static PyObject *module_var_accessor_platformdirs$android$_android_videos_folder(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_platformdirs$android->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_platformdirs$android->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain__android_videos_folder);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_platformdirs$android->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__android_videos_folder);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__android_videos_folder, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__android_videos_folder);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__android_videos_folder, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain__android_videos_folder);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain__android_videos_folder);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__android_videos_folder);
    }

    return result;
}

static PyObject *module_var_accessor_platformdirs$android$cast(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_platformdirs$android->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_platformdirs$android->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_platformdirs$android->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cast);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cast, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cast);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cast, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }

    return result;
}

static PyObject *module_var_accessor_platformdirs$android$lru_cache(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_platformdirs$android->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_platformdirs$android->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_platformdirs$android->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
    }

    return result;
}

static PyObject *module_var_accessor_platformdirs$android$re(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_platformdirs$android->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_platformdirs$android->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_platformdirs$android->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_0bd192b9acc03f64e1816bfe24b951ab;
static PyCodeObject *code_objects_621b3c360713c98b75466577c120f220;
static PyCodeObject *code_objects_fd33d1e3c3e787621ec06afedacb7351;
static PyCodeObject *code_objects_b9b3e68297ff7956a7c6f0cace6639a7;
static PyCodeObject *code_objects_c320e974e917d61facf16bacb48e95a2;
static PyCodeObject *code_objects_152b5039db42c0f4eda00e5e1b1c2a43;
static PyCodeObject *code_objects_c77f92d4f88f91c56cd7bd193635d56e;
static PyCodeObject *code_objects_43866977ed8d7ed701faea1e07d1efed;
static PyCodeObject *code_objects_372ba6fb914c25f439f80186dd2b0112;
static PyCodeObject *code_objects_aad7c197b85f840ba09afac4576ea19b;
static PyCodeObject *code_objects_f7aac82d603ff40a4ea99b6a814eafe3;
static PyCodeObject *code_objects_a31881f2e521451668b5e053600dc245;
static PyCodeObject *code_objects_445a30447a948cfadbab425f6d62373b;
static PyCodeObject *code_objects_5a25b7f39bdad9cbdcaba0c0e68de88d;
static PyCodeObject *code_objects_4c14cf1b34b9563a15451c2f44b695ff;
static PyCodeObject *code_objects_acff83db59fc3053b23ad3d7878b7285;
static PyCodeObject *code_objects_04fdcd9bc25d37fcea3656ae969b9d4e;
static PyCodeObject *code_objects_5a199e8d0d90b18468e9db540412a396;
static PyCodeObject *code_objects_04daeb2ff40ee5fac397366105bb250b;
static PyCodeObject *code_objects_94d1ccd58efbd1a2ab033aebd84db602;
static PyCodeObject *code_objects_b8d592df15b6c34c42e521effbd6fba9;
static PyCodeObject *code_objects_6f53042f0eb7504d9a0d9417b6f844d7;
static PyCodeObject *code_objects_c8b6f97108451a3cb6d3a44463e88f4b;
static PyCodeObject *code_objects_ed5074d5472b1e285fca7446f380f7d0;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_1b71285e729b52eeacf86af8f8cab96f); CHECK_OBJECT(module_filename_obj);
code_objects_0bd192b9acc03f64e1816bfe24b951ab = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_f4c061c48ba2116f56835af91014b9ef, mod_consts.const_str_digest_f4c061c48ba2116f56835af91014b9ef, NULL, NULL, 0, 0, 0);
code_objects_621b3c360713c98b75466577c120f220 = MAKE_CODE_OBJECT(module_filename_obj, 14, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Android, mod_consts.const_str_plain_Android, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_fd33d1e3c3e787621ec06afedacb7351 = MAKE_CODE_OBJECT(module_filename_obj, 168, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__android_documents_folder, mod_consts.const_str_plain__android_documents_folder, mod_consts.const_tuple_113ae4006967a9d5cd77d3020804529e_tuple, NULL, 0, 0, 0);
code_objects_b9b3e68297ff7956a7c6f0cace6639a7 = MAKE_CODE_OBJECT(module_filename_obj, 184, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__android_downloads_folder, mod_consts.const_str_plain__android_downloads_folder, mod_consts.const_tuple_dc267c31cfee2432e2d40cb01749dc09_tuple, NULL, 0, 0, 0);
code_objects_c320e974e917d61facf16bacb48e95a2 = MAKE_CODE_OBJECT(module_filename_obj, 120, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__android_folder, mod_consts.const_str_plain__android_folder, mod_consts.const_tuple_f81009275f73685600b5ffed10a1ff2d_tuple, NULL, 0, 0, 0);
code_objects_152b5039db42c0f4eda00e5e1b1c2a43 = MAKE_CODE_OBJECT(module_filename_obj, 232, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__android_music_folder, mod_consts.const_str_plain__android_music_folder, mod_consts.const_tuple_f02190d6ad7cb13bcdbc9afc3bd8fe1d_tuple, NULL, 0, 0, 0);
code_objects_c77f92d4f88f91c56cd7bd193635d56e = MAKE_CODE_OBJECT(module_filename_obj, 200, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__android_pictures_folder, mod_consts.const_str_plain__android_pictures_folder, mod_consts.const_tuple_2a469b3ee0743368ced617b83f4c5558_tuple, NULL, 0, 0, 0);
code_objects_43866977ed8d7ed701faea1e07d1efed = MAKE_CODE_OBJECT(module_filename_obj, 216, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__android_videos_folder, mod_consts.const_str_plain__android_videos_folder, mod_consts.const_tuple_547ec2dc6ba52fc03c38be5960c4ed66_tuple, NULL, 0, 0, 0);
code_objects_372ba6fb914c25f439f80186dd2b0112 = MAKE_CODE_OBJECT(module_filename_obj, 52, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_site_cache_dir, mod_consts.const_str_digest_0f8f1d7a28438f379f436819795793d6, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_aad7c197b85f840ba09afac4576ea19b = MAKE_CODE_OBJECT(module_filename_obj, 42, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_site_config_dir, mod_consts.const_str_digest_4ba3d6693e9c0fcb8bf34b0c06aaaf69, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_f7aac82d603ff40a4ea99b6a814eafe3 = MAKE_CODE_OBJECT(module_filename_obj, 29, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_site_data_dir, mod_consts.const_str_digest_a656117684c26191ac018187f1fd1011, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_a31881f2e521451668b5e053600dc245 = MAKE_CODE_OBJECT(module_filename_obj, 114, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_site_runtime_dir, mod_consts.const_str_digest_469246c88de26f23d7fe447be002f0ed, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_445a30447a948cfadbab425f6d62373b = MAKE_CODE_OBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_cache_dir, mod_consts.const_str_digest_4ab5b56d44ea948aaf5f3eb05b9408d0, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_5a25b7f39bdad9cbdcaba0c0e68de88d = MAKE_CODE_OBJECT(module_filename_obj, 34, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_config_dir, mod_consts.const_str_digest_3f03e5d0e7d6a7e4b1c95410f00af7ed, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_4c14cf1b34b9563a15451c2f44b695ff = MAKE_CODE_OBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_data_dir, mod_consts.const_str_digest_cf459c6600db7a5f75b852896b910db8, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_acff83db59fc3053b23ad3d7878b7285 = MAKE_CODE_OBJECT(module_filename_obj, 98, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_desktop_dir, mod_consts.const_str_digest_f219b6050a3a5b336b45ae3783523385, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_04fdcd9bc25d37fcea3656ae969b9d4e = MAKE_CODE_OBJECT(module_filename_obj, 73, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_documents_dir, mod_consts.const_str_digest_1cb3ae0d9250887f7b4aa3082aea8521, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_5a199e8d0d90b18468e9db540412a396 = MAKE_CODE_OBJECT(module_filename_obj, 78, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_downloads_dir, mod_consts.const_str_digest_af575e08da50a2e66a937dff94db5820, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_04daeb2ff40ee5fac397366105bb250b = MAKE_CODE_OBJECT(module_filename_obj, 62, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_log_dir, mod_consts.const_str_digest_d22d52b77eede3a6db649fe374cebd3c, mod_consts.const_tuple_str_plain_self_str_plain_path_tuple, NULL, 1, 0, 0);
code_objects_94d1ccd58efbd1a2ab033aebd84db602 = MAKE_CODE_OBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_music_dir, mod_consts.const_str_digest_559c3f94d931c5d9444158748e7283bd, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_b8d592df15b6c34c42e521effbd6fba9 = MAKE_CODE_OBJECT(module_filename_obj, 83, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_pictures_dir, mod_consts.const_str_digest_a75f8cffaaa7fc9cbf0e90cd8c8f4223, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_6f53042f0eb7504d9a0d9417b6f844d7 = MAKE_CODE_OBJECT(module_filename_obj, 103, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_runtime_dir, mod_consts.const_str_digest_8fa74ab464805664c503e9087592f952, mod_consts.const_tuple_str_plain_self_str_plain_path_tuple, NULL, 1, 0, 0);
code_objects_c8b6f97108451a3cb6d3a44463e88f4b = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_state_dir, mod_consts.const_str_digest_33602506d12c8d946d4722cecbc9bd5f, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_ed5074d5472b1e285fca7446f380f7d0 = MAKE_CODE_OBJECT(module_filename_obj, 88, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_videos_dir, mod_consts.const_str_digest_ee046e64de695a13c5d93adfb17a96e5, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__10_user_downloads_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__11_user_pictures_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__12_user_videos_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__13_user_music_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__14_user_desktop_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__15_user_runtime_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__16_site_runtime_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__17__android_folder(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__18__android_documents_folder(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__19__android_downloads_folder(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__1_user_data_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__20__android_pictures_folder(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__21__android_videos_folder(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__22__android_music_folder(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__2_site_data_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__3_user_config_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__4_site_config_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__5_user_cache_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__6_site_cache_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__7_user_state_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__8_user_log_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__9_user_documents_dir(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_platformdirs$android$$$function__1_user_data_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$android$$$function__1_user_data_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$android$$$function__1_user_data_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$android$$$function__1_user_data_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$android$$$function__1_user_data_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$android$$$function__1_user_data_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$android$$$function__1_user_data_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_4c14cf1b34b9563a15451c2f44b695ff, module_platformdirs$android, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$android$$$function__1_user_data_dir->m_type_description == NULL);
frame_frame_platformdirs$android$$$function__1_user_data_dir = cache_frame_frame_platformdirs$android$$$function__1_user_data_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$android$$$function__1_user_data_dir);
assert(Py_REFCNT(frame_frame_platformdirs$android$$$function__1_user_data_dir) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__append_app_name_and_version);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = module_var_accessor_platformdirs$android$cast(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 26;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = mod_consts.const_str_plain_str;
tmp_called_value_3 = module_var_accessor_platformdirs$android$_android_folder(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__android_folder);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 26;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$android$$$function__1_user_data_dir->m_frame.f_lineno = 26;
tmp_args_element_value_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 26;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$android$$$function__1_user_data_dir->m_frame.f_lineno = 26;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 26;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = mod_consts.const_str_plain_files;
frame_frame_platformdirs$android$$$function__1_user_data_dir->m_frame.f_lineno = 26;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$android$$$function__1_user_data_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$android$$$function__1_user_data_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$android$$$function__1_user_data_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$android$$$function__1_user_data_dir,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$android$$$function__1_user_data_dir == cache_frame_frame_platformdirs$android$$$function__1_user_data_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$android$$$function__1_user_data_dir);
    cache_frame_frame_platformdirs$android$$$function__1_user_data_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$android$$$function__1_user_data_dir);

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


static PyObject *impl_platformdirs$android$$$function__2_site_data_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$android$$$function__2_site_data_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$android$$$function__2_site_data_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$android$$$function__2_site_data_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$android$$$function__2_site_data_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$android$$$function__2_site_data_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$android$$$function__2_site_data_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_f7aac82d603ff40a4ea99b6a814eafe3, module_platformdirs$android, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$android$$$function__2_site_data_dir->m_type_description == NULL);
frame_frame_platformdirs$android$$$function__2_site_data_dir = cache_frame_frame_platformdirs$android$$$function__2_site_data_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$android$$$function__2_site_data_dir);
assert(Py_REFCNT(frame_frame_platformdirs$android$$$function__2_site_data_dir) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_data_dir);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$android$$$function__2_site_data_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$android$$$function__2_site_data_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$android$$$function__2_site_data_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$android$$$function__2_site_data_dir,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$android$$$function__2_site_data_dir == cache_frame_frame_platformdirs$android$$$function__2_site_data_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$android$$$function__2_site_data_dir);
    cache_frame_frame_platformdirs$android$$$function__2_site_data_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$android$$$function__2_site_data_dir);

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


static PyObject *impl_platformdirs$android$$$function__3_user_config_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$android$$$function__3_user_config_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$android$$$function__3_user_config_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$android$$$function__3_user_config_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$android$$$function__3_user_config_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$android$$$function__3_user_config_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$android$$$function__3_user_config_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_5a25b7f39bdad9cbdcaba0c0e68de88d, module_platformdirs$android, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$android$$$function__3_user_config_dir->m_type_description == NULL);
frame_frame_platformdirs$android$$$function__3_user_config_dir = cache_frame_frame_platformdirs$android$$$function__3_user_config_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$android$$$function__3_user_config_dir);
assert(Py_REFCNT(frame_frame_platformdirs$android$$$function__3_user_config_dir) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__append_app_name_and_version);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = module_var_accessor_platformdirs$android$cast(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 39;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = mod_consts.const_str_plain_str;
tmp_called_value_3 = module_var_accessor_platformdirs$android$_android_folder(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__android_folder);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 39;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$android$$$function__3_user_config_dir->m_frame.f_lineno = 39;
tmp_args_element_value_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 39;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$android$$$function__3_user_config_dir->m_frame.f_lineno = 39;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 39;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = mod_consts.const_str_plain_shared_prefs;
frame_frame_platformdirs$android$$$function__3_user_config_dir->m_frame.f_lineno = 39;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$android$$$function__3_user_config_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$android$$$function__3_user_config_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$android$$$function__3_user_config_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$android$$$function__3_user_config_dir,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$android$$$function__3_user_config_dir == cache_frame_frame_platformdirs$android$$$function__3_user_config_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$android$$$function__3_user_config_dir);
    cache_frame_frame_platformdirs$android$$$function__3_user_config_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$android$$$function__3_user_config_dir);

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


static PyObject *impl_platformdirs$android$$$function__4_site_config_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$android$$$function__4_site_config_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$android$$$function__4_site_config_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$android$$$function__4_site_config_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$android$$$function__4_site_config_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$android$$$function__4_site_config_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$android$$$function__4_site_config_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_aad7c197b85f840ba09afac4576ea19b, module_platformdirs$android, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$android$$$function__4_site_config_dir->m_type_description == NULL);
frame_frame_platformdirs$android$$$function__4_site_config_dir = cache_frame_frame_platformdirs$android$$$function__4_site_config_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$android$$$function__4_site_config_dir);
assert(Py_REFCNT(frame_frame_platformdirs$android$$$function__4_site_config_dir) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_config_dir);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$android$$$function__4_site_config_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$android$$$function__4_site_config_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$android$$$function__4_site_config_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$android$$$function__4_site_config_dir,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$android$$$function__4_site_config_dir == cache_frame_frame_platformdirs$android$$$function__4_site_config_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$android$$$function__4_site_config_dir);
    cache_frame_frame_platformdirs$android$$$function__4_site_config_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$android$$$function__4_site_config_dir);

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


static PyObject *impl_platformdirs$android$$$function__5_user_cache_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$android$$$function__5_user_cache_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$android$$$function__5_user_cache_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$android$$$function__5_user_cache_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$android$$$function__5_user_cache_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$android$$$function__5_user_cache_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$android$$$function__5_user_cache_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_445a30447a948cfadbab425f6d62373b, module_platformdirs$android, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$android$$$function__5_user_cache_dir->m_type_description == NULL);
frame_frame_platformdirs$android$$$function__5_user_cache_dir = cache_frame_frame_platformdirs$android$$$function__5_user_cache_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$android$$$function__5_user_cache_dir);
assert(Py_REFCNT(frame_frame_platformdirs$android$$$function__5_user_cache_dir) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__append_app_name_and_version);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = module_var_accessor_platformdirs$android$cast(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 49;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = mod_consts.const_str_plain_str;
tmp_called_value_3 = module_var_accessor_platformdirs$android$_android_folder(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__android_folder);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 49;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$android$$$function__5_user_cache_dir->m_frame.f_lineno = 49;
tmp_args_element_value_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 49;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$android$$$function__5_user_cache_dir->m_frame.f_lineno = 49;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 49;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = mod_consts.const_str_plain_cache;
frame_frame_platformdirs$android$$$function__5_user_cache_dir->m_frame.f_lineno = 49;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$android$$$function__5_user_cache_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$android$$$function__5_user_cache_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$android$$$function__5_user_cache_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$android$$$function__5_user_cache_dir,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$android$$$function__5_user_cache_dir == cache_frame_frame_platformdirs$android$$$function__5_user_cache_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$android$$$function__5_user_cache_dir);
    cache_frame_frame_platformdirs$android$$$function__5_user_cache_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$android$$$function__5_user_cache_dir);

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


static PyObject *impl_platformdirs$android$$$function__6_site_cache_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$android$$$function__6_site_cache_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$android$$$function__6_site_cache_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$android$$$function__6_site_cache_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$android$$$function__6_site_cache_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$android$$$function__6_site_cache_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$android$$$function__6_site_cache_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_372ba6fb914c25f439f80186dd2b0112, module_platformdirs$android, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$android$$$function__6_site_cache_dir->m_type_description == NULL);
frame_frame_platformdirs$android$$$function__6_site_cache_dir = cache_frame_frame_platformdirs$android$$$function__6_site_cache_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$android$$$function__6_site_cache_dir);
assert(Py_REFCNT(frame_frame_platformdirs$android$$$function__6_site_cache_dir) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_cache_dir);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$android$$$function__6_site_cache_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$android$$$function__6_site_cache_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$android$$$function__6_site_cache_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$android$$$function__6_site_cache_dir,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$android$$$function__6_site_cache_dir == cache_frame_frame_platformdirs$android$$$function__6_site_cache_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$android$$$function__6_site_cache_dir);
    cache_frame_frame_platformdirs$android$$$function__6_site_cache_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$android$$$function__6_site_cache_dir);

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


static PyObject *impl_platformdirs$android$$$function__7_user_state_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$android$$$function__7_user_state_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$android$$$function__7_user_state_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$android$$$function__7_user_state_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$android$$$function__7_user_state_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$android$$$function__7_user_state_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$android$$$function__7_user_state_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_c8b6f97108451a3cb6d3a44463e88f4b, module_platformdirs$android, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$android$$$function__7_user_state_dir->m_type_description == NULL);
frame_frame_platformdirs$android$$$function__7_user_state_dir = cache_frame_frame_platformdirs$android$$$function__7_user_state_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$android$$$function__7_user_state_dir);
assert(Py_REFCNT(frame_frame_platformdirs$android$$$function__7_user_state_dir) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_data_dir);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$android$$$function__7_user_state_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$android$$$function__7_user_state_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$android$$$function__7_user_state_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$android$$$function__7_user_state_dir,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$android$$$function__7_user_state_dir == cache_frame_frame_platformdirs$android$$$function__7_user_state_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$android$$$function__7_user_state_dir);
    cache_frame_frame_platformdirs$android$$$function__7_user_state_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$android$$$function__7_user_state_dir);

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


static PyObject *impl_platformdirs$android$$$function__8_user_log_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_path = NULL;
struct Nuitka_FrameObject *frame_frame_platformdirs$android$$$function__8_user_log_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$android$$$function__8_user_log_dir = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_platformdirs$android$$$function__8_user_log_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$android$$$function__8_user_log_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$android$$$function__8_user_log_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$android$$$function__8_user_log_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_04daeb2ff40ee5fac397366105bb250b, module_platformdirs$android, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$android$$$function__8_user_log_dir->m_type_description == NULL);
frame_frame_platformdirs$android$$$function__8_user_log_dir = cache_frame_frame_platformdirs$android$$$function__8_user_log_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$android$$$function__8_user_log_dir);
assert(Py_REFCNT(frame_frame_platformdirs$android$$$function__8_user_log_dir) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_cache_dir);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
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


exception_lineno = 68;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 68;
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


exception_lineno = 69;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_path);
tmp_args_element_value_1 = var_path;
tmp_args_element_value_2 = mod_consts.const_str_plain_log;
frame_frame_platformdirs$android$$$function__8_user_log_dir->m_frame.f_lineno = 69;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
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
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$android$$$function__8_user_log_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$android$$$function__8_user_log_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$android$$$function__8_user_log_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$android$$$function__8_user_log_dir,
    type_description_1,
    par_self,
    var_path
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$android$$$function__8_user_log_dir == cache_frame_frame_platformdirs$android$$$function__8_user_log_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$android$$$function__8_user_log_dir);
    cache_frame_frame_platformdirs$android$$$function__8_user_log_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$android$$$function__8_user_log_dir);

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


static PyObject *impl_platformdirs$android$$$function__9_user_documents_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$android$$$function__9_user_documents_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$android$$$function__9_user_documents_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$android$$$function__9_user_documents_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$android$$$function__9_user_documents_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$android$$$function__9_user_documents_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$android$$$function__9_user_documents_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_04fdcd9bc25d37fcea3656ae969b9d4e, module_platformdirs$android, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$android$$$function__9_user_documents_dir->m_type_description == NULL);
frame_frame_platformdirs$android$$$function__9_user_documents_dir = cache_frame_frame_platformdirs$android$$$function__9_user_documents_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$android$$$function__9_user_documents_dir);
assert(Py_REFCNT(frame_frame_platformdirs$android$$$function__9_user_documents_dir) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$android$_android_documents_folder(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__android_documents_folder);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 75;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$android$$$function__9_user_documents_dir->m_frame.f_lineno = 75;
tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$android$$$function__9_user_documents_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$android$$$function__9_user_documents_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$android$$$function__9_user_documents_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$android$$$function__9_user_documents_dir,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$android$$$function__9_user_documents_dir == cache_frame_frame_platformdirs$android$$$function__9_user_documents_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$android$$$function__9_user_documents_dir);
    cache_frame_frame_platformdirs$android$$$function__9_user_documents_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$android$$$function__9_user_documents_dir);

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


static PyObject *impl_platformdirs$android$$$function__10_user_downloads_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$android$$$function__10_user_downloads_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$android$$$function__10_user_downloads_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$android$$$function__10_user_downloads_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$android$$$function__10_user_downloads_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$android$$$function__10_user_downloads_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$android$$$function__10_user_downloads_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_5a199e8d0d90b18468e9db540412a396, module_platformdirs$android, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$android$$$function__10_user_downloads_dir->m_type_description == NULL);
frame_frame_platformdirs$android$$$function__10_user_downloads_dir = cache_frame_frame_platformdirs$android$$$function__10_user_downloads_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$android$$$function__10_user_downloads_dir);
assert(Py_REFCNT(frame_frame_platformdirs$android$$$function__10_user_downloads_dir) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$android$_android_downloads_folder(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__android_downloads_folder);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 80;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$android$$$function__10_user_downloads_dir->m_frame.f_lineno = 80;
tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$android$$$function__10_user_downloads_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$android$$$function__10_user_downloads_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$android$$$function__10_user_downloads_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$android$$$function__10_user_downloads_dir,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$android$$$function__10_user_downloads_dir == cache_frame_frame_platformdirs$android$$$function__10_user_downloads_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$android$$$function__10_user_downloads_dir);
    cache_frame_frame_platformdirs$android$$$function__10_user_downloads_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$android$$$function__10_user_downloads_dir);

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


static PyObject *impl_platformdirs$android$$$function__11_user_pictures_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$android$$$function__11_user_pictures_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$android$$$function__11_user_pictures_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$android$$$function__11_user_pictures_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$android$$$function__11_user_pictures_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$android$$$function__11_user_pictures_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$android$$$function__11_user_pictures_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_b8d592df15b6c34c42e521effbd6fba9, module_platformdirs$android, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$android$$$function__11_user_pictures_dir->m_type_description == NULL);
frame_frame_platformdirs$android$$$function__11_user_pictures_dir = cache_frame_frame_platformdirs$android$$$function__11_user_pictures_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$android$$$function__11_user_pictures_dir);
assert(Py_REFCNT(frame_frame_platformdirs$android$$$function__11_user_pictures_dir) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$android$_android_pictures_folder(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__android_pictures_folder);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$android$$$function__11_user_pictures_dir->m_frame.f_lineno = 85;
tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$android$$$function__11_user_pictures_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$android$$$function__11_user_pictures_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$android$$$function__11_user_pictures_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$android$$$function__11_user_pictures_dir,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$android$$$function__11_user_pictures_dir == cache_frame_frame_platformdirs$android$$$function__11_user_pictures_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$android$$$function__11_user_pictures_dir);
    cache_frame_frame_platformdirs$android$$$function__11_user_pictures_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$android$$$function__11_user_pictures_dir);

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


static PyObject *impl_platformdirs$android$$$function__12_user_videos_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$android$$$function__12_user_videos_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$android$$$function__12_user_videos_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$android$$$function__12_user_videos_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$android$$$function__12_user_videos_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$android$$$function__12_user_videos_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$android$$$function__12_user_videos_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_ed5074d5472b1e285fca7446f380f7d0, module_platformdirs$android, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$android$$$function__12_user_videos_dir->m_type_description == NULL);
frame_frame_platformdirs$android$$$function__12_user_videos_dir = cache_frame_frame_platformdirs$android$$$function__12_user_videos_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$android$$$function__12_user_videos_dir);
assert(Py_REFCNT(frame_frame_platformdirs$android$$$function__12_user_videos_dir) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$android$_android_videos_folder(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__android_videos_folder);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 90;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$android$$$function__12_user_videos_dir->m_frame.f_lineno = 90;
tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$android$$$function__12_user_videos_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$android$$$function__12_user_videos_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$android$$$function__12_user_videos_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$android$$$function__12_user_videos_dir,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$android$$$function__12_user_videos_dir == cache_frame_frame_platformdirs$android$$$function__12_user_videos_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$android$$$function__12_user_videos_dir);
    cache_frame_frame_platformdirs$android$$$function__12_user_videos_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$android$$$function__12_user_videos_dir);

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


static PyObject *impl_platformdirs$android$$$function__13_user_music_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$android$$$function__13_user_music_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$android$$$function__13_user_music_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$android$$$function__13_user_music_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$android$$$function__13_user_music_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$android$$$function__13_user_music_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$android$$$function__13_user_music_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_94d1ccd58efbd1a2ab033aebd84db602, module_platformdirs$android, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$android$$$function__13_user_music_dir->m_type_description == NULL);
frame_frame_platformdirs$android$$$function__13_user_music_dir = cache_frame_frame_platformdirs$android$$$function__13_user_music_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$android$$$function__13_user_music_dir);
assert(Py_REFCNT(frame_frame_platformdirs$android$$$function__13_user_music_dir) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$android$_android_music_folder(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__android_music_folder);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 95;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$android$$$function__13_user_music_dir->m_frame.f_lineno = 95;
tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$android$$$function__13_user_music_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$android$$$function__13_user_music_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$android$$$function__13_user_music_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$android$$$function__13_user_music_dir,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$android$$$function__13_user_music_dir == cache_frame_frame_platformdirs$android$$$function__13_user_music_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$android$$$function__13_user_music_dir);
    cache_frame_frame_platformdirs$android$$$function__13_user_music_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$android$$$function__13_user_music_dir);

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


static PyObject *impl_platformdirs$android$$$function__15_user_runtime_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_path = NULL;
struct Nuitka_FrameObject *frame_frame_platformdirs$android$$$function__15_user_runtime_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$android$$$function__15_user_runtime_dir = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_platformdirs$android$$$function__15_user_runtime_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$android$$$function__15_user_runtime_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$android$$$function__15_user_runtime_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$android$$$function__15_user_runtime_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_6f53042f0eb7504d9a0d9417b6f844d7, module_platformdirs$android, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$android$$$function__15_user_runtime_dir->m_type_description == NULL);
frame_frame_platformdirs$android$$$function__15_user_runtime_dir = cache_frame_frame_platformdirs$android$$$function__15_user_runtime_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$android$$$function__15_user_runtime_dir);
assert(Py_REFCNT(frame_frame_platformdirs$android$$$function__15_user_runtime_dir) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_cache_dir);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
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


exception_lineno = 109;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 109;
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


exception_lineno = 110;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_path);
tmp_args_element_value_1 = var_path;
tmp_args_element_value_2 = mod_consts.const_str_plain_tmp;
frame_frame_platformdirs$android$$$function__15_user_runtime_dir->m_frame.f_lineno = 110;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
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
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$android$$$function__15_user_runtime_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$android$$$function__15_user_runtime_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$android$$$function__15_user_runtime_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$android$$$function__15_user_runtime_dir,
    type_description_1,
    par_self,
    var_path
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$android$$$function__15_user_runtime_dir == cache_frame_frame_platformdirs$android$$$function__15_user_runtime_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$android$$$function__15_user_runtime_dir);
    cache_frame_frame_platformdirs$android$$$function__15_user_runtime_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$android$$$function__15_user_runtime_dir);

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


static PyObject *impl_platformdirs$android$$$function__16_site_runtime_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_platformdirs$android$$$function__16_site_runtime_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$android$$$function__16_site_runtime_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$android$$$function__16_site_runtime_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$android$$$function__16_site_runtime_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$android$$$function__16_site_runtime_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$android$$$function__16_site_runtime_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_a31881f2e521451668b5e053600dc245, module_platformdirs$android, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$android$$$function__16_site_runtime_dir->m_type_description == NULL);
frame_frame_platformdirs$android$$$function__16_site_runtime_dir = cache_frame_frame_platformdirs$android$$$function__16_site_runtime_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$android$$$function__16_site_runtime_dir);
assert(Py_REFCNT(frame_frame_platformdirs$android$$$function__16_site_runtime_dir) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_runtime_dir);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$android$$$function__16_site_runtime_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$android$$$function__16_site_runtime_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$android$$$function__16_site_runtime_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$android$$$function__16_site_runtime_dir,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$android$$$function__16_site_runtime_dir == cache_frame_frame_platformdirs$android$$$function__16_site_runtime_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$android$$$function__16_site_runtime_dir);
    cache_frame_frame_platformdirs$android$$$function__16_site_runtime_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$android$$$function__16_site_runtime_dir);

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


static PyObject *impl_platformdirs$android$$$function__17__android_folder(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_result = NULL;
PyObject *var_mActivity = NULL;
PyObject *var_context = NULL;
PyObject *var_autoclass = NULL;
PyObject *var_pattern = NULL;
PyObject *var_path = NULL;
nuitka_bool tmp_for_loop_1__break_indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
nuitka_bool tmp_for_loop_2__break_indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_platformdirs$android$$$function__17__android_folder;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_2;
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
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$android$$$function__17__android_folder = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_platformdirs$android$$$function__17__android_folder)) {
    Py_XDECREF(cache_frame_frame_platformdirs$android$$$function__17__android_folder);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$android$$$function__17__android_folder == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$android$$$function__17__android_folder = MAKE_FUNCTION_FRAME(tstate, code_objects_c320e974e917d61facf16bacb48e95a2, module_platformdirs$android, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$android$$$function__17__android_folder->m_type_description == NULL);
frame_frame_platformdirs$android$$$function__17__android_folder = cache_frame_frame_platformdirs$android$$$function__17__android_folder;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$android$$$function__17__android_folder);
assert(Py_REFCNT(frame_frame_platformdirs$android$$$function__17__android_folder) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_android;
tmp_globals_arg_value_1 = (PyObject *)moduledict_platformdirs$android;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_mActivity_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_platformdirs$android$$$function__17__android_folder->m_frame.f_lineno = 128;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_platformdirs$android,
        mod_consts.const_str_plain_mActivity,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_mActivity);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
assert(var_mActivity == NULL);
var_mActivity = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_instance_1;
tmp_called_value_1 = module_var_accessor_platformdirs$android$cast(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 130;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_f5cffff30dbfdc7d5397bfab6d2742a0;
CHECK_OBJECT(var_mActivity);
tmp_called_instance_1 = var_mActivity;
frame_frame_platformdirs$android$$$function__17__android_folder->m_frame.f_lineno = 130;
tmp_args_element_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_getApplicationContext);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
frame_frame_platformdirs$android$$$function__17__android_folder->m_frame.f_lineno = 130;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
assert(var_context == NULL);
var_context = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_2;
PyObject *tmp_called_instance_3;
PyObject *tmp_called_instance_4;
CHECK_OBJECT(var_context);
tmp_called_instance_4 = var_context;
frame_frame_platformdirs$android$$$function__17__android_folder->m_frame.f_lineno = 131;
tmp_called_instance_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_getFilesDir);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
frame_frame_platformdirs$android$$$function__17__android_folder->m_frame.f_lineno = 131;
tmp_called_instance_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_getParentFile);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
frame_frame_platformdirs$android$$$function__17__android_folder->m_frame.f_lineno = 131;
tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_getAbsolutePath);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
assert(var_result == NULL);
var_result = tmp_assign_source_3;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$android$$$function__17__android_folder, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$android$$$function__17__android_folder, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_Exception;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Py_None;
assert(var_result == NULL);
Py_INCREF(tmp_assign_source_4);
var_result = tmp_assign_source_4;
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 126;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_platformdirs$android$$$function__17__android_folder->m_frame)) {
        frame_frame_platformdirs$android$$$function__17__android_folder->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooo";
goto try_except_handler_3;
branch_end_1:;
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
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_result);
tmp_cmp_expr_left_2 = var_result;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_jnius;
tmp_globals_arg_value_2 = (PyObject *)moduledict_platformdirs$android;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_autoclass_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_platformdirs$android$$$function__17__android_folder->m_frame.f_lineno = 138;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_platformdirs$android,
        mod_consts.const_str_plain_autoclass,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_autoclass);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
assert(var_autoclass == NULL);
var_autoclass = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_2;
CHECK_OBJECT(var_autoclass);
tmp_called_value_2 = var_autoclass;
frame_frame_platformdirs$android$$$function__17__android_folder->m_frame.f_lineno = 140;
tmp_assign_source_6 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_f5cffff30dbfdc7d5397bfab6d2742a0_tuple);

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_context;
    var_context = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_instance_5;
PyObject *tmp_called_instance_6;
PyObject *tmp_called_instance_7;
CHECK_OBJECT(var_context);
tmp_called_instance_7 = var_context;
frame_frame_platformdirs$android$$$function__17__android_folder->m_frame.f_lineno = 141;
tmp_called_instance_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_7, mod_consts.const_str_plain_getFilesDir);
if (tmp_called_instance_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
frame_frame_platformdirs$android$$$function__17__android_folder->m_frame.f_lineno = 141;
tmp_called_instance_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts.const_str_plain_getParentFile);
CHECK_OBJECT(tmp_called_instance_6);
Py_DECREF(tmp_called_instance_6);
if (tmp_called_instance_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
frame_frame_platformdirs$android$$$function__17__android_folder->m_frame.f_lineno = 141;
tmp_assign_source_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts.const_str_plain_getAbsolutePath);
CHECK_OBJECT(tmp_called_instance_5);
Py_DECREF(tmp_called_instance_5);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_result;
    assert(old != NULL);
    var_result = tmp_assign_source_7;
    Py_DECREF(old);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$android$$$function__17__android_folder, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$android$$$function__17__android_folder, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = PyExc_Exception;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
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
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = Py_None;
{
    PyObject *old = var_result;
    assert(old != NULL);
    var_result = tmp_assign_source_8;
    Py_INCREF(var_result);
    Py_DECREF(old);
}

}
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 135;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_platformdirs$android$$$function__17__android_folder->m_frame)) {
        frame_frame_platformdirs$android$$$function__17__android_folder->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooo";
goto try_except_handler_5;
branch_end_3:;
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
branch_no_2:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_result);
tmp_cmp_expr_left_4 = var_result;
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_instance_8;
tmp_called_instance_8 = module_var_accessor_platformdirs$android$re(tstate);
if (unlikely(tmp_called_instance_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 147;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$android$$$function__17__android_folder->m_frame.f_lineno = 147;
tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_8,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_d5a4d4bfb7fbe57918f378bcf3f41843_tuple, 0)
);

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_pattern == NULL);
var_pattern = tmp_assign_source_9;
}
{
nuitka_bool tmp_assign_source_10;
tmp_assign_source_10 = NUITKA_BOOL_FALSE;
tmp_for_loop_1__break_indicator = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_1 == NULL));
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_path);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_11 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_11;
}
// Tried code:
loop_start_1:;
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_value_value_1;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_value_value_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_12 = ITERATOR_NEXT(tmp_value_value_1);
if (tmp_assign_source_12 == NULL) {
    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

    if (!HAS_EXCEPTION_STATE(&exception_state)) {
        SET_EXCEPTION_PRESERVATION_STATE_STOP_ITERATION_EMPTY(tstate, &exception_state);
    }
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 148;
type_description_1 = "oooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
goto try_end_5;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = exception_keeper_name_5.exception_value;
tmp_cmp_expr_right_5 = PyExc_StopIteration;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
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
nuitka_bool tmp_assign_source_13;
tmp_assign_source_13 = NUITKA_BOOL_TRUE;
tmp_for_loop_1__break_indicator = tmp_assign_source_13;
}
RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_5);
goto loop_end_1;
goto branch_end_5;
branch_no_5:;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
branch_end_5:;
// End of try:
try_end_5:;
{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_14 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_path;
    var_path = tmp_assign_source_14;
    Py_INCREF(var_path);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_called_instance_9;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
int tmp_truth_name_1;
if (var_pattern == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pattern);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 149;
type_description_1 = "oooooo";
    goto try_except_handler_6;
}

tmp_called_instance_9 = var_pattern;
CHECK_OBJECT(var_path);
tmp_args_element_value_3 = var_path;
frame_frame_platformdirs$android$$$function__17__android_folder->m_frame.f_lineno = 149;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_9, mod_consts.const_str_plain_match, tmp_args_element_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oooooo";
    goto try_except_handler_6;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 149;
type_description_1 = "oooooo";
    goto try_except_handler_6;
}
tmp_condition_result_6 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_path);
tmp_expression_value_3 = var_path;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_split);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oooooo";
    goto try_except_handler_6;
}
frame_frame_platformdirs$android$$$function__17__android_folder->m_frame.f_lineno = 150;
tmp_expression_value_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_digest_0bfcf269629626c3e3a28a177837b532_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oooooo";
    goto try_except_handler_6;
}
tmp_subscript_value_1 = const_int_0;
tmp_assign_source_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = var_result;
    assert(old != NULL);
    var_result = tmp_assign_source_15;
    Py_DECREF(old);
}

}
goto loop_end_1;
branch_no_6:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "oooooo";
    goto try_except_handler_6;
}
goto loop_start_1;
loop_end_1:;
goto try_end_6;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
bool tmp_condition_result_7;
nuitka_bool tmp_cmp_expr_left_6;
nuitka_bool tmp_cmp_expr_right_6;
assert(tmp_for_loop_1__break_indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_6 = tmp_for_loop_1__break_indicator;
tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
tmp_condition_result_7 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = Py_None;
{
    PyObject *old = var_result;
    assert(old != NULL);
    var_result = tmp_assign_source_16;
    Py_INCREF(var_result);
    Py_DECREF(old);
}

}
branch_no_7:;
branch_no_4:;
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(var_result);
tmp_cmp_expr_left_7 = var_result;
tmp_cmp_expr_right_7 = Py_None;
tmp_condition_result_8 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_instance_10;
tmp_called_instance_10 = module_var_accessor_platformdirs$android$re(tstate);
if (unlikely(tmp_called_instance_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 157;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_platformdirs$android$$$function__17__android_folder->m_frame.f_lineno = 157;
tmp_assign_source_17 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_10,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_4a3c8a18e5e95adb558bdc59fb4b83a6_tuple, 0)
);

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_pattern;
    var_pattern = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_assign_source_18;
tmp_assign_source_18 = NUITKA_BOOL_FALSE;
tmp_for_loop_2__break_indicator = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_iter_arg_2;
PyObject *tmp_expression_value_4;
tmp_expression_value_4 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_4 == NULL));
tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_path);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_19 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_2__for_iterator == NULL);
tmp_for_loop_2__for_iterator = tmp_assign_source_19;
}
// Tried code:
loop_start_2:;
// Tried code:
{
PyObject *tmp_assign_source_20;
PyObject *tmp_value_value_2;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_value_value_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_20 = ITERATOR_NEXT(tmp_value_value_2);
if (tmp_assign_source_20 == NULL) {
    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

    if (!HAS_EXCEPTION_STATE(&exception_state)) {
        SET_EXCEPTION_PRESERVATION_STATE_STOP_ITERATION_EMPTY(tstate, &exception_state);
    }
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 158;
type_description_1 = "oooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
goto try_end_7;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
tmp_cmp_expr_left_8 = exception_keeper_name_7.exception_value;
tmp_cmp_expr_right_8 = PyExc_StopIteration;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
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
nuitka_bool tmp_assign_source_21;
tmp_assign_source_21 = NUITKA_BOOL_TRUE;
tmp_for_loop_2__break_indicator = tmp_assign_source_21;
}
RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_7);
goto loop_end_2;
goto branch_end_9;
branch_no_9:;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_8;
branch_end_9:;
// End of try:
try_end_7:;
{
PyObject *tmp_assign_source_22;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_22 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_path;
    var_path = tmp_assign_source_22;
    Py_INCREF(var_path);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_10;
PyObject *tmp_called_instance_11;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_4;
int tmp_truth_name_2;
if (var_pattern == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pattern);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 159;
type_description_1 = "oooooo";
    goto try_except_handler_8;
}

tmp_called_instance_11 = var_pattern;
CHECK_OBJECT(var_path);
tmp_args_element_value_4 = var_path;
frame_frame_platformdirs$android$$$function__17__android_folder->m_frame.f_lineno = 159;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_11, mod_consts.const_str_plain_match, tmp_args_element_value_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "oooooo";
    goto try_except_handler_8;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 159;
type_description_1 = "oooooo";
    goto try_except_handler_8;
}
tmp_condition_result_10 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_23;
PyObject *tmp_expression_value_5;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_path);
tmp_expression_value_6 = var_path;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_split);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooooo";
    goto try_except_handler_8;
}
frame_frame_platformdirs$android$$$function__17__android_folder->m_frame.f_lineno = 160;
tmp_expression_value_5 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_digest_0bfcf269629626c3e3a28a177837b532_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooooo";
    goto try_except_handler_8;
}
tmp_subscript_value_2 = const_int_0;
tmp_assign_source_23 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_2, 0);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = var_result;
    assert(old != NULL);
    var_result = tmp_assign_source_23;
    Py_DECREF(old);
}

}
goto loop_end_2;
branch_no_10:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "oooooo";
    goto try_except_handler_8;
}
goto loop_start_2;
loop_end_2:;
goto try_end_8;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
{
bool tmp_condition_result_11;
nuitka_bool tmp_cmp_expr_left_9;
nuitka_bool tmp_cmp_expr_right_9;
assert(tmp_for_loop_2__break_indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_9 = tmp_for_loop_2__break_indicator;
tmp_cmp_expr_right_9 = NUITKA_BOOL_TRUE;
tmp_condition_result_11 = (tmp_cmp_expr_left_9 == tmp_cmp_expr_right_9) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = Py_None;
{
    PyObject *old = var_result;
    assert(old != NULL);
    var_result = tmp_assign_source_24;
    Py_INCREF(var_result);
    Py_DECREF(old);
}

}
branch_no_11:;
branch_no_8:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$android$$$function__17__android_folder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$android$$$function__17__android_folder->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$android$$$function__17__android_folder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$android$$$function__17__android_folder,
    type_description_1,
    var_result,
    var_mActivity,
    var_context,
    var_autoclass,
    var_pattern,
    var_path
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$android$$$function__17__android_folder == cache_frame_frame_platformdirs$android$$$function__17__android_folder) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$android$$$function__17__android_folder);
    cache_frame_frame_platformdirs$android$$$function__17__android_folder = NULL;
}

assertFrameObject(frame_frame_platformdirs$android$$$function__17__android_folder);

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
Py_XDECREF(var_mActivity);
var_mActivity = NULL;
Py_XDECREF(var_context);
var_context = NULL;
Py_XDECREF(var_autoclass);
var_autoclass = NULL;
Py_XDECREF(var_pattern);
var_pattern = NULL;
Py_XDECREF(var_path);
var_path = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_result);
var_result = NULL;
Py_XDECREF(var_mActivity);
var_mActivity = NULL;
Py_XDECREF(var_context);
var_context = NULL;
Py_XDECREF(var_autoclass);
var_autoclass = NULL;
Py_XDECREF(var_pattern);
var_pattern = NULL;
Py_XDECREF(var_path);
var_path = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

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


static PyObject *impl_platformdirs$android$$$function__18__android_documents_folder(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_documents_dir = NULL;
PyObject *var_autoclass = NULL;
PyObject *var_context = NULL;
PyObject *var_environment = NULL;
struct Nuitka_FrameObject *frame_frame_platformdirs$android$$$function__18__android_documents_folder;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$android$$$function__18__android_documents_folder = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_platformdirs$android$$$function__18__android_documents_folder)) {
    Py_XDECREF(cache_frame_frame_platformdirs$android$$$function__18__android_documents_folder);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$android$$$function__18__android_documents_folder == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$android$$$function__18__android_documents_folder = MAKE_FUNCTION_FRAME(tstate, code_objects_fd33d1e3c3e787621ec06afedacb7351, module_platformdirs$android, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$android$$$function__18__android_documents_folder->m_type_description == NULL);
frame_frame_platformdirs$android$$$function__18__android_documents_folder = cache_frame_frame_platformdirs$android$$$function__18__android_documents_folder;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$android$$$function__18__android_documents_folder);
assert(Py_REFCNT(frame_frame_platformdirs$android$$$function__18__android_documents_folder) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_jnius;
tmp_globals_arg_value_1 = (PyObject *)moduledict_platformdirs$android;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_autoclass_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_platformdirs$android$$$function__18__android_documents_folder->m_frame.f_lineno = 172;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_platformdirs$android,
        mod_consts.const_str_plain_autoclass,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_autoclass);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(var_autoclass == NULL);
var_autoclass = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
CHECK_OBJECT(var_autoclass);
tmp_called_value_1 = var_autoclass;
frame_frame_platformdirs$android$$$function__18__android_documents_folder->m_frame.f_lineno = 174;
tmp_assign_source_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_f5cffff30dbfdc7d5397bfab6d2742a0_tuple);

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(var_context == NULL);
var_context = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
CHECK_OBJECT(var_autoclass);
tmp_called_value_2 = var_autoclass;
frame_frame_platformdirs$android$$$function__18__android_documents_folder->m_frame.f_lineno = 175;
tmp_assign_source_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_892f97a709ebc7748638768195f5f448_tuple);

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(var_environment == NULL);
var_environment = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_context);
tmp_expression_value_1 = var_context;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_getExternalFilesDir);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_environment);
tmp_expression_value_2 = var_environment;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_DIRECTORY_DOCUMENTS);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 176;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_platformdirs$android$$$function__18__android_documents_folder->m_frame.f_lineno = 176;
tmp_called_instance_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_platformdirs$android$$$function__18__android_documents_folder->m_frame.f_lineno = 176;
tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_getAbsolutePath);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(var_documents_dir == NULL);
var_documents_dir = tmp_assign_source_4;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$android$$$function__18__android_documents_folder, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$android$$$function__18__android_documents_folder, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_Exception;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = mod_consts.const_str_digest_22810745e7a5c8f5e1131feaaa2f4ba4;
assert(var_documents_dir == NULL);
Py_INCREF(tmp_assign_source_5);
var_documents_dir = tmp_assign_source_5;
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 171;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_platformdirs$android$$$function__18__android_documents_folder->m_frame)) {
        frame_frame_platformdirs$android$$$function__18__android_documents_folder->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_3;
branch_end_1:;
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
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$android$$$function__18__android_documents_folder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$android$$$function__18__android_documents_folder->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$android$$$function__18__android_documents_folder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$android$$$function__18__android_documents_folder,
    type_description_1,
    var_documents_dir,
    var_autoclass,
    var_context,
    var_environment
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$android$$$function__18__android_documents_folder == cache_frame_frame_platformdirs$android$$$function__18__android_documents_folder) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$android$$$function__18__android_documents_folder);
    cache_frame_frame_platformdirs$android$$$function__18__android_documents_folder = NULL;
}

assertFrameObject(frame_frame_platformdirs$android$$$function__18__android_documents_folder);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_documents_dir);
tmp_return_value = var_documents_dir;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_documents_dir);
CHECK_OBJECT(var_documents_dir);
Py_DECREF(var_documents_dir);
var_documents_dir = NULL;
Py_XDECREF(var_autoclass);
var_autoclass = NULL;
Py_XDECREF(var_context);
var_context = NULL;
Py_XDECREF(var_environment);
var_environment = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_autoclass);
var_autoclass = NULL;
Py_XDECREF(var_context);
var_context = NULL;
Py_XDECREF(var_environment);
var_environment = NULL;
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


static PyObject *impl_platformdirs$android$$$function__19__android_downloads_folder(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_downloads_dir = NULL;
PyObject *var_autoclass = NULL;
PyObject *var_context = NULL;
PyObject *var_environment = NULL;
struct Nuitka_FrameObject *frame_frame_platformdirs$android$$$function__19__android_downloads_folder;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$android$$$function__19__android_downloads_folder = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_platformdirs$android$$$function__19__android_downloads_folder)) {
    Py_XDECREF(cache_frame_frame_platformdirs$android$$$function__19__android_downloads_folder);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$android$$$function__19__android_downloads_folder == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$android$$$function__19__android_downloads_folder = MAKE_FUNCTION_FRAME(tstate, code_objects_b9b3e68297ff7956a7c6f0cace6639a7, module_platformdirs$android, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$android$$$function__19__android_downloads_folder->m_type_description == NULL);
frame_frame_platformdirs$android$$$function__19__android_downloads_folder = cache_frame_frame_platformdirs$android$$$function__19__android_downloads_folder;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$android$$$function__19__android_downloads_folder);
assert(Py_REFCNT(frame_frame_platformdirs$android$$$function__19__android_downloads_folder) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_jnius;
tmp_globals_arg_value_1 = (PyObject *)moduledict_platformdirs$android;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_autoclass_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_platformdirs$android$$$function__19__android_downloads_folder->m_frame.f_lineno = 188;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_platformdirs$android,
        mod_consts.const_str_plain_autoclass,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_autoclass);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(var_autoclass == NULL);
var_autoclass = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
CHECK_OBJECT(var_autoclass);
tmp_called_value_1 = var_autoclass;
frame_frame_platformdirs$android$$$function__19__android_downloads_folder->m_frame.f_lineno = 190;
tmp_assign_source_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_f5cffff30dbfdc7d5397bfab6d2742a0_tuple);

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(var_context == NULL);
var_context = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
CHECK_OBJECT(var_autoclass);
tmp_called_value_2 = var_autoclass;
frame_frame_platformdirs$android$$$function__19__android_downloads_folder->m_frame.f_lineno = 191;
tmp_assign_source_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_892f97a709ebc7748638768195f5f448_tuple);

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(var_environment == NULL);
var_environment = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_context);
tmp_expression_value_1 = var_context;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_getExternalFilesDir);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_environment);
tmp_expression_value_2 = var_environment;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_DIRECTORY_DOWNLOADS);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 192;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_platformdirs$android$$$function__19__android_downloads_folder->m_frame.f_lineno = 192;
tmp_called_instance_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_platformdirs$android$$$function__19__android_downloads_folder->m_frame.f_lineno = 192;
tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_getAbsolutePath);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(var_downloads_dir == NULL);
var_downloads_dir = tmp_assign_source_4;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$android$$$function__19__android_downloads_folder, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$android$$$function__19__android_downloads_folder, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_Exception;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = mod_consts.const_str_digest_fec6dfba36222f84241a70b1bff92ec5;
assert(var_downloads_dir == NULL);
Py_INCREF(tmp_assign_source_5);
var_downloads_dir = tmp_assign_source_5;
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 187;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_platformdirs$android$$$function__19__android_downloads_folder->m_frame)) {
        frame_frame_platformdirs$android$$$function__19__android_downloads_folder->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_3;
branch_end_1:;
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
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$android$$$function__19__android_downloads_folder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$android$$$function__19__android_downloads_folder->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$android$$$function__19__android_downloads_folder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$android$$$function__19__android_downloads_folder,
    type_description_1,
    var_downloads_dir,
    var_autoclass,
    var_context,
    var_environment
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$android$$$function__19__android_downloads_folder == cache_frame_frame_platformdirs$android$$$function__19__android_downloads_folder) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$android$$$function__19__android_downloads_folder);
    cache_frame_frame_platformdirs$android$$$function__19__android_downloads_folder = NULL;
}

assertFrameObject(frame_frame_platformdirs$android$$$function__19__android_downloads_folder);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_downloads_dir);
tmp_return_value = var_downloads_dir;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_downloads_dir);
CHECK_OBJECT(var_downloads_dir);
Py_DECREF(var_downloads_dir);
var_downloads_dir = NULL;
Py_XDECREF(var_autoclass);
var_autoclass = NULL;
Py_XDECREF(var_context);
var_context = NULL;
Py_XDECREF(var_environment);
var_environment = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_autoclass);
var_autoclass = NULL;
Py_XDECREF(var_context);
var_context = NULL;
Py_XDECREF(var_environment);
var_environment = NULL;
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


static PyObject *impl_platformdirs$android$$$function__20__android_pictures_folder(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_pictures_dir = NULL;
PyObject *var_autoclass = NULL;
PyObject *var_context = NULL;
PyObject *var_environment = NULL;
struct Nuitka_FrameObject *frame_frame_platformdirs$android$$$function__20__android_pictures_folder;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$android$$$function__20__android_pictures_folder = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_platformdirs$android$$$function__20__android_pictures_folder)) {
    Py_XDECREF(cache_frame_frame_platformdirs$android$$$function__20__android_pictures_folder);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$android$$$function__20__android_pictures_folder == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$android$$$function__20__android_pictures_folder = MAKE_FUNCTION_FRAME(tstate, code_objects_c77f92d4f88f91c56cd7bd193635d56e, module_platformdirs$android, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$android$$$function__20__android_pictures_folder->m_type_description == NULL);
frame_frame_platformdirs$android$$$function__20__android_pictures_folder = cache_frame_frame_platformdirs$android$$$function__20__android_pictures_folder;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$android$$$function__20__android_pictures_folder);
assert(Py_REFCNT(frame_frame_platformdirs$android$$$function__20__android_pictures_folder) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_jnius;
tmp_globals_arg_value_1 = (PyObject *)moduledict_platformdirs$android;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_autoclass_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_platformdirs$android$$$function__20__android_pictures_folder->m_frame.f_lineno = 204;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_platformdirs$android,
        mod_consts.const_str_plain_autoclass,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_autoclass);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(var_autoclass == NULL);
var_autoclass = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
CHECK_OBJECT(var_autoclass);
tmp_called_value_1 = var_autoclass;
frame_frame_platformdirs$android$$$function__20__android_pictures_folder->m_frame.f_lineno = 206;
tmp_assign_source_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_f5cffff30dbfdc7d5397bfab6d2742a0_tuple);

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(var_context == NULL);
var_context = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
CHECK_OBJECT(var_autoclass);
tmp_called_value_2 = var_autoclass;
frame_frame_platformdirs$android$$$function__20__android_pictures_folder->m_frame.f_lineno = 207;
tmp_assign_source_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_892f97a709ebc7748638768195f5f448_tuple);

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(var_environment == NULL);
var_environment = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_context);
tmp_expression_value_1 = var_context;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_getExternalFilesDir);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_environment);
tmp_expression_value_2 = var_environment;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_DIRECTORY_PICTURES);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 208;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_platformdirs$android$$$function__20__android_pictures_folder->m_frame.f_lineno = 208;
tmp_called_instance_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_platformdirs$android$$$function__20__android_pictures_folder->m_frame.f_lineno = 208;
tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_getAbsolutePath);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(var_pictures_dir == NULL);
var_pictures_dir = tmp_assign_source_4;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$android$$$function__20__android_pictures_folder, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$android$$$function__20__android_pictures_folder, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_Exception;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = mod_consts.const_str_digest_4c9ad605cf4976bde5adf99babfbe57b;
assert(var_pictures_dir == NULL);
Py_INCREF(tmp_assign_source_5);
var_pictures_dir = tmp_assign_source_5;
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 203;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_platformdirs$android$$$function__20__android_pictures_folder->m_frame)) {
        frame_frame_platformdirs$android$$$function__20__android_pictures_folder->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_3;
branch_end_1:;
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
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$android$$$function__20__android_pictures_folder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$android$$$function__20__android_pictures_folder->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$android$$$function__20__android_pictures_folder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$android$$$function__20__android_pictures_folder,
    type_description_1,
    var_pictures_dir,
    var_autoclass,
    var_context,
    var_environment
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$android$$$function__20__android_pictures_folder == cache_frame_frame_platformdirs$android$$$function__20__android_pictures_folder) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$android$$$function__20__android_pictures_folder);
    cache_frame_frame_platformdirs$android$$$function__20__android_pictures_folder = NULL;
}

assertFrameObject(frame_frame_platformdirs$android$$$function__20__android_pictures_folder);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_pictures_dir);
tmp_return_value = var_pictures_dir;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_pictures_dir);
CHECK_OBJECT(var_pictures_dir);
Py_DECREF(var_pictures_dir);
var_pictures_dir = NULL;
Py_XDECREF(var_autoclass);
var_autoclass = NULL;
Py_XDECREF(var_context);
var_context = NULL;
Py_XDECREF(var_environment);
var_environment = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_autoclass);
var_autoclass = NULL;
Py_XDECREF(var_context);
var_context = NULL;
Py_XDECREF(var_environment);
var_environment = NULL;
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


static PyObject *impl_platformdirs$android$$$function__21__android_videos_folder(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_videos_dir = NULL;
PyObject *var_autoclass = NULL;
PyObject *var_context = NULL;
PyObject *var_environment = NULL;
struct Nuitka_FrameObject *frame_frame_platformdirs$android$$$function__21__android_videos_folder;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$android$$$function__21__android_videos_folder = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_platformdirs$android$$$function__21__android_videos_folder)) {
    Py_XDECREF(cache_frame_frame_platformdirs$android$$$function__21__android_videos_folder);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$android$$$function__21__android_videos_folder == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$android$$$function__21__android_videos_folder = MAKE_FUNCTION_FRAME(tstate, code_objects_43866977ed8d7ed701faea1e07d1efed, module_platformdirs$android, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$android$$$function__21__android_videos_folder->m_type_description == NULL);
frame_frame_platformdirs$android$$$function__21__android_videos_folder = cache_frame_frame_platformdirs$android$$$function__21__android_videos_folder;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$android$$$function__21__android_videos_folder);
assert(Py_REFCNT(frame_frame_platformdirs$android$$$function__21__android_videos_folder) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_jnius;
tmp_globals_arg_value_1 = (PyObject *)moduledict_platformdirs$android;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_autoclass_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_platformdirs$android$$$function__21__android_videos_folder->m_frame.f_lineno = 220;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_platformdirs$android,
        mod_consts.const_str_plain_autoclass,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_autoclass);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(var_autoclass == NULL);
var_autoclass = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
CHECK_OBJECT(var_autoclass);
tmp_called_value_1 = var_autoclass;
frame_frame_platformdirs$android$$$function__21__android_videos_folder->m_frame.f_lineno = 222;
tmp_assign_source_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_f5cffff30dbfdc7d5397bfab6d2742a0_tuple);

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(var_context == NULL);
var_context = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
CHECK_OBJECT(var_autoclass);
tmp_called_value_2 = var_autoclass;
frame_frame_platformdirs$android$$$function__21__android_videos_folder->m_frame.f_lineno = 223;
tmp_assign_source_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_892f97a709ebc7748638768195f5f448_tuple);

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(var_environment == NULL);
var_environment = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_context);
tmp_expression_value_1 = var_context;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_getExternalFilesDir);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_environment);
tmp_expression_value_2 = var_environment;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_DIRECTORY_DCIM);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 224;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_platformdirs$android$$$function__21__android_videos_folder->m_frame.f_lineno = 224;
tmp_called_instance_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_platformdirs$android$$$function__21__android_videos_folder->m_frame.f_lineno = 224;
tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_getAbsolutePath);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(var_videos_dir == NULL);
var_videos_dir = tmp_assign_source_4;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$android$$$function__21__android_videos_folder, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$android$$$function__21__android_videos_folder, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_Exception;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = mod_consts.const_str_digest_7354566455d7ff64d0356e785826d889;
assert(var_videos_dir == NULL);
Py_INCREF(tmp_assign_source_5);
var_videos_dir = tmp_assign_source_5;
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 219;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_platformdirs$android$$$function__21__android_videos_folder->m_frame)) {
        frame_frame_platformdirs$android$$$function__21__android_videos_folder->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_3;
branch_end_1:;
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
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$android$$$function__21__android_videos_folder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$android$$$function__21__android_videos_folder->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$android$$$function__21__android_videos_folder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$android$$$function__21__android_videos_folder,
    type_description_1,
    var_videos_dir,
    var_autoclass,
    var_context,
    var_environment
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$android$$$function__21__android_videos_folder == cache_frame_frame_platformdirs$android$$$function__21__android_videos_folder) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$android$$$function__21__android_videos_folder);
    cache_frame_frame_platformdirs$android$$$function__21__android_videos_folder = NULL;
}

assertFrameObject(frame_frame_platformdirs$android$$$function__21__android_videos_folder);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_videos_dir);
tmp_return_value = var_videos_dir;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_videos_dir);
CHECK_OBJECT(var_videos_dir);
Py_DECREF(var_videos_dir);
var_videos_dir = NULL;
Py_XDECREF(var_autoclass);
var_autoclass = NULL;
Py_XDECREF(var_context);
var_context = NULL;
Py_XDECREF(var_environment);
var_environment = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_autoclass);
var_autoclass = NULL;
Py_XDECREF(var_context);
var_context = NULL;
Py_XDECREF(var_environment);
var_environment = NULL;
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


static PyObject *impl_platformdirs$android$$$function__22__android_music_folder(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_music_dir = NULL;
PyObject *var_autoclass = NULL;
PyObject *var_context = NULL;
PyObject *var_environment = NULL;
struct Nuitka_FrameObject *frame_frame_platformdirs$android$$$function__22__android_music_folder;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$android$$$function__22__android_music_folder = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_platformdirs$android$$$function__22__android_music_folder)) {
    Py_XDECREF(cache_frame_frame_platformdirs$android$$$function__22__android_music_folder);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$android$$$function__22__android_music_folder == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$android$$$function__22__android_music_folder = MAKE_FUNCTION_FRAME(tstate, code_objects_152b5039db42c0f4eda00e5e1b1c2a43, module_platformdirs$android, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$android$$$function__22__android_music_folder->m_type_description == NULL);
frame_frame_platformdirs$android$$$function__22__android_music_folder = cache_frame_frame_platformdirs$android$$$function__22__android_music_folder;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$android$$$function__22__android_music_folder);
assert(Py_REFCNT(frame_frame_platformdirs$android$$$function__22__android_music_folder) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_jnius;
tmp_globals_arg_value_1 = (PyObject *)moduledict_platformdirs$android;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_autoclass_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_platformdirs$android$$$function__22__android_music_folder->m_frame.f_lineno = 236;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_platformdirs$android,
        mod_consts.const_str_plain_autoclass,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_autoclass);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(var_autoclass == NULL);
var_autoclass = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
CHECK_OBJECT(var_autoclass);
tmp_called_value_1 = var_autoclass;
frame_frame_platformdirs$android$$$function__22__android_music_folder->m_frame.f_lineno = 238;
tmp_assign_source_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_f5cffff30dbfdc7d5397bfab6d2742a0_tuple);

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(var_context == NULL);
var_context = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
CHECK_OBJECT(var_autoclass);
tmp_called_value_2 = var_autoclass;
frame_frame_platformdirs$android$$$function__22__android_music_folder->m_frame.f_lineno = 239;
tmp_assign_source_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_892f97a709ebc7748638768195f5f448_tuple);

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(var_environment == NULL);
var_environment = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_context);
tmp_expression_value_1 = var_context;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_getExternalFilesDir);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_environment);
tmp_expression_value_2 = var_environment;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_DIRECTORY_MUSIC);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 240;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_platformdirs$android$$$function__22__android_music_folder->m_frame.f_lineno = 240;
tmp_called_instance_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_platformdirs$android$$$function__22__android_music_folder->m_frame.f_lineno = 240;
tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_getAbsolutePath);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(var_music_dir == NULL);
var_music_dir = tmp_assign_source_4;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$android$$$function__22__android_music_folder, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$android$$$function__22__android_music_folder, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_Exception;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = mod_consts.const_str_digest_2f8d033f72f1e53901befd898c1c5150;
assert(var_music_dir == NULL);
Py_INCREF(tmp_assign_source_5);
var_music_dir = tmp_assign_source_5;
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 235;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_platformdirs$android$$$function__22__android_music_folder->m_frame)) {
        frame_frame_platformdirs$android$$$function__22__android_music_folder->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_3;
branch_end_1:;
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
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$android$$$function__22__android_music_folder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$android$$$function__22__android_music_folder->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$android$$$function__22__android_music_folder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$android$$$function__22__android_music_folder,
    type_description_1,
    var_music_dir,
    var_autoclass,
    var_context,
    var_environment
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$android$$$function__22__android_music_folder == cache_frame_frame_platformdirs$android$$$function__22__android_music_folder) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$android$$$function__22__android_music_folder);
    cache_frame_frame_platformdirs$android$$$function__22__android_music_folder = NULL;
}

assertFrameObject(frame_frame_platformdirs$android$$$function__22__android_music_folder);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_music_dir);
tmp_return_value = var_music_dir;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_music_dir);
CHECK_OBJECT(var_music_dir);
Py_DECREF(var_music_dir);
var_music_dir = NULL;
Py_XDECREF(var_autoclass);
var_autoclass = NULL;
Py_XDECREF(var_context);
var_context = NULL;
Py_XDECREF(var_environment);
var_environment = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_autoclass);
var_autoclass = NULL;
Py_XDECREF(var_context);
var_context = NULL;
Py_XDECREF(var_environment);
var_environment = NULL;
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



static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__10_user_downloads_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$android$$$function__10_user_downloads_dir,
        mod_consts.const_str_plain_user_downloads_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_af575e08da50a2e66a937dff94db5820,
#endif
        code_objects_5a199e8d0d90b18468e9db540412a396,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$android,
        mod_consts.const_str_digest_7ea4a4e4415bbb6149bd5959426cb160,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__11_user_pictures_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$android$$$function__11_user_pictures_dir,
        mod_consts.const_str_plain_user_pictures_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a75f8cffaaa7fc9cbf0e90cd8c8f4223,
#endif
        code_objects_b8d592df15b6c34c42e521effbd6fba9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$android,
        mod_consts.const_str_digest_b6da4007f0e9cea1da494e27e8563c95,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__12_user_videos_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$android$$$function__12_user_videos_dir,
        mod_consts.const_str_plain_user_videos_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ee046e64de695a13c5d93adfb17a96e5,
#endif
        code_objects_ed5074d5472b1e285fca7446f380f7d0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$android,
        mod_consts.const_str_digest_a7fd13679d22374f91bef217cda30a61,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__13_user_music_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$android$$$function__13_user_music_dir,
        mod_consts.const_str_plain_user_music_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_559c3f94d931c5d9444158748e7283bd,
#endif
        code_objects_94d1ccd58efbd1a2ab033aebd84db602,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$android,
        mod_consts.const_str_digest_74b22351309c871baf9b5d923fb065b8,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__14_user_desktop_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_user_desktop_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f219b6050a3a5b336b45ae3783523385,
#endif
        code_objects_acff83db59fc3053b23ad3d7878b7285,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$android,
        mod_consts.const_str_digest_60e5b4856a46174510a47ef718b46caa,
        NULL,
        0
    );
Nuitka_Function_EnableConstReturnGeneric(result, mod_consts.const_str_digest_2865c1bc2d884b935de187d63f9ac0ff);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__15_user_runtime_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$android$$$function__15_user_runtime_dir,
        mod_consts.const_str_plain_user_runtime_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8fa74ab464805664c503e9087592f952,
#endif
        code_objects_6f53042f0eb7504d9a0d9417b6f844d7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$android,
        mod_consts.const_str_digest_79f384f8c2a2bb49079edbd588cf5767,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__16_site_runtime_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$android$$$function__16_site_runtime_dir,
        mod_consts.const_str_plain_site_runtime_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_469246c88de26f23d7fe447be002f0ed,
#endif
        code_objects_a31881f2e521451668b5e053600dc245,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$android,
        mod_consts.const_str_digest_dd9add8832f7d6248ea8afd80bb101f2,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__17__android_folder(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$android$$$function__17__android_folder,
        mod_consts.const_str_plain__android_folder,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c320e974e917d61facf16bacb48e95a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$android,
        mod_consts.const_str_digest_eff92bee8ac54155d2b764053fe55ad9,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__18__android_documents_folder(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$android$$$function__18__android_documents_folder,
        mod_consts.const_str_plain__android_documents_folder,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_fd33d1e3c3e787621ec06afedacb7351,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$android,
        mod_consts.const_str_digest_d481dfa5cb1d7410c5b1537a36032e9f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__19__android_downloads_folder(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$android$$$function__19__android_downloads_folder,
        mod_consts.const_str_plain__android_downloads_folder,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b9b3e68297ff7956a7c6f0cace6639a7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$android,
        mod_consts.const_str_digest_dcbf1bd9be3132488ab2253a929beaf7,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__1_user_data_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$android$$$function__1_user_data_dir,
        mod_consts.const_str_plain_user_data_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_cf459c6600db7a5f75b852896b910db8,
#endif
        code_objects_4c14cf1b34b9563a15451c2f44b695ff,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$android,
        mod_consts.const_str_digest_249a838e487c34bc9e0b4cde310e843d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__20__android_pictures_folder(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$android$$$function__20__android_pictures_folder,
        mod_consts.const_str_plain__android_pictures_folder,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c77f92d4f88f91c56cd7bd193635d56e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$android,
        mod_consts.const_str_digest_cd357259b09d2cc8e63d654fe7094148,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__21__android_videos_folder(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$android$$$function__21__android_videos_folder,
        mod_consts.const_str_plain__android_videos_folder,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_43866977ed8d7ed701faea1e07d1efed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$android,
        mod_consts.const_str_digest_d46878c0dddd1b5061163cfdeb766f02,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__22__android_music_folder(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$android$$$function__22__android_music_folder,
        mod_consts.const_str_plain__android_music_folder,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_152b5039db42c0f4eda00e5e1b1c2a43,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$android,
        mod_consts.const_str_digest_87ae4572e95ae7abcc3fc7d1d08bbac3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__2_site_data_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$android$$$function__2_site_data_dir,
        mod_consts.const_str_plain_site_data_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a656117684c26191ac018187f1fd1011,
#endif
        code_objects_f7aac82d603ff40a4ea99b6a814eafe3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$android,
        mod_consts.const_str_digest_136455292a3e15956a0fa684fa617866,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__3_user_config_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$android$$$function__3_user_config_dir,
        mod_consts.const_str_plain_user_config_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3f03e5d0e7d6a7e4b1c95410f00af7ed,
#endif
        code_objects_5a25b7f39bdad9cbdcaba0c0e68de88d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$android,
        mod_consts.const_str_digest_d427c807a4b4c868f7ed6e31eb1e15f3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__4_site_config_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$android$$$function__4_site_config_dir,
        mod_consts.const_str_plain_site_config_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4ba3d6693e9c0fcb8bf34b0c06aaaf69,
#endif
        code_objects_aad7c197b85f840ba09afac4576ea19b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$android,
        mod_consts.const_str_digest_736b48e19a6495d22599f72b237881cc,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__5_user_cache_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$android$$$function__5_user_cache_dir,
        mod_consts.const_str_plain_user_cache_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4ab5b56d44ea948aaf5f3eb05b9408d0,
#endif
        code_objects_445a30447a948cfadbab425f6d62373b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$android,
        mod_consts.const_str_digest_9b19ad2440f6f6dd13952f9ea2b38c90,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__6_site_cache_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$android$$$function__6_site_cache_dir,
        mod_consts.const_str_plain_site_cache_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0f8f1d7a28438f379f436819795793d6,
#endif
        code_objects_372ba6fb914c25f439f80186dd2b0112,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$android,
        mod_consts.const_str_digest_3ef3fce76f33660759bf5667f297951e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__7_user_state_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$android$$$function__7_user_state_dir,
        mod_consts.const_str_plain_user_state_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_33602506d12c8d946d4722cecbc9bd5f,
#endif
        code_objects_c8b6f97108451a3cb6d3a44463e88f4b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$android,
        mod_consts.const_str_digest_68cb5fd9a9688506895787dd74fddac5,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__8_user_log_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$android$$$function__8_user_log_dir,
        mod_consts.const_str_plain_user_log_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d22d52b77eede3a6db649fe374cebd3c,
#endif
        code_objects_04daeb2ff40ee5fac397366105bb250b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$android,
        mod_consts.const_str_digest_1b4710591d9501d3cffb9d8858c351d1,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$android$$$function__9_user_documents_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$android$$$function__9_user_documents_dir,
        mod_consts.const_str_plain_user_documents_dir,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1cb3ae0d9250887f7b4aa3082aea8521,
#endif
        code_objects_04fdcd9bc25d37fcea3656ae969b9d4e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs$android,
        mod_consts.const_str_digest_8e5d87b88efdca500978ffd5ca673b0e,
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

static function_impl_code const function_table_platformdirs$android[] = {
impl_platformdirs$android$$$function__1_user_data_dir,
impl_platformdirs$android$$$function__2_site_data_dir,
impl_platformdirs$android$$$function__3_user_config_dir,
impl_platformdirs$android$$$function__4_site_config_dir,
impl_platformdirs$android$$$function__5_user_cache_dir,
impl_platformdirs$android$$$function__6_site_cache_dir,
impl_platformdirs$android$$$function__7_user_state_dir,
impl_platformdirs$android$$$function__8_user_log_dir,
impl_platformdirs$android$$$function__9_user_documents_dir,
impl_platformdirs$android$$$function__10_user_downloads_dir,
impl_platformdirs$android$$$function__11_user_pictures_dir,
impl_platformdirs$android$$$function__12_user_videos_dir,
impl_platformdirs$android$$$function__13_user_music_dir,
impl_platformdirs$android$$$function__15_user_runtime_dir,
impl_platformdirs$android$$$function__16_site_runtime_dir,
impl_platformdirs$android$$$function__17__android_folder,
impl_platformdirs$android$$$function__18__android_documents_folder,
impl_platformdirs$android$$$function__19__android_downloads_folder,
impl_platformdirs$android$$$function__20__android_pictures_folder,
impl_platformdirs$android$$$function__21__android_videos_folder,
impl_platformdirs$android$$$function__22__android_music_folder,
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

    return Nuitka_Function_GetFunctionState(function, function_table_platformdirs$android);
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
        module_platformdirs$android,
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
        function_table_platformdirs$android,
        sizeof(function_table_platformdirs$android) / sizeof(function_impl_code)
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
static char const *module_full_name = "platformdirs.android";
#endif

// Internal entry point for module code.
PyObject *module_code_platformdirs$android(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("platformdirs$android");

    // Store the module for future use.
    module_platformdirs$android = module;

    moduledict_platformdirs$android = MODULE_DICT(module_platformdirs$android);

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
        PRINT_STRING("platformdirs$android: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("platformdirs$android: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("platformdirs$android: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "platformdirs.android" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initplatformdirs$android\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_platformdirs$android, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_platformdirs$android,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_platformdirs$android,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_platformdirs$android, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_platformdirs$android,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_platformdirs$android, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_platformdirs$android,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_platformdirs$android, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_platformdirs$android,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_platformdirs$android);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_platformdirs$android, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_platformdirs$android, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_platformdirs$android, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_platformdirs$android, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_platformdirs$android);
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

        UPDATE_STRING_DICT1(moduledict_platformdirs$android, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
struct Nuitka_FrameObject *frame_frame_platformdirs$android;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_platformdirs$android$$$class__1_Android_14 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_platformdirs$android$$$class__1_Android_2;
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
tmp_assign_source_1 = mod_consts.const_str_digest_bcc52924f0e23b9c6a5efe1fadcaa165;
UPDATE_STRING_DICT0(moduledict_platformdirs$android, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_platformdirs$android, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_platformdirs$android = MAKE_MODULE_FRAME(code_objects_0bd192b9acc03f64e1816bfe24b951ab, module_platformdirs$android);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$android);
assert(Py_REFCNT(frame_frame_platformdirs$android) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_platformdirs$android$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_platformdirs$android$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_platformdirs$android, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_1 = (PyObject *)moduledict_platformdirs$android;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_platformdirs$android->m_frame.f_lineno = 6;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain_re, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT0(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_7);
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
        (PyObject *)moduledict_platformdirs$android,
        mod_consts.const_str_plain_lru_cache,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_lru_cache);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_9 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_9);
tmp_import_from_1__module = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = Py_False;
UPDATE_STRING_DICT0(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_10);
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
        (PyObject *)moduledict_platformdirs$android,
        mod_consts.const_str_plain_cast,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_cast);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain_cast, tmp_assign_source_11);
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
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_api;
tmp_globals_arg_value_2 = (PyObject *)moduledict_platformdirs$android;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_PlatformDirsABC_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_platformdirs$android->m_frame.f_lineno = 11;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_platformdirs$android,
        mod_consts.const_str_plain_PlatformDirsABC,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_PlatformDirsABC);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain_PlatformDirsABC, tmp_assign_source_12);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_platformdirs$android$PlatformDirsABC(tstate);
assert(!(tmp_tuple_element_1 == NULL));
tmp_assign_source_13 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_13, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_13;
}
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_14 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
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


exception_lineno = 14;

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


exception_lineno = 14;

    goto try_except_handler_2;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_16 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_16;
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


exception_lineno = 14;

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
PyObject *tmp_assign_source_17;
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


exception_lineno = 14;

    goto try_except_handler_2;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_Android;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_platformdirs$android->m_frame.f_lineno = 14;
tmp_assign_source_17 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_17;
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


exception_lineno = 14;

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


exception_lineno = 14;

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


exception_lineno = 14;

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


exception_lineno = 14;

    goto try_except_handler_2;
}
frame_frame_platformdirs$android->m_frame.f_lineno = 14;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 14;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_2;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_18;
}
branch_end_1:;
{
PyObject *tmp_assign_source_19;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_platformdirs$android$$$class__1_Android_14 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_a9897efd4a2697dd3745fb758f5e6366;
tmp_res = PyObject_SetItem(locals_platformdirs$android$$$class__1_Android_14, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_digest_b41630b8703d33dfe116bca61f2e3768;
tmp_res = PyObject_SetItem(locals_platformdirs$android$$$class__1_Android_14, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_plain_Android;
tmp_res = PyObject_SetItem(locals_platformdirs$android$$$class__1_Android_14, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_int_pos_14;
tmp_res = PyObject_SetItem(locals_platformdirs$android$$$class__1_Android_14, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_4;
}
frame_frame_platformdirs$android$$$class__1_Android_2 = MAKE_CLASS_FRAME(tstate, code_objects_621b3c360713c98b75466577c120f220, module_platformdirs$android, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$android$$$class__1_Android_2);
assert(Py_REFCNT(frame_frame_platformdirs$android$$$class__1_Android_2) == 2);

// Framed code:
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_1;
tmp_called_value_2 = PyObject_GetItem(locals_platformdirs$android$$$class__1_Android_14, mod_consts.const_str_plain_property);

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

tmp_args_element_value_1 = MAKE_FUNCTION_platformdirs$android$$$function__1_user_data_dir(tstate, tmp_annotations_1);

frame_frame_platformdirs$android$$$class__1_Android_2->m_frame.f_lineno = 23;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$android$$$class__1_Android_14, mod_consts.const_str_plain_user_data_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_2;
tmp_called_value_3 = PyObject_GetItem(locals_platformdirs$android$$$class__1_Android_14, mod_consts.const_str_plain_property);

if (tmp_called_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_3 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_2 = MAKE_FUNCTION_platformdirs$android$$$function__2_site_data_dir(tstate, tmp_annotations_2);

frame_frame_platformdirs$android$$$class__1_Android_2->m_frame.f_lineno = 28;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$android$$$class__1_Android_14, mod_consts.const_str_plain_site_data_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_3;
tmp_called_value_4 = PyObject_GetItem(locals_platformdirs$android$$$class__1_Android_14, mod_consts.const_str_plain_property);

if (tmp_called_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_4 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_3 = MAKE_FUNCTION_platformdirs$android$$$function__3_user_config_dir(tstate, tmp_annotations_3);

frame_frame_platformdirs$android$$$class__1_Android_2->m_frame.f_lineno = 33;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$android$$$class__1_Android_14, mod_consts.const_str_plain_user_config_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_4;
tmp_called_value_5 = PyObject_GetItem(locals_platformdirs$android$$$class__1_Android_14, mod_consts.const_str_plain_property);

if (tmp_called_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_5 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_4 = MAKE_FUNCTION_platformdirs$android$$$function__4_site_config_dir(tstate, tmp_annotations_4);

frame_frame_platformdirs$android$$$class__1_Android_2->m_frame.f_lineno = 41;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$android$$$class__1_Android_14, mod_consts.const_str_plain_site_config_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_5;
PyObject *tmp_annotations_5;
tmp_called_value_6 = PyObject_GetItem(locals_platformdirs$android$$$class__1_Android_14, mod_consts.const_str_plain_property);

if (tmp_called_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_6 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_5 = MAKE_FUNCTION_platformdirs$android$$$function__5_user_cache_dir(tstate, tmp_annotations_5);

frame_frame_platformdirs$android$$$class__1_Android_2->m_frame.f_lineno = 46;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$android$$$class__1_Android_14, mod_consts.const_str_plain_user_cache_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_6;
PyObject *tmp_annotations_6;
tmp_called_value_7 = PyObject_GetItem(locals_platformdirs$android$$$class__1_Android_14, mod_consts.const_str_plain_property);

if (tmp_called_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_7 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_6 = MAKE_FUNCTION_platformdirs$android$$$function__6_site_cache_dir(tstate, tmp_annotations_6);

frame_frame_platformdirs$android$$$class__1_Android_2->m_frame.f_lineno = 51;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$android$$$class__1_Android_14, mod_consts.const_str_plain_site_cache_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_7;
PyObject *tmp_annotations_7;
tmp_called_value_8 = PyObject_GetItem(locals_platformdirs$android$$$class__1_Android_14, mod_consts.const_str_plain_property);

if (tmp_called_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_8 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_7 = MAKE_FUNCTION_platformdirs$android$$$function__7_user_state_dir(tstate, tmp_annotations_7);

frame_frame_platformdirs$android$$$class__1_Android_2->m_frame.f_lineno = 56;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$android$$$class__1_Android_14, mod_consts.const_str_plain_user_state_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_8;
PyObject *tmp_annotations_8;
tmp_called_value_9 = PyObject_GetItem(locals_platformdirs$android$$$class__1_Android_14, mod_consts.const_str_plain_property);

if (tmp_called_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_9 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_8 = MAKE_FUNCTION_platformdirs$android$$$function__8_user_log_dir(tstate, tmp_annotations_8);

frame_frame_platformdirs$android$$$class__1_Android_2->m_frame.f_lineno = 61;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$android$$$class__1_Android_14, mod_consts.const_str_plain_user_log_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_9;
PyObject *tmp_annotations_9;
tmp_called_value_10 = PyObject_GetItem(locals_platformdirs$android$$$class__1_Android_14, mod_consts.const_str_plain_property);

if (tmp_called_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_10 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_9 = MAKE_FUNCTION_platformdirs$android$$$function__9_user_documents_dir(tstate, tmp_annotations_9);

frame_frame_platformdirs$android$$$class__1_Android_2->m_frame.f_lineno = 72;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$android$$$class__1_Android_14, mod_consts.const_str_plain_user_documents_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_10;
PyObject *tmp_annotations_10;
tmp_called_value_11 = PyObject_GetItem(locals_platformdirs$android$$$class__1_Android_14, mod_consts.const_str_plain_property);

if (tmp_called_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_11 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_10 = MAKE_FUNCTION_platformdirs$android$$$function__10_user_downloads_dir(tstate, tmp_annotations_10);

frame_frame_platformdirs$android$$$class__1_Android_2->m_frame.f_lineno = 77;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$android$$$class__1_Android_14, mod_consts.const_str_plain_user_downloads_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_11;
PyObject *tmp_annotations_11;
tmp_called_value_12 = PyObject_GetItem(locals_platformdirs$android$$$class__1_Android_14, mod_consts.const_str_plain_property);

if (tmp_called_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_12 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_11 = MAKE_FUNCTION_platformdirs$android$$$function__11_user_pictures_dir(tstate, tmp_annotations_11);

frame_frame_platformdirs$android$$$class__1_Android_2->m_frame.f_lineno = 82;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$android$$$class__1_Android_14, mod_consts.const_str_plain_user_pictures_dir, tmp_dictset_value);
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
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_12;
PyObject *tmp_annotations_12;
tmp_called_value_13 = PyObject_GetItem(locals_platformdirs$android$$$class__1_Android_14, mod_consts.const_str_plain_property);

if (tmp_called_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_13 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_12 = MAKE_FUNCTION_platformdirs$android$$$function__12_user_videos_dir(tstate, tmp_annotations_12);

frame_frame_platformdirs$android$$$class__1_Android_2->m_frame.f_lineno = 87;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$android$$$class__1_Android_14, mod_consts.const_str_plain_user_videos_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_13;
PyObject *tmp_annotations_13;
tmp_called_value_14 = PyObject_GetItem(locals_platformdirs$android$$$class__1_Android_14, mod_consts.const_str_plain_property);

if (tmp_called_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_14 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_13 = MAKE_FUNCTION_platformdirs$android$$$function__13_user_music_dir(tstate, tmp_annotations_13);

frame_frame_platformdirs$android$$$class__1_Android_2->m_frame.f_lineno = 92;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$android$$$class__1_Android_14, mod_consts.const_str_plain_user_music_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_14;
PyObject *tmp_annotations_14;
tmp_called_value_15 = PyObject_GetItem(locals_platformdirs$android$$$class__1_Android_14, mod_consts.const_str_plain_property);

if (tmp_called_value_15 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_15 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_15);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_14 = MAKE_FUNCTION_platformdirs$android$$$function__14_user_desktop_dir(tstate, tmp_annotations_14);

frame_frame_platformdirs$android$$$class__1_Android_2->m_frame.f_lineno = 97;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$android$$$class__1_Android_14, mod_consts.const_str_plain_user_desktop_dir, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_15;
PyObject *tmp_annotations_15;
tmp_called_value_16 = PyObject_GetItem(locals_platformdirs$android$$$class__1_Android_14, mod_consts.const_str_plain_property);

if (tmp_called_value_16 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_16 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_16);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_15 = MAKE_FUNCTION_platformdirs$android$$$function__15_user_runtime_dir(tstate, tmp_annotations_15);

frame_frame_platformdirs$android$$$class__1_Android_2->m_frame.f_lineno = 102;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_15);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$android$$$class__1_Android_14, mod_consts.const_str_plain_user_runtime_dir, tmp_dictset_value);
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
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_16;
PyObject *tmp_annotations_16;
tmp_called_value_17 = PyObject_GetItem(locals_platformdirs$android$$$class__1_Android_14, mod_consts.const_str_plain_property);

if (tmp_called_value_17 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_17 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_17);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_16 = MAKE_FUNCTION_platformdirs$android$$$function__16_site_runtime_dir(tstate, tmp_annotations_16);

frame_frame_platformdirs$android$$$class__1_Android_2->m_frame.f_lineno = 113;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_16);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_platformdirs$android$$$class__1_Android_14, mod_consts.const_str_plain_site_runtime_dir, tmp_dictset_value);
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$android$$$class__1_Android_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$android$$$class__1_Android_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$android$$$class__1_Android_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$android$$$class__1_Android_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_platformdirs$android$$$class__1_Android_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_4;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_platformdirs$android$$$class__1_Android_14, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

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


exception_lineno = 14;

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
tmp_res = PyObject_SetItem(locals_platformdirs$android$$$class__1_Android_14, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_4;
}
branch_no_3:;
{
PyObject *tmp_assign_source_20;
PyObject *tmp_called_value_18;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_18 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_Android;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_platformdirs$android$$$class__1_Android_14;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_platformdirs$android->m_frame.f_lineno = 14;
tmp_assign_source_20 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_4;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_20;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_19 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_19);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_platformdirs$android$$$class__1_Android_14);
locals_platformdirs$android$$$class__1_Android_14 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_platformdirs$android$$$class__1_Android_14);
locals_platformdirs$android$$$class__1_Android_14 = NULL;
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
exception_lineno = 14;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain_Android, tmp_assign_source_19);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
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
{
PyObject *tmp_assign_source_21;
PyObject *tmp_called_value_19;
PyObject *tmp_called_value_20;
PyObject *tmp_args_element_value_17;
PyObject *tmp_annotations_17;
tmp_called_value_20 = module_var_accessor_platformdirs$android$lru_cache(tstate);
if (unlikely(tmp_called_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lru_cache);
}

if (tmp_called_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 119;

    goto frame_exception_exit_1;
}
frame_frame_platformdirs$android->m_frame.f_lineno = 119;
tmp_called_value_19 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_20, &PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_1_tuple, 0), mod_consts.const_tuple_str_plain_maxsize_tuple);
if (tmp_called_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;

    goto frame_exception_exit_1;
}
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);

tmp_args_element_value_17 = MAKE_FUNCTION_platformdirs$android$$$function__17__android_folder(tstate, tmp_annotations_17);

frame_frame_platformdirs$android->m_frame.f_lineno = 119;
tmp_assign_source_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_17);
CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain__android_folder, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_called_value_21;
PyObject *tmp_called_value_22;
PyObject *tmp_args_element_value_18;
PyObject *tmp_annotations_18;
tmp_called_value_22 = module_var_accessor_platformdirs$android$lru_cache(tstate);
if (unlikely(tmp_called_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lru_cache);
}

if (tmp_called_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 167;

    goto frame_exception_exit_1;
}
frame_frame_platformdirs$android->m_frame.f_lineno = 167;
tmp_called_value_21 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_22, &PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_1_tuple, 0), mod_consts.const_tuple_str_plain_maxsize_tuple);
if (tmp_called_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto frame_exception_exit_1;
}
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_18 = MAKE_FUNCTION_platformdirs$android$$$function__18__android_documents_folder(tstate, tmp_annotations_18);

frame_frame_platformdirs$android->m_frame.f_lineno = 167;
tmp_assign_source_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_18);
CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain__android_documents_folder, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_called_value_23;
PyObject *tmp_called_value_24;
PyObject *tmp_args_element_value_19;
PyObject *tmp_annotations_19;
tmp_called_value_24 = module_var_accessor_platformdirs$android$lru_cache(tstate);
if (unlikely(tmp_called_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lru_cache);
}

if (tmp_called_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 183;

    goto frame_exception_exit_1;
}
frame_frame_platformdirs$android->m_frame.f_lineno = 183;
tmp_called_value_23 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_24, &PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_1_tuple, 0), mod_consts.const_tuple_str_plain_maxsize_tuple);
if (tmp_called_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;

    goto frame_exception_exit_1;
}
tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_19 = MAKE_FUNCTION_platformdirs$android$$$function__19__android_downloads_folder(tstate, tmp_annotations_19);

frame_frame_platformdirs$android->m_frame.f_lineno = 183;
tmp_assign_source_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_19);
CHECK_OBJECT(tmp_called_value_23);
Py_DECREF(tmp_called_value_23);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain__android_downloads_folder, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_called_value_25;
PyObject *tmp_called_value_26;
PyObject *tmp_args_element_value_20;
PyObject *tmp_annotations_20;
tmp_called_value_26 = module_var_accessor_platformdirs$android$lru_cache(tstate);
if (unlikely(tmp_called_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lru_cache);
}

if (tmp_called_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 199;

    goto frame_exception_exit_1;
}
frame_frame_platformdirs$android->m_frame.f_lineno = 199;
tmp_called_value_25 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_26, &PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_1_tuple, 0), mod_consts.const_tuple_str_plain_maxsize_tuple);
if (tmp_called_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

    goto frame_exception_exit_1;
}
tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_20 = MAKE_FUNCTION_platformdirs$android$$$function__20__android_pictures_folder(tstate, tmp_annotations_20);

frame_frame_platformdirs$android->m_frame.f_lineno = 199;
tmp_assign_source_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_20);
CHECK_OBJECT(tmp_called_value_25);
Py_DECREF(tmp_called_value_25);
CHECK_OBJECT(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_20);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain__android_pictures_folder, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_called_value_27;
PyObject *tmp_called_value_28;
PyObject *tmp_args_element_value_21;
PyObject *tmp_annotations_21;
tmp_called_value_28 = module_var_accessor_platformdirs$android$lru_cache(tstate);
if (unlikely(tmp_called_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lru_cache);
}

if (tmp_called_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 215;

    goto frame_exception_exit_1;
}
frame_frame_platformdirs$android->m_frame.f_lineno = 215;
tmp_called_value_27 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_28, &PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_1_tuple, 0), mod_consts.const_tuple_str_plain_maxsize_tuple);
if (tmp_called_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

    goto frame_exception_exit_1;
}
tmp_annotations_21 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_21 = MAKE_FUNCTION_platformdirs$android$$$function__21__android_videos_folder(tstate, tmp_annotations_21);

frame_frame_platformdirs$android->m_frame.f_lineno = 215;
tmp_assign_source_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_21);
CHECK_OBJECT(tmp_called_value_27);
Py_DECREF(tmp_called_value_27);
CHECK_OBJECT(tmp_args_element_value_21);
Py_DECREF(tmp_args_element_value_21);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain__android_videos_folder, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_called_value_29;
PyObject *tmp_called_value_30;
PyObject *tmp_args_element_value_22;
PyObject *tmp_annotations_22;
tmp_called_value_30 = module_var_accessor_platformdirs$android$lru_cache(tstate);
if (unlikely(tmp_called_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lru_cache);
}

if (tmp_called_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 231;

    goto frame_exception_exit_1;
}
frame_frame_platformdirs$android->m_frame.f_lineno = 231;
tmp_called_value_29 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_30, &PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_1_tuple, 0), mod_consts.const_tuple_str_plain_maxsize_tuple);
if (tmp_called_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;

    goto frame_exception_exit_1;
}
tmp_annotations_22 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_22 = MAKE_FUNCTION_platformdirs$android$$$function__22__android_music_folder(tstate, tmp_annotations_22);

frame_frame_platformdirs$android->m_frame.f_lineno = 231;
tmp_assign_source_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_22);
CHECK_OBJECT(tmp_called_value_29);
Py_DECREF(tmp_called_value_29);
CHECK_OBJECT(tmp_args_element_value_22);
Py_DECREF(tmp_args_element_value_22);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_platformdirs$android, (Nuitka_StringObject *)mod_consts.const_str_plain__android_music_folder, tmp_assign_source_26);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$android, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$android->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$android, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_platformdirs$android);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = MAKE_LIST1(tstate, mod_consts.const_str_plain_Android);
UPDATE_STRING_DICT1(moduledict_platformdirs$android, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_27);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("platformdirs$android", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "platformdirs.android" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_platformdirs$android);
    return module_platformdirs$android;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_platformdirs$android, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("platformdirs$android", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

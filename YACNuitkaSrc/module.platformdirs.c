/* Generated code for Python module 'platformdirs'
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



/* The "module_platformdirs" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_platformdirs;
PyDictObject *moduledict_platformdirs;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_getenv;
PyObject *const_tuple_str_plain_ANDROID_DATA_tuple;
PyObject *const_str_digest_ee7d689253812ef17fd81a56f2690bc3;
PyObject *const_tuple_str_plain_ANDROID_ROOT_tuple;
PyObject *const_str_digest_2bb42433b3ec9865aa5e98207ecbd92c;
PyObject *const_tuple_str_plain_SHELL_tuple;
PyObject *const_tuple_str_plain_PREFIX_tuple;
PyObject *const_str_plain__Result;
PyObject *const_str_digest_a9897efd4a2697dd3745fb758f5e6366;
PyObject *const_tuple_str_plain__android_folder_tuple;
PyObject *const_str_plain__android_folder;
PyObject *const_tuple_str_plain_Android_tuple;
PyObject *const_str_plain_Android;
PyObject *const_str_plain_PlatformDirs;
PyObject *const_tuple_390a7b91eff527d21c37e9b24a1d2140_tuple;
PyObject *const_str_plain_user_data_dir;
PyObject *const_str_digest_42c302d87e6bb98d8593192aaafa6360;
PyObject *const_tuple_08263bbdea0041122344270ac3c98519_tuple;
PyObject *const_str_plain_site_data_dir;
PyObject *const_str_digest_ffc0bc566f2116ff86664c46fb6aa064;
PyObject *const_str_plain_user_config_dir;
PyObject *const_str_digest_d18755191da403d6a694aaefda8afc22;
PyObject *const_str_plain_site_config_dir;
PyObject *const_str_digest_4aaff360ab64030688be2de4b40a417b;
PyObject *const_tuple_3bca79387b4235d1c08bc5f9ef701f64_tuple;
PyObject *const_str_plain_user_cache_dir;
PyObject *const_str_digest_a4da0921a9a74f96f1b20f3088ab93ff;
PyObject *const_str_plain_site_cache_dir;
PyObject *const_str_digest_33fc5799f2646ef664ff0abb6b86d301;
PyObject *const_str_plain_user_state_dir;
PyObject *const_str_digest_c283087b17d0b23430306a53bc52596a;
PyObject *const_str_plain_user_log_dir;
PyObject *const_str_digest_1fda89ae5186248c91748236ba91ad7f;
PyObject *const_str_plain_user_documents_dir;
PyObject *const_str_digest_8a5743a526e7065b73e26201c2bc8e61;
PyObject *const_str_plain_user_downloads_dir;
PyObject *const_str_digest_814f54c02c87cf3eb9e035e55f663b76;
PyObject *const_str_plain_user_pictures_dir;
PyObject *const_str_digest_47dd987531ef86df6a72d434af3f38a0;
PyObject *const_str_plain_user_videos_dir;
PyObject *const_str_digest_686b02980daa0b79c8469a3913307c12;
PyObject *const_str_plain_user_music_dir;
PyObject *const_str_digest_dab3939b1888d3dd4da63c94b9a3b2e3;
PyObject *const_str_plain_user_desktop_dir;
PyObject *const_str_digest_19feb3aed92fa11a815323b77323556c;
PyObject *const_str_plain_user_runtime_dir;
PyObject *const_str_digest_55ad37f80858e4fc784386a788763a08;
PyObject *const_str_plain_site_runtime_dir;
PyObject *const_str_digest_ead6dfcba7854fc7e8ed8f523d2bd4ee;
PyObject *const_str_plain_user_data_path;
PyObject *const_str_digest_ee02ba7ed4399b3da460d32a1b7ad2b1;
PyObject *const_str_plain_site_data_path;
PyObject *const_str_digest_ca332b07e9d3abe765a22c1931eecf27;
PyObject *const_str_plain_user_config_path;
PyObject *const_str_digest_ac8ae1c25f496085e84dc53eeaf83222;
PyObject *const_str_plain_site_config_path;
PyObject *const_str_digest_1dd1c0125e8ff337b7573b3c9c44961d;
PyObject *const_str_plain_site_cache_path;
PyObject *const_str_plain_user_cache_path;
PyObject *const_str_digest_6b9e8fb9c6612ed84ee856601579e361;
PyObject *const_str_plain_user_state_path;
PyObject *const_str_digest_a41828f164c153b00b9e7047a3de6e82;
PyObject *const_str_plain_user_log_path;
PyObject *const_str_digest_ed01ea40d2db7e56a9bc09fe53a2cf26;
PyObject *const_str_plain_user_documents_path;
PyObject *const_str_digest_124642cd3e6dd78dfb2f40c3f5ebba32;
PyObject *const_str_plain_user_downloads_path;
PyObject *const_str_digest_74705aef888c9552e6c528e0d924ab88;
PyObject *const_str_plain_user_pictures_path;
PyObject *const_str_digest_a57cc862e1ab9061e5f7ac66f858822c;
PyObject *const_str_plain_user_videos_path;
PyObject *const_str_digest_e1bf53e8e7bb84835c259d2154a42547;
PyObject *const_str_plain_user_music_path;
PyObject *const_str_digest_bf76aed636aa915917ccb38aeea0bfc3;
PyObject *const_str_plain_user_desktop_path;
PyObject *const_str_digest_f69f4424674aab36ef44d2100ce0bdeb;
PyObject *const_str_plain_user_runtime_path;
PyObject *const_str_digest_2c16cf78fca2c3d1ef14e600d9709078;
PyObject *const_str_plain_site_runtime_path;
PyObject *const_str_digest_7a95e6b5ce0d1285debf867e030cfc4a;
PyObject *const_str_digest_9c7af04144d0093ec25815495688010b;
PyObject *const_str_plain_environ;
PyObject *const_tuple_b7b852ec2aa530274f20e8e551ec1e10_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_submodule_search_locations;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_os;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_api;
PyObject *const_tuple_str_plain_PlatformDirsABC_tuple;
PyObject *const_str_plain_PlatformDirsABC;
PyObject *const_str_plain_version;
PyObject *const_tuple_str_plain___version___tuple;
PyObject *const_str_plain___version__;
PyObject *const_tuple_str_plain___version_tuple___tuple;
PyObject *const_str_plain___version_tuple__;
PyObject *const_str_plain___version_info__;
PyObject *const_str_digest_d0bf41bdb1d3c3a4e8b25d918611477f;
PyObject *const_tuple_str_plain_Windows_tuple;
PyObject *const_str_plain_Windows;
PyObject *const_dict_b599d1884bed88b79aaf13e92b15198d;
PyObject *const_str_plain__set_platform_dir_class;
PyObject *const_str_plain_AppDirs;
PyObject *const_tuple_none_none_none_false_false_tuple;
PyObject *const_dict_de6c8bd07ee156a5ed8bec97ab8e1cec;
PyObject *const_dict_2a5dcb3809722c862e97c4167f27a217;
PyObject *const_tuple_none_none_none_true_false_tuple;
PyObject *const_dict_88b430f8c946a8031088df67ee248f5b;
PyObject *const_dict_e8d16ece775461636da8aedac2f07d6b;
PyObject *const_dict_aec3da9e77dd6885c0d5788d99c49d87;
PyObject *const_dict_902c7dd49729d7d9cdeca1de649decb2;
PyObject *const_dict_7b892d2c3a77e7c76a9dadd2a5b7533f;
PyObject *const_dict_8bbfa897dce82badadbdad5bcd6f946d;
PyObject *const_list_8b0b535f0b738adc98f15bd89b8e9454_list;
PyObject *const_str_digest_0ad1976bdad8823a982acb1f01eb30bd;
PyObject *const_str_digest_649942f7e2e2c9b685fe74d60aaf8ce1;
PyObject *const_tuple_str_plain__android_folder_str_plain_Android_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[119];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("platformdirs"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_getenv);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ANDROID_DATA_tuple);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_ee7d689253812ef17fd81a56f2690bc3);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ANDROID_ROOT_tuple);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_2bb42433b3ec9865aa5e98207ecbd92c);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SHELL_tuple);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PREFIX_tuple);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain__Result);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_a9897efd4a2697dd3745fb758f5e6366);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__android_folder_tuple);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain__android_folder);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Android_tuple);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_Android);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_PlatformDirs);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_390a7b91eff527d21c37e9b24a1d2140_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_data_dir);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_42c302d87e6bb98d8593192aaafa6360);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_08263bbdea0041122344270ac3c98519_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_site_data_dir);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_ffc0bc566f2116ff86664c46fb6aa064);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_config_dir);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_d18755191da403d6a694aaefda8afc22);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_site_config_dir);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_4aaff360ab64030688be2de4b40a417b);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_3bca79387b4235d1c08bc5f9ef701f64_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_cache_dir);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_a4da0921a9a74f96f1b20f3088ab93ff);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_site_cache_dir);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_33fc5799f2646ef664ff0abb6b86d301);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_state_dir);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_c283087b17d0b23430306a53bc52596a);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_log_dir);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_1fda89ae5186248c91748236ba91ad7f);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_documents_dir);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_8a5743a526e7065b73e26201c2bc8e61);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_downloads_dir);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_814f54c02c87cf3eb9e035e55f663b76);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_pictures_dir);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_47dd987531ef86df6a72d434af3f38a0);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_videos_dir);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_686b02980daa0b79c8469a3913307c12);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_music_dir);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_dab3939b1888d3dd4da63c94b9a3b2e3);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_desktop_dir);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_19feb3aed92fa11a815323b77323556c);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_runtime_dir);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_55ad37f80858e4fc784386a788763a08);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_site_runtime_dir);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_ead6dfcba7854fc7e8ed8f523d2bd4ee);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_data_path);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_ee02ba7ed4399b3da460d32a1b7ad2b1);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_site_data_path);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_ca332b07e9d3abe765a22c1931eecf27);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_config_path);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_ac8ae1c25f496085e84dc53eeaf83222);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_site_config_path);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_1dd1c0125e8ff337b7573b3c9c44961d);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_site_cache_path);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_cache_path);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_6b9e8fb9c6612ed84ee856601579e361);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_state_path);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_a41828f164c153b00b9e7047a3de6e82);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_log_path);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_ed01ea40d2db7e56a9bc09fe53a2cf26);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_documents_path);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_124642cd3e6dd78dfb2f40c3f5ebba32);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_downloads_path);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_74705aef888c9552e6c528e0d924ab88);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_pictures_path);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_a57cc862e1ab9061e5f7ac66f858822c);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_videos_path);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_e1bf53e8e7bb84835c259d2154a42547);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_music_path);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_bf76aed636aa915917ccb38aeea0bfc3);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_desktop_path);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_f69f4424674aab36ef44d2100ce0bdeb);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_user_runtime_path);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_digest_2c16cf78fca2c3d1ef14e600d9709078);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_site_runtime_path);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_7a95e6b5ce0d1285debf867e030cfc4a);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_9c7af04144d0093ec25815495688010b);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_tuple_b7b852ec2aa530274f20e8e551ec1e10_tuple);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_api);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PlatformDirsABC_tuple);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_PlatformDirsABC);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_version);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___version___tuple);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain___version__);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___version_tuple___tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain___version_tuple__);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain___version_info__);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_d0bf41bdb1d3c3a4e8b25d918611477f);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Windows_tuple);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_Windows);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_dict_b599d1884bed88b79aaf13e92b15198d);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain__set_platform_dir_class);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_AppDirs);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_false_false_tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_dict_de6c8bd07ee156a5ed8bec97ab8e1cec);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_dict_2a5dcb3809722c862e97c4167f27a217);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_true_false_tuple);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_dict_88b430f8c946a8031088df67ee248f5b);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_dict_aec3da9e77dd6885c0d5788d99c49d87);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_dict_902c7dd49729d7d9cdeca1de649decb2);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_dict_7b892d2c3a77e7c76a9dadd2a5b7533f);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_dict_8bbfa897dce82badadbdad5bcd6f946d);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_list_8b0b535f0b738adc98f15bd89b8e9454_list);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_digest_0ad1976bdad8823a982acb1f01eb30bd);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_649942f7e2e2c9b685fe74d60aaf8ce1);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__android_folder_str_plain_Android_tuple);
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
void checkModuleConstants_platformdirs(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_getenv));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getenv);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ANDROID_DATA_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ANDROID_DATA_tuple);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_ee7d689253812ef17fd81a56f2690bc3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ee7d689253812ef17fd81a56f2690bc3);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ANDROID_ROOT_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ANDROID_ROOT_tuple);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_2bb42433b3ec9865aa5e98207ecbd92c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2bb42433b3ec9865aa5e98207ecbd92c);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SHELL_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_SHELL_tuple);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PREFIX_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_PREFIX_tuple);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain__Result));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__Result);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_a9897efd4a2697dd3745fb758f5e6366));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a9897efd4a2697dd3745fb758f5e6366);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__android_folder_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__android_folder_tuple);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain__android_folder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__android_folder);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Android_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Android_tuple);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_Android));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Android);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_PlatformDirs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PlatformDirs);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_390a7b91eff527d21c37e9b24a1d2140_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_390a7b91eff527d21c37e9b24a1d2140_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_data_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_data_dir);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_42c302d87e6bb98d8593192aaafa6360));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_42c302d87e6bb98d8593192aaafa6360);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_08263bbdea0041122344270ac3c98519_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_08263bbdea0041122344270ac3c98519_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_site_data_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_site_data_dir);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_ffc0bc566f2116ff86664c46fb6aa064));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ffc0bc566f2116ff86664c46fb6aa064);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_config_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_config_dir);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_d18755191da403d6a694aaefda8afc22));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d18755191da403d6a694aaefda8afc22);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_site_config_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_site_config_dir);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_4aaff360ab64030688be2de4b40a417b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4aaff360ab64030688be2de4b40a417b);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_3bca79387b4235d1c08bc5f9ef701f64_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3bca79387b4235d1c08bc5f9ef701f64_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_cache_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_cache_dir);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_a4da0921a9a74f96f1b20f3088ab93ff));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a4da0921a9a74f96f1b20f3088ab93ff);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_site_cache_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_site_cache_dir);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_33fc5799f2646ef664ff0abb6b86d301));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_33fc5799f2646ef664ff0abb6b86d301);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_state_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_state_dir);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_c283087b17d0b23430306a53bc52596a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c283087b17d0b23430306a53bc52596a);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_log_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_log_dir);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_1fda89ae5186248c91748236ba91ad7f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1fda89ae5186248c91748236ba91ad7f);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_documents_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_documents_dir);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_8a5743a526e7065b73e26201c2bc8e61));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8a5743a526e7065b73e26201c2bc8e61);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_downloads_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_downloads_dir);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_814f54c02c87cf3eb9e035e55f663b76));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_814f54c02c87cf3eb9e035e55f663b76);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_pictures_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_pictures_dir);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_47dd987531ef86df6a72d434af3f38a0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_47dd987531ef86df6a72d434af3f38a0);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_videos_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_videos_dir);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_686b02980daa0b79c8469a3913307c12));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_686b02980daa0b79c8469a3913307c12);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_music_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_music_dir);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_dab3939b1888d3dd4da63c94b9a3b2e3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dab3939b1888d3dd4da63c94b9a3b2e3);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_desktop_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_desktop_dir);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_19feb3aed92fa11a815323b77323556c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_19feb3aed92fa11a815323b77323556c);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_runtime_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_runtime_dir);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_55ad37f80858e4fc784386a788763a08));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_55ad37f80858e4fc784386a788763a08);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_site_runtime_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_site_runtime_dir);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_ead6dfcba7854fc7e8ed8f523d2bd4ee));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ead6dfcba7854fc7e8ed8f523d2bd4ee);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_data_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_data_path);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_ee02ba7ed4399b3da460d32a1b7ad2b1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ee02ba7ed4399b3da460d32a1b7ad2b1);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_site_data_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_site_data_path);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_ca332b07e9d3abe765a22c1931eecf27));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ca332b07e9d3abe765a22c1931eecf27);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_config_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_config_path);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_ac8ae1c25f496085e84dc53eeaf83222));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ac8ae1c25f496085e84dc53eeaf83222);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_site_config_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_site_config_path);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_1dd1c0125e8ff337b7573b3c9c44961d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1dd1c0125e8ff337b7573b3c9c44961d);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_site_cache_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_site_cache_path);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_cache_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_cache_path);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_6b9e8fb9c6612ed84ee856601579e361));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6b9e8fb9c6612ed84ee856601579e361);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_state_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_state_path);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_a41828f164c153b00b9e7047a3de6e82));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a41828f164c153b00b9e7047a3de6e82);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_log_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_log_path);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_ed01ea40d2db7e56a9bc09fe53a2cf26));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ed01ea40d2db7e56a9bc09fe53a2cf26);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_documents_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_documents_path);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_124642cd3e6dd78dfb2f40c3f5ebba32));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_124642cd3e6dd78dfb2f40c3f5ebba32);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_downloads_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_downloads_path);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_74705aef888c9552e6c528e0d924ab88));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_74705aef888c9552e6c528e0d924ab88);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_pictures_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_pictures_path);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_a57cc862e1ab9061e5f7ac66f858822c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a57cc862e1ab9061e5f7ac66f858822c);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_videos_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_videos_path);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_e1bf53e8e7bb84835c259d2154a42547));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e1bf53e8e7bb84835c259d2154a42547);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_music_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_music_path);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_bf76aed636aa915917ccb38aeea0bfc3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bf76aed636aa915917ccb38aeea0bfc3);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_desktop_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_desktop_path);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_f69f4424674aab36ef44d2100ce0bdeb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f69f4424674aab36ef44d2100ce0bdeb);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_user_runtime_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_user_runtime_path);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_digest_2c16cf78fca2c3d1ef14e600d9709078));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2c16cf78fca2c3d1ef14e600d9709078);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_site_runtime_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_site_runtime_path);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_7a95e6b5ce0d1285debf867e030cfc4a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7a95e6b5ce0d1285debf867e030cfc4a);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_9c7af04144d0093ec25815495688010b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9c7af04144d0093ec25815495688010b);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_tuple_b7b852ec2aa530274f20e8e551ec1e10_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b7b852ec2aa530274f20e8e551ec1e10_tuple);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_submodule_search_locations);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_api));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_api);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PlatformDirsABC_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_PlatformDirsABC_tuple);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_PlatformDirsABC));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PlatformDirsABC);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_version));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_version);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___version___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___version___tuple);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain___version__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___version__);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___version_tuple___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___version_tuple___tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain___version_tuple__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___version_tuple__);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain___version_info__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___version_info__);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_d0bf41bdb1d3c3a4e8b25d918611477f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d0bf41bdb1d3c3a4e8b25d918611477f);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Windows_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Windows_tuple);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_Windows));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Windows);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_dict_b599d1884bed88b79aaf13e92b15198d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b599d1884bed88b79aaf13e92b15198d);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain__set_platform_dir_class));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__set_platform_dir_class);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_AppDirs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AppDirs);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_false_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_false_false_tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_dict_de6c8bd07ee156a5ed8bec97ab8e1cec));
CHECK_OBJECT_DEEP(mod_consts.const_dict_de6c8bd07ee156a5ed8bec97ab8e1cec);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_dict_2a5dcb3809722c862e97c4167f27a217));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2a5dcb3809722c862e97c4167f27a217);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_true_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_true_false_tuple);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_dict_88b430f8c946a8031088df67ee248f5b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_88b430f8c946a8031088df67ee248f5b);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_dict_aec3da9e77dd6885c0d5788d99c49d87));
CHECK_OBJECT_DEEP(mod_consts.const_dict_aec3da9e77dd6885c0d5788d99c49d87);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_dict_902c7dd49729d7d9cdeca1de649decb2));
CHECK_OBJECT_DEEP(mod_consts.const_dict_902c7dd49729d7d9cdeca1de649decb2);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_dict_7b892d2c3a77e7c76a9dadd2a5b7533f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7b892d2c3a77e7c76a9dadd2a5b7533f);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_dict_8bbfa897dce82badadbdad5bcd6f946d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8bbfa897dce82badadbdad5bcd6f946d);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_list_8b0b535f0b738adc98f15bd89b8e9454_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_8b0b535f0b738adc98f15bd89b8e9454_list);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_digest_0ad1976bdad8823a982acb1f01eb30bd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0ad1976bdad8823a982acb1f01eb30bd);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_649942f7e2e2c9b685fe74d60aaf8ce1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_649942f7e2e2c9b685fe74d60aaf8ce1);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__android_folder_str_plain_Android_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__android_folder_str_plain_Android_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 5
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
static PyObject *module_var_accessor_platformdirs$PlatformDirs(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_platformdirs->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_platformdirs->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_PlatformDirs);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_platformdirs->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PlatformDirs);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PlatformDirs, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PlatformDirs);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PlatformDirs, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_PlatformDirs);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_PlatformDirs);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PlatformDirs);
    }

    return result;
}

static PyObject *module_var_accessor_platformdirs$_Result(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_platformdirs->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_platformdirs->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain__Result);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_platformdirs->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__Result);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__Result, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__Result);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__Result, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain__Result);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain__Result);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__Result);
    }

    return result;
}

static PyObject *module_var_accessor_platformdirs$__path__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_platformdirs->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_platformdirs->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_platformdirs, (Nuitka_StringObject *)const_str_plain___path__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_platformdirs->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_platformdirs, (Nuitka_StringObject *)const_str_plain___path__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_platformdirs, (Nuitka_StringObject *)const_str_plain___path__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___path__);
    }

    return result;
}

static PyObject *module_var_accessor_platformdirs$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_platformdirs->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_platformdirs->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_platformdirs, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_platformdirs->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_platformdirs, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_platformdirs, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_platformdirs$_set_platform_dir_class(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_platformdirs->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_platformdirs->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain__set_platform_dir_class);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_platformdirs->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__set_platform_dir_class);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__set_platform_dir_class, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__set_platform_dir_class);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__set_platform_dir_class, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain__set_platform_dir_class);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain__set_platform_dir_class);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__set_platform_dir_class);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_d931f44c11c08efb71067756dbf99513;
static PyCodeObject *code_objects_5f9009ecd45398784df5b2b51b9c7a41;
static PyCodeObject *code_objects_33e84a38053e0aa8a478a713ddf2f255;
static PyCodeObject *code_objects_3f73169abca740a37bedcc268899b61a;
static PyCodeObject *code_objects_bf32fc14673ce692c8c39a03bb31a4f9;
static PyCodeObject *code_objects_ab23e13a6d05f239d50687323611d29b;
static PyCodeObject *code_objects_a2504d76d113807901cdc01138049744;
static PyCodeObject *code_objects_6eb084ff14e235f223d2c58b430e2b68;
static PyCodeObject *code_objects_ee31efc68c8961a43c2f449c4cd0bcba;
static PyCodeObject *code_objects_cce2bd6fc964eaab25e4b8bd17ca5df0;
static PyCodeObject *code_objects_4ea3c7cea3ed419841248d27fc53bfe2;
static PyCodeObject *code_objects_4800065f021fa654229715a7b2ed736c;
static PyCodeObject *code_objects_2d8363bc05d5376e6093f9c985d98383;
static PyCodeObject *code_objects_e18c4fc586dafe389af91f637957d075;
static PyCodeObject *code_objects_539a2bb8609a12d2ccdc8905f9da251b;
static PyCodeObject *code_objects_7dfaead55385dad3503383127ce88b33;
static PyCodeObject *code_objects_ec3327bbf19fdec21d285cc7d2c830e5;
static PyCodeObject *code_objects_a991e95468184578126f715b5a150f2e;
static PyCodeObject *code_objects_35b01dab41fb8c377571627f3c0ced87;
static PyCodeObject *code_objects_d777d5632b8ed5dd595c12417abb40a2;
static PyCodeObject *code_objects_a9778ffa0c3f66315e13e94fcdb63f3b;
static PyCodeObject *code_objects_19069a01b60c22cbe8a15e9271cad885;
static PyCodeObject *code_objects_73a59b33c075cd43a6e6b9f60ff2db9e;
static PyCodeObject *code_objects_b3a451075d1dc1fc2c9b83b5cdbed80d;
static PyCodeObject *code_objects_5c3883bcaeabc7bc0e4d743b58d82513;
static PyCodeObject *code_objects_c9ae6de55ad198b3f45f3cfedf0e0e05;
static PyCodeObject *code_objects_cebf40f4b49c6800efaaed022253e46f;
static PyCodeObject *code_objects_e44af6e04f647849151d3d650296a755;
static PyCodeObject *code_objects_6579aa07af88e47456d9baf8c5180646;
static PyCodeObject *code_objects_6fc6f91d92a5dc7d4bb8fa58422d7c0c;
static PyCodeObject *code_objects_1ea9082c0b68cfbb188671ae91e01241;
static PyCodeObject *code_objects_336e1a6edd2b4c134d8f73ded40114b0;
static PyCodeObject *code_objects_608fd2eb98c3c20b9200fb3b77f95903;
static PyCodeObject *code_objects_869e18f6c6dc5b76fc6bc0bab5e3ef3d;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_0ad1976bdad8823a982acb1f01eb30bd); CHECK_OBJECT(module_filename_obj);
code_objects_d931f44c11c08efb71067756dbf99513 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_649942f7e2e2c9b685fe74d60aaf8ce1, mod_consts.const_str_digest_649942f7e2e2c9b685fe74d60aaf8ce1, NULL, NULL, 0, 0, 0);
code_objects_5f9009ecd45398784df5b2b51b9c7a41 = MAKE_CODE_OBJECT(module_filename_obj, 30, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__set_platform_dir_class, mod_consts.const_str_plain__set_platform_dir_class, mod_consts.const_tuple_str_plain__android_folder_str_plain_Android_tuple, NULL, 0, 0, 0);
code_objects_33e84a38053e0aa8a478a713ddf2f255 = MAKE_CODE_OBJECT(module_filename_obj, 173, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_site_cache_dir, mod_consts.const_str_plain_site_cache_dir, mod_consts.const_tuple_3bca79387b4235d1c08bc5f9ef701f64_tuple, NULL, 5, 0, 0);
code_objects_3f73169abca740a37bedcc268899b61a = MAKE_CODE_OBJECT(module_filename_obj, 419, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_site_cache_path, mod_consts.const_str_plain_site_cache_path, mod_consts.const_tuple_3bca79387b4235d1c08bc5f9ef701f64_tuple, NULL, 5, 0, 0);
code_objects_bf32fc14673ce692c8c39a03bb31a4f9 = MAKE_CODE_OBJECT(module_filename_obj, 125, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_site_config_dir, mod_consts.const_str_plain_site_config_dir, mod_consts.const_tuple_08263bbdea0041122344270ac3c98519_tuple, NULL, 5, 0, 0);
code_objects_ab23e13a6d05f239d50687323611d29b = MAKE_CODE_OBJECT(module_filename_obj, 395, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_site_config_path, mod_consts.const_str_plain_site_config_path, mod_consts.const_tuple_08263bbdea0041122344270ac3c98519_tuple, NULL, 5, 0, 0);
code_objects_a2504d76d113807901cdc01138049744 = MAKE_CODE_OBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_site_data_dir, mod_consts.const_str_plain_site_data_dir, mod_consts.const_tuple_08263bbdea0041122344270ac3c98519_tuple, NULL, 5, 0, 0);
code_objects_6eb084ff14e235f223d2c58b430e2b68 = MAKE_CODE_OBJECT(module_filename_obj, 347, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_site_data_path, mod_consts.const_str_plain_site_data_path, mod_consts.const_tuple_08263bbdea0041122344270ac3c98519_tuple, NULL, 5, 0, 0);
code_objects_ee31efc68c8961a43c2f449c4cd0bcba = MAKE_CODE_OBJECT(module_filename_obj, 299, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_site_runtime_dir, mod_consts.const_str_plain_site_runtime_dir, mod_consts.const_tuple_3bca79387b4235d1c08bc5f9ef701f64_tuple, NULL, 5, 0, 0);
code_objects_cce2bd6fc964eaab25e4b8bd17ca5df0 = MAKE_CODE_OBJECT(module_filename_obj, 569, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_site_runtime_path, mod_consts.const_str_plain_site_runtime_path, mod_consts.const_tuple_3bca79387b4235d1c08bc5f9ef701f64_tuple, NULL, 5, 0, 0);
code_objects_4ea3c7cea3ed419841248d27fc53bfe2 = MAKE_CODE_OBJECT(module_filename_obj, 149, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_cache_dir, mod_consts.const_str_plain_user_cache_dir, mod_consts.const_tuple_3bca79387b4235d1c08bc5f9ef701f64_tuple, NULL, 5, 0, 0);
code_objects_4800065f021fa654229715a7b2ed736c = MAKE_CODE_OBJECT(module_filename_obj, 443, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_cache_path, mod_consts.const_str_plain_user_cache_path, mod_consts.const_tuple_3bca79387b4235d1c08bc5f9ef701f64_tuple, NULL, 5, 0, 0);
code_objects_2d8363bc05d5376e6093f9c985d98383 = MAKE_CODE_OBJECT(module_filename_obj, 101, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_config_dir, mod_consts.const_str_plain_user_config_dir, mod_consts.const_tuple_390a7b91eff527d21c37e9b24a1d2140_tuple, NULL, 5, 0, 0);
code_objects_e18c4fc586dafe389af91f637957d075 = MAKE_CODE_OBJECT(module_filename_obj, 371, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_config_path, mod_consts.const_str_plain_user_config_path, mod_consts.const_tuple_390a7b91eff527d21c37e9b24a1d2140_tuple, NULL, 5, 0, 0);
code_objects_539a2bb8609a12d2ccdc8905f9da251b = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_data_dir, mod_consts.const_str_plain_user_data_dir, mod_consts.const_tuple_390a7b91eff527d21c37e9b24a1d2140_tuple, NULL, 5, 0, 0);
code_objects_7dfaead55385dad3503383127ce88b33 = MAKE_CODE_OBJECT(module_filename_obj, 323, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_data_path, mod_consts.const_str_plain_user_data_path, mod_consts.const_tuple_390a7b91eff527d21c37e9b24a1d2140_tuple, NULL, 5, 0, 0);
code_objects_ec3327bbf19fdec21d285cc7d2c830e5 = MAKE_CODE_OBJECT(module_filename_obj, 270, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_desktop_dir, mod_consts.const_str_plain_user_desktop_dir, NULL, NULL, 0, 0, 0);
code_objects_a991e95468184578126f715b5a150f2e = MAKE_CODE_OBJECT(module_filename_obj, 540, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_desktop_path, mod_consts.const_str_plain_user_desktop_path, NULL, NULL, 0, 0, 0);
code_objects_35b01dab41fb8c377571627f3c0ced87 = MAKE_CODE_OBJECT(module_filename_obj, 245, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_documents_dir, mod_consts.const_str_plain_user_documents_dir, NULL, NULL, 0, 0, 0);
code_objects_d777d5632b8ed5dd595c12417abb40a2 = MAKE_CODE_OBJECT(module_filename_obj, 515, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_documents_path, mod_consts.const_str_plain_user_documents_path, NULL, NULL, 0, 0, 0);
code_objects_a9778ffa0c3f66315e13e94fcdb63f3b = MAKE_CODE_OBJECT(module_filename_obj, 250, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_downloads_dir, mod_consts.const_str_plain_user_downloads_dir, NULL, NULL, 0, 0, 0);
code_objects_19069a01b60c22cbe8a15e9271cad885 = MAKE_CODE_OBJECT(module_filename_obj, 520, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_downloads_path, mod_consts.const_str_plain_user_downloads_path, NULL, NULL, 0, 0, 0);
code_objects_73a59b33c075cd43a6e6b9f60ff2db9e = MAKE_CODE_OBJECT(module_filename_obj, 221, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_log_dir, mod_consts.const_str_plain_user_log_dir, mod_consts.const_tuple_3bca79387b4235d1c08bc5f9ef701f64_tuple, NULL, 5, 0, 0);
code_objects_b3a451075d1dc1fc2c9b83b5cdbed80d = MAKE_CODE_OBJECT(module_filename_obj, 491, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_log_path, mod_consts.const_str_plain_user_log_path, mod_consts.const_tuple_3bca79387b4235d1c08bc5f9ef701f64_tuple, NULL, 5, 0, 0);
code_objects_5c3883bcaeabc7bc0e4d743b58d82513 = MAKE_CODE_OBJECT(module_filename_obj, 265, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_music_dir, mod_consts.const_str_plain_user_music_dir, NULL, NULL, 0, 0, 0);
code_objects_c9ae6de55ad198b3f45f3cfedf0e0e05 = MAKE_CODE_OBJECT(module_filename_obj, 535, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_music_path, mod_consts.const_str_plain_user_music_path, NULL, NULL, 0, 0, 0);
code_objects_cebf40f4b49c6800efaaed022253e46f = MAKE_CODE_OBJECT(module_filename_obj, 255, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_pictures_dir, mod_consts.const_str_plain_user_pictures_dir, NULL, NULL, 0, 0, 0);
code_objects_e44af6e04f647849151d3d650296a755 = MAKE_CODE_OBJECT(module_filename_obj, 525, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_pictures_path, mod_consts.const_str_plain_user_pictures_path, NULL, NULL, 0, 0, 0);
code_objects_6579aa07af88e47456d9baf8c5180646 = MAKE_CODE_OBJECT(module_filename_obj, 275, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_runtime_dir, mod_consts.const_str_plain_user_runtime_dir, mod_consts.const_tuple_3bca79387b4235d1c08bc5f9ef701f64_tuple, NULL, 5, 0, 0);
code_objects_6fc6f91d92a5dc7d4bb8fa58422d7c0c = MAKE_CODE_OBJECT(module_filename_obj, 545, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_runtime_path, mod_consts.const_str_plain_user_runtime_path, mod_consts.const_tuple_3bca79387b4235d1c08bc5f9ef701f64_tuple, NULL, 5, 0, 0);
code_objects_1ea9082c0b68cfbb188671ae91e01241 = MAKE_CODE_OBJECT(module_filename_obj, 197, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_state_dir, mod_consts.const_str_plain_user_state_dir, mod_consts.const_tuple_390a7b91eff527d21c37e9b24a1d2140_tuple, NULL, 5, 0, 0);
code_objects_336e1a6edd2b4c134d8f73ded40114b0 = MAKE_CODE_OBJECT(module_filename_obj, 467, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_state_path, mod_consts.const_str_plain_user_state_path, mod_consts.const_tuple_390a7b91eff527d21c37e9b24a1d2140_tuple, NULL, 5, 0, 0);
code_objects_608fd2eb98c3c20b9200fb3b77f95903 = MAKE_CODE_OBJECT(module_filename_obj, 260, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_videos_dir, mod_consts.const_str_plain_user_videos_dir, NULL, NULL, 0, 0, 0);
code_objects_869e18f6c6dc5b76fc6bc0bab5e3ef3d = MAKE_CODE_OBJECT(module_filename_obj, 530, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_user_videos_path, mod_consts.const_str_plain_user_videos_path, NULL, NULL, 0, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_platformdirs$$$function__10_user_documents_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$$$function__11_user_downloads_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$$$function__12_user_pictures_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$$$function__13_user_videos_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$$$function__14_user_music_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$$$function__15_user_desktop_dir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$$$function__16_user_runtime_dir(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$$$function__17_site_runtime_dir(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$$$function__18_user_data_path(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$$$function__19_site_data_path(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$$$function__1__set_platform_dir_class(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$$$function__20_user_config_path(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$$$function__21_site_config_path(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$$$function__22_site_cache_path(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$$$function__23_user_cache_path(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$$$function__24_user_state_path(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$$$function__25_user_log_path(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$$$function__26_user_documents_path(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$$$function__27_user_downloads_path(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$$$function__28_user_pictures_path(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$$$function__29_user_videos_path(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$$$function__2_user_data_dir(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$$$function__30_user_music_path(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$$$function__31_user_desktop_path(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$$$function__32_user_runtime_path(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$$$function__33_site_runtime_path(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$$$function__3_site_data_dir(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$$$function__4_user_config_dir(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$$$function__5_site_config_dir(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$$$function__6_user_cache_dir(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$$$function__7_site_cache_dir(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$$$function__8_user_state_dir(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_platformdirs$$$function__9_user_log_dir(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_platformdirs$$$function__1__set_platform_dir_class(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var__android_folder = NULL;
PyObject *var_Android = NULL;
struct Nuitka_FrameObject *frame_frame_platformdirs$$$function__1__set_platform_dir_class;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$$$function__1__set_platform_dir_class = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_platformdirs$$$function__1__set_platform_dir_class)) {
    Py_XDECREF(cache_frame_frame_platformdirs$$$function__1__set_platform_dir_class);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$$$function__1__set_platform_dir_class == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$$$function__1__set_platform_dir_class = MAKE_FUNCTION_FRAME(tstate, code_objects_5f9009ecd45398784df5b2b51b9c7a41, module_platformdirs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$$$function__1__set_platform_dir_class->m_type_description == NULL);
frame_frame_platformdirs$$$function__1__set_platform_dir_class = cache_frame_frame_platformdirs$$$function__1__set_platform_dir_class;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$$$function__1__set_platform_dir_class);
assert(Py_REFCNT(frame_frame_platformdirs$$$function__1__set_platform_dir_class) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_instance_2;
tmp_called_instance_1 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_1 == NULL));
frame_frame_platformdirs$$$function__1__set_platform_dir_class->m_frame.f_lineno = 31;
tmp_cmp_expr_left_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getenv,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_ANDROID_DATA_tuple, 0)
);

if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_digest_ee7d689253812ef17fd81a56f2690bc3;
tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
tmp_called_instance_2 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_2 == NULL));
frame_frame_platformdirs$$$function__1__set_platform_dir_class->m_frame.f_lineno = 31;
tmp_cmp_expr_left_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_getenv,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_ANDROID_ROOT_tuple, 0)
);

if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_str_digest_2bb42433b3ec9865aa5e98207ecbd92c;
tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "oo";
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
nuitka_bool tmp_condition_result_2;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_2;
int tmp_truth_name_2;
tmp_called_instance_3 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_3 == NULL));
frame_frame_platformdirs$$$function__1__set_platform_dir_class->m_frame.f_lineno = 32;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_getenv,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_SHELL_tuple, 0)
);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 32;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_called_instance_4 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_4 == NULL));
frame_frame_platformdirs$$$function__1__set_platform_dir_class->m_frame.f_lineno = 32;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_4,
    mod_consts.const_str_plain_getenv,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_PREFIX_tuple, 0)
);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 32;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
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
tmp_return_value = module_var_accessor_platformdirs$_Result(tstate);
if (unlikely(tmp_return_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__Result);
}

if (tmp_return_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_a9897efd4a2697dd3745fb758f5e6366;
tmp_globals_arg_value_1 = (PyObject *)moduledict_platformdirs;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain__android_folder_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_platformdirs$$$function__1__set_platform_dir_class->m_frame.f_lineno = 35;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_platformdirs,
        mod_consts.const_str_plain__android_folder,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain__android_folder);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var__android_folder == NULL);
var__android_folder = tmp_assign_source_1;
}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_called_value_1;
CHECK_OBJECT(var__android_folder);
tmp_called_value_1 = var__android_folder;
frame_frame_platformdirs$$$function__1__set_platform_dir_class->m_frame.f_lineno = 37;
tmp_cmp_expr_left_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_a9897efd4a2697dd3745fb758f5e6366;
tmp_globals_arg_value_2 = (PyObject *)moduledict_platformdirs;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Android_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_platformdirs$$$function__1__set_platform_dir_class->m_frame.f_lineno = 38;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_platformdirs,
        mod_consts.const_str_plain_Android,
        const_int_0
    );
} else {
    tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Android);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_Android == NULL);
var_Android = tmp_assign_source_2;
}
CHECK_OBJECT(var_Android);
tmp_return_value = var_Android;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_3:;
branch_no_1:;
tmp_return_value = module_var_accessor_platformdirs$_Result(tstate);
if (unlikely(tmp_return_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__Result);
}

if (tmp_return_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 42;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$$$function__1__set_platform_dir_class, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$$$function__1__set_platform_dir_class->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$$$function__1__set_platform_dir_class, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$$$function__1__set_platform_dir_class,
    type_description_1,
    var__android_folder,
    var_Android
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$$$function__1__set_platform_dir_class == cache_frame_frame_platformdirs$$$function__1__set_platform_dir_class) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$$$function__1__set_platform_dir_class);
    cache_frame_frame_platformdirs$$$function__1__set_platform_dir_class = NULL;
}

assertFrameObject(frame_frame_platformdirs$$$function__1__set_platform_dir_class);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var__android_folder);
var__android_folder = NULL;
Py_XDECREF(var_Android);
var_Android = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var__android_folder);
var__android_folder = NULL;
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


static PyObject *impl_platformdirs$$$function__2_user_data_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_appname = python_pars[0];
PyObject *par_appauthor = python_pars[1];
PyObject *par_version = python_pars[2];
PyObject *par_roaming = python_pars[3];
PyObject *par_ensure_exists = python_pars[4];
struct Nuitka_FrameObject *frame_frame_platformdirs$$$function__2_user_data_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$$$function__2_user_data_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$$$function__2_user_data_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$$$function__2_user_data_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$$$function__2_user_data_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$$$function__2_user_data_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_539a2bb8609a12d2ccdc8905f9da251b, module_platformdirs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$$$function__2_user_data_dir->m_type_description == NULL);
frame_frame_platformdirs$$$function__2_user_data_dir = cache_frame_frame_platformdirs$$$function__2_user_data_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$$$function__2_user_data_dir);
assert(Py_REFCNT(frame_frame_platformdirs$$$function__2_user_data_dir) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
tmp_called_value_1 = module_var_accessor_platformdirs$PlatformDirs(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PlatformDirs);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 68;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_appname);
tmp_kw_call_value_0_1 = par_appname;
CHECK_OBJECT(par_appauthor);
tmp_kw_call_value_1_1 = par_appauthor;
CHECK_OBJECT(par_version);
tmp_kw_call_value_2_1 = par_version;
CHECK_OBJECT(par_roaming);
tmp_kw_call_value_3_1 = par_roaming;
CHECK_OBJECT(par_ensure_exists);
tmp_kw_call_value_4_1 = par_ensure_exists;
frame_frame_platformdirs$$$function__2_user_data_dir->m_frame.f_lineno = 68;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

    tmp_expression_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_390a7b91eff527d21c37e9b24a1d2140_tuple);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_data_dir);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$$$function__2_user_data_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$$$function__2_user_data_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$$$function__2_user_data_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$$$function__2_user_data_dir,
    type_description_1,
    par_appname,
    par_appauthor,
    par_version,
    par_roaming,
    par_ensure_exists
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$$$function__2_user_data_dir == cache_frame_frame_platformdirs$$$function__2_user_data_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$$$function__2_user_data_dir);
    cache_frame_frame_platformdirs$$$function__2_user_data_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$$$function__2_user_data_dir);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
CHECK_OBJECT(par_roaming);
Py_DECREF(par_roaming);
CHECK_OBJECT(par_ensure_exists);
Py_DECREF(par_ensure_exists);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
CHECK_OBJECT(par_roaming);
Py_DECREF(par_roaming);
CHECK_OBJECT(par_ensure_exists);
Py_DECREF(par_ensure_exists);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_platformdirs$$$function__3_site_data_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_appname = python_pars[0];
PyObject *par_appauthor = python_pars[1];
PyObject *par_version = python_pars[2];
PyObject *par_multipath = python_pars[3];
PyObject *par_ensure_exists = python_pars[4];
struct Nuitka_FrameObject *frame_frame_platformdirs$$$function__3_site_data_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$$$function__3_site_data_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$$$function__3_site_data_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$$$function__3_site_data_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$$$function__3_site_data_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$$$function__3_site_data_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_a2504d76d113807901cdc01138049744, module_platformdirs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$$$function__3_site_data_dir->m_type_description == NULL);
frame_frame_platformdirs$$$function__3_site_data_dir = cache_frame_frame_platformdirs$$$function__3_site_data_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$$$function__3_site_data_dir);
assert(Py_REFCNT(frame_frame_platformdirs$$$function__3_site_data_dir) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
tmp_called_value_1 = module_var_accessor_platformdirs$PlatformDirs(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PlatformDirs);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 92;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_appname);
tmp_kw_call_value_0_1 = par_appname;
CHECK_OBJECT(par_appauthor);
tmp_kw_call_value_1_1 = par_appauthor;
CHECK_OBJECT(par_version);
tmp_kw_call_value_2_1 = par_version;
CHECK_OBJECT(par_multipath);
tmp_kw_call_value_3_1 = par_multipath;
CHECK_OBJECT(par_ensure_exists);
tmp_kw_call_value_4_1 = par_ensure_exists;
frame_frame_platformdirs$$$function__3_site_data_dir->m_frame.f_lineno = 92;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

    tmp_expression_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_08263bbdea0041122344270ac3c98519_tuple);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_site_data_dir);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$$$function__3_site_data_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$$$function__3_site_data_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$$$function__3_site_data_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$$$function__3_site_data_dir,
    type_description_1,
    par_appname,
    par_appauthor,
    par_version,
    par_multipath,
    par_ensure_exists
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$$$function__3_site_data_dir == cache_frame_frame_platformdirs$$$function__3_site_data_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$$$function__3_site_data_dir);
    cache_frame_frame_platformdirs$$$function__3_site_data_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$$$function__3_site_data_dir);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
CHECK_OBJECT(par_multipath);
Py_DECREF(par_multipath);
CHECK_OBJECT(par_ensure_exists);
Py_DECREF(par_ensure_exists);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
CHECK_OBJECT(par_multipath);
Py_DECREF(par_multipath);
CHECK_OBJECT(par_ensure_exists);
Py_DECREF(par_ensure_exists);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_platformdirs$$$function__4_user_config_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_appname = python_pars[0];
PyObject *par_appauthor = python_pars[1];
PyObject *par_version = python_pars[2];
PyObject *par_roaming = python_pars[3];
PyObject *par_ensure_exists = python_pars[4];
struct Nuitka_FrameObject *frame_frame_platformdirs$$$function__4_user_config_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$$$function__4_user_config_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$$$function__4_user_config_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$$$function__4_user_config_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$$$function__4_user_config_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$$$function__4_user_config_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_2d8363bc05d5376e6093f9c985d98383, module_platformdirs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$$$function__4_user_config_dir->m_type_description == NULL);
frame_frame_platformdirs$$$function__4_user_config_dir = cache_frame_frame_platformdirs$$$function__4_user_config_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$$$function__4_user_config_dir);
assert(Py_REFCNT(frame_frame_platformdirs$$$function__4_user_config_dir) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
tmp_called_value_1 = module_var_accessor_platformdirs$PlatformDirs(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PlatformDirs);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 116;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_appname);
tmp_kw_call_value_0_1 = par_appname;
CHECK_OBJECT(par_appauthor);
tmp_kw_call_value_1_1 = par_appauthor;
CHECK_OBJECT(par_version);
tmp_kw_call_value_2_1 = par_version;
CHECK_OBJECT(par_roaming);
tmp_kw_call_value_3_1 = par_roaming;
CHECK_OBJECT(par_ensure_exists);
tmp_kw_call_value_4_1 = par_ensure_exists;
frame_frame_platformdirs$$$function__4_user_config_dir->m_frame.f_lineno = 116;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

    tmp_expression_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_390a7b91eff527d21c37e9b24a1d2140_tuple);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_config_dir);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$$$function__4_user_config_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$$$function__4_user_config_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$$$function__4_user_config_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$$$function__4_user_config_dir,
    type_description_1,
    par_appname,
    par_appauthor,
    par_version,
    par_roaming,
    par_ensure_exists
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$$$function__4_user_config_dir == cache_frame_frame_platformdirs$$$function__4_user_config_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$$$function__4_user_config_dir);
    cache_frame_frame_platformdirs$$$function__4_user_config_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$$$function__4_user_config_dir);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
CHECK_OBJECT(par_roaming);
Py_DECREF(par_roaming);
CHECK_OBJECT(par_ensure_exists);
Py_DECREF(par_ensure_exists);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
CHECK_OBJECT(par_roaming);
Py_DECREF(par_roaming);
CHECK_OBJECT(par_ensure_exists);
Py_DECREF(par_ensure_exists);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_platformdirs$$$function__5_site_config_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_appname = python_pars[0];
PyObject *par_appauthor = python_pars[1];
PyObject *par_version = python_pars[2];
PyObject *par_multipath = python_pars[3];
PyObject *par_ensure_exists = python_pars[4];
struct Nuitka_FrameObject *frame_frame_platformdirs$$$function__5_site_config_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$$$function__5_site_config_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$$$function__5_site_config_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$$$function__5_site_config_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$$$function__5_site_config_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$$$function__5_site_config_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_bf32fc14673ce692c8c39a03bb31a4f9, module_platformdirs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$$$function__5_site_config_dir->m_type_description == NULL);
frame_frame_platformdirs$$$function__5_site_config_dir = cache_frame_frame_platformdirs$$$function__5_site_config_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$$$function__5_site_config_dir);
assert(Py_REFCNT(frame_frame_platformdirs$$$function__5_site_config_dir) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
tmp_called_value_1 = module_var_accessor_platformdirs$PlatformDirs(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PlatformDirs);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 140;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_appname);
tmp_kw_call_value_0_1 = par_appname;
CHECK_OBJECT(par_appauthor);
tmp_kw_call_value_1_1 = par_appauthor;
CHECK_OBJECT(par_version);
tmp_kw_call_value_2_1 = par_version;
CHECK_OBJECT(par_multipath);
tmp_kw_call_value_3_1 = par_multipath;
CHECK_OBJECT(par_ensure_exists);
tmp_kw_call_value_4_1 = par_ensure_exists;
frame_frame_platformdirs$$$function__5_site_config_dir->m_frame.f_lineno = 140;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

    tmp_expression_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_08263bbdea0041122344270ac3c98519_tuple);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_site_config_dir);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$$$function__5_site_config_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$$$function__5_site_config_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$$$function__5_site_config_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$$$function__5_site_config_dir,
    type_description_1,
    par_appname,
    par_appauthor,
    par_version,
    par_multipath,
    par_ensure_exists
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$$$function__5_site_config_dir == cache_frame_frame_platformdirs$$$function__5_site_config_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$$$function__5_site_config_dir);
    cache_frame_frame_platformdirs$$$function__5_site_config_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$$$function__5_site_config_dir);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
CHECK_OBJECT(par_multipath);
Py_DECREF(par_multipath);
CHECK_OBJECT(par_ensure_exists);
Py_DECREF(par_ensure_exists);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
CHECK_OBJECT(par_multipath);
Py_DECREF(par_multipath);
CHECK_OBJECT(par_ensure_exists);
Py_DECREF(par_ensure_exists);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_platformdirs$$$function__6_user_cache_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_appname = python_pars[0];
PyObject *par_appauthor = python_pars[1];
PyObject *par_version = python_pars[2];
PyObject *par_opinion = python_pars[3];
PyObject *par_ensure_exists = python_pars[4];
struct Nuitka_FrameObject *frame_frame_platformdirs$$$function__6_user_cache_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$$$function__6_user_cache_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$$$function__6_user_cache_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$$$function__6_user_cache_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$$$function__6_user_cache_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$$$function__6_user_cache_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_4ea3c7cea3ed419841248d27fc53bfe2, module_platformdirs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$$$function__6_user_cache_dir->m_type_description == NULL);
frame_frame_platformdirs$$$function__6_user_cache_dir = cache_frame_frame_platformdirs$$$function__6_user_cache_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$$$function__6_user_cache_dir);
assert(Py_REFCNT(frame_frame_platformdirs$$$function__6_user_cache_dir) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
tmp_called_value_1 = module_var_accessor_platformdirs$PlatformDirs(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PlatformDirs);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 164;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_appname);
tmp_kw_call_value_0_1 = par_appname;
CHECK_OBJECT(par_appauthor);
tmp_kw_call_value_1_1 = par_appauthor;
CHECK_OBJECT(par_version);
tmp_kw_call_value_2_1 = par_version;
CHECK_OBJECT(par_opinion);
tmp_kw_call_value_3_1 = par_opinion;
CHECK_OBJECT(par_ensure_exists);
tmp_kw_call_value_4_1 = par_ensure_exists;
frame_frame_platformdirs$$$function__6_user_cache_dir->m_frame.f_lineno = 164;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

    tmp_expression_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_3bca79387b4235d1c08bc5f9ef701f64_tuple);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_cache_dir);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$$$function__6_user_cache_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$$$function__6_user_cache_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$$$function__6_user_cache_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$$$function__6_user_cache_dir,
    type_description_1,
    par_appname,
    par_appauthor,
    par_version,
    par_opinion,
    par_ensure_exists
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$$$function__6_user_cache_dir == cache_frame_frame_platformdirs$$$function__6_user_cache_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$$$function__6_user_cache_dir);
    cache_frame_frame_platformdirs$$$function__6_user_cache_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$$$function__6_user_cache_dir);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
CHECK_OBJECT(par_opinion);
Py_DECREF(par_opinion);
CHECK_OBJECT(par_ensure_exists);
Py_DECREF(par_ensure_exists);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
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


static PyObject *impl_platformdirs$$$function__7_site_cache_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_appname = python_pars[0];
PyObject *par_appauthor = python_pars[1];
PyObject *par_version = python_pars[2];
PyObject *par_opinion = python_pars[3];
PyObject *par_ensure_exists = python_pars[4];
struct Nuitka_FrameObject *frame_frame_platformdirs$$$function__7_site_cache_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$$$function__7_site_cache_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$$$function__7_site_cache_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$$$function__7_site_cache_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$$$function__7_site_cache_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$$$function__7_site_cache_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_33e84a38053e0aa8a478a713ddf2f255, module_platformdirs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$$$function__7_site_cache_dir->m_type_description == NULL);
frame_frame_platformdirs$$$function__7_site_cache_dir = cache_frame_frame_platformdirs$$$function__7_site_cache_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$$$function__7_site_cache_dir);
assert(Py_REFCNT(frame_frame_platformdirs$$$function__7_site_cache_dir) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
tmp_called_value_1 = module_var_accessor_platformdirs$PlatformDirs(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PlatformDirs);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 188;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_appname);
tmp_kw_call_value_0_1 = par_appname;
CHECK_OBJECT(par_appauthor);
tmp_kw_call_value_1_1 = par_appauthor;
CHECK_OBJECT(par_version);
tmp_kw_call_value_2_1 = par_version;
CHECK_OBJECT(par_opinion);
tmp_kw_call_value_3_1 = par_opinion;
CHECK_OBJECT(par_ensure_exists);
tmp_kw_call_value_4_1 = par_ensure_exists;
frame_frame_platformdirs$$$function__7_site_cache_dir->m_frame.f_lineno = 188;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

    tmp_expression_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_3bca79387b4235d1c08bc5f9ef701f64_tuple);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_site_cache_dir);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$$$function__7_site_cache_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$$$function__7_site_cache_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$$$function__7_site_cache_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$$$function__7_site_cache_dir,
    type_description_1,
    par_appname,
    par_appauthor,
    par_version,
    par_opinion,
    par_ensure_exists
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$$$function__7_site_cache_dir == cache_frame_frame_platformdirs$$$function__7_site_cache_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$$$function__7_site_cache_dir);
    cache_frame_frame_platformdirs$$$function__7_site_cache_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$$$function__7_site_cache_dir);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
CHECK_OBJECT(par_opinion);
Py_DECREF(par_opinion);
CHECK_OBJECT(par_ensure_exists);
Py_DECREF(par_ensure_exists);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
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


static PyObject *impl_platformdirs$$$function__8_user_state_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_appname = python_pars[0];
PyObject *par_appauthor = python_pars[1];
PyObject *par_version = python_pars[2];
PyObject *par_roaming = python_pars[3];
PyObject *par_ensure_exists = python_pars[4];
struct Nuitka_FrameObject *frame_frame_platformdirs$$$function__8_user_state_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$$$function__8_user_state_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$$$function__8_user_state_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$$$function__8_user_state_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$$$function__8_user_state_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$$$function__8_user_state_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_1ea9082c0b68cfbb188671ae91e01241, module_platformdirs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$$$function__8_user_state_dir->m_type_description == NULL);
frame_frame_platformdirs$$$function__8_user_state_dir = cache_frame_frame_platformdirs$$$function__8_user_state_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$$$function__8_user_state_dir);
assert(Py_REFCNT(frame_frame_platformdirs$$$function__8_user_state_dir) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
tmp_called_value_1 = module_var_accessor_platformdirs$PlatformDirs(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PlatformDirs);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 212;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_appname);
tmp_kw_call_value_0_1 = par_appname;
CHECK_OBJECT(par_appauthor);
tmp_kw_call_value_1_1 = par_appauthor;
CHECK_OBJECT(par_version);
tmp_kw_call_value_2_1 = par_version;
CHECK_OBJECT(par_roaming);
tmp_kw_call_value_3_1 = par_roaming;
CHECK_OBJECT(par_ensure_exists);
tmp_kw_call_value_4_1 = par_ensure_exists;
frame_frame_platformdirs$$$function__8_user_state_dir->m_frame.f_lineno = 212;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

    tmp_expression_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_390a7b91eff527d21c37e9b24a1d2140_tuple);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_state_dir);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$$$function__8_user_state_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$$$function__8_user_state_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$$$function__8_user_state_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$$$function__8_user_state_dir,
    type_description_1,
    par_appname,
    par_appauthor,
    par_version,
    par_roaming,
    par_ensure_exists
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$$$function__8_user_state_dir == cache_frame_frame_platformdirs$$$function__8_user_state_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$$$function__8_user_state_dir);
    cache_frame_frame_platformdirs$$$function__8_user_state_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$$$function__8_user_state_dir);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
CHECK_OBJECT(par_roaming);
Py_DECREF(par_roaming);
CHECK_OBJECT(par_ensure_exists);
Py_DECREF(par_ensure_exists);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
CHECK_OBJECT(par_roaming);
Py_DECREF(par_roaming);
CHECK_OBJECT(par_ensure_exists);
Py_DECREF(par_ensure_exists);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_platformdirs$$$function__9_user_log_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_appname = python_pars[0];
PyObject *par_appauthor = python_pars[1];
PyObject *par_version = python_pars[2];
PyObject *par_opinion = python_pars[3];
PyObject *par_ensure_exists = python_pars[4];
struct Nuitka_FrameObject *frame_frame_platformdirs$$$function__9_user_log_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$$$function__9_user_log_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$$$function__9_user_log_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$$$function__9_user_log_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$$$function__9_user_log_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$$$function__9_user_log_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_73a59b33c075cd43a6e6b9f60ff2db9e, module_platformdirs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$$$function__9_user_log_dir->m_type_description == NULL);
frame_frame_platformdirs$$$function__9_user_log_dir = cache_frame_frame_platformdirs$$$function__9_user_log_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$$$function__9_user_log_dir);
assert(Py_REFCNT(frame_frame_platformdirs$$$function__9_user_log_dir) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
tmp_called_value_1 = module_var_accessor_platformdirs$PlatformDirs(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PlatformDirs);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 236;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_appname);
tmp_kw_call_value_0_1 = par_appname;
CHECK_OBJECT(par_appauthor);
tmp_kw_call_value_1_1 = par_appauthor;
CHECK_OBJECT(par_version);
tmp_kw_call_value_2_1 = par_version;
CHECK_OBJECT(par_opinion);
tmp_kw_call_value_3_1 = par_opinion;
CHECK_OBJECT(par_ensure_exists);
tmp_kw_call_value_4_1 = par_ensure_exists;
frame_frame_platformdirs$$$function__9_user_log_dir->m_frame.f_lineno = 236;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

    tmp_expression_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_3bca79387b4235d1c08bc5f9ef701f64_tuple);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_log_dir);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$$$function__9_user_log_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$$$function__9_user_log_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$$$function__9_user_log_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$$$function__9_user_log_dir,
    type_description_1,
    par_appname,
    par_appauthor,
    par_version,
    par_opinion,
    par_ensure_exists
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$$$function__9_user_log_dir == cache_frame_frame_platformdirs$$$function__9_user_log_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$$$function__9_user_log_dir);
    cache_frame_frame_platformdirs$$$function__9_user_log_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$$$function__9_user_log_dir);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
CHECK_OBJECT(par_opinion);
Py_DECREF(par_opinion);
CHECK_OBJECT(par_ensure_exists);
Py_DECREF(par_ensure_exists);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
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


static PyObject *impl_platformdirs$$$function__10_user_documents_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_platformdirs$$$function__10_user_documents_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$$$function__10_user_documents_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$$$function__10_user_documents_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$$$function__10_user_documents_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$$$function__10_user_documents_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$$$function__10_user_documents_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_35b01dab41fb8c377571627f3c0ced87, module_platformdirs, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$$$function__10_user_documents_dir->m_type_description == NULL);
frame_frame_platformdirs$$$function__10_user_documents_dir = cache_frame_frame_platformdirs$$$function__10_user_documents_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$$$function__10_user_documents_dir);
assert(Py_REFCNT(frame_frame_platformdirs$$$function__10_user_documents_dir) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$PlatformDirs(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PlatformDirs);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 247;

    goto frame_exception_exit_1;
}
frame_frame_platformdirs$$$function__10_user_documents_dir->m_frame.f_lineno = 247;
tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;

    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_documents_dir);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$$$function__10_user_documents_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$$$function__10_user_documents_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$$$function__10_user_documents_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$$$function__10_user_documents_dir,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$$$function__10_user_documents_dir == cache_frame_frame_platformdirs$$$function__10_user_documents_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$$$function__10_user_documents_dir);
    cache_frame_frame_platformdirs$$$function__10_user_documents_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$$$function__10_user_documents_dir);

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


static PyObject *impl_platformdirs$$$function__11_user_downloads_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_platformdirs$$$function__11_user_downloads_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$$$function__11_user_downloads_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$$$function__11_user_downloads_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$$$function__11_user_downloads_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$$$function__11_user_downloads_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$$$function__11_user_downloads_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_a9778ffa0c3f66315e13e94fcdb63f3b, module_platformdirs, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$$$function__11_user_downloads_dir->m_type_description == NULL);
frame_frame_platformdirs$$$function__11_user_downloads_dir = cache_frame_frame_platformdirs$$$function__11_user_downloads_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$$$function__11_user_downloads_dir);
assert(Py_REFCNT(frame_frame_platformdirs$$$function__11_user_downloads_dir) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$PlatformDirs(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PlatformDirs);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 252;

    goto frame_exception_exit_1;
}
frame_frame_platformdirs$$$function__11_user_downloads_dir->m_frame.f_lineno = 252;
tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;

    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_downloads_dir);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$$$function__11_user_downloads_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$$$function__11_user_downloads_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$$$function__11_user_downloads_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$$$function__11_user_downloads_dir,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$$$function__11_user_downloads_dir == cache_frame_frame_platformdirs$$$function__11_user_downloads_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$$$function__11_user_downloads_dir);
    cache_frame_frame_platformdirs$$$function__11_user_downloads_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$$$function__11_user_downloads_dir);

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


static PyObject *impl_platformdirs$$$function__12_user_pictures_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_platformdirs$$$function__12_user_pictures_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$$$function__12_user_pictures_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$$$function__12_user_pictures_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$$$function__12_user_pictures_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$$$function__12_user_pictures_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$$$function__12_user_pictures_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_cebf40f4b49c6800efaaed022253e46f, module_platformdirs, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$$$function__12_user_pictures_dir->m_type_description == NULL);
frame_frame_platformdirs$$$function__12_user_pictures_dir = cache_frame_frame_platformdirs$$$function__12_user_pictures_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$$$function__12_user_pictures_dir);
assert(Py_REFCNT(frame_frame_platformdirs$$$function__12_user_pictures_dir) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$PlatformDirs(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PlatformDirs);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 257;

    goto frame_exception_exit_1;
}
frame_frame_platformdirs$$$function__12_user_pictures_dir->m_frame.f_lineno = 257;
tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;

    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_pictures_dir);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$$$function__12_user_pictures_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$$$function__12_user_pictures_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$$$function__12_user_pictures_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$$$function__12_user_pictures_dir,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$$$function__12_user_pictures_dir == cache_frame_frame_platformdirs$$$function__12_user_pictures_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$$$function__12_user_pictures_dir);
    cache_frame_frame_platformdirs$$$function__12_user_pictures_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$$$function__12_user_pictures_dir);

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


static PyObject *impl_platformdirs$$$function__13_user_videos_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_platformdirs$$$function__13_user_videos_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$$$function__13_user_videos_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$$$function__13_user_videos_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$$$function__13_user_videos_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$$$function__13_user_videos_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$$$function__13_user_videos_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_608fd2eb98c3c20b9200fb3b77f95903, module_platformdirs, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$$$function__13_user_videos_dir->m_type_description == NULL);
frame_frame_platformdirs$$$function__13_user_videos_dir = cache_frame_frame_platformdirs$$$function__13_user_videos_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$$$function__13_user_videos_dir);
assert(Py_REFCNT(frame_frame_platformdirs$$$function__13_user_videos_dir) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$PlatformDirs(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PlatformDirs);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 262;

    goto frame_exception_exit_1;
}
frame_frame_platformdirs$$$function__13_user_videos_dir->m_frame.f_lineno = 262;
tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;

    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_videos_dir);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$$$function__13_user_videos_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$$$function__13_user_videos_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$$$function__13_user_videos_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$$$function__13_user_videos_dir,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$$$function__13_user_videos_dir == cache_frame_frame_platformdirs$$$function__13_user_videos_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$$$function__13_user_videos_dir);
    cache_frame_frame_platformdirs$$$function__13_user_videos_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$$$function__13_user_videos_dir);

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


static PyObject *impl_platformdirs$$$function__14_user_music_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_platformdirs$$$function__14_user_music_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$$$function__14_user_music_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$$$function__14_user_music_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$$$function__14_user_music_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$$$function__14_user_music_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$$$function__14_user_music_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_5c3883bcaeabc7bc0e4d743b58d82513, module_platformdirs, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$$$function__14_user_music_dir->m_type_description == NULL);
frame_frame_platformdirs$$$function__14_user_music_dir = cache_frame_frame_platformdirs$$$function__14_user_music_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$$$function__14_user_music_dir);
assert(Py_REFCNT(frame_frame_platformdirs$$$function__14_user_music_dir) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$PlatformDirs(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PlatformDirs);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 267;

    goto frame_exception_exit_1;
}
frame_frame_platformdirs$$$function__14_user_music_dir->m_frame.f_lineno = 267;
tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;

    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_music_dir);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$$$function__14_user_music_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$$$function__14_user_music_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$$$function__14_user_music_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$$$function__14_user_music_dir,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$$$function__14_user_music_dir == cache_frame_frame_platformdirs$$$function__14_user_music_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$$$function__14_user_music_dir);
    cache_frame_frame_platformdirs$$$function__14_user_music_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$$$function__14_user_music_dir);

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


static PyObject *impl_platformdirs$$$function__15_user_desktop_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_platformdirs$$$function__15_user_desktop_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$$$function__15_user_desktop_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$$$function__15_user_desktop_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$$$function__15_user_desktop_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$$$function__15_user_desktop_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$$$function__15_user_desktop_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_ec3327bbf19fdec21d285cc7d2c830e5, module_platformdirs, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$$$function__15_user_desktop_dir->m_type_description == NULL);
frame_frame_platformdirs$$$function__15_user_desktop_dir = cache_frame_frame_platformdirs$$$function__15_user_desktop_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$$$function__15_user_desktop_dir);
assert(Py_REFCNT(frame_frame_platformdirs$$$function__15_user_desktop_dir) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$PlatformDirs(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PlatformDirs);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 272;

    goto frame_exception_exit_1;
}
frame_frame_platformdirs$$$function__15_user_desktop_dir->m_frame.f_lineno = 272;
tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;

    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_desktop_dir);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$$$function__15_user_desktop_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$$$function__15_user_desktop_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$$$function__15_user_desktop_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$$$function__15_user_desktop_dir,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$$$function__15_user_desktop_dir == cache_frame_frame_platformdirs$$$function__15_user_desktop_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$$$function__15_user_desktop_dir);
    cache_frame_frame_platformdirs$$$function__15_user_desktop_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$$$function__15_user_desktop_dir);

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


static PyObject *impl_platformdirs$$$function__16_user_runtime_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_appname = python_pars[0];
PyObject *par_appauthor = python_pars[1];
PyObject *par_version = python_pars[2];
PyObject *par_opinion = python_pars[3];
PyObject *par_ensure_exists = python_pars[4];
struct Nuitka_FrameObject *frame_frame_platformdirs$$$function__16_user_runtime_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$$$function__16_user_runtime_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$$$function__16_user_runtime_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$$$function__16_user_runtime_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$$$function__16_user_runtime_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$$$function__16_user_runtime_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_6579aa07af88e47456d9baf8c5180646, module_platformdirs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$$$function__16_user_runtime_dir->m_type_description == NULL);
frame_frame_platformdirs$$$function__16_user_runtime_dir = cache_frame_frame_platformdirs$$$function__16_user_runtime_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$$$function__16_user_runtime_dir);
assert(Py_REFCNT(frame_frame_platformdirs$$$function__16_user_runtime_dir) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
tmp_called_value_1 = module_var_accessor_platformdirs$PlatformDirs(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PlatformDirs);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 290;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_appname);
tmp_kw_call_value_0_1 = par_appname;
CHECK_OBJECT(par_appauthor);
tmp_kw_call_value_1_1 = par_appauthor;
CHECK_OBJECT(par_version);
tmp_kw_call_value_2_1 = par_version;
CHECK_OBJECT(par_opinion);
tmp_kw_call_value_3_1 = par_opinion;
CHECK_OBJECT(par_ensure_exists);
tmp_kw_call_value_4_1 = par_ensure_exists;
frame_frame_platformdirs$$$function__16_user_runtime_dir->m_frame.f_lineno = 290;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

    tmp_expression_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_3bca79387b4235d1c08bc5f9ef701f64_tuple);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_runtime_dir);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$$$function__16_user_runtime_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$$$function__16_user_runtime_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$$$function__16_user_runtime_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$$$function__16_user_runtime_dir,
    type_description_1,
    par_appname,
    par_appauthor,
    par_version,
    par_opinion,
    par_ensure_exists
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$$$function__16_user_runtime_dir == cache_frame_frame_platformdirs$$$function__16_user_runtime_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$$$function__16_user_runtime_dir);
    cache_frame_frame_platformdirs$$$function__16_user_runtime_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$$$function__16_user_runtime_dir);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
CHECK_OBJECT(par_opinion);
Py_DECREF(par_opinion);
CHECK_OBJECT(par_ensure_exists);
Py_DECREF(par_ensure_exists);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
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


static PyObject *impl_platformdirs$$$function__17_site_runtime_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_appname = python_pars[0];
PyObject *par_appauthor = python_pars[1];
PyObject *par_version = python_pars[2];
PyObject *par_opinion = python_pars[3];
PyObject *par_ensure_exists = python_pars[4];
struct Nuitka_FrameObject *frame_frame_platformdirs$$$function__17_site_runtime_dir;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$$$function__17_site_runtime_dir = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$$$function__17_site_runtime_dir)) {
    Py_XDECREF(cache_frame_frame_platformdirs$$$function__17_site_runtime_dir);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$$$function__17_site_runtime_dir == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$$$function__17_site_runtime_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_ee31efc68c8961a43c2f449c4cd0bcba, module_platformdirs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$$$function__17_site_runtime_dir->m_type_description == NULL);
frame_frame_platformdirs$$$function__17_site_runtime_dir = cache_frame_frame_platformdirs$$$function__17_site_runtime_dir;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$$$function__17_site_runtime_dir);
assert(Py_REFCNT(frame_frame_platformdirs$$$function__17_site_runtime_dir) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
tmp_called_value_1 = module_var_accessor_platformdirs$PlatformDirs(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PlatformDirs);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 314;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_appname);
tmp_kw_call_value_0_1 = par_appname;
CHECK_OBJECT(par_appauthor);
tmp_kw_call_value_1_1 = par_appauthor;
CHECK_OBJECT(par_version);
tmp_kw_call_value_2_1 = par_version;
CHECK_OBJECT(par_opinion);
tmp_kw_call_value_3_1 = par_opinion;
CHECK_OBJECT(par_ensure_exists);
tmp_kw_call_value_4_1 = par_ensure_exists;
frame_frame_platformdirs$$$function__17_site_runtime_dir->m_frame.f_lineno = 314;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

    tmp_expression_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_3bca79387b4235d1c08bc5f9ef701f64_tuple);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_site_runtime_dir);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$$$function__17_site_runtime_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$$$function__17_site_runtime_dir->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$$$function__17_site_runtime_dir, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$$$function__17_site_runtime_dir,
    type_description_1,
    par_appname,
    par_appauthor,
    par_version,
    par_opinion,
    par_ensure_exists
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$$$function__17_site_runtime_dir == cache_frame_frame_platformdirs$$$function__17_site_runtime_dir) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$$$function__17_site_runtime_dir);
    cache_frame_frame_platformdirs$$$function__17_site_runtime_dir = NULL;
}

assertFrameObject(frame_frame_platformdirs$$$function__17_site_runtime_dir);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
CHECK_OBJECT(par_opinion);
Py_DECREF(par_opinion);
CHECK_OBJECT(par_ensure_exists);
Py_DECREF(par_ensure_exists);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
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


static PyObject *impl_platformdirs$$$function__18_user_data_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_appname = python_pars[0];
PyObject *par_appauthor = python_pars[1];
PyObject *par_version = python_pars[2];
PyObject *par_roaming = python_pars[3];
PyObject *par_ensure_exists = python_pars[4];
struct Nuitka_FrameObject *frame_frame_platformdirs$$$function__18_user_data_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$$$function__18_user_data_path = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$$$function__18_user_data_path)) {
    Py_XDECREF(cache_frame_frame_platformdirs$$$function__18_user_data_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$$$function__18_user_data_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$$$function__18_user_data_path = MAKE_FUNCTION_FRAME(tstate, code_objects_7dfaead55385dad3503383127ce88b33, module_platformdirs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$$$function__18_user_data_path->m_type_description == NULL);
frame_frame_platformdirs$$$function__18_user_data_path = cache_frame_frame_platformdirs$$$function__18_user_data_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$$$function__18_user_data_path);
assert(Py_REFCNT(frame_frame_platformdirs$$$function__18_user_data_path) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
tmp_called_value_1 = module_var_accessor_platformdirs$PlatformDirs(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PlatformDirs);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 338;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_appname);
tmp_kw_call_value_0_1 = par_appname;
CHECK_OBJECT(par_appauthor);
tmp_kw_call_value_1_1 = par_appauthor;
CHECK_OBJECT(par_version);
tmp_kw_call_value_2_1 = par_version;
CHECK_OBJECT(par_roaming);
tmp_kw_call_value_3_1 = par_roaming;
CHECK_OBJECT(par_ensure_exists);
tmp_kw_call_value_4_1 = par_ensure_exists;
frame_frame_platformdirs$$$function__18_user_data_path->m_frame.f_lineno = 338;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

    tmp_expression_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_390a7b91eff527d21c37e9b24a1d2140_tuple);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_data_path);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$$$function__18_user_data_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$$$function__18_user_data_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$$$function__18_user_data_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$$$function__18_user_data_path,
    type_description_1,
    par_appname,
    par_appauthor,
    par_version,
    par_roaming,
    par_ensure_exists
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$$$function__18_user_data_path == cache_frame_frame_platformdirs$$$function__18_user_data_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$$$function__18_user_data_path);
    cache_frame_frame_platformdirs$$$function__18_user_data_path = NULL;
}

assertFrameObject(frame_frame_platformdirs$$$function__18_user_data_path);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
CHECK_OBJECT(par_roaming);
Py_DECREF(par_roaming);
CHECK_OBJECT(par_ensure_exists);
Py_DECREF(par_ensure_exists);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
CHECK_OBJECT(par_roaming);
Py_DECREF(par_roaming);
CHECK_OBJECT(par_ensure_exists);
Py_DECREF(par_ensure_exists);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_platformdirs$$$function__19_site_data_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_appname = python_pars[0];
PyObject *par_appauthor = python_pars[1];
PyObject *par_version = python_pars[2];
PyObject *par_multipath = python_pars[3];
PyObject *par_ensure_exists = python_pars[4];
struct Nuitka_FrameObject *frame_frame_platformdirs$$$function__19_site_data_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$$$function__19_site_data_path = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$$$function__19_site_data_path)) {
    Py_XDECREF(cache_frame_frame_platformdirs$$$function__19_site_data_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$$$function__19_site_data_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$$$function__19_site_data_path = MAKE_FUNCTION_FRAME(tstate, code_objects_6eb084ff14e235f223d2c58b430e2b68, module_platformdirs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$$$function__19_site_data_path->m_type_description == NULL);
frame_frame_platformdirs$$$function__19_site_data_path = cache_frame_frame_platformdirs$$$function__19_site_data_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$$$function__19_site_data_path);
assert(Py_REFCNT(frame_frame_platformdirs$$$function__19_site_data_path) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
tmp_called_value_1 = module_var_accessor_platformdirs$PlatformDirs(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PlatformDirs);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 362;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_appname);
tmp_kw_call_value_0_1 = par_appname;
CHECK_OBJECT(par_appauthor);
tmp_kw_call_value_1_1 = par_appauthor;
CHECK_OBJECT(par_version);
tmp_kw_call_value_2_1 = par_version;
CHECK_OBJECT(par_multipath);
tmp_kw_call_value_3_1 = par_multipath;
CHECK_OBJECT(par_ensure_exists);
tmp_kw_call_value_4_1 = par_ensure_exists;
frame_frame_platformdirs$$$function__19_site_data_path->m_frame.f_lineno = 362;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

    tmp_expression_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_08263bbdea0041122344270ac3c98519_tuple);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_site_data_path);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$$$function__19_site_data_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$$$function__19_site_data_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$$$function__19_site_data_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$$$function__19_site_data_path,
    type_description_1,
    par_appname,
    par_appauthor,
    par_version,
    par_multipath,
    par_ensure_exists
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$$$function__19_site_data_path == cache_frame_frame_platformdirs$$$function__19_site_data_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$$$function__19_site_data_path);
    cache_frame_frame_platformdirs$$$function__19_site_data_path = NULL;
}

assertFrameObject(frame_frame_platformdirs$$$function__19_site_data_path);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
CHECK_OBJECT(par_multipath);
Py_DECREF(par_multipath);
CHECK_OBJECT(par_ensure_exists);
Py_DECREF(par_ensure_exists);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
CHECK_OBJECT(par_multipath);
Py_DECREF(par_multipath);
CHECK_OBJECT(par_ensure_exists);
Py_DECREF(par_ensure_exists);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_platformdirs$$$function__20_user_config_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_appname = python_pars[0];
PyObject *par_appauthor = python_pars[1];
PyObject *par_version = python_pars[2];
PyObject *par_roaming = python_pars[3];
PyObject *par_ensure_exists = python_pars[4];
struct Nuitka_FrameObject *frame_frame_platformdirs$$$function__20_user_config_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$$$function__20_user_config_path = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$$$function__20_user_config_path)) {
    Py_XDECREF(cache_frame_frame_platformdirs$$$function__20_user_config_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$$$function__20_user_config_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$$$function__20_user_config_path = MAKE_FUNCTION_FRAME(tstate, code_objects_e18c4fc586dafe389af91f637957d075, module_platformdirs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$$$function__20_user_config_path->m_type_description == NULL);
frame_frame_platformdirs$$$function__20_user_config_path = cache_frame_frame_platformdirs$$$function__20_user_config_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$$$function__20_user_config_path);
assert(Py_REFCNT(frame_frame_platformdirs$$$function__20_user_config_path) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
tmp_called_value_1 = module_var_accessor_platformdirs$PlatformDirs(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PlatformDirs);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 386;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_appname);
tmp_kw_call_value_0_1 = par_appname;
CHECK_OBJECT(par_appauthor);
tmp_kw_call_value_1_1 = par_appauthor;
CHECK_OBJECT(par_version);
tmp_kw_call_value_2_1 = par_version;
CHECK_OBJECT(par_roaming);
tmp_kw_call_value_3_1 = par_roaming;
CHECK_OBJECT(par_ensure_exists);
tmp_kw_call_value_4_1 = par_ensure_exists;
frame_frame_platformdirs$$$function__20_user_config_path->m_frame.f_lineno = 386;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

    tmp_expression_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_390a7b91eff527d21c37e9b24a1d2140_tuple);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 386;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_config_path);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 386;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$$$function__20_user_config_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$$$function__20_user_config_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$$$function__20_user_config_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$$$function__20_user_config_path,
    type_description_1,
    par_appname,
    par_appauthor,
    par_version,
    par_roaming,
    par_ensure_exists
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$$$function__20_user_config_path == cache_frame_frame_platformdirs$$$function__20_user_config_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$$$function__20_user_config_path);
    cache_frame_frame_platformdirs$$$function__20_user_config_path = NULL;
}

assertFrameObject(frame_frame_platformdirs$$$function__20_user_config_path);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
CHECK_OBJECT(par_roaming);
Py_DECREF(par_roaming);
CHECK_OBJECT(par_ensure_exists);
Py_DECREF(par_ensure_exists);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
CHECK_OBJECT(par_roaming);
Py_DECREF(par_roaming);
CHECK_OBJECT(par_ensure_exists);
Py_DECREF(par_ensure_exists);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_platformdirs$$$function__21_site_config_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_appname = python_pars[0];
PyObject *par_appauthor = python_pars[1];
PyObject *par_version = python_pars[2];
PyObject *par_multipath = python_pars[3];
PyObject *par_ensure_exists = python_pars[4];
struct Nuitka_FrameObject *frame_frame_platformdirs$$$function__21_site_config_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$$$function__21_site_config_path = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$$$function__21_site_config_path)) {
    Py_XDECREF(cache_frame_frame_platformdirs$$$function__21_site_config_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$$$function__21_site_config_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$$$function__21_site_config_path = MAKE_FUNCTION_FRAME(tstate, code_objects_ab23e13a6d05f239d50687323611d29b, module_platformdirs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$$$function__21_site_config_path->m_type_description == NULL);
frame_frame_platformdirs$$$function__21_site_config_path = cache_frame_frame_platformdirs$$$function__21_site_config_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$$$function__21_site_config_path);
assert(Py_REFCNT(frame_frame_platformdirs$$$function__21_site_config_path) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
tmp_called_value_1 = module_var_accessor_platformdirs$PlatformDirs(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PlatformDirs);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 410;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_appname);
tmp_kw_call_value_0_1 = par_appname;
CHECK_OBJECT(par_appauthor);
tmp_kw_call_value_1_1 = par_appauthor;
CHECK_OBJECT(par_version);
tmp_kw_call_value_2_1 = par_version;
CHECK_OBJECT(par_multipath);
tmp_kw_call_value_3_1 = par_multipath;
CHECK_OBJECT(par_ensure_exists);
tmp_kw_call_value_4_1 = par_ensure_exists;
frame_frame_platformdirs$$$function__21_site_config_path->m_frame.f_lineno = 410;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

    tmp_expression_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_08263bbdea0041122344270ac3c98519_tuple);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 410;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_site_config_path);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 410;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$$$function__21_site_config_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$$$function__21_site_config_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$$$function__21_site_config_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$$$function__21_site_config_path,
    type_description_1,
    par_appname,
    par_appauthor,
    par_version,
    par_multipath,
    par_ensure_exists
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$$$function__21_site_config_path == cache_frame_frame_platformdirs$$$function__21_site_config_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$$$function__21_site_config_path);
    cache_frame_frame_platformdirs$$$function__21_site_config_path = NULL;
}

assertFrameObject(frame_frame_platformdirs$$$function__21_site_config_path);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
CHECK_OBJECT(par_multipath);
Py_DECREF(par_multipath);
CHECK_OBJECT(par_ensure_exists);
Py_DECREF(par_ensure_exists);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
CHECK_OBJECT(par_multipath);
Py_DECREF(par_multipath);
CHECK_OBJECT(par_ensure_exists);
Py_DECREF(par_ensure_exists);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_platformdirs$$$function__22_site_cache_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_appname = python_pars[0];
PyObject *par_appauthor = python_pars[1];
PyObject *par_version = python_pars[2];
PyObject *par_opinion = python_pars[3];
PyObject *par_ensure_exists = python_pars[4];
struct Nuitka_FrameObject *frame_frame_platformdirs$$$function__22_site_cache_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$$$function__22_site_cache_path = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$$$function__22_site_cache_path)) {
    Py_XDECREF(cache_frame_frame_platformdirs$$$function__22_site_cache_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$$$function__22_site_cache_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$$$function__22_site_cache_path = MAKE_FUNCTION_FRAME(tstate, code_objects_3f73169abca740a37bedcc268899b61a, module_platformdirs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$$$function__22_site_cache_path->m_type_description == NULL);
frame_frame_platformdirs$$$function__22_site_cache_path = cache_frame_frame_platformdirs$$$function__22_site_cache_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$$$function__22_site_cache_path);
assert(Py_REFCNT(frame_frame_platformdirs$$$function__22_site_cache_path) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
tmp_called_value_1 = module_var_accessor_platformdirs$PlatformDirs(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PlatformDirs);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 434;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_appname);
tmp_kw_call_value_0_1 = par_appname;
CHECK_OBJECT(par_appauthor);
tmp_kw_call_value_1_1 = par_appauthor;
CHECK_OBJECT(par_version);
tmp_kw_call_value_2_1 = par_version;
CHECK_OBJECT(par_opinion);
tmp_kw_call_value_3_1 = par_opinion;
CHECK_OBJECT(par_ensure_exists);
tmp_kw_call_value_4_1 = par_ensure_exists;
frame_frame_platformdirs$$$function__22_site_cache_path->m_frame.f_lineno = 434;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

    tmp_expression_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_3bca79387b4235d1c08bc5f9ef701f64_tuple);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 434;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_site_cache_path);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 434;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$$$function__22_site_cache_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$$$function__22_site_cache_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$$$function__22_site_cache_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$$$function__22_site_cache_path,
    type_description_1,
    par_appname,
    par_appauthor,
    par_version,
    par_opinion,
    par_ensure_exists
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$$$function__22_site_cache_path == cache_frame_frame_platformdirs$$$function__22_site_cache_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$$$function__22_site_cache_path);
    cache_frame_frame_platformdirs$$$function__22_site_cache_path = NULL;
}

assertFrameObject(frame_frame_platformdirs$$$function__22_site_cache_path);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
CHECK_OBJECT(par_opinion);
Py_DECREF(par_opinion);
CHECK_OBJECT(par_ensure_exists);
Py_DECREF(par_ensure_exists);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
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


static PyObject *impl_platformdirs$$$function__23_user_cache_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_appname = python_pars[0];
PyObject *par_appauthor = python_pars[1];
PyObject *par_version = python_pars[2];
PyObject *par_opinion = python_pars[3];
PyObject *par_ensure_exists = python_pars[4];
struct Nuitka_FrameObject *frame_frame_platformdirs$$$function__23_user_cache_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$$$function__23_user_cache_path = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$$$function__23_user_cache_path)) {
    Py_XDECREF(cache_frame_frame_platformdirs$$$function__23_user_cache_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$$$function__23_user_cache_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$$$function__23_user_cache_path = MAKE_FUNCTION_FRAME(tstate, code_objects_4800065f021fa654229715a7b2ed736c, module_platformdirs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$$$function__23_user_cache_path->m_type_description == NULL);
frame_frame_platformdirs$$$function__23_user_cache_path = cache_frame_frame_platformdirs$$$function__23_user_cache_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$$$function__23_user_cache_path);
assert(Py_REFCNT(frame_frame_platformdirs$$$function__23_user_cache_path) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
tmp_called_value_1 = module_var_accessor_platformdirs$PlatformDirs(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PlatformDirs);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 458;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_appname);
tmp_kw_call_value_0_1 = par_appname;
CHECK_OBJECT(par_appauthor);
tmp_kw_call_value_1_1 = par_appauthor;
CHECK_OBJECT(par_version);
tmp_kw_call_value_2_1 = par_version;
CHECK_OBJECT(par_opinion);
tmp_kw_call_value_3_1 = par_opinion;
CHECK_OBJECT(par_ensure_exists);
tmp_kw_call_value_4_1 = par_ensure_exists;
frame_frame_platformdirs$$$function__23_user_cache_path->m_frame.f_lineno = 458;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

    tmp_expression_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_3bca79387b4235d1c08bc5f9ef701f64_tuple);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 458;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_cache_path);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 458;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$$$function__23_user_cache_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$$$function__23_user_cache_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$$$function__23_user_cache_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$$$function__23_user_cache_path,
    type_description_1,
    par_appname,
    par_appauthor,
    par_version,
    par_opinion,
    par_ensure_exists
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$$$function__23_user_cache_path == cache_frame_frame_platformdirs$$$function__23_user_cache_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$$$function__23_user_cache_path);
    cache_frame_frame_platformdirs$$$function__23_user_cache_path = NULL;
}

assertFrameObject(frame_frame_platformdirs$$$function__23_user_cache_path);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
CHECK_OBJECT(par_opinion);
Py_DECREF(par_opinion);
CHECK_OBJECT(par_ensure_exists);
Py_DECREF(par_ensure_exists);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
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


static PyObject *impl_platformdirs$$$function__24_user_state_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_appname = python_pars[0];
PyObject *par_appauthor = python_pars[1];
PyObject *par_version = python_pars[2];
PyObject *par_roaming = python_pars[3];
PyObject *par_ensure_exists = python_pars[4];
struct Nuitka_FrameObject *frame_frame_platformdirs$$$function__24_user_state_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$$$function__24_user_state_path = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$$$function__24_user_state_path)) {
    Py_XDECREF(cache_frame_frame_platformdirs$$$function__24_user_state_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$$$function__24_user_state_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$$$function__24_user_state_path = MAKE_FUNCTION_FRAME(tstate, code_objects_336e1a6edd2b4c134d8f73ded40114b0, module_platformdirs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$$$function__24_user_state_path->m_type_description == NULL);
frame_frame_platformdirs$$$function__24_user_state_path = cache_frame_frame_platformdirs$$$function__24_user_state_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$$$function__24_user_state_path);
assert(Py_REFCNT(frame_frame_platformdirs$$$function__24_user_state_path) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
tmp_called_value_1 = module_var_accessor_platformdirs$PlatformDirs(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PlatformDirs);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 482;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_appname);
tmp_kw_call_value_0_1 = par_appname;
CHECK_OBJECT(par_appauthor);
tmp_kw_call_value_1_1 = par_appauthor;
CHECK_OBJECT(par_version);
tmp_kw_call_value_2_1 = par_version;
CHECK_OBJECT(par_roaming);
tmp_kw_call_value_3_1 = par_roaming;
CHECK_OBJECT(par_ensure_exists);
tmp_kw_call_value_4_1 = par_ensure_exists;
frame_frame_platformdirs$$$function__24_user_state_path->m_frame.f_lineno = 482;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

    tmp_expression_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_390a7b91eff527d21c37e9b24a1d2140_tuple);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 482;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_state_path);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 482;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$$$function__24_user_state_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$$$function__24_user_state_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$$$function__24_user_state_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$$$function__24_user_state_path,
    type_description_1,
    par_appname,
    par_appauthor,
    par_version,
    par_roaming,
    par_ensure_exists
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$$$function__24_user_state_path == cache_frame_frame_platformdirs$$$function__24_user_state_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$$$function__24_user_state_path);
    cache_frame_frame_platformdirs$$$function__24_user_state_path = NULL;
}

assertFrameObject(frame_frame_platformdirs$$$function__24_user_state_path);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
CHECK_OBJECT(par_roaming);
Py_DECREF(par_roaming);
CHECK_OBJECT(par_ensure_exists);
Py_DECREF(par_ensure_exists);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
CHECK_OBJECT(par_roaming);
Py_DECREF(par_roaming);
CHECK_OBJECT(par_ensure_exists);
Py_DECREF(par_ensure_exists);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_platformdirs$$$function__25_user_log_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_appname = python_pars[0];
PyObject *par_appauthor = python_pars[1];
PyObject *par_version = python_pars[2];
PyObject *par_opinion = python_pars[3];
PyObject *par_ensure_exists = python_pars[4];
struct Nuitka_FrameObject *frame_frame_platformdirs$$$function__25_user_log_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$$$function__25_user_log_path = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$$$function__25_user_log_path)) {
    Py_XDECREF(cache_frame_frame_platformdirs$$$function__25_user_log_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$$$function__25_user_log_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$$$function__25_user_log_path = MAKE_FUNCTION_FRAME(tstate, code_objects_b3a451075d1dc1fc2c9b83b5cdbed80d, module_platformdirs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$$$function__25_user_log_path->m_type_description == NULL);
frame_frame_platformdirs$$$function__25_user_log_path = cache_frame_frame_platformdirs$$$function__25_user_log_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$$$function__25_user_log_path);
assert(Py_REFCNT(frame_frame_platformdirs$$$function__25_user_log_path) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
tmp_called_value_1 = module_var_accessor_platformdirs$PlatformDirs(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PlatformDirs);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 506;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_appname);
tmp_kw_call_value_0_1 = par_appname;
CHECK_OBJECT(par_appauthor);
tmp_kw_call_value_1_1 = par_appauthor;
CHECK_OBJECT(par_version);
tmp_kw_call_value_2_1 = par_version;
CHECK_OBJECT(par_opinion);
tmp_kw_call_value_3_1 = par_opinion;
CHECK_OBJECT(par_ensure_exists);
tmp_kw_call_value_4_1 = par_ensure_exists;
frame_frame_platformdirs$$$function__25_user_log_path->m_frame.f_lineno = 506;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

    tmp_expression_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_3bca79387b4235d1c08bc5f9ef701f64_tuple);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_log_path);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$$$function__25_user_log_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$$$function__25_user_log_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$$$function__25_user_log_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$$$function__25_user_log_path,
    type_description_1,
    par_appname,
    par_appauthor,
    par_version,
    par_opinion,
    par_ensure_exists
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$$$function__25_user_log_path == cache_frame_frame_platformdirs$$$function__25_user_log_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$$$function__25_user_log_path);
    cache_frame_frame_platformdirs$$$function__25_user_log_path = NULL;
}

assertFrameObject(frame_frame_platformdirs$$$function__25_user_log_path);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
CHECK_OBJECT(par_opinion);
Py_DECREF(par_opinion);
CHECK_OBJECT(par_ensure_exists);
Py_DECREF(par_ensure_exists);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
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


static PyObject *impl_platformdirs$$$function__26_user_documents_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_platformdirs$$$function__26_user_documents_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$$$function__26_user_documents_path = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$$$function__26_user_documents_path)) {
    Py_XDECREF(cache_frame_frame_platformdirs$$$function__26_user_documents_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$$$function__26_user_documents_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$$$function__26_user_documents_path = MAKE_FUNCTION_FRAME(tstate, code_objects_d777d5632b8ed5dd595c12417abb40a2, module_platformdirs, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$$$function__26_user_documents_path->m_type_description == NULL);
frame_frame_platformdirs$$$function__26_user_documents_path = cache_frame_frame_platformdirs$$$function__26_user_documents_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$$$function__26_user_documents_path);
assert(Py_REFCNT(frame_frame_platformdirs$$$function__26_user_documents_path) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$PlatformDirs(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PlatformDirs);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 517;

    goto frame_exception_exit_1;
}
frame_frame_platformdirs$$$function__26_user_documents_path->m_frame.f_lineno = 517;
tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 517;

    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_documents_path);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 517;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$$$function__26_user_documents_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$$$function__26_user_documents_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$$$function__26_user_documents_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$$$function__26_user_documents_path,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$$$function__26_user_documents_path == cache_frame_frame_platformdirs$$$function__26_user_documents_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$$$function__26_user_documents_path);
    cache_frame_frame_platformdirs$$$function__26_user_documents_path = NULL;
}

assertFrameObject(frame_frame_platformdirs$$$function__26_user_documents_path);

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


static PyObject *impl_platformdirs$$$function__27_user_downloads_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_platformdirs$$$function__27_user_downloads_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$$$function__27_user_downloads_path = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$$$function__27_user_downloads_path)) {
    Py_XDECREF(cache_frame_frame_platformdirs$$$function__27_user_downloads_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$$$function__27_user_downloads_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$$$function__27_user_downloads_path = MAKE_FUNCTION_FRAME(tstate, code_objects_19069a01b60c22cbe8a15e9271cad885, module_platformdirs, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$$$function__27_user_downloads_path->m_type_description == NULL);
frame_frame_platformdirs$$$function__27_user_downloads_path = cache_frame_frame_platformdirs$$$function__27_user_downloads_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$$$function__27_user_downloads_path);
assert(Py_REFCNT(frame_frame_platformdirs$$$function__27_user_downloads_path) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$PlatformDirs(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PlatformDirs);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 522;

    goto frame_exception_exit_1;
}
frame_frame_platformdirs$$$function__27_user_downloads_path->m_frame.f_lineno = 522;
tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 522;

    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_downloads_path);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 522;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$$$function__27_user_downloads_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$$$function__27_user_downloads_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$$$function__27_user_downloads_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$$$function__27_user_downloads_path,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$$$function__27_user_downloads_path == cache_frame_frame_platformdirs$$$function__27_user_downloads_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$$$function__27_user_downloads_path);
    cache_frame_frame_platformdirs$$$function__27_user_downloads_path = NULL;
}

assertFrameObject(frame_frame_platformdirs$$$function__27_user_downloads_path);

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


static PyObject *impl_platformdirs$$$function__28_user_pictures_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_platformdirs$$$function__28_user_pictures_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$$$function__28_user_pictures_path = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$$$function__28_user_pictures_path)) {
    Py_XDECREF(cache_frame_frame_platformdirs$$$function__28_user_pictures_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$$$function__28_user_pictures_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$$$function__28_user_pictures_path = MAKE_FUNCTION_FRAME(tstate, code_objects_e44af6e04f647849151d3d650296a755, module_platformdirs, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$$$function__28_user_pictures_path->m_type_description == NULL);
frame_frame_platformdirs$$$function__28_user_pictures_path = cache_frame_frame_platformdirs$$$function__28_user_pictures_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$$$function__28_user_pictures_path);
assert(Py_REFCNT(frame_frame_platformdirs$$$function__28_user_pictures_path) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$PlatformDirs(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PlatformDirs);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 527;

    goto frame_exception_exit_1;
}
frame_frame_platformdirs$$$function__28_user_pictures_path->m_frame.f_lineno = 527;
tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 527;

    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_pictures_path);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 527;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$$$function__28_user_pictures_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$$$function__28_user_pictures_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$$$function__28_user_pictures_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$$$function__28_user_pictures_path,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$$$function__28_user_pictures_path == cache_frame_frame_platformdirs$$$function__28_user_pictures_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$$$function__28_user_pictures_path);
    cache_frame_frame_platformdirs$$$function__28_user_pictures_path = NULL;
}

assertFrameObject(frame_frame_platformdirs$$$function__28_user_pictures_path);

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


static PyObject *impl_platformdirs$$$function__29_user_videos_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_platformdirs$$$function__29_user_videos_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$$$function__29_user_videos_path = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$$$function__29_user_videos_path)) {
    Py_XDECREF(cache_frame_frame_platformdirs$$$function__29_user_videos_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$$$function__29_user_videos_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$$$function__29_user_videos_path = MAKE_FUNCTION_FRAME(tstate, code_objects_869e18f6c6dc5b76fc6bc0bab5e3ef3d, module_platformdirs, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$$$function__29_user_videos_path->m_type_description == NULL);
frame_frame_platformdirs$$$function__29_user_videos_path = cache_frame_frame_platformdirs$$$function__29_user_videos_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$$$function__29_user_videos_path);
assert(Py_REFCNT(frame_frame_platformdirs$$$function__29_user_videos_path) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$PlatformDirs(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PlatformDirs);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 532;

    goto frame_exception_exit_1;
}
frame_frame_platformdirs$$$function__29_user_videos_path->m_frame.f_lineno = 532;
tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_videos_path);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$$$function__29_user_videos_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$$$function__29_user_videos_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$$$function__29_user_videos_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$$$function__29_user_videos_path,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$$$function__29_user_videos_path == cache_frame_frame_platformdirs$$$function__29_user_videos_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$$$function__29_user_videos_path);
    cache_frame_frame_platformdirs$$$function__29_user_videos_path = NULL;
}

assertFrameObject(frame_frame_platformdirs$$$function__29_user_videos_path);

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


static PyObject *impl_platformdirs$$$function__30_user_music_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_platformdirs$$$function__30_user_music_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$$$function__30_user_music_path = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$$$function__30_user_music_path)) {
    Py_XDECREF(cache_frame_frame_platformdirs$$$function__30_user_music_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$$$function__30_user_music_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$$$function__30_user_music_path = MAKE_FUNCTION_FRAME(tstate, code_objects_c9ae6de55ad198b3f45f3cfedf0e0e05, module_platformdirs, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$$$function__30_user_music_path->m_type_description == NULL);
frame_frame_platformdirs$$$function__30_user_music_path = cache_frame_frame_platformdirs$$$function__30_user_music_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$$$function__30_user_music_path);
assert(Py_REFCNT(frame_frame_platformdirs$$$function__30_user_music_path) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$PlatformDirs(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PlatformDirs);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 537;

    goto frame_exception_exit_1;
}
frame_frame_platformdirs$$$function__30_user_music_path->m_frame.f_lineno = 537;
tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 537;

    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_music_path);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 537;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$$$function__30_user_music_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$$$function__30_user_music_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$$$function__30_user_music_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$$$function__30_user_music_path,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$$$function__30_user_music_path == cache_frame_frame_platformdirs$$$function__30_user_music_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$$$function__30_user_music_path);
    cache_frame_frame_platformdirs$$$function__30_user_music_path = NULL;
}

assertFrameObject(frame_frame_platformdirs$$$function__30_user_music_path);

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


static PyObject *impl_platformdirs$$$function__31_user_desktop_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_platformdirs$$$function__31_user_desktop_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$$$function__31_user_desktop_path = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$$$function__31_user_desktop_path)) {
    Py_XDECREF(cache_frame_frame_platformdirs$$$function__31_user_desktop_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$$$function__31_user_desktop_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$$$function__31_user_desktop_path = MAKE_FUNCTION_FRAME(tstate, code_objects_a991e95468184578126f715b5a150f2e, module_platformdirs, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$$$function__31_user_desktop_path->m_type_description == NULL);
frame_frame_platformdirs$$$function__31_user_desktop_path = cache_frame_frame_platformdirs$$$function__31_user_desktop_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$$$function__31_user_desktop_path);
assert(Py_REFCNT(frame_frame_platformdirs$$$function__31_user_desktop_path) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_platformdirs$PlatformDirs(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PlatformDirs);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 542;

    goto frame_exception_exit_1;
}
frame_frame_platformdirs$$$function__31_user_desktop_path->m_frame.f_lineno = 542;
tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;

    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_desktop_path);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$$$function__31_user_desktop_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$$$function__31_user_desktop_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$$$function__31_user_desktop_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$$$function__31_user_desktop_path,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$$$function__31_user_desktop_path == cache_frame_frame_platformdirs$$$function__31_user_desktop_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$$$function__31_user_desktop_path);
    cache_frame_frame_platformdirs$$$function__31_user_desktop_path = NULL;
}

assertFrameObject(frame_frame_platformdirs$$$function__31_user_desktop_path);

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


static PyObject *impl_platformdirs$$$function__32_user_runtime_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_appname = python_pars[0];
PyObject *par_appauthor = python_pars[1];
PyObject *par_version = python_pars[2];
PyObject *par_opinion = python_pars[3];
PyObject *par_ensure_exists = python_pars[4];
struct Nuitka_FrameObject *frame_frame_platformdirs$$$function__32_user_runtime_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$$$function__32_user_runtime_path = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$$$function__32_user_runtime_path)) {
    Py_XDECREF(cache_frame_frame_platformdirs$$$function__32_user_runtime_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$$$function__32_user_runtime_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$$$function__32_user_runtime_path = MAKE_FUNCTION_FRAME(tstate, code_objects_6fc6f91d92a5dc7d4bb8fa58422d7c0c, module_platformdirs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$$$function__32_user_runtime_path->m_type_description == NULL);
frame_frame_platformdirs$$$function__32_user_runtime_path = cache_frame_frame_platformdirs$$$function__32_user_runtime_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$$$function__32_user_runtime_path);
assert(Py_REFCNT(frame_frame_platformdirs$$$function__32_user_runtime_path) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
tmp_called_value_1 = module_var_accessor_platformdirs$PlatformDirs(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PlatformDirs);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 560;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_appname);
tmp_kw_call_value_0_1 = par_appname;
CHECK_OBJECT(par_appauthor);
tmp_kw_call_value_1_1 = par_appauthor;
CHECK_OBJECT(par_version);
tmp_kw_call_value_2_1 = par_version;
CHECK_OBJECT(par_opinion);
tmp_kw_call_value_3_1 = par_opinion;
CHECK_OBJECT(par_ensure_exists);
tmp_kw_call_value_4_1 = par_ensure_exists;
frame_frame_platformdirs$$$function__32_user_runtime_path->m_frame.f_lineno = 560;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

    tmp_expression_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_3bca79387b4235d1c08bc5f9ef701f64_tuple);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 560;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_user_runtime_path);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 560;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$$$function__32_user_runtime_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$$$function__32_user_runtime_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$$$function__32_user_runtime_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$$$function__32_user_runtime_path,
    type_description_1,
    par_appname,
    par_appauthor,
    par_version,
    par_opinion,
    par_ensure_exists
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$$$function__32_user_runtime_path == cache_frame_frame_platformdirs$$$function__32_user_runtime_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$$$function__32_user_runtime_path);
    cache_frame_frame_platformdirs$$$function__32_user_runtime_path = NULL;
}

assertFrameObject(frame_frame_platformdirs$$$function__32_user_runtime_path);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
CHECK_OBJECT(par_opinion);
Py_DECREF(par_opinion);
CHECK_OBJECT(par_ensure_exists);
Py_DECREF(par_ensure_exists);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
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


static PyObject *impl_platformdirs$$$function__33_site_runtime_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_appname = python_pars[0];
PyObject *par_appauthor = python_pars[1];
PyObject *par_version = python_pars[2];
PyObject *par_opinion = python_pars[3];
PyObject *par_ensure_exists = python_pars[4];
struct Nuitka_FrameObject *frame_frame_platformdirs$$$function__33_site_runtime_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_platformdirs$$$function__33_site_runtime_path = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_platformdirs$$$function__33_site_runtime_path)) {
    Py_XDECREF(cache_frame_frame_platformdirs$$$function__33_site_runtime_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_platformdirs$$$function__33_site_runtime_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_platformdirs$$$function__33_site_runtime_path = MAKE_FUNCTION_FRAME(tstate, code_objects_cce2bd6fc964eaab25e4b8bd17ca5df0, module_platformdirs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_platformdirs$$$function__33_site_runtime_path->m_type_description == NULL);
frame_frame_platformdirs$$$function__33_site_runtime_path = cache_frame_frame_platformdirs$$$function__33_site_runtime_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs$$$function__33_site_runtime_path);
assert(Py_REFCNT(frame_frame_platformdirs$$$function__33_site_runtime_path) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
tmp_called_value_1 = module_var_accessor_platformdirs$PlatformDirs(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PlatformDirs);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 584;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_appname);
tmp_kw_call_value_0_1 = par_appname;
CHECK_OBJECT(par_appauthor);
tmp_kw_call_value_1_1 = par_appauthor;
CHECK_OBJECT(par_version);
tmp_kw_call_value_2_1 = par_version;
CHECK_OBJECT(par_opinion);
tmp_kw_call_value_3_1 = par_opinion;
CHECK_OBJECT(par_ensure_exists);
tmp_kw_call_value_4_1 = par_ensure_exists;
frame_frame_platformdirs$$$function__33_site_runtime_path->m_frame.f_lineno = 584;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

    tmp_expression_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_3bca79387b4235d1c08bc5f9ef701f64_tuple);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 584;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_site_runtime_path);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 584;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs$$$function__33_site_runtime_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs$$$function__33_site_runtime_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs$$$function__33_site_runtime_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_platformdirs$$$function__33_site_runtime_path,
    type_description_1,
    par_appname,
    par_appauthor,
    par_version,
    par_opinion,
    par_ensure_exists
);


// Release cached frame if used for exception.
if (frame_frame_platformdirs$$$function__33_site_runtime_path == cache_frame_frame_platformdirs$$$function__33_site_runtime_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_platformdirs$$$function__33_site_runtime_path);
    cache_frame_frame_platformdirs$$$function__33_site_runtime_path = NULL;
}

assertFrameObject(frame_frame_platformdirs$$$function__33_site_runtime_path);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
CHECK_OBJECT(par_opinion);
Py_DECREF(par_opinion);
CHECK_OBJECT(par_ensure_exists);
Py_DECREF(par_ensure_exists);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_appname);
Py_DECREF(par_appname);
CHECK_OBJECT(par_appauthor);
Py_DECREF(par_appauthor);
CHECK_OBJECT(par_version);
Py_DECREF(par_version);
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



static PyObject *MAKE_FUNCTION_platformdirs$$$function__10_user_documents_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$$$function__10_user_documents_dir,
        mod_consts.const_str_plain_user_documents_dir,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_35b01dab41fb8c377571627f3c0ced87,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs,
        mod_consts.const_str_digest_8a5743a526e7065b73e26201c2bc8e61,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$$$function__11_user_downloads_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$$$function__11_user_downloads_dir,
        mod_consts.const_str_plain_user_downloads_dir,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a9778ffa0c3f66315e13e94fcdb63f3b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs,
        mod_consts.const_str_digest_814f54c02c87cf3eb9e035e55f663b76,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$$$function__12_user_pictures_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$$$function__12_user_pictures_dir,
        mod_consts.const_str_plain_user_pictures_dir,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_cebf40f4b49c6800efaaed022253e46f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs,
        mod_consts.const_str_digest_47dd987531ef86df6a72d434af3f38a0,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$$$function__13_user_videos_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$$$function__13_user_videos_dir,
        mod_consts.const_str_plain_user_videos_dir,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_608fd2eb98c3c20b9200fb3b77f95903,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs,
        mod_consts.const_str_digest_686b02980daa0b79c8469a3913307c12,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$$$function__14_user_music_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$$$function__14_user_music_dir,
        mod_consts.const_str_plain_user_music_dir,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5c3883bcaeabc7bc0e4d743b58d82513,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs,
        mod_consts.const_str_digest_dab3939b1888d3dd4da63c94b9a3b2e3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$$$function__15_user_desktop_dir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$$$function__15_user_desktop_dir,
        mod_consts.const_str_plain_user_desktop_dir,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ec3327bbf19fdec21d285cc7d2c830e5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs,
        mod_consts.const_str_digest_19feb3aed92fa11a815323b77323556c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$$$function__16_user_runtime_dir(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$$$function__16_user_runtime_dir,
        mod_consts.const_str_plain_user_runtime_dir,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6579aa07af88e47456d9baf8c5180646,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs,
        mod_consts.const_str_digest_55ad37f80858e4fc784386a788763a08,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$$$function__17_site_runtime_dir(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$$$function__17_site_runtime_dir,
        mod_consts.const_str_plain_site_runtime_dir,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ee31efc68c8961a43c2f449c4cd0bcba,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs,
        mod_consts.const_str_digest_ead6dfcba7854fc7e8ed8f523d2bd4ee,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$$$function__18_user_data_path(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$$$function__18_user_data_path,
        mod_consts.const_str_plain_user_data_path,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7dfaead55385dad3503383127ce88b33,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs,
        mod_consts.const_str_digest_ee02ba7ed4399b3da460d32a1b7ad2b1,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$$$function__19_site_data_path(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$$$function__19_site_data_path,
        mod_consts.const_str_plain_site_data_path,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6eb084ff14e235f223d2c58b430e2b68,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs,
        mod_consts.const_str_digest_ca332b07e9d3abe765a22c1931eecf27,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$$$function__1__set_platform_dir_class(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$$$function__1__set_platform_dir_class,
        mod_consts.const_str_plain__set_platform_dir_class,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5f9009ecd45398784df5b2b51b9c7a41,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$$$function__20_user_config_path(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$$$function__20_user_config_path,
        mod_consts.const_str_plain_user_config_path,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e18c4fc586dafe389af91f637957d075,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs,
        mod_consts.const_str_digest_ac8ae1c25f496085e84dc53eeaf83222,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$$$function__21_site_config_path(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$$$function__21_site_config_path,
        mod_consts.const_str_plain_site_config_path,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ab23e13a6d05f239d50687323611d29b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs,
        mod_consts.const_str_digest_1dd1c0125e8ff337b7573b3c9c44961d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$$$function__22_site_cache_path(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$$$function__22_site_cache_path,
        mod_consts.const_str_plain_site_cache_path,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3f73169abca740a37bedcc268899b61a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs,
        mod_consts.const_str_digest_33fc5799f2646ef664ff0abb6b86d301,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$$$function__23_user_cache_path(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$$$function__23_user_cache_path,
        mod_consts.const_str_plain_user_cache_path,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_4800065f021fa654229715a7b2ed736c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs,
        mod_consts.const_str_digest_6b9e8fb9c6612ed84ee856601579e361,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$$$function__24_user_state_path(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$$$function__24_user_state_path,
        mod_consts.const_str_plain_user_state_path,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_336e1a6edd2b4c134d8f73ded40114b0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs,
        mod_consts.const_str_digest_a41828f164c153b00b9e7047a3de6e82,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$$$function__25_user_log_path(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$$$function__25_user_log_path,
        mod_consts.const_str_plain_user_log_path,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b3a451075d1dc1fc2c9b83b5cdbed80d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs,
        mod_consts.const_str_digest_ed01ea40d2db7e56a9bc09fe53a2cf26,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$$$function__26_user_documents_path(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$$$function__26_user_documents_path,
        mod_consts.const_str_plain_user_documents_path,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d777d5632b8ed5dd595c12417abb40a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs,
        mod_consts.const_str_digest_124642cd3e6dd78dfb2f40c3f5ebba32,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$$$function__27_user_downloads_path(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$$$function__27_user_downloads_path,
        mod_consts.const_str_plain_user_downloads_path,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_19069a01b60c22cbe8a15e9271cad885,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs,
        mod_consts.const_str_digest_74705aef888c9552e6c528e0d924ab88,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$$$function__28_user_pictures_path(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$$$function__28_user_pictures_path,
        mod_consts.const_str_plain_user_pictures_path,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e44af6e04f647849151d3d650296a755,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs,
        mod_consts.const_str_digest_a57cc862e1ab9061e5f7ac66f858822c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$$$function__29_user_videos_path(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$$$function__29_user_videos_path,
        mod_consts.const_str_plain_user_videos_path,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_869e18f6c6dc5b76fc6bc0bab5e3ef3d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs,
        mod_consts.const_str_digest_e1bf53e8e7bb84835c259d2154a42547,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$$$function__2_user_data_dir(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$$$function__2_user_data_dir,
        mod_consts.const_str_plain_user_data_dir,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_539a2bb8609a12d2ccdc8905f9da251b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs,
        mod_consts.const_str_digest_42c302d87e6bb98d8593192aaafa6360,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$$$function__30_user_music_path(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$$$function__30_user_music_path,
        mod_consts.const_str_plain_user_music_path,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c9ae6de55ad198b3f45f3cfedf0e0e05,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs,
        mod_consts.const_str_digest_bf76aed636aa915917ccb38aeea0bfc3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$$$function__31_user_desktop_path(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$$$function__31_user_desktop_path,
        mod_consts.const_str_plain_user_desktop_path,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a991e95468184578126f715b5a150f2e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs,
        mod_consts.const_str_digest_f69f4424674aab36ef44d2100ce0bdeb,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$$$function__32_user_runtime_path(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$$$function__32_user_runtime_path,
        mod_consts.const_str_plain_user_runtime_path,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6fc6f91d92a5dc7d4bb8fa58422d7c0c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs,
        mod_consts.const_str_digest_2c16cf78fca2c3d1ef14e600d9709078,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$$$function__33_site_runtime_path(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$$$function__33_site_runtime_path,
        mod_consts.const_str_plain_site_runtime_path,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_cce2bd6fc964eaab25e4b8bd17ca5df0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs,
        mod_consts.const_str_digest_7a95e6b5ce0d1285debf867e030cfc4a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$$$function__3_site_data_dir(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$$$function__3_site_data_dir,
        mod_consts.const_str_plain_site_data_dir,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a2504d76d113807901cdc01138049744,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs,
        mod_consts.const_str_digest_ffc0bc566f2116ff86664c46fb6aa064,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$$$function__4_user_config_dir(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$$$function__4_user_config_dir,
        mod_consts.const_str_plain_user_config_dir,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2d8363bc05d5376e6093f9c985d98383,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs,
        mod_consts.const_str_digest_d18755191da403d6a694aaefda8afc22,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$$$function__5_site_config_dir(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$$$function__5_site_config_dir,
        mod_consts.const_str_plain_site_config_dir,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_bf32fc14673ce692c8c39a03bb31a4f9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs,
        mod_consts.const_str_digest_4aaff360ab64030688be2de4b40a417b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$$$function__6_user_cache_dir(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$$$function__6_user_cache_dir,
        mod_consts.const_str_plain_user_cache_dir,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_4ea3c7cea3ed419841248d27fc53bfe2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs,
        mod_consts.const_str_digest_a4da0921a9a74f96f1b20f3088ab93ff,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$$$function__7_site_cache_dir(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$$$function__7_site_cache_dir,
        mod_consts.const_str_plain_site_cache_dir,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_33e84a38053e0aa8a478a713ddf2f255,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs,
        mod_consts.const_str_digest_33fc5799f2646ef664ff0abb6b86d301,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$$$function__8_user_state_dir(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$$$function__8_user_state_dir,
        mod_consts.const_str_plain_user_state_dir,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1ea9082c0b68cfbb188671ae91e01241,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs,
        mod_consts.const_str_digest_c283087b17d0b23430306a53bc52596a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_platformdirs$$$function__9_user_log_dir(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_platformdirs$$$function__9_user_log_dir,
        mod_consts.const_str_plain_user_log_dir,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_73a59b33c075cd43a6e6b9f60ff2db9e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_platformdirs,
        mod_consts.const_str_digest_1fda89ae5186248c91748236ba91ad7f,
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

static function_impl_code const function_table_platformdirs[] = {
impl_platformdirs$$$function__1__set_platform_dir_class,
impl_platformdirs$$$function__2_user_data_dir,
impl_platformdirs$$$function__3_site_data_dir,
impl_platformdirs$$$function__4_user_config_dir,
impl_platformdirs$$$function__5_site_config_dir,
impl_platformdirs$$$function__6_user_cache_dir,
impl_platformdirs$$$function__7_site_cache_dir,
impl_platformdirs$$$function__8_user_state_dir,
impl_platformdirs$$$function__9_user_log_dir,
impl_platformdirs$$$function__10_user_documents_dir,
impl_platformdirs$$$function__11_user_downloads_dir,
impl_platformdirs$$$function__12_user_pictures_dir,
impl_platformdirs$$$function__13_user_videos_dir,
impl_platformdirs$$$function__14_user_music_dir,
impl_platformdirs$$$function__15_user_desktop_dir,
impl_platformdirs$$$function__16_user_runtime_dir,
impl_platformdirs$$$function__17_site_runtime_dir,
impl_platformdirs$$$function__18_user_data_path,
impl_platformdirs$$$function__19_site_data_path,
impl_platformdirs$$$function__20_user_config_path,
impl_platformdirs$$$function__21_site_config_path,
impl_platformdirs$$$function__22_site_cache_path,
impl_platformdirs$$$function__23_user_cache_path,
impl_platformdirs$$$function__24_user_state_path,
impl_platformdirs$$$function__25_user_log_path,
impl_platformdirs$$$function__26_user_documents_path,
impl_platformdirs$$$function__27_user_downloads_path,
impl_platformdirs$$$function__28_user_pictures_path,
impl_platformdirs$$$function__29_user_videos_path,
impl_platformdirs$$$function__30_user_music_path,
impl_platformdirs$$$function__31_user_desktop_path,
impl_platformdirs$$$function__32_user_runtime_path,
impl_platformdirs$$$function__33_site_runtime_path,
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

    return Nuitka_Function_GetFunctionState(function, function_table_platformdirs);
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
        module_platformdirs,
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
        function_table_platformdirs,
        sizeof(function_table_platformdirs) / sizeof(function_impl_code)
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
static char const *module_full_name = "platformdirs";
#endif

// Internal entry point for module code.
PyObject *module_code_platformdirs(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("platformdirs");

    // Store the module for future use.
    module_platformdirs = module;

    moduledict_platformdirs = MODULE_DICT(module_platformdirs);

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
        PRINT_STRING("platformdirs: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("platformdirs: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("platformdirs: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "platformdirs" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initplatformdirs\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_platformdirs, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_platformdirs,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_platformdirs,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_platformdirs, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_platformdirs,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_platformdirs, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_platformdirs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_platformdirs, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_platformdirs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_platformdirs);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_platformdirs, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_platformdirs, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_platformdirs, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_platformdirs, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_platformdirs);
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

        UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_platformdirs;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_9c7af04144d0093ec25815495688010b;
UPDATE_STRING_DICT0(moduledict_platformdirs, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_platformdirs, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_platformdirs = MAKE_MODULE_FRAME(code_objects_d931f44c11c08efb71067756dbf99513, module_platformdirs);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_platformdirs);
assert(Py_REFCNT(frame_frame_platformdirs) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
frame_frame_platformdirs->m_frame.f_lineno = 1;
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
frame_frame_platformdirs->m_frame.f_lineno = 1;
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
frame_frame_platformdirs->m_frame.f_lineno = 1;
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
frame_frame_platformdirs->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_b7b852ec2aa530274f20e8e551ec1e10_tuple);

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
UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_platformdirs$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_platformdirs$__spec__(tstate);
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
tmp_assattr_value_3 = module_var_accessor_platformdirs$__path__(tstate);
if (unlikely(tmp_assattr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___path__);
}

if (tmp_assattr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assattr_target_3 = module_var_accessor_platformdirs$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_platformdirs, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT0(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = Py_False;
UPDATE_STRING_DICT0(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_api;
tmp_globals_arg_value_1 = (PyObject *)moduledict_platformdirs;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_PlatformDirsABC_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_platformdirs->m_frame.f_lineno = 14;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_platformdirs,
        mod_consts.const_str_plain_PlatformDirsABC,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_PlatformDirsABC);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_PlatformDirsABC, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_version;
tmp_globals_arg_value_2 = (PyObject *)moduledict_platformdirs;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain___version___tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_platformdirs->m_frame.f_lineno = 15;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_platformdirs,
        mod_consts.const_str_plain___version__,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain___version__);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain___version__, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_version;
tmp_globals_arg_value_3 = (PyObject *)moduledict_platformdirs;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain___version_tuple___tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_platformdirs->m_frame.f_lineno = 16;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_platformdirs,
        mod_consts.const_str_plain___version_tuple__,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain___version_tuple__);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain___version_info__, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_d0bf41bdb1d3c3a4e8b25d918611477f;
tmp_globals_arg_value_4 = (PyObject *)moduledict_platformdirs;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_Windows_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_platformdirs->m_frame.f_lineno = 23;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_platformdirs,
        mod_consts.const_str_plain_Windows,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Windows);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain__Result, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_b599d1884bed88b79aaf13e92b15198d);

tmp_assign_source_13 = MAKE_FUNCTION_platformdirs$$$function__1__set_platform_dir_class(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain__set_platform_dir_class, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor_platformdirs$_set_platform_dir_class(tstate);
assert(!(tmp_called_value_3 == NULL));
frame_frame_platformdirs->m_frame.f_lineno = 49;
tmp_assign_source_14 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_PlatformDirs, tmp_assign_source_14);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_platformdirs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_platformdirs->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_platformdirs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_platformdirs);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = module_var_accessor_platformdirs$PlatformDirs(tstate);
assert(!(tmp_assign_source_15 == NULL));
UPDATE_STRING_DICT0(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_AppDirs, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_2;
tmp_defaults_1 = mod_consts.const_tuple_none_none_none_false_false_tuple;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_de6c8bd07ee156a5ed8bec97ab8e1cec);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_16 = MAKE_FUNCTION_platformdirs$$$function__2_user_data_dir(tstate, tmp_defaults_1, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_user_data_dir, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_3;
tmp_defaults_2 = mod_consts.const_tuple_none_none_none_false_false_tuple;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_2a5dcb3809722c862e97c4167f27a217);
Py_INCREF(tmp_defaults_2);

tmp_assign_source_17 = MAKE_FUNCTION_platformdirs$$$function__3_site_data_dir(tstate, tmp_defaults_2, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_site_data_dir, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_4;
tmp_defaults_3 = mod_consts.const_tuple_none_none_none_false_false_tuple;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_de6c8bd07ee156a5ed8bec97ab8e1cec);
Py_INCREF(tmp_defaults_3);

tmp_assign_source_18 = MAKE_FUNCTION_platformdirs$$$function__4_user_config_dir(tstate, tmp_defaults_3, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_user_config_dir, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_defaults_4;
PyObject *tmp_annotations_5;
tmp_defaults_4 = mod_consts.const_tuple_none_none_none_false_false_tuple;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_2a5dcb3809722c862e97c4167f27a217);
Py_INCREF(tmp_defaults_4);

tmp_assign_source_19 = MAKE_FUNCTION_platformdirs$$$function__5_site_config_dir(tstate, tmp_defaults_4, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_site_config_dir, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_defaults_5;
PyObject *tmp_annotations_6;
tmp_defaults_5 = mod_consts.const_tuple_none_none_none_true_false_tuple;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_88b430f8c946a8031088df67ee248f5b);
Py_INCREF(tmp_defaults_5);

tmp_assign_source_20 = MAKE_FUNCTION_platformdirs$$$function__6_user_cache_dir(tstate, tmp_defaults_5, tmp_annotations_6);

UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_user_cache_dir, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_defaults_6;
PyObject *tmp_annotations_7;
tmp_defaults_6 = mod_consts.const_tuple_none_none_none_true_false_tuple;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_88b430f8c946a8031088df67ee248f5b);
Py_INCREF(tmp_defaults_6);

tmp_assign_source_21 = MAKE_FUNCTION_platformdirs$$$function__7_site_cache_dir(tstate, tmp_defaults_6, tmp_annotations_7);

UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_site_cache_dir, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_defaults_7;
PyObject *tmp_annotations_8;
tmp_defaults_7 = mod_consts.const_tuple_none_none_none_false_false_tuple;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_de6c8bd07ee156a5ed8bec97ab8e1cec);
Py_INCREF(tmp_defaults_7);

tmp_assign_source_22 = MAKE_FUNCTION_platformdirs$$$function__8_user_state_dir(tstate, tmp_defaults_7, tmp_annotations_8);

UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_user_state_dir, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_defaults_8;
PyObject *tmp_annotations_9;
tmp_defaults_8 = mod_consts.const_tuple_none_none_none_true_false_tuple;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_88b430f8c946a8031088df67ee248f5b);
Py_INCREF(tmp_defaults_8);

tmp_assign_source_23 = MAKE_FUNCTION_platformdirs$$$function__9_user_log_dir(tstate, tmp_defaults_8, tmp_annotations_9);

UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_user_log_dir, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_assign_source_24 = MAKE_FUNCTION_platformdirs$$$function__10_user_documents_dir(tstate, tmp_annotations_10);

UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_user_documents_dir, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_assign_source_25 = MAKE_FUNCTION_platformdirs$$$function__11_user_downloads_dir(tstate, tmp_annotations_11);

UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_user_downloads_dir, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_annotations_12;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_assign_source_26 = MAKE_FUNCTION_platformdirs$$$function__12_user_pictures_dir(tstate, tmp_annotations_12);

UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_user_pictures_dir, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_annotations_13;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_assign_source_27 = MAKE_FUNCTION_platformdirs$$$function__13_user_videos_dir(tstate, tmp_annotations_13);

UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_user_videos_dir, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_annotations_14;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_assign_source_28 = MAKE_FUNCTION_platformdirs$$$function__14_user_music_dir(tstate, tmp_annotations_14);

UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_user_music_dir, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_annotations_15;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_assign_source_29 = MAKE_FUNCTION_platformdirs$$$function__15_user_desktop_dir(tstate, tmp_annotations_15);

UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_user_desktop_dir, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_defaults_9;
PyObject *tmp_annotations_16;
tmp_defaults_9 = mod_consts.const_tuple_none_none_none_true_false_tuple;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_88b430f8c946a8031088df67ee248f5b);
Py_INCREF(tmp_defaults_9);

tmp_assign_source_30 = MAKE_FUNCTION_platformdirs$$$function__16_user_runtime_dir(tstate, tmp_defaults_9, tmp_annotations_16);

UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_user_runtime_dir, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_defaults_10;
PyObject *tmp_annotations_17;
tmp_defaults_10 = mod_consts.const_tuple_none_none_none_true_false_tuple;
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_88b430f8c946a8031088df67ee248f5b);
Py_INCREF(tmp_defaults_10);

tmp_assign_source_31 = MAKE_FUNCTION_platformdirs$$$function__17_site_runtime_dir(tstate, tmp_defaults_10, tmp_annotations_17);

UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_site_runtime_dir, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_defaults_11;
PyObject *tmp_annotations_18;
tmp_defaults_11 = mod_consts.const_tuple_none_none_none_false_false_tuple;
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_aec3da9e77dd6885c0d5788d99c49d87);
Py_INCREF(tmp_defaults_11);

tmp_assign_source_32 = MAKE_FUNCTION_platformdirs$$$function__18_user_data_path(tstate, tmp_defaults_11, tmp_annotations_18);

UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_user_data_path, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_defaults_12;
PyObject *tmp_annotations_19;
tmp_defaults_12 = mod_consts.const_tuple_none_none_none_false_false_tuple;
tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_902c7dd49729d7d9cdeca1de649decb2);
Py_INCREF(tmp_defaults_12);

tmp_assign_source_33 = MAKE_FUNCTION_platformdirs$$$function__19_site_data_path(tstate, tmp_defaults_12, tmp_annotations_19);

UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_site_data_path, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_defaults_13;
PyObject *tmp_annotations_20;
tmp_defaults_13 = mod_consts.const_tuple_none_none_none_false_false_tuple;
tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_aec3da9e77dd6885c0d5788d99c49d87);
Py_INCREF(tmp_defaults_13);

tmp_assign_source_34 = MAKE_FUNCTION_platformdirs$$$function__20_user_config_path(tstate, tmp_defaults_13, tmp_annotations_20);

UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_user_config_path, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_defaults_14;
PyObject *tmp_annotations_21;
tmp_defaults_14 = mod_consts.const_tuple_none_none_none_false_false_tuple;
tmp_annotations_21 = DICT_COPY(tstate, mod_consts.const_dict_902c7dd49729d7d9cdeca1de649decb2);
Py_INCREF(tmp_defaults_14);

tmp_assign_source_35 = MAKE_FUNCTION_platformdirs$$$function__21_site_config_path(tstate, tmp_defaults_14, tmp_annotations_21);

UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_site_config_path, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_defaults_15;
PyObject *tmp_annotations_22;
tmp_defaults_15 = mod_consts.const_tuple_none_none_none_true_false_tuple;
tmp_annotations_22 = DICT_COPY(tstate, mod_consts.const_dict_7b892d2c3a77e7c76a9dadd2a5b7533f);
Py_INCREF(tmp_defaults_15);

tmp_assign_source_36 = MAKE_FUNCTION_platformdirs$$$function__22_site_cache_path(tstate, tmp_defaults_15, tmp_annotations_22);

UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_site_cache_path, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_defaults_16;
PyObject *tmp_annotations_23;
tmp_defaults_16 = mod_consts.const_tuple_none_none_none_true_false_tuple;
tmp_annotations_23 = DICT_COPY(tstate, mod_consts.const_dict_7b892d2c3a77e7c76a9dadd2a5b7533f);
Py_INCREF(tmp_defaults_16);

tmp_assign_source_37 = MAKE_FUNCTION_platformdirs$$$function__23_user_cache_path(tstate, tmp_defaults_16, tmp_annotations_23);

UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_user_cache_path, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_defaults_17;
PyObject *tmp_annotations_24;
tmp_defaults_17 = mod_consts.const_tuple_none_none_none_false_false_tuple;
tmp_annotations_24 = DICT_COPY(tstate, mod_consts.const_dict_aec3da9e77dd6885c0d5788d99c49d87);
Py_INCREF(tmp_defaults_17);

tmp_assign_source_38 = MAKE_FUNCTION_platformdirs$$$function__24_user_state_path(tstate, tmp_defaults_17, tmp_annotations_24);

UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_user_state_path, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_defaults_18;
PyObject *tmp_annotations_25;
tmp_defaults_18 = mod_consts.const_tuple_none_none_none_true_false_tuple;
tmp_annotations_25 = DICT_COPY(tstate, mod_consts.const_dict_7b892d2c3a77e7c76a9dadd2a5b7533f);
Py_INCREF(tmp_defaults_18);

tmp_assign_source_39 = MAKE_FUNCTION_platformdirs$$$function__25_user_log_path(tstate, tmp_defaults_18, tmp_annotations_25);

UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_user_log_path, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_annotations_26;
tmp_annotations_26 = DICT_COPY(tstate, mod_consts.const_dict_8bbfa897dce82badadbdad5bcd6f946d);

tmp_assign_source_40 = MAKE_FUNCTION_platformdirs$$$function__26_user_documents_path(tstate, tmp_annotations_26);

UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_user_documents_path, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_annotations_27;
tmp_annotations_27 = DICT_COPY(tstate, mod_consts.const_dict_8bbfa897dce82badadbdad5bcd6f946d);

tmp_assign_source_41 = MAKE_FUNCTION_platformdirs$$$function__27_user_downloads_path(tstate, tmp_annotations_27);

UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_user_downloads_path, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_annotations_28;
tmp_annotations_28 = DICT_COPY(tstate, mod_consts.const_dict_8bbfa897dce82badadbdad5bcd6f946d);

tmp_assign_source_42 = MAKE_FUNCTION_platformdirs$$$function__28_user_pictures_path(tstate, tmp_annotations_28);

UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_user_pictures_path, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_annotations_29;
tmp_annotations_29 = DICT_COPY(tstate, mod_consts.const_dict_8bbfa897dce82badadbdad5bcd6f946d);

tmp_assign_source_43 = MAKE_FUNCTION_platformdirs$$$function__29_user_videos_path(tstate, tmp_annotations_29);

UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_user_videos_path, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_annotations_30;
tmp_annotations_30 = DICT_COPY(tstate, mod_consts.const_dict_8bbfa897dce82badadbdad5bcd6f946d);

tmp_assign_source_44 = MAKE_FUNCTION_platformdirs$$$function__30_user_music_path(tstate, tmp_annotations_30);

UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_user_music_path, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_annotations_31;
tmp_annotations_31 = DICT_COPY(tstate, mod_consts.const_dict_8bbfa897dce82badadbdad5bcd6f946d);

tmp_assign_source_45 = MAKE_FUNCTION_platformdirs$$$function__31_user_desktop_path(tstate, tmp_annotations_31);

UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_user_desktop_path, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_defaults_19;
PyObject *tmp_annotations_32;
tmp_defaults_19 = mod_consts.const_tuple_none_none_none_true_false_tuple;
tmp_annotations_32 = DICT_COPY(tstate, mod_consts.const_dict_7b892d2c3a77e7c76a9dadd2a5b7533f);
Py_INCREF(tmp_defaults_19);

tmp_assign_source_46 = MAKE_FUNCTION_platformdirs$$$function__32_user_runtime_path(tstate, tmp_defaults_19, tmp_annotations_32);

UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_user_runtime_path, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_defaults_20;
PyObject *tmp_annotations_33;
tmp_defaults_20 = mod_consts.const_tuple_none_none_none_true_false_tuple;
tmp_annotations_33 = DICT_COPY(tstate, mod_consts.const_dict_7b892d2c3a77e7c76a9dadd2a5b7533f);
Py_INCREF(tmp_defaults_20);

tmp_assign_source_47 = MAKE_FUNCTION_platformdirs$$$function__33_site_runtime_path(tstate, tmp_defaults_20, tmp_annotations_33);

UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)mod_consts.const_str_plain_site_runtime_path, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
tmp_assign_source_48 = LIST_COPY(tstate, mod_consts.const_list_8b0b535f0b738adc98f15bd89b8e9454_list);
UPDATE_STRING_DICT1(moduledict_platformdirs, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_48);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("platformdirs", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "platformdirs" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_platformdirs);
    return module_platformdirs;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_platformdirs, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("platformdirs", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

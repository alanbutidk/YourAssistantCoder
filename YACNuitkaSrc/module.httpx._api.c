/* Generated code for Python module 'httpx$_api'
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



/* The "module_httpx$_api" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_httpx$_api;
PyDictObject *moduledict_httpx$_api;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_Client;
PyObject *const_tuple_9f611e477eec85a93585637a665977bd_tuple;
PyObject *const_str_plain_request;
PyObject *const_tuple_e1863b058a0f51b1b7b26fdf8100829f_tuple;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_digest_22cc3638d57d81338e3cb53426a52fa6;
PyObject *const_str_digest_2d71f43cc83b28f3035c5623555c4cc3;
PyObject *const_str_plain_cookies;
PyObject *const_str_plain_proxy;
PyObject *const_str_plain_verify;
PyObject *const_str_plain_timeout;
PyObject *const_str_plain_trust_env;
PyObject *const_str_plain_stream;
PyObject *const_str_plain_method;
PyObject *const_str_plain_url;
PyObject *const_str_plain_content;
PyObject *const_str_plain_data;
PyObject *const_str_plain_files;
PyObject *const_str_plain_json;
PyObject *const_str_plain_params;
PyObject *const_str_plain_headers;
PyObject *const_str_plain_auth;
PyObject *const_str_plain_follow_redirects;
PyObject *const_str_plain_GET;
PyObject *const_tuple_10c963a4907de93cd68dff43cf84c180_tuple;
PyObject *const_str_digest_90be8d3e88ab3104e0681b9d254f1ebf;
PyObject *const_str_plain_OPTIONS;
PyObject *const_str_digest_2c2ec6673b019a75b0d14ac126355a76;
PyObject *const_str_plain_HEAD;
PyObject *const_str_digest_b378d242311b914578e099f7147f95c4;
PyObject *const_str_plain_POST;
PyObject *const_tuple_f668e31cf037f4e8f00f94bc4f0e9c19_tuple;
PyObject *const_str_digest_e875bec82d0be2044059dab239752f43;
PyObject *const_str_plain_PUT;
PyObject *const_str_digest_d084c434feaa5640739a44fa6e473a36;
PyObject *const_str_plain_PATCH;
PyObject *const_str_digest_46539b86391ad9706d9a6b7eba8f0f18;
PyObject *const_str_plain_DELETE;
PyObject *const_str_digest_d9f4a4311fcf39f89ec58bc08a129a2e;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_typing;
PyObject *const_str_plain_contextlib;
PyObject *const_tuple_str_plain_contextmanager_tuple;
PyObject *const_str_plain_contextmanager;
PyObject *const_str_plain__client;
PyObject *const_tuple_str_plain_Client_tuple;
PyObject *const_str_plain__config;
PyObject *const_tuple_str_plain_DEFAULT_TIMEOUT_CONFIG_tuple;
PyObject *const_str_plain_DEFAULT_TIMEOUT_CONFIG;
PyObject *const_str_plain__models;
PyObject *const_tuple_str_plain_Response_tuple;
PyObject *const_str_plain_Response;
PyObject *const_str_plain__types;
PyObject *const_tuple_85ce936dd85d5dbcf28982ec3fdefe02_tuple;
PyObject *const_str_plain_AuthTypes;
PyObject *const_str_plain_CookieTypes;
PyObject *const_str_plain_HeaderTypes;
PyObject *const_str_plain_ProxyTypes;
PyObject *const_str_plain_QueryParamTypes;
PyObject *const_str_plain_RequestContent;
PyObject *const_str_plain_RequestData;
PyObject *const_str_plain_RequestFiles;
PyObject *const_str_plain_TimeoutTypes;
PyObject *const_str_plain__urls;
PyObject *const_tuple_str_plain_URL_tuple;
PyObject *const_str_plain_URL;
PyObject *const_list_b08510d48559de10b8384beefc5a6ac5_list;
PyObject *const_dict_426dfdd2f3601e5e50bc2496a34ea747;
PyObject *const_dict_9f3905139289af5d52a48633f6cb4bde;
PyObject *const_dict_ea349960b169abcbc0ec0febc91aee1a;
PyObject *const_str_plain_options;
PyObject *const_str_plain_head;
PyObject *const_dict_c33b7c1d317d9aab5d73567f2964c07a;
PyObject *const_str_plain_post;
PyObject *const_str_plain_put;
PyObject *const_str_plain_patch;
PyObject *const_dict_592926cf9e4f5b88e3b33c4a19398ba2;
PyObject *const_str_plain_delete;
PyObject *const_str_digest_e9c1540b2ac24f434da2f4c1d0f5bffd;
PyObject *const_str_digest_38c62ed82d7ecee0b940f4b90dc35040;
PyObject *const_tuple_073bd060e02fa77e5f5cb797c5a39884_tuple;
PyObject *const_tuple_b134c15d89442a872ca41b64dc1b1672_tuple;
PyObject *const_tuple_ead7efe8090ce964b1c5720cde857d23_tuple;
PyObject *const_tuple_90e5de5c3825a60a4067c444629d7bda_tuple;
PyObject *const_tuple_bee2b1f46addd5482c9a725bc8d46894_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[87];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("httpx._api"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_Client);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_tuple_9f611e477eec85a93585637a665977bd_tuple);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_request);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_tuple_e1863b058a0f51b1b7b26fdf8100829f_tuple);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_22cc3638d57d81338e3cb53426a52fa6);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_2d71f43cc83b28f3035c5623555c4cc3);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_cookies);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_proxy);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_verify);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_timeout);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_trust_env);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_stream);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_method);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_url);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_content);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_data);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_files);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_json);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_params);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_headers);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_auth);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_follow_redirects);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_GET);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_10c963a4907de93cd68dff43cf84c180_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_90be8d3e88ab3104e0681b9d254f1ebf);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_OPTIONS);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_2c2ec6673b019a75b0d14ac126355a76);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_HEAD);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_b378d242311b914578e099f7147f95c4);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_POST);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_f668e31cf037f4e8f00f94bc4f0e9c19_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_e875bec82d0be2044059dab239752f43);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_PUT);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_d084c434feaa5640739a44fa6e473a36);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_PATCH);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_46539b86391ad9706d9a6b7eba8f0f18);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_DELETE);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_d9f4a4311fcf39f89ec58bc08a129a2e);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_contextmanager_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextmanager);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain__client);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Client_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain__config);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DEFAULT_TIMEOUT_CONFIG_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_TIMEOUT_CONFIG);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain__models);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Response_tuple);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_Response);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain__types);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_85ce936dd85d5dbcf28982ec3fdefe02_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_AuthTypes);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_CookieTypes);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_HeaderTypes);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProxyTypes);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_QueryParamTypes);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_RequestContent);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_RequestData);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_RequestFiles);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_TimeoutTypes);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain__urls);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_URL_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_URL);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_list_b08510d48559de10b8384beefc5a6ac5_list);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_dict_426dfdd2f3601e5e50bc2496a34ea747);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_dict_9f3905139289af5d52a48633f6cb4bde);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_dict_ea349960b169abcbc0ec0febc91aee1a);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_options);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_head);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_dict_c33b7c1d317d9aab5d73567f2964c07a);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_post);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_put);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_patch);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_dict_592926cf9e4f5b88e3b33c4a19398ba2);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_delete);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_e9c1540b2ac24f434da2f4c1d0f5bffd);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_38c62ed82d7ecee0b940f4b90dc35040);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_tuple_073bd060e02fa77e5f5cb797c5a39884_tuple);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_tuple_b134c15d89442a872ca41b64dc1b1672_tuple);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_ead7efe8090ce964b1c5720cde857d23_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_tuple_90e5de5c3825a60a4067c444629d7bda_tuple);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_bee2b1f46addd5482c9a725bc8d46894_tuple);
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
void checkModuleConstants_httpx$_api(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_Client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Client);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_tuple_9f611e477eec85a93585637a665977bd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9f611e477eec85a93585637a665977bd_tuple);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_request);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_tuple_e1863b058a0f51b1b7b26fdf8100829f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e1863b058a0f51b1b7b26fdf8100829f_tuple);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_22cc3638d57d81338e3cb53426a52fa6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_22cc3638d57d81338e3cb53426a52fa6);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_2d71f43cc83b28f3035c5623555c4cc3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2d71f43cc83b28f3035c5623555c4cc3);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_cookies));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cookies);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_proxy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_proxy);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_verify));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_verify);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_timeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_timeout);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_trust_env));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_trust_env);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_stream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stream);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_method));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_method);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_url);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_content));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_content);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_data);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_files));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_files);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_json);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_params);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_headers);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_auth));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_auth);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_follow_redirects));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_follow_redirects);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_GET));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GET);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_10c963a4907de93cd68dff43cf84c180_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_10c963a4907de93cd68dff43cf84c180_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_90be8d3e88ab3104e0681b9d254f1ebf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_90be8d3e88ab3104e0681b9d254f1ebf);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_OPTIONS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OPTIONS);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_2c2ec6673b019a75b0d14ac126355a76));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2c2ec6673b019a75b0d14ac126355a76);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_HEAD));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HEAD);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_b378d242311b914578e099f7147f95c4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b378d242311b914578e099f7147f95c4);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_POST));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_POST);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_f668e31cf037f4e8f00f94bc4f0e9c19_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f668e31cf037f4e8f00f94bc4f0e9c19_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_e875bec82d0be2044059dab239752f43));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e875bec82d0be2044059dab239752f43);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_PUT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PUT);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_d084c434feaa5640739a44fa6e473a36));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d084c434feaa5640739a44fa6e473a36);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_PATCH));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PATCH);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_46539b86391ad9706d9a6b7eba8f0f18));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_46539b86391ad9706d9a6b7eba8f0f18);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_DELETE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DELETE);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_d9f4a4311fcf39f89ec58bc08a129a2e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d9f4a4311fcf39f89ec58bc08a129a2e);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextlib);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_contextmanager_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_contextmanager_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextmanager));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextmanager);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain__client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__client);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Client_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Client_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain__config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__config);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DEFAULT_TIMEOUT_CONFIG_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_DEFAULT_TIMEOUT_CONFIG_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_TIMEOUT_CONFIG));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_TIMEOUT_CONFIG);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain__models));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__models);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Response_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Response_tuple);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_Response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Response);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain__types));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__types);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_85ce936dd85d5dbcf28982ec3fdefe02_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_85ce936dd85d5dbcf28982ec3fdefe02_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_AuthTypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AuthTypes);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_CookieTypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CookieTypes);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_HeaderTypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HeaderTypes);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProxyTypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ProxyTypes);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_QueryParamTypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_QueryParamTypes);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_RequestContent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RequestContent);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_RequestData));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RequestData);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_RequestFiles));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RequestFiles);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_TimeoutTypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TimeoutTypes);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain__urls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__urls);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_URL_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_URL_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_URL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_URL);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_list_b08510d48559de10b8384beefc5a6ac5_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_b08510d48559de10b8384beefc5a6ac5_list);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_dict_426dfdd2f3601e5e50bc2496a34ea747));
CHECK_OBJECT_DEEP(mod_consts.const_dict_426dfdd2f3601e5e50bc2496a34ea747);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_dict_9f3905139289af5d52a48633f6cb4bde));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9f3905139289af5d52a48633f6cb4bde);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_dict_ea349960b169abcbc0ec0febc91aee1a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ea349960b169abcbc0ec0febc91aee1a);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_options));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_options);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_head));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_head);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_dict_c33b7c1d317d9aab5d73567f2964c07a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c33b7c1d317d9aab5d73567f2964c07a);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_post));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_post);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_put));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_put);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_patch));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_patch);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_dict_592926cf9e4f5b88e3b33c4a19398ba2));
CHECK_OBJECT_DEEP(mod_consts.const_dict_592926cf9e4f5b88e3b33c4a19398ba2);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_delete));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_delete);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_e9c1540b2ac24f434da2f4c1d0f5bffd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e9c1540b2ac24f434da2f4c1d0f5bffd);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_38c62ed82d7ecee0b940f4b90dc35040));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_38c62ed82d7ecee0b940f4b90dc35040);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_tuple_073bd060e02fa77e5f5cb797c5a39884_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_073bd060e02fa77e5f5cb797c5a39884_tuple);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_tuple_b134c15d89442a872ca41b64dc1b1672_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b134c15d89442a872ca41b64dc1b1672_tuple);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_ead7efe8090ce964b1c5720cde857d23_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ead7efe8090ce964b1c5720cde857d23_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_tuple_90e5de5c3825a60a4067c444629d7bda_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_90e5de5c3825a60a4067c444629d7bda_tuple);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_bee2b1f46addd5482c9a725bc8d46894_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bee2b1f46addd5482c9a725bc8d46894_tuple);
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
static PyObject *module_var_accessor_httpx$_api$Client(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts.const_str_plain_Client);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Client);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Client, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Client);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Client, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts.const_str_plain_Client);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts.const_str_plain_Client);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Client);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_api$DEFAULT_TIMEOUT_CONFIG(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_TIMEOUT_CONFIG);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_TIMEOUT_CONFIG);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_TIMEOUT_CONFIG, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_TIMEOUT_CONFIG);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_TIMEOUT_CONFIG, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_TIMEOUT_CONFIG);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_TIMEOUT_CONFIG);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_TIMEOUT_CONFIG);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_api$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_api->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_api$contextmanager(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_contextmanager);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_contextmanager, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_contextmanager);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_contextmanager, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager);
    }

    return result;
}

static PyObject *module_var_accessor_httpx$_api$request(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_httpx$_api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_httpx$_api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts.const_str_plain_request);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_httpx$_api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_request);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_request, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_request);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_request, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts.const_str_plain_request);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts.const_str_plain_request);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_request);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_f403c52e4cc1a356ea31ade0bd57875d;
static PyCodeObject *code_objects_2735619f11692268ed77d5315d5d05a6;
static PyCodeObject *code_objects_3895e1d814ceca1546151db0e9e4f4df;
static PyCodeObject *code_objects_a73246c4517126a574f83007a9381481;
static PyCodeObject *code_objects_b3ea10bfa2f713ed5f0351730cd12207;
static PyCodeObject *code_objects_49c8feee10417fadea84259a01094a3c;
static PyCodeObject *code_objects_d21b29a81b10c6093180938f48e3a96a;
static PyCodeObject *code_objects_060807d517b9b0e064a3e176013b7b11;
static PyCodeObject *code_objects_d9e094d6bc34e03cba648da07614baea;
static PyCodeObject *code_objects_747caf729c86484f4f47a5219ebc5f15;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_e9c1540b2ac24f434da2f4c1d0f5bffd); CHECK_OBJECT(module_filename_obj);
code_objects_f403c52e4cc1a356ea31ade0bd57875d = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_38c62ed82d7ecee0b940f4b90dc35040, mod_consts.const_str_digest_38c62ed82d7ecee0b940f4b90dc35040, NULL, NULL, 0, 0, 0);
code_objects_2735619f11692268ed77d5315d5d05a6 = MAKE_CODE_OBJECT(module_filename_obj, 405, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_delete, mod_consts.const_str_plain_delete, mod_consts.const_tuple_073bd060e02fa77e5f5cb797c5a39884_tuple, NULL, 1, 9, 0);
code_objects_3895e1d814ceca1546151db0e9e4f4df = MAKE_CODE_OBJECT(module_filename_obj, 174, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_get, const_str_plain_get, mod_consts.const_tuple_b134c15d89442a872ca41b64dc1b1672_tuple, NULL, 1, 9, 0);
code_objects_a73246c4517126a574f83007a9381481 = MAKE_CODE_OBJECT(module_filename_obj, 246, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_head, mod_consts.const_str_plain_head, mod_consts.const_tuple_b134c15d89442a872ca41b64dc1b1672_tuple, NULL, 1, 9, 0);
code_objects_b3ea10bfa2f713ed5f0351730cd12207 = MAKE_CODE_OBJECT(module_filename_obj, 210, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_options, mod_consts.const_str_plain_options, mod_consts.const_tuple_b134c15d89442a872ca41b64dc1b1672_tuple, NULL, 1, 9, 0);
code_objects_49c8feee10417fadea84259a01094a3c = MAKE_CODE_OBJECT(module_filename_obj, 364, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_patch, mod_consts.const_str_plain_patch, mod_consts.const_tuple_ead7efe8090ce964b1c5720cde857d23_tuple, NULL, 1, 13, 0);
code_objects_d21b29a81b10c6093180938f48e3a96a = MAKE_CODE_OBJECT(module_filename_obj, 282, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_post, mod_consts.const_str_plain_post, mod_consts.const_tuple_ead7efe8090ce964b1c5720cde857d23_tuple, NULL, 1, 13, 0);
code_objects_060807d517b9b0e064a3e176013b7b11 = MAKE_CODE_OBJECT(module_filename_obj, 323, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_put, mod_consts.const_str_plain_put, mod_consts.const_tuple_ead7efe8090ce964b1c5720cde857d23_tuple, NULL, 1, 13, 0);
code_objects_d9e094d6bc34e03cba648da07614baea = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_request, mod_consts.const_str_plain_request, mod_consts.const_tuple_90e5de5c3825a60a4067c444629d7bda_tuple, NULL, 2, 13, 0);
code_objects_747caf729c86484f4f47a5219ebc5f15 = MAKE_CODE_OBJECT(module_filename_obj, 124, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_stream, mod_consts.const_str_plain_stream, mod_consts.const_tuple_bee2b1f46addd5482c9a725bc8d46894_tuple, NULL, 2, 13, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_httpx$_api$$$function__2_stream$$$genobj__1_stream(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_httpx$_api$$$function__1_request(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_api$$$function__2_stream(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_api$$$function__3_get(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_api$$$function__4_options(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_api$$$function__5_head(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_api$$$function__6_post(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_api$$$function__7_put(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_api$$$function__8_patch(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_api$$$function__9_delete(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_httpx$_api$$$function__1_request(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_method = python_pars[0];
PyObject *par_url = python_pars[1];
PyObject *par_params = python_pars[2];
PyObject *par_content = python_pars[3];
PyObject *par_data = python_pars[4];
PyObject *par_files = python_pars[5];
PyObject *par_json = python_pars[6];
PyObject *par_headers = python_pars[7];
PyObject *par_cookies = python_pars[8];
PyObject *par_auth = python_pars[9];
PyObject *par_proxy = python_pars[10];
PyObject *par_timeout = python_pars[11];
PyObject *par_follow_redirects = python_pars[12];
PyObject *par_verify = python_pars[13];
PyObject *par_trust_env = python_pars[14];
PyObject *var_client = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_api$$$function__1_request;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_api$$$function__1_request = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_httpx$_api$$$function__1_request)) {
    Py_XDECREF(cache_frame_frame_httpx$_api$$$function__1_request);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_api$$$function__1_request == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_api$$$function__1_request = MAKE_FUNCTION_FRAME(tstate, code_objects_d9e094d6bc34e03cba648da07614baea, module_httpx$_api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_api$$$function__1_request->m_type_description == NULL);
frame_frame_httpx$_api$$$function__1_request = cache_frame_frame_httpx$_api$$$function__1_request;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_api$$$function__1_request);
assert(Py_REFCNT(frame_frame_httpx$_api$$$function__1_request) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
tmp_called_value_1 = module_var_accessor_httpx$_api$Client(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Client);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 102;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_cookies);
tmp_kw_call_value_0_1 = par_cookies;
CHECK_OBJECT(par_proxy);
tmp_kw_call_value_1_1 = par_proxy;
CHECK_OBJECT(par_verify);
tmp_kw_call_value_2_1 = par_verify;
CHECK_OBJECT(par_timeout);
tmp_kw_call_value_3_1 = par_timeout;
CHECK_OBJECT(par_trust_env);
tmp_kw_call_value_4_1 = par_trust_env;
frame_frame_httpx$_api$$$function__1_request->m_frame.f_lineno = 102;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

    tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_9f611e477eec85a93585637a665977bd_tuple);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_1 = tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_httpx$_api$$$function__1_request->m_frame.f_lineno = 102;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_5 = tmp_with_1__enter;
assert(var_client == NULL);
Py_INCREF(tmp_assign_source_5);
var_client = tmp_assign_source_5;
}
// Tried code:
// Tried code:
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_kw_call_value_2_2;
PyObject *tmp_kw_call_value_3_2;
PyObject *tmp_kw_call_value_4_2;
PyObject *tmp_kw_call_value_5_1;
PyObject *tmp_kw_call_value_6_1;
PyObject *tmp_kw_call_value_7_1;
PyObject *tmp_kw_call_value_8_1;
PyObject *tmp_kw_call_value_9_1;
CHECK_OBJECT(var_client);
tmp_expression_value_3 = var_client;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_request);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_method);
tmp_kw_call_value_0_2 = par_method;
CHECK_OBJECT(par_url);
tmp_kw_call_value_1_2 = par_url;
CHECK_OBJECT(par_content);
tmp_kw_call_value_2_2 = par_content;
CHECK_OBJECT(par_data);
tmp_kw_call_value_3_2 = par_data;
CHECK_OBJECT(par_files);
tmp_kw_call_value_4_2 = par_files;
CHECK_OBJECT(par_json);
tmp_kw_call_value_5_1 = par_json;
CHECK_OBJECT(par_params);
tmp_kw_call_value_6_1 = par_params;
CHECK_OBJECT(par_headers);
tmp_kw_call_value_7_1 = par_headers;
CHECK_OBJECT(par_auth);
tmp_kw_call_value_8_1 = par_auth;
CHECK_OBJECT(par_follow_redirects);
tmp_kw_call_value_9_1 = par_follow_redirects;
frame_frame_httpx$_api$$$function__1_request->m_frame.f_lineno = 109;
{
    PyObject *kw_values[10] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2, tmp_kw_call_value_3_2, tmp_kw_call_value_4_2, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1, tmp_kw_call_value_8_1, tmp_kw_call_value_9_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_e1863b058a0f51b1b7b26fdf8100829f_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_4;
}
goto try_return_handler_3;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_api$$$function__1_request, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_api$$$function__1_request, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_BaseException;
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
nuitka_bool tmp_assign_source_6;
tmp_assign_source_6 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_6;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
tmp_args_element_value_1 = EXC_TYPE(tstate);
tmp_args_element_value_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_2); 
tmp_args_element_value_3 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_3 == NULL) {
    tmp_args_element_value_3 = Py_None;
}
frame_frame_httpx$_api$$$function__1_request->m_frame.f_lineno = 102;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_5;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_5;
}
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
    exception_lineno = 102;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_httpx$_api$$$function__1_request->m_frame)) {
        frame_frame_httpx$_api$$$function__1_request->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooooooo";
goto try_except_handler_5;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 102;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_httpx$_api$$$function__1_request->m_frame)) {
        frame_frame_httpx$_api$$$function__1_request->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooooooo";
goto try_except_handler_5;
branch_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
try_end_1:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
goto try_end_3;
// Return handler code:
try_return_handler_3:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_1;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
frame_frame_httpx$_api$$$function__1_request->m_frame.f_lineno = 102;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_3;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_6 = tmp_with_1__exit;
frame_frame_httpx$_api$$$function__1_request->m_frame.f_lineno = 102;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 102;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_3:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
goto try_end_4;
// Return handler code:
try_return_handler_2:;
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
goto frame_return_exit_1;
// Exception handler code:
try_except_handler_2:;
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

goto frame_exception_exit_1;
// End of try:
try_end_4:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_api$$$function__1_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_api$$$function__1_request->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_api$$$function__1_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_api$$$function__1_request,
    type_description_1,
    par_method,
    par_url,
    par_params,
    par_content,
    par_data,
    par_files,
    par_json,
    par_headers,
    par_cookies,
    par_auth,
    par_proxy,
    par_timeout,
    par_follow_redirects,
    par_verify,
    par_trust_env,
    var_client
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_api$$$function__1_request == cache_frame_frame_httpx$_api$$$function__1_request) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_api$$$function__1_request);
    cache_frame_frame_httpx$_api$$$function__1_request = NULL;
}

assertFrameObject(frame_frame_httpx$_api$$$function__1_request);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_client);
CHECK_OBJECT(var_client);
Py_DECREF(var_client);
var_client = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_client);
var_client = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_params);
Py_DECREF(par_params);
CHECK_OBJECT(par_content);
Py_DECREF(par_content);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_files);
Py_DECREF(par_files);
CHECK_OBJECT(par_json);
Py_DECREF(par_json);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_cookies);
Py_DECREF(par_cookies);
CHECK_OBJECT(par_auth);
Py_DECREF(par_auth);
CHECK_OBJECT(par_proxy);
Py_DECREF(par_proxy);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_follow_redirects);
Py_DECREF(par_follow_redirects);
CHECK_OBJECT(par_verify);
Py_DECREF(par_verify);
CHECK_OBJECT(par_trust_env);
Py_DECREF(par_trust_env);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_params);
Py_DECREF(par_params);
CHECK_OBJECT(par_content);
Py_DECREF(par_content);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_files);
Py_DECREF(par_files);
CHECK_OBJECT(par_json);
Py_DECREF(par_json);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_cookies);
Py_DECREF(par_cookies);
CHECK_OBJECT(par_auth);
Py_DECREF(par_auth);
CHECK_OBJECT(par_proxy);
Py_DECREF(par_proxy);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_follow_redirects);
Py_DECREF(par_follow_redirects);
CHECK_OBJECT(par_verify);
Py_DECREF(par_verify);
CHECK_OBJECT(par_trust_env);
Py_DECREF(par_trust_env);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_api$$$function__2_stream(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_method = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_url = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_params = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_content = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_data = Nuitka_Cell_New1(python_pars[4]);
struct Nuitka_CellObject *par_files = Nuitka_Cell_New1(python_pars[5]);
struct Nuitka_CellObject *par_json = Nuitka_Cell_New1(python_pars[6]);
struct Nuitka_CellObject *par_headers = Nuitka_Cell_New1(python_pars[7]);
struct Nuitka_CellObject *par_cookies = Nuitka_Cell_New1(python_pars[8]);
struct Nuitka_CellObject *par_auth = Nuitka_Cell_New1(python_pars[9]);
struct Nuitka_CellObject *par_proxy = Nuitka_Cell_New1(python_pars[10]);
struct Nuitka_CellObject *par_timeout = Nuitka_Cell_New1(python_pars[11]);
struct Nuitka_CellObject *par_follow_redirects = Nuitka_Cell_New1(python_pars[12]);
struct Nuitka_CellObject *par_verify = Nuitka_Cell_New1(python_pars[13]);
struct Nuitka_CellObject *par_trust_env = Nuitka_Cell_New1(python_pars[14]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[15];
tmp_closure_1[0] = par_auth;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_content;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_cookies;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_data;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_files;
Py_INCREF(tmp_closure_1[4]);
tmp_closure_1[5] = par_follow_redirects;
Py_INCREF(tmp_closure_1[5]);
tmp_closure_1[6] = par_headers;
Py_INCREF(tmp_closure_1[6]);
tmp_closure_1[7] = par_json;
Py_INCREF(tmp_closure_1[7]);
tmp_closure_1[8] = par_method;
Py_INCREF(tmp_closure_1[8]);
tmp_closure_1[9] = par_params;
Py_INCREF(tmp_closure_1[9]);
tmp_closure_1[10] = par_proxy;
Py_INCREF(tmp_closure_1[10]);
tmp_closure_1[11] = par_timeout;
Py_INCREF(tmp_closure_1[11]);
tmp_closure_1[12] = par_trust_env;
Py_INCREF(tmp_closure_1[12]);
tmp_closure_1[13] = par_url;
Py_INCREF(tmp_closure_1[13]);
tmp_closure_1[14] = par_verify;
Py_INCREF(tmp_closure_1[14]);
tmp_return_value = MAKE_GENERATOR_httpx$_api$$$function__2_stream$$$genobj__1_stream(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_method);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
par_method = NULL;
CHECK_OBJECT(par_url);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
par_url = NULL;
CHECK_OBJECT(par_params);
CHECK_OBJECT(par_params);
Py_DECREF(par_params);
par_params = NULL;
CHECK_OBJECT(par_content);
CHECK_OBJECT(par_content);
Py_DECREF(par_content);
par_content = NULL;
CHECK_OBJECT(par_data);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
par_data = NULL;
CHECK_OBJECT(par_files);
CHECK_OBJECT(par_files);
Py_DECREF(par_files);
par_files = NULL;
CHECK_OBJECT(par_json);
CHECK_OBJECT(par_json);
Py_DECREF(par_json);
par_json = NULL;
CHECK_OBJECT(par_headers);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
par_headers = NULL;
CHECK_OBJECT(par_cookies);
CHECK_OBJECT(par_cookies);
Py_DECREF(par_cookies);
par_cookies = NULL;
CHECK_OBJECT(par_auth);
CHECK_OBJECT(par_auth);
Py_DECREF(par_auth);
par_auth = NULL;
CHECK_OBJECT(par_proxy);
CHECK_OBJECT(par_proxy);
Py_DECREF(par_proxy);
par_proxy = NULL;
CHECK_OBJECT(par_timeout);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
par_timeout = NULL;
CHECK_OBJECT(par_follow_redirects);
CHECK_OBJECT(par_follow_redirects);
Py_DECREF(par_follow_redirects);
par_follow_redirects = NULL;
CHECK_OBJECT(par_verify);
CHECK_OBJECT(par_verify);
Py_DECREF(par_verify);
par_verify = NULL;
CHECK_OBJECT(par_trust_env);
CHECK_OBJECT(par_trust_env);
Py_DECREF(par_trust_env);
par_trust_env = NULL;
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
struct httpx$_api$$$function__2_stream$$$genobj__1_stream_locals {
PyObject *var_client;
PyObject *var_response;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
int exception_keeper_lineno_9;
};
#endif

static PyObject *httpx$_api$$$function__2_stream$$$genobj__1_stream_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct httpx$_api$$$function__2_stream$$$genobj__1_stream_locals *generator_heap = (struct httpx$_api$$$function__2_stream$$$genobj__1_stream_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_client = NULL;
generator_heap->var_response = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_747caf729c86484f4f47a5219ebc5f15, module_httpx$_api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
tmp_called_value_1 = module_var_accessor_httpx$_api$Client(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Client);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 152;
generator_heap->type_description_1 = "cccccccccccccccoo";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_cookies);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 153;
generator_heap->type_description_1 = "cccccccccccccccoo";
    goto try_except_handler_2;
}

tmp_kw_call_value_0_1 = Nuitka_Cell_GET(generator->m_closure[2]);
if (Nuitka_Cell_GET(generator->m_closure[10]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_proxy);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 154;
generator_heap->type_description_1 = "cccccccccccccccoo";
    goto try_except_handler_2;
}

tmp_kw_call_value_1_1 = Nuitka_Cell_GET(generator->m_closure[10]);
if (Nuitka_Cell_GET(generator->m_closure[14]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_verify);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 155;
generator_heap->type_description_1 = "cccccccccccccccoo";
    goto try_except_handler_2;
}

tmp_kw_call_value_2_1 = Nuitka_Cell_GET(generator->m_closure[14]);
if (Nuitka_Cell_GET(generator->m_closure[11]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_timeout);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 156;
generator_heap->type_description_1 = "cccccccccccccccoo";
    goto try_except_handler_2;
}

tmp_kw_call_value_3_1 = Nuitka_Cell_GET(generator->m_closure[11]);
if (Nuitka_Cell_GET(generator->m_closure[12]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_trust_env);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 157;
generator_heap->type_description_1 = "cccccccccccccccoo";
    goto try_except_handler_2;
}

tmp_kw_call_value_4_1 = Nuitka_Cell_GET(generator->m_closure[12]);
generator->m_frame->m_frame.f_lineno = 152;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

    tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_9f611e477eec85a93585637a665977bd_tuple);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 152;
generator_heap->type_description_1 = "cccccccccccccccoo";
    goto try_except_handler_2;
}
assert(generator_heap->tmp_with_2__source == NULL);
generator_heap->tmp_with_2__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(generator_heap->tmp_with_2__source);
tmp_expression_value_1 = generator_heap->tmp_with_2__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 152;
generator_heap->type_description_1 = "cccccccccccccccoo";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 152;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 152;
generator_heap->type_description_1 = "cccccccccccccccoo";
    goto try_except_handler_2;
}
assert(generator_heap->tmp_with_2__enter == NULL);
generator_heap->tmp_with_2__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(generator_heap->tmp_with_2__source);
tmp_expression_value_2 = generator_heap->tmp_with_2__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 152;
generator_heap->type_description_1 = "cccccccccccccccoo";
    goto try_except_handler_2;
}
assert(generator_heap->tmp_with_2__exit == NULL);
generator_heap->tmp_with_2__exit = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
generator_heap->tmp_with_2__indicator = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(generator_heap->tmp_with_2__enter);
tmp_assign_source_5 = generator_heap->tmp_with_2__enter;
assert(generator_heap->var_client == NULL);
Py_INCREF(tmp_assign_source_5);
generator_heap->var_client = tmp_assign_source_5;
}
// Tried code:
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_kw_call_value_2_2;
PyObject *tmp_kw_call_value_3_2;
PyObject *tmp_kw_call_value_4_2;
PyObject *tmp_kw_call_value_5_1;
PyObject *tmp_kw_call_value_6_1;
PyObject *tmp_kw_call_value_7_1;
PyObject *tmp_kw_call_value_8_1;
PyObject *tmp_kw_call_value_9_1;
CHECK_OBJECT(generator_heap->var_client);
tmp_expression_value_3 = generator_heap->var_client;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_stream);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 159;
generator_heap->type_description_1 = "cccccccccccccccoo";
    goto try_except_handler_5;
}
if (Nuitka_Cell_GET(generator->m_closure[8]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_method);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 160;
generator_heap->type_description_1 = "cccccccccccccccoo";
    goto try_except_handler_5;
}

tmp_kw_call_value_0_2 = Nuitka_Cell_GET(generator->m_closure[8]);
if (Nuitka_Cell_GET(generator->m_closure[13]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_url);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 161;
generator_heap->type_description_1 = "cccccccccccccccoo";
    goto try_except_handler_5;
}

tmp_kw_call_value_1_2 = Nuitka_Cell_GET(generator->m_closure[13]);
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_content);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 162;
generator_heap->type_description_1 = "cccccccccccccccoo";
    goto try_except_handler_5;
}

tmp_kw_call_value_2_2 = Nuitka_Cell_GET(generator->m_closure[1]);
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 163;
generator_heap->type_description_1 = "cccccccccccccccoo";
    goto try_except_handler_5;
}

tmp_kw_call_value_3_2 = Nuitka_Cell_GET(generator->m_closure[3]);
if (Nuitka_Cell_GET(generator->m_closure[4]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_files);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 164;
generator_heap->type_description_1 = "cccccccccccccccoo";
    goto try_except_handler_5;
}

tmp_kw_call_value_4_2 = Nuitka_Cell_GET(generator->m_closure[4]);
if (Nuitka_Cell_GET(generator->m_closure[7]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_json);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 165;
generator_heap->type_description_1 = "cccccccccccccccoo";
    goto try_except_handler_5;
}

tmp_kw_call_value_5_1 = Nuitka_Cell_GET(generator->m_closure[7]);
if (Nuitka_Cell_GET(generator->m_closure[9]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_params);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 166;
generator_heap->type_description_1 = "cccccccccccccccoo";
    goto try_except_handler_5;
}

tmp_kw_call_value_6_1 = Nuitka_Cell_GET(generator->m_closure[9]);
if (Nuitka_Cell_GET(generator->m_closure[6]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_headers);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 167;
generator_heap->type_description_1 = "cccccccccccccccoo";
    goto try_except_handler_5;
}

tmp_kw_call_value_7_1 = Nuitka_Cell_GET(generator->m_closure[6]);
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_auth);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 168;
generator_heap->type_description_1 = "cccccccccccccccoo";
    goto try_except_handler_5;
}

tmp_kw_call_value_8_1 = Nuitka_Cell_GET(generator->m_closure[0]);
if (Nuitka_Cell_GET(generator->m_closure[5]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_follow_redirects);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 169;
generator_heap->type_description_1 = "cccccccccccccccoo";
    goto try_except_handler_5;
}

tmp_kw_call_value_9_1 = Nuitka_Cell_GET(generator->m_closure[5]);
generator->m_frame->m_frame.f_lineno = 159;
{
    PyObject *kw_values[10] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2, tmp_kw_call_value_3_2, tmp_kw_call_value_4_2, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1, tmp_kw_call_value_8_1, tmp_kw_call_value_9_1};

    tmp_assign_source_6 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_e1863b058a0f51b1b7b26fdf8100829f_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 159;
generator_heap->type_description_1 = "cccccccccccccccoo";
    goto try_except_handler_5;
}
assert(generator_heap->tmp_with_1__source == NULL);
generator_heap->tmp_with_1__source = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(generator_heap->tmp_with_1__source);
tmp_expression_value_4 = generator_heap->tmp_with_1__source;
tmp_called_value_4 = LOOKUP_SPECIAL(tstate, tmp_expression_value_4, const_str_plain___enter__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 159;
generator_heap->type_description_1 = "cccccccccccccccoo";
    goto try_except_handler_5;
}
generator->m_frame->m_frame.f_lineno = 159;
tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 159;
generator_heap->type_description_1 = "cccccccccccccccoo";
    goto try_except_handler_5;
}
assert(generator_heap->tmp_with_1__enter == NULL);
generator_heap->tmp_with_1__enter = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(generator_heap->tmp_with_1__source);
tmp_expression_value_5 = generator_heap->tmp_with_1__source;
tmp_assign_source_8 = LOOKUP_SPECIAL(tstate, tmp_expression_value_5, const_str_plain___exit__);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 159;
generator_heap->type_description_1 = "cccccccccccccccoo";
    goto try_except_handler_5;
}
assert(generator_heap->tmp_with_1__exit == NULL);
generator_heap->tmp_with_1__exit = tmp_assign_source_8;
}
{
nuitka_bool tmp_assign_source_9;
tmp_assign_source_9 = NUITKA_BOOL_TRUE;
generator_heap->tmp_with_1__indicator = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(generator_heap->tmp_with_1__enter);
tmp_assign_source_10 = generator_heap->tmp_with_1__enter;
assert(generator_heap->var_response == NULL);
Py_INCREF(tmp_assign_source_10);
generator_heap->var_response = tmp_assign_source_10;
}
// Tried code:
// Tried code:
{
PyObject *tmp_expression_value_6;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_response);
tmp_expression_value_6 = generator_heap->var_response;
Py_INCREF(tmp_expression_value_6);
generator->m_yield_return_index = 1;
return tmp_expression_value_6;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 171;
generator_heap->type_description_1 = "cccccccccccccccoo";
    goto try_except_handler_7;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_7:;
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
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_BaseException;
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
nuitka_bool tmp_assign_source_11;
tmp_assign_source_11 = NUITKA_BOOL_FALSE;
generator_heap->tmp_with_1__indicator = tmp_assign_source_11;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_5 = generator_heap->tmp_with_1__exit;
tmp_args_element_value_1 = EXC_TYPE(tstate);
tmp_args_element_value_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_2); 
tmp_args_element_value_3 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_3 == NULL) {
    tmp_args_element_value_3 = Py_None;
}
generator->m_frame->m_frame.f_lineno = 159;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 159;
generator_heap->type_description_1 = "cccccccccccccccoo";
    goto try_except_handler_8;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 159;
generator_heap->type_description_1 = "cccccccccccccccoo";
    goto try_except_handler_8;
}
tmp_condition_result_2 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 159;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "cccccccccccccccoo";
goto try_except_handler_8;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 159;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "cccccccccccccccoo";
goto try_except_handler_8;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_8:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto try_except_handler_6;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_6:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

{
bool tmp_condition_result_3;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = generator_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_1;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_6 = generator_heap->tmp_with_1__exit;
generator->m_frame->m_frame.f_lineno = 159;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&generator_heap->exception_keeper_name_3);

generator_heap->exception_lineno = 159;
generator_heap->type_description_1 = "cccccccccccccccoo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_3:;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto try_except_handler_5;
// End of try:
try_end_3:;
{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = generator_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_2;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_7 = generator_heap->tmp_with_1__exit;
generator->m_frame->m_frame.f_lineno = 159;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_7, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 159;
generator_heap->type_description_1 = "cccccccccccccccoo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_with_1__source);
generator_heap->tmp_with_1__source = NULL;
Py_XDECREF(generator_heap->tmp_with_1__enter);
generator_heap->tmp_with_1__enter = NULL;
Py_XDECREF(generator_heap->tmp_with_1__exit);
generator_heap->tmp_with_1__exit = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto try_except_handler_4;
// End of try:
try_end_4:;
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
goto try_end_5;
// Exception handler code:
try_except_handler_4:;
generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_5 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Preserve existing published exception id 2.
generator_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_5, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = PyExc_BaseException;
generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
assert(!(generator_heap->tmp_res == -1));
tmp_condition_result_5 = (generator_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
nuitka_bool tmp_assign_source_12;
tmp_assign_source_12 = NUITKA_BOOL_FALSE;
generator_heap->tmp_with_2__indicator = tmp_assign_source_12;
}
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(generator_heap->tmp_with_2__exit);
tmp_called_value_8 = generator_heap->tmp_with_2__exit;
tmp_args_element_value_4 = EXC_TYPE(tstate);
tmp_args_element_value_5 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_5); 
tmp_args_element_value_6 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_6 == NULL) {
    tmp_args_element_value_6 = Py_None;
}
generator->m_frame->m_frame.f_lineno = 152;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_8, call_args);
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 152;
generator_heap->type_description_1 = "cccccccccccccccoo";
    goto try_except_handler_9;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 152;
generator_heap->type_description_1 = "cccccccccccccccoo";
    goto try_except_handler_9;
}
tmp_condition_result_6 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 152;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "cccccccccccccccoo";
goto try_except_handler_9;
branch_no_6:;
goto branch_end_5;
branch_no_5:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 152;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "cccccccccccccccoo";
goto try_except_handler_9;
branch_end_5:;
goto try_end_6;
// Exception handler code:
try_except_handler_9:;
generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_6 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_2);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_6;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

goto try_except_handler_3;
// End of try:
try_end_6:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_2);

goto try_end_5;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_5:;
goto try_end_7;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_7 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_7 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

{
bool tmp_condition_result_7;
nuitka_bool tmp_cmp_expr_left_5;
nuitka_bool tmp_cmp_expr_right_5;
assert(generator_heap->tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_5 = generator_heap->tmp_with_2__indicator;
tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
tmp_condition_result_7 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_value_9;
PyObject *tmp_call_result_3;
CHECK_OBJECT(generator_heap->tmp_with_2__exit);
tmp_called_value_9 = generator_heap->tmp_with_2__exit;
generator->m_frame->m_frame.f_lineno = 152;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_9, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&generator_heap->exception_keeper_name_7);

generator_heap->exception_lineno = 152;
generator_heap->type_description_1 = "cccccccccccccccoo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_7:;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_7;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_7;

goto try_except_handler_2;
// End of try:
try_end_7:;
{
bool tmp_condition_result_8;
nuitka_bool tmp_cmp_expr_left_6;
nuitka_bool tmp_cmp_expr_right_6;
assert(generator_heap->tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_6 = generator_heap->tmp_with_2__indicator;
tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
tmp_condition_result_8 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_called_value_10;
PyObject *tmp_call_result_4;
CHECK_OBJECT(generator_heap->tmp_with_2__exit);
tmp_called_value_10 = generator_heap->tmp_with_2__exit;
generator->m_frame->m_frame.f_lineno = 152;
tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_10, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 152;
generator_heap->type_description_1 = "cccccccccccccccoo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_8:;
goto try_end_8;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_8 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_8 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_with_2__source);
generator_heap->tmp_with_2__source = NULL;
Py_XDECREF(generator_heap->tmp_with_2__enter);
generator_heap->tmp_with_2__enter = NULL;
Py_XDECREF(generator_heap->tmp_with_2__exit);
generator_heap->tmp_with_2__exit = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_8;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_8:;

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
    generator->m_closure[8],
    generator->m_closure[13],
    generator->m_closure[9],
    generator->m_closure[1],
    generator->m_closure[3],
    generator->m_closure[4],
    generator->m_closure[7],
    generator->m_closure[6],
    generator->m_closure[2],
    generator->m_closure[0],
    generator->m_closure[10],
    generator->m_closure[11],
    generator->m_closure[5],
    generator->m_closure[14],
    generator->m_closure[12],
    generator_heap->var_client,
    generator_heap->var_response
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
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_9 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_9 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_client);
generator_heap->var_client = NULL;
Py_XDECREF(generator_heap->var_response);
generator_heap->var_response = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_9;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_9;

goto function_exception_exit;
// End of try:
try_end_9:;
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
CHECK_OBJECT(generator_heap->var_client);
CHECK_OBJECT(generator_heap->var_client);
Py_DECREF(generator_heap->var_client);
generator_heap->var_client = NULL;
Py_XDECREF(generator_heap->var_response);
generator_heap->var_response = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_httpx$_api$$$function__2_stream$$$genobj__1_stream(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        httpx$_api$$$function__2_stream$$$genobj__1_stream_context,
        module_httpx$_api,
        mod_consts.const_str_plain_stream,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_747caf729c86484f4f47a5219ebc5f15,
        closure,
        15,
#if 1
        sizeof(struct httpx$_api$$$function__2_stream$$$genobj__1_stream_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpx$_api$$$function__3_get(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_url = python_pars[0];
PyObject *par_params = python_pars[1];
PyObject *par_headers = python_pars[2];
PyObject *par_cookies = python_pars[3];
PyObject *par_auth = python_pars[4];
PyObject *par_proxy = python_pars[5];
PyObject *par_follow_redirects = python_pars[6];
PyObject *par_verify = python_pars[7];
PyObject *par_timeout = python_pars[8];
PyObject *par_trust_env = python_pars[9];
struct Nuitka_FrameObject *frame_frame_httpx$_api$$$function__3_get;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_api$$$function__3_get = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_api$$$function__3_get)) {
    Py_XDECREF(cache_frame_frame_httpx$_api$$$function__3_get);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_api$$$function__3_get == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_api$$$function__3_get = MAKE_FUNCTION_FRAME(tstate, code_objects_3895e1d814ceca1546151db0e9e4f4df, module_httpx$_api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_api$$$function__3_get->m_type_description == NULL);
frame_frame_httpx$_api$$$function__3_get = cache_frame_frame_httpx$_api$$$function__3_get;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_api$$$function__3_get);
assert(Py_REFCNT(frame_frame_httpx$_api$$$function__3_get) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
PyObject *tmp_kw_call_dict_value_5_1;
PyObject *tmp_kw_call_dict_value_6_1;
PyObject *tmp_kw_call_dict_value_7_1;
PyObject *tmp_kw_call_dict_value_8_1;
tmp_called_value_1 = module_var_accessor_httpx$_api$request(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_request);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 195;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_plain_GET;
CHECK_OBJECT(par_url);
tmp_kw_call_arg_value_1_1 = par_url;
CHECK_OBJECT(par_params);
tmp_kw_call_dict_value_0_1 = par_params;
CHECK_OBJECT(par_headers);
tmp_kw_call_dict_value_1_1 = par_headers;
CHECK_OBJECT(par_cookies);
tmp_kw_call_dict_value_2_1 = par_cookies;
CHECK_OBJECT(par_auth);
tmp_kw_call_dict_value_3_1 = par_auth;
CHECK_OBJECT(par_proxy);
tmp_kw_call_dict_value_4_1 = par_proxy;
CHECK_OBJECT(par_follow_redirects);
tmp_kw_call_dict_value_5_1 = par_follow_redirects;
CHECK_OBJECT(par_verify);
tmp_kw_call_dict_value_6_1 = par_verify;
CHECK_OBJECT(par_timeout);
tmp_kw_call_dict_value_7_1 = par_timeout;
CHECK_OBJECT(par_trust_env);
tmp_kw_call_dict_value_8_1 = par_trust_env;
frame_frame_httpx$_api$$$function__3_get->m_frame.f_lineno = 195;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[9] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_10c963a4907de93cd68dff43cf84c180_tuple);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_api$$$function__3_get, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_api$$$function__3_get->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_api$$$function__3_get, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_api$$$function__3_get,
    type_description_1,
    par_url,
    par_params,
    par_headers,
    par_cookies,
    par_auth,
    par_proxy,
    par_follow_redirects,
    par_verify,
    par_timeout,
    par_trust_env
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_api$$$function__3_get == cache_frame_frame_httpx$_api$$$function__3_get) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_api$$$function__3_get);
    cache_frame_frame_httpx$_api$$$function__3_get = NULL;
}

assertFrameObject(frame_frame_httpx$_api$$$function__3_get);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_params);
Py_DECREF(par_params);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_cookies);
Py_DECREF(par_cookies);
CHECK_OBJECT(par_auth);
Py_DECREF(par_auth);
CHECK_OBJECT(par_proxy);
Py_DECREF(par_proxy);
CHECK_OBJECT(par_follow_redirects);
Py_DECREF(par_follow_redirects);
CHECK_OBJECT(par_verify);
Py_DECREF(par_verify);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_trust_env);
Py_DECREF(par_trust_env);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_params);
Py_DECREF(par_params);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_cookies);
Py_DECREF(par_cookies);
CHECK_OBJECT(par_auth);
Py_DECREF(par_auth);
CHECK_OBJECT(par_proxy);
Py_DECREF(par_proxy);
CHECK_OBJECT(par_follow_redirects);
Py_DECREF(par_follow_redirects);
CHECK_OBJECT(par_verify);
Py_DECREF(par_verify);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_trust_env);
Py_DECREF(par_trust_env);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_api$$$function__4_options(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_url = python_pars[0];
PyObject *par_params = python_pars[1];
PyObject *par_headers = python_pars[2];
PyObject *par_cookies = python_pars[3];
PyObject *par_auth = python_pars[4];
PyObject *par_proxy = python_pars[5];
PyObject *par_follow_redirects = python_pars[6];
PyObject *par_verify = python_pars[7];
PyObject *par_timeout = python_pars[8];
PyObject *par_trust_env = python_pars[9];
struct Nuitka_FrameObject *frame_frame_httpx$_api$$$function__4_options;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_api$$$function__4_options = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_api$$$function__4_options)) {
    Py_XDECREF(cache_frame_frame_httpx$_api$$$function__4_options);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_api$$$function__4_options == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_api$$$function__4_options = MAKE_FUNCTION_FRAME(tstate, code_objects_b3ea10bfa2f713ed5f0351730cd12207, module_httpx$_api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_api$$$function__4_options->m_type_description == NULL);
frame_frame_httpx$_api$$$function__4_options = cache_frame_frame_httpx$_api$$$function__4_options;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_api$$$function__4_options);
assert(Py_REFCNT(frame_frame_httpx$_api$$$function__4_options) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
PyObject *tmp_kw_call_dict_value_5_1;
PyObject *tmp_kw_call_dict_value_6_1;
PyObject *tmp_kw_call_dict_value_7_1;
PyObject *tmp_kw_call_dict_value_8_1;
tmp_called_value_1 = module_var_accessor_httpx$_api$request(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_request);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 231;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_plain_OPTIONS;
CHECK_OBJECT(par_url);
tmp_kw_call_arg_value_1_1 = par_url;
CHECK_OBJECT(par_params);
tmp_kw_call_dict_value_0_1 = par_params;
CHECK_OBJECT(par_headers);
tmp_kw_call_dict_value_1_1 = par_headers;
CHECK_OBJECT(par_cookies);
tmp_kw_call_dict_value_2_1 = par_cookies;
CHECK_OBJECT(par_auth);
tmp_kw_call_dict_value_3_1 = par_auth;
CHECK_OBJECT(par_proxy);
tmp_kw_call_dict_value_4_1 = par_proxy;
CHECK_OBJECT(par_follow_redirects);
tmp_kw_call_dict_value_5_1 = par_follow_redirects;
CHECK_OBJECT(par_verify);
tmp_kw_call_dict_value_6_1 = par_verify;
CHECK_OBJECT(par_timeout);
tmp_kw_call_dict_value_7_1 = par_timeout;
CHECK_OBJECT(par_trust_env);
tmp_kw_call_dict_value_8_1 = par_trust_env;
frame_frame_httpx$_api$$$function__4_options->m_frame.f_lineno = 231;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[9] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_10c963a4907de93cd68dff43cf84c180_tuple);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_api$$$function__4_options, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_api$$$function__4_options->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_api$$$function__4_options, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_api$$$function__4_options,
    type_description_1,
    par_url,
    par_params,
    par_headers,
    par_cookies,
    par_auth,
    par_proxy,
    par_follow_redirects,
    par_verify,
    par_timeout,
    par_trust_env
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_api$$$function__4_options == cache_frame_frame_httpx$_api$$$function__4_options) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_api$$$function__4_options);
    cache_frame_frame_httpx$_api$$$function__4_options = NULL;
}

assertFrameObject(frame_frame_httpx$_api$$$function__4_options);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_params);
Py_DECREF(par_params);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_cookies);
Py_DECREF(par_cookies);
CHECK_OBJECT(par_auth);
Py_DECREF(par_auth);
CHECK_OBJECT(par_proxy);
Py_DECREF(par_proxy);
CHECK_OBJECT(par_follow_redirects);
Py_DECREF(par_follow_redirects);
CHECK_OBJECT(par_verify);
Py_DECREF(par_verify);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_trust_env);
Py_DECREF(par_trust_env);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_params);
Py_DECREF(par_params);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_cookies);
Py_DECREF(par_cookies);
CHECK_OBJECT(par_auth);
Py_DECREF(par_auth);
CHECK_OBJECT(par_proxy);
Py_DECREF(par_proxy);
CHECK_OBJECT(par_follow_redirects);
Py_DECREF(par_follow_redirects);
CHECK_OBJECT(par_verify);
Py_DECREF(par_verify);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_trust_env);
Py_DECREF(par_trust_env);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_api$$$function__5_head(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_url = python_pars[0];
PyObject *par_params = python_pars[1];
PyObject *par_headers = python_pars[2];
PyObject *par_cookies = python_pars[3];
PyObject *par_auth = python_pars[4];
PyObject *par_proxy = python_pars[5];
PyObject *par_follow_redirects = python_pars[6];
PyObject *par_verify = python_pars[7];
PyObject *par_timeout = python_pars[8];
PyObject *par_trust_env = python_pars[9];
struct Nuitka_FrameObject *frame_frame_httpx$_api$$$function__5_head;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_api$$$function__5_head = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_api$$$function__5_head)) {
    Py_XDECREF(cache_frame_frame_httpx$_api$$$function__5_head);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_api$$$function__5_head == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_api$$$function__5_head = MAKE_FUNCTION_FRAME(tstate, code_objects_a73246c4517126a574f83007a9381481, module_httpx$_api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_api$$$function__5_head->m_type_description == NULL);
frame_frame_httpx$_api$$$function__5_head = cache_frame_frame_httpx$_api$$$function__5_head;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_api$$$function__5_head);
assert(Py_REFCNT(frame_frame_httpx$_api$$$function__5_head) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
PyObject *tmp_kw_call_dict_value_5_1;
PyObject *tmp_kw_call_dict_value_6_1;
PyObject *tmp_kw_call_dict_value_7_1;
PyObject *tmp_kw_call_dict_value_8_1;
tmp_called_value_1 = module_var_accessor_httpx$_api$request(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_request);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 267;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_plain_HEAD;
CHECK_OBJECT(par_url);
tmp_kw_call_arg_value_1_1 = par_url;
CHECK_OBJECT(par_params);
tmp_kw_call_dict_value_0_1 = par_params;
CHECK_OBJECT(par_headers);
tmp_kw_call_dict_value_1_1 = par_headers;
CHECK_OBJECT(par_cookies);
tmp_kw_call_dict_value_2_1 = par_cookies;
CHECK_OBJECT(par_auth);
tmp_kw_call_dict_value_3_1 = par_auth;
CHECK_OBJECT(par_proxy);
tmp_kw_call_dict_value_4_1 = par_proxy;
CHECK_OBJECT(par_follow_redirects);
tmp_kw_call_dict_value_5_1 = par_follow_redirects;
CHECK_OBJECT(par_verify);
tmp_kw_call_dict_value_6_1 = par_verify;
CHECK_OBJECT(par_timeout);
tmp_kw_call_dict_value_7_1 = par_timeout;
CHECK_OBJECT(par_trust_env);
tmp_kw_call_dict_value_8_1 = par_trust_env;
frame_frame_httpx$_api$$$function__5_head->m_frame.f_lineno = 267;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[9] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_10c963a4907de93cd68dff43cf84c180_tuple);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_api$$$function__5_head, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_api$$$function__5_head->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_api$$$function__5_head, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_api$$$function__5_head,
    type_description_1,
    par_url,
    par_params,
    par_headers,
    par_cookies,
    par_auth,
    par_proxy,
    par_follow_redirects,
    par_verify,
    par_timeout,
    par_trust_env
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_api$$$function__5_head == cache_frame_frame_httpx$_api$$$function__5_head) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_api$$$function__5_head);
    cache_frame_frame_httpx$_api$$$function__5_head = NULL;
}

assertFrameObject(frame_frame_httpx$_api$$$function__5_head);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_params);
Py_DECREF(par_params);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_cookies);
Py_DECREF(par_cookies);
CHECK_OBJECT(par_auth);
Py_DECREF(par_auth);
CHECK_OBJECT(par_proxy);
Py_DECREF(par_proxy);
CHECK_OBJECT(par_follow_redirects);
Py_DECREF(par_follow_redirects);
CHECK_OBJECT(par_verify);
Py_DECREF(par_verify);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_trust_env);
Py_DECREF(par_trust_env);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_params);
Py_DECREF(par_params);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_cookies);
Py_DECREF(par_cookies);
CHECK_OBJECT(par_auth);
Py_DECREF(par_auth);
CHECK_OBJECT(par_proxy);
Py_DECREF(par_proxy);
CHECK_OBJECT(par_follow_redirects);
Py_DECREF(par_follow_redirects);
CHECK_OBJECT(par_verify);
Py_DECREF(par_verify);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_trust_env);
Py_DECREF(par_trust_env);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_api$$$function__6_post(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_url = python_pars[0];
PyObject *par_content = python_pars[1];
PyObject *par_data = python_pars[2];
PyObject *par_files = python_pars[3];
PyObject *par_json = python_pars[4];
PyObject *par_params = python_pars[5];
PyObject *par_headers = python_pars[6];
PyObject *par_cookies = python_pars[7];
PyObject *par_auth = python_pars[8];
PyObject *par_proxy = python_pars[9];
PyObject *par_follow_redirects = python_pars[10];
PyObject *par_verify = python_pars[11];
PyObject *par_timeout = python_pars[12];
PyObject *par_trust_env = python_pars[13];
struct Nuitka_FrameObject *frame_frame_httpx$_api$$$function__6_post;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_api$$$function__6_post = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_api$$$function__6_post)) {
    Py_XDECREF(cache_frame_frame_httpx$_api$$$function__6_post);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_api$$$function__6_post == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_api$$$function__6_post = MAKE_FUNCTION_FRAME(tstate, code_objects_d21b29a81b10c6093180938f48e3a96a, module_httpx$_api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_api$$$function__6_post->m_type_description == NULL);
frame_frame_httpx$_api$$$function__6_post = cache_frame_frame_httpx$_api$$$function__6_post;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_api$$$function__6_post);
assert(Py_REFCNT(frame_frame_httpx$_api$$$function__6_post) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
PyObject *tmp_kw_call_dict_value_5_1;
PyObject *tmp_kw_call_dict_value_6_1;
PyObject *tmp_kw_call_dict_value_7_1;
PyObject *tmp_kw_call_dict_value_8_1;
PyObject *tmp_kw_call_dict_value_9_1;
PyObject *tmp_kw_call_dict_value_10_1;
PyObject *tmp_kw_call_dict_value_11_1;
PyObject *tmp_kw_call_dict_value_12_1;
tmp_called_value_1 = module_var_accessor_httpx$_api$request(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_request);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 304;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_plain_POST;
CHECK_OBJECT(par_url);
tmp_kw_call_arg_value_1_1 = par_url;
CHECK_OBJECT(par_content);
tmp_kw_call_dict_value_0_1 = par_content;
CHECK_OBJECT(par_data);
tmp_kw_call_dict_value_1_1 = par_data;
CHECK_OBJECT(par_files);
tmp_kw_call_dict_value_2_1 = par_files;
CHECK_OBJECT(par_json);
tmp_kw_call_dict_value_3_1 = par_json;
CHECK_OBJECT(par_params);
tmp_kw_call_dict_value_4_1 = par_params;
CHECK_OBJECT(par_headers);
tmp_kw_call_dict_value_5_1 = par_headers;
CHECK_OBJECT(par_cookies);
tmp_kw_call_dict_value_6_1 = par_cookies;
CHECK_OBJECT(par_auth);
tmp_kw_call_dict_value_7_1 = par_auth;
CHECK_OBJECT(par_proxy);
tmp_kw_call_dict_value_8_1 = par_proxy;
CHECK_OBJECT(par_follow_redirects);
tmp_kw_call_dict_value_9_1 = par_follow_redirects;
CHECK_OBJECT(par_verify);
tmp_kw_call_dict_value_10_1 = par_verify;
CHECK_OBJECT(par_timeout);
tmp_kw_call_dict_value_11_1 = par_timeout;
CHECK_OBJECT(par_trust_env);
tmp_kw_call_dict_value_12_1 = par_trust_env;
frame_frame_httpx$_api$$$function__6_post->m_frame.f_lineno = 304;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[13] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1, tmp_kw_call_dict_value_9_1, tmp_kw_call_dict_value_10_1, tmp_kw_call_dict_value_11_1, tmp_kw_call_dict_value_12_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_f668e31cf037f4e8f00f94bc4f0e9c19_tuple);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "oooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_api$$$function__6_post, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_api$$$function__6_post->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_api$$$function__6_post, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_api$$$function__6_post,
    type_description_1,
    par_url,
    par_content,
    par_data,
    par_files,
    par_json,
    par_params,
    par_headers,
    par_cookies,
    par_auth,
    par_proxy,
    par_follow_redirects,
    par_verify,
    par_timeout,
    par_trust_env
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_api$$$function__6_post == cache_frame_frame_httpx$_api$$$function__6_post) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_api$$$function__6_post);
    cache_frame_frame_httpx$_api$$$function__6_post = NULL;
}

assertFrameObject(frame_frame_httpx$_api$$$function__6_post);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_content);
Py_DECREF(par_content);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_files);
Py_DECREF(par_files);
CHECK_OBJECT(par_json);
Py_DECREF(par_json);
CHECK_OBJECT(par_params);
Py_DECREF(par_params);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_cookies);
Py_DECREF(par_cookies);
CHECK_OBJECT(par_auth);
Py_DECREF(par_auth);
CHECK_OBJECT(par_proxy);
Py_DECREF(par_proxy);
CHECK_OBJECT(par_follow_redirects);
Py_DECREF(par_follow_redirects);
CHECK_OBJECT(par_verify);
Py_DECREF(par_verify);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_trust_env);
Py_DECREF(par_trust_env);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_content);
Py_DECREF(par_content);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_files);
Py_DECREF(par_files);
CHECK_OBJECT(par_json);
Py_DECREF(par_json);
CHECK_OBJECT(par_params);
Py_DECREF(par_params);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_cookies);
Py_DECREF(par_cookies);
CHECK_OBJECT(par_auth);
Py_DECREF(par_auth);
CHECK_OBJECT(par_proxy);
Py_DECREF(par_proxy);
CHECK_OBJECT(par_follow_redirects);
Py_DECREF(par_follow_redirects);
CHECK_OBJECT(par_verify);
Py_DECREF(par_verify);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_trust_env);
Py_DECREF(par_trust_env);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_api$$$function__7_put(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_url = python_pars[0];
PyObject *par_content = python_pars[1];
PyObject *par_data = python_pars[2];
PyObject *par_files = python_pars[3];
PyObject *par_json = python_pars[4];
PyObject *par_params = python_pars[5];
PyObject *par_headers = python_pars[6];
PyObject *par_cookies = python_pars[7];
PyObject *par_auth = python_pars[8];
PyObject *par_proxy = python_pars[9];
PyObject *par_follow_redirects = python_pars[10];
PyObject *par_verify = python_pars[11];
PyObject *par_timeout = python_pars[12];
PyObject *par_trust_env = python_pars[13];
struct Nuitka_FrameObject *frame_frame_httpx$_api$$$function__7_put;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_api$$$function__7_put = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_api$$$function__7_put)) {
    Py_XDECREF(cache_frame_frame_httpx$_api$$$function__7_put);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_api$$$function__7_put == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_api$$$function__7_put = MAKE_FUNCTION_FRAME(tstate, code_objects_060807d517b9b0e064a3e176013b7b11, module_httpx$_api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_api$$$function__7_put->m_type_description == NULL);
frame_frame_httpx$_api$$$function__7_put = cache_frame_frame_httpx$_api$$$function__7_put;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_api$$$function__7_put);
assert(Py_REFCNT(frame_frame_httpx$_api$$$function__7_put) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
PyObject *tmp_kw_call_dict_value_5_1;
PyObject *tmp_kw_call_dict_value_6_1;
PyObject *tmp_kw_call_dict_value_7_1;
PyObject *tmp_kw_call_dict_value_8_1;
PyObject *tmp_kw_call_dict_value_9_1;
PyObject *tmp_kw_call_dict_value_10_1;
PyObject *tmp_kw_call_dict_value_11_1;
PyObject *tmp_kw_call_dict_value_12_1;
tmp_called_value_1 = module_var_accessor_httpx$_api$request(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_request);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 345;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_plain_PUT;
CHECK_OBJECT(par_url);
tmp_kw_call_arg_value_1_1 = par_url;
CHECK_OBJECT(par_content);
tmp_kw_call_dict_value_0_1 = par_content;
CHECK_OBJECT(par_data);
tmp_kw_call_dict_value_1_1 = par_data;
CHECK_OBJECT(par_files);
tmp_kw_call_dict_value_2_1 = par_files;
CHECK_OBJECT(par_json);
tmp_kw_call_dict_value_3_1 = par_json;
CHECK_OBJECT(par_params);
tmp_kw_call_dict_value_4_1 = par_params;
CHECK_OBJECT(par_headers);
tmp_kw_call_dict_value_5_1 = par_headers;
CHECK_OBJECT(par_cookies);
tmp_kw_call_dict_value_6_1 = par_cookies;
CHECK_OBJECT(par_auth);
tmp_kw_call_dict_value_7_1 = par_auth;
CHECK_OBJECT(par_proxy);
tmp_kw_call_dict_value_8_1 = par_proxy;
CHECK_OBJECT(par_follow_redirects);
tmp_kw_call_dict_value_9_1 = par_follow_redirects;
CHECK_OBJECT(par_verify);
tmp_kw_call_dict_value_10_1 = par_verify;
CHECK_OBJECT(par_timeout);
tmp_kw_call_dict_value_11_1 = par_timeout;
CHECK_OBJECT(par_trust_env);
tmp_kw_call_dict_value_12_1 = par_trust_env;
frame_frame_httpx$_api$$$function__7_put->m_frame.f_lineno = 345;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[13] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1, tmp_kw_call_dict_value_9_1, tmp_kw_call_dict_value_10_1, tmp_kw_call_dict_value_11_1, tmp_kw_call_dict_value_12_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_f668e31cf037f4e8f00f94bc4f0e9c19_tuple);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "oooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_api$$$function__7_put, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_api$$$function__7_put->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_api$$$function__7_put, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_api$$$function__7_put,
    type_description_1,
    par_url,
    par_content,
    par_data,
    par_files,
    par_json,
    par_params,
    par_headers,
    par_cookies,
    par_auth,
    par_proxy,
    par_follow_redirects,
    par_verify,
    par_timeout,
    par_trust_env
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_api$$$function__7_put == cache_frame_frame_httpx$_api$$$function__7_put) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_api$$$function__7_put);
    cache_frame_frame_httpx$_api$$$function__7_put = NULL;
}

assertFrameObject(frame_frame_httpx$_api$$$function__7_put);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_content);
Py_DECREF(par_content);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_files);
Py_DECREF(par_files);
CHECK_OBJECT(par_json);
Py_DECREF(par_json);
CHECK_OBJECT(par_params);
Py_DECREF(par_params);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_cookies);
Py_DECREF(par_cookies);
CHECK_OBJECT(par_auth);
Py_DECREF(par_auth);
CHECK_OBJECT(par_proxy);
Py_DECREF(par_proxy);
CHECK_OBJECT(par_follow_redirects);
Py_DECREF(par_follow_redirects);
CHECK_OBJECT(par_verify);
Py_DECREF(par_verify);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_trust_env);
Py_DECREF(par_trust_env);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_content);
Py_DECREF(par_content);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_files);
Py_DECREF(par_files);
CHECK_OBJECT(par_json);
Py_DECREF(par_json);
CHECK_OBJECT(par_params);
Py_DECREF(par_params);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_cookies);
Py_DECREF(par_cookies);
CHECK_OBJECT(par_auth);
Py_DECREF(par_auth);
CHECK_OBJECT(par_proxy);
Py_DECREF(par_proxy);
CHECK_OBJECT(par_follow_redirects);
Py_DECREF(par_follow_redirects);
CHECK_OBJECT(par_verify);
Py_DECREF(par_verify);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_trust_env);
Py_DECREF(par_trust_env);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_api$$$function__8_patch(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_url = python_pars[0];
PyObject *par_content = python_pars[1];
PyObject *par_data = python_pars[2];
PyObject *par_files = python_pars[3];
PyObject *par_json = python_pars[4];
PyObject *par_params = python_pars[5];
PyObject *par_headers = python_pars[6];
PyObject *par_cookies = python_pars[7];
PyObject *par_auth = python_pars[8];
PyObject *par_proxy = python_pars[9];
PyObject *par_follow_redirects = python_pars[10];
PyObject *par_verify = python_pars[11];
PyObject *par_timeout = python_pars[12];
PyObject *par_trust_env = python_pars[13];
struct Nuitka_FrameObject *frame_frame_httpx$_api$$$function__8_patch;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_api$$$function__8_patch = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_api$$$function__8_patch)) {
    Py_XDECREF(cache_frame_frame_httpx$_api$$$function__8_patch);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_api$$$function__8_patch == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_api$$$function__8_patch = MAKE_FUNCTION_FRAME(tstate, code_objects_49c8feee10417fadea84259a01094a3c, module_httpx$_api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_api$$$function__8_patch->m_type_description == NULL);
frame_frame_httpx$_api$$$function__8_patch = cache_frame_frame_httpx$_api$$$function__8_patch;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_api$$$function__8_patch);
assert(Py_REFCNT(frame_frame_httpx$_api$$$function__8_patch) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
PyObject *tmp_kw_call_dict_value_5_1;
PyObject *tmp_kw_call_dict_value_6_1;
PyObject *tmp_kw_call_dict_value_7_1;
PyObject *tmp_kw_call_dict_value_8_1;
PyObject *tmp_kw_call_dict_value_9_1;
PyObject *tmp_kw_call_dict_value_10_1;
PyObject *tmp_kw_call_dict_value_11_1;
PyObject *tmp_kw_call_dict_value_12_1;
tmp_called_value_1 = module_var_accessor_httpx$_api$request(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_request);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 386;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_plain_PATCH;
CHECK_OBJECT(par_url);
tmp_kw_call_arg_value_1_1 = par_url;
CHECK_OBJECT(par_content);
tmp_kw_call_dict_value_0_1 = par_content;
CHECK_OBJECT(par_data);
tmp_kw_call_dict_value_1_1 = par_data;
CHECK_OBJECT(par_files);
tmp_kw_call_dict_value_2_1 = par_files;
CHECK_OBJECT(par_json);
tmp_kw_call_dict_value_3_1 = par_json;
CHECK_OBJECT(par_params);
tmp_kw_call_dict_value_4_1 = par_params;
CHECK_OBJECT(par_headers);
tmp_kw_call_dict_value_5_1 = par_headers;
CHECK_OBJECT(par_cookies);
tmp_kw_call_dict_value_6_1 = par_cookies;
CHECK_OBJECT(par_auth);
tmp_kw_call_dict_value_7_1 = par_auth;
CHECK_OBJECT(par_proxy);
tmp_kw_call_dict_value_8_1 = par_proxy;
CHECK_OBJECT(par_follow_redirects);
tmp_kw_call_dict_value_9_1 = par_follow_redirects;
CHECK_OBJECT(par_verify);
tmp_kw_call_dict_value_10_1 = par_verify;
CHECK_OBJECT(par_timeout);
tmp_kw_call_dict_value_11_1 = par_timeout;
CHECK_OBJECT(par_trust_env);
tmp_kw_call_dict_value_12_1 = par_trust_env;
frame_frame_httpx$_api$$$function__8_patch->m_frame.f_lineno = 386;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[13] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1, tmp_kw_call_dict_value_9_1, tmp_kw_call_dict_value_10_1, tmp_kw_call_dict_value_11_1, tmp_kw_call_dict_value_12_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_f668e31cf037f4e8f00f94bc4f0e9c19_tuple);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 386;
type_description_1 = "oooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_api$$$function__8_patch, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_api$$$function__8_patch->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_api$$$function__8_patch, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_api$$$function__8_patch,
    type_description_1,
    par_url,
    par_content,
    par_data,
    par_files,
    par_json,
    par_params,
    par_headers,
    par_cookies,
    par_auth,
    par_proxy,
    par_follow_redirects,
    par_verify,
    par_timeout,
    par_trust_env
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_api$$$function__8_patch == cache_frame_frame_httpx$_api$$$function__8_patch) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_api$$$function__8_patch);
    cache_frame_frame_httpx$_api$$$function__8_patch = NULL;
}

assertFrameObject(frame_frame_httpx$_api$$$function__8_patch);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_content);
Py_DECREF(par_content);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_files);
Py_DECREF(par_files);
CHECK_OBJECT(par_json);
Py_DECREF(par_json);
CHECK_OBJECT(par_params);
Py_DECREF(par_params);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_cookies);
Py_DECREF(par_cookies);
CHECK_OBJECT(par_auth);
Py_DECREF(par_auth);
CHECK_OBJECT(par_proxy);
Py_DECREF(par_proxy);
CHECK_OBJECT(par_follow_redirects);
Py_DECREF(par_follow_redirects);
CHECK_OBJECT(par_verify);
Py_DECREF(par_verify);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_trust_env);
Py_DECREF(par_trust_env);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_content);
Py_DECREF(par_content);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_files);
Py_DECREF(par_files);
CHECK_OBJECT(par_json);
Py_DECREF(par_json);
CHECK_OBJECT(par_params);
Py_DECREF(par_params);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_cookies);
Py_DECREF(par_cookies);
CHECK_OBJECT(par_auth);
Py_DECREF(par_auth);
CHECK_OBJECT(par_proxy);
Py_DECREF(par_proxy);
CHECK_OBJECT(par_follow_redirects);
Py_DECREF(par_follow_redirects);
CHECK_OBJECT(par_verify);
Py_DECREF(par_verify);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_trust_env);
Py_DECREF(par_trust_env);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_httpx$_api$$$function__9_delete(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_url = python_pars[0];
PyObject *par_params = python_pars[1];
PyObject *par_headers = python_pars[2];
PyObject *par_cookies = python_pars[3];
PyObject *par_auth = python_pars[4];
PyObject *par_proxy = python_pars[5];
PyObject *par_follow_redirects = python_pars[6];
PyObject *par_timeout = python_pars[7];
PyObject *par_verify = python_pars[8];
PyObject *par_trust_env = python_pars[9];
struct Nuitka_FrameObject *frame_frame_httpx$_api$$$function__9_delete;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_httpx$_api$$$function__9_delete = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_httpx$_api$$$function__9_delete)) {
    Py_XDECREF(cache_frame_frame_httpx$_api$$$function__9_delete);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_httpx$_api$$$function__9_delete == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_httpx$_api$$$function__9_delete = MAKE_FUNCTION_FRAME(tstate, code_objects_2735619f11692268ed77d5315d5d05a6, module_httpx$_api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_httpx$_api$$$function__9_delete->m_type_description == NULL);
frame_frame_httpx$_api$$$function__9_delete = cache_frame_frame_httpx$_api$$$function__9_delete;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_api$$$function__9_delete);
assert(Py_REFCNT(frame_frame_httpx$_api$$$function__9_delete) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
PyObject *tmp_kw_call_dict_value_5_1;
PyObject *tmp_kw_call_dict_value_6_1;
PyObject *tmp_kw_call_dict_value_7_1;
PyObject *tmp_kw_call_dict_value_8_1;
tmp_called_value_1 = module_var_accessor_httpx$_api$request(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_request);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 426;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_plain_DELETE;
CHECK_OBJECT(par_url);
tmp_kw_call_arg_value_1_1 = par_url;
CHECK_OBJECT(par_params);
tmp_kw_call_dict_value_0_1 = par_params;
CHECK_OBJECT(par_headers);
tmp_kw_call_dict_value_1_1 = par_headers;
CHECK_OBJECT(par_cookies);
tmp_kw_call_dict_value_2_1 = par_cookies;
CHECK_OBJECT(par_auth);
tmp_kw_call_dict_value_3_1 = par_auth;
CHECK_OBJECT(par_proxy);
tmp_kw_call_dict_value_4_1 = par_proxy;
CHECK_OBJECT(par_follow_redirects);
tmp_kw_call_dict_value_5_1 = par_follow_redirects;
CHECK_OBJECT(par_verify);
tmp_kw_call_dict_value_6_1 = par_verify;
CHECK_OBJECT(par_timeout);
tmp_kw_call_dict_value_7_1 = par_timeout;
CHECK_OBJECT(par_trust_env);
tmp_kw_call_dict_value_8_1 = par_trust_env;
frame_frame_httpx$_api$$$function__9_delete->m_frame.f_lineno = 426;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[9] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_10c963a4907de93cd68dff43cf84c180_tuple);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_api$$$function__9_delete, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_api$$$function__9_delete->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_api$$$function__9_delete, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_httpx$_api$$$function__9_delete,
    type_description_1,
    par_url,
    par_params,
    par_headers,
    par_cookies,
    par_auth,
    par_proxy,
    par_follow_redirects,
    par_timeout,
    par_verify,
    par_trust_env
);


// Release cached frame if used for exception.
if (frame_frame_httpx$_api$$$function__9_delete == cache_frame_frame_httpx$_api$$$function__9_delete) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_httpx$_api$$$function__9_delete);
    cache_frame_frame_httpx$_api$$$function__9_delete = NULL;
}

assertFrameObject(frame_frame_httpx$_api$$$function__9_delete);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_params);
Py_DECREF(par_params);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_cookies);
Py_DECREF(par_cookies);
CHECK_OBJECT(par_auth);
Py_DECREF(par_auth);
CHECK_OBJECT(par_proxy);
Py_DECREF(par_proxy);
CHECK_OBJECT(par_follow_redirects);
Py_DECREF(par_follow_redirects);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_verify);
Py_DECREF(par_verify);
CHECK_OBJECT(par_trust_env);
Py_DECREF(par_trust_env);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_params);
Py_DECREF(par_params);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_cookies);
Py_DECREF(par_cookies);
CHECK_OBJECT(par_auth);
Py_DECREF(par_auth);
CHECK_OBJECT(par_proxy);
Py_DECREF(par_proxy);
CHECK_OBJECT(par_follow_redirects);
Py_DECREF(par_follow_redirects);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_verify);
Py_DECREF(par_verify);
CHECK_OBJECT(par_trust_env);
Py_DECREF(par_trust_env);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_httpx$_api$$$function__1_request(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_api$$$function__1_request,
        mod_consts.const_str_plain_request,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d9e094d6bc34e03cba648da07614baea,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_httpx$_api,
        mod_consts.const_str_digest_22cc3638d57d81338e3cb53426a52fa6,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_api$$$function__2_stream(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_api$$$function__2_stream,
        mod_consts.const_str_plain_stream,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_747caf729c86484f4f47a5219ebc5f15,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_httpx$_api,
        mod_consts.const_str_digest_2d71f43cc83b28f3035c5623555c4cc3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_api$$$function__3_get(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_api$$$function__3_get,
        const_str_plain_get,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3895e1d814ceca1546151db0e9e4f4df,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_httpx$_api,
        mod_consts.const_str_digest_90be8d3e88ab3104e0681b9d254f1ebf,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_api$$$function__4_options(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_api$$$function__4_options,
        mod_consts.const_str_plain_options,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b3ea10bfa2f713ed5f0351730cd12207,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_httpx$_api,
        mod_consts.const_str_digest_2c2ec6673b019a75b0d14ac126355a76,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_api$$$function__5_head(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_api$$$function__5_head,
        mod_consts.const_str_plain_head,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a73246c4517126a574f83007a9381481,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_httpx$_api,
        mod_consts.const_str_digest_b378d242311b914578e099f7147f95c4,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_api$$$function__6_post(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_api$$$function__6_post,
        mod_consts.const_str_plain_post,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d21b29a81b10c6093180938f48e3a96a,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_httpx$_api,
        mod_consts.const_str_digest_e875bec82d0be2044059dab239752f43,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_api$$$function__7_put(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_api$$$function__7_put,
        mod_consts.const_str_plain_put,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_060807d517b9b0e064a3e176013b7b11,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_httpx$_api,
        mod_consts.const_str_digest_d084c434feaa5640739a44fa6e473a36,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_api$$$function__8_patch(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_api$$$function__8_patch,
        mod_consts.const_str_plain_patch,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_49c8feee10417fadea84259a01094a3c,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_httpx$_api,
        mod_consts.const_str_digest_46539b86391ad9706d9a6b7eba8f0f18,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_api$$$function__9_delete(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_api$$$function__9_delete,
        mod_consts.const_str_plain_delete,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2735619f11692268ed77d5315d5d05a6,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_httpx$_api,
        mod_consts.const_str_digest_d9f4a4311fcf39f89ec58bc08a129a2e,
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

static function_impl_code const function_table_httpx$_api[] = {
impl_httpx$_api$$$function__1_request,
impl_httpx$_api$$$function__2_stream,
impl_httpx$_api$$$function__3_get,
impl_httpx$_api$$$function__4_options,
impl_httpx$_api$$$function__5_head,
impl_httpx$_api$$$function__6_post,
impl_httpx$_api$$$function__7_put,
impl_httpx$_api$$$function__8_patch,
impl_httpx$_api$$$function__9_delete,
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

    return Nuitka_Function_GetFunctionState(function, function_table_httpx$_api);
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
        module_httpx$_api,
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
        function_table_httpx$_api,
        sizeof(function_table_httpx$_api) / sizeof(function_impl_code)
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
static char const *module_full_name = "httpx._api";
#endif

// Internal entry point for module code.
PyObject *module_code_httpx$_api(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("httpx$_api");

    // Store the module for future use.
    module_httpx$_api = module;

    moduledict_httpx$_api = MODULE_DICT(module_httpx$_api);

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
        PRINT_STRING("httpx$_api: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("httpx$_api: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("httpx$_api: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "httpx._api" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inithttpx$_api\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_httpx$_api,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_httpx$_api,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_httpx$_api,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_httpx$_api,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_httpx$_api,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_httpx$_api);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_httpx$_api, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_httpx$_api, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_httpx$_api, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_httpx$_api);
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

        UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_httpx$_api;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
int tmp_res;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_httpx$_api, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_httpx$_api, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_httpx$_api = MAKE_MODULE_FRAME(code_objects_f403c52e4cc1a356ea31ade0bd57875d, module_httpx$_api);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_httpx$_api);
assert(Py_REFCNT(frame_frame_httpx$_api) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_httpx$_api$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_httpx$_api$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_httpx$_api, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_contextlib;
tmp_globals_arg_value_1 = (PyObject *)moduledict_httpx$_api;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_contextmanager_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_httpx$_api->m_frame.f_lineno = 4;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_httpx$_api,
        mod_consts.const_str_plain_contextmanager,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_contextmanager);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain__client;
tmp_globals_arg_value_2 = (PyObject *)moduledict_httpx$_api;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Client_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_httpx$_api->m_frame.f_lineno = 6;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_httpx$_api,
        mod_consts.const_str_plain_Client,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Client);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts.const_str_plain_Client, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain__config;
tmp_globals_arg_value_3 = (PyObject *)moduledict_httpx$_api;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_DEFAULT_TIMEOUT_CONFIG_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_httpx$_api->m_frame.f_lineno = 7;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_httpx$_api,
        mod_consts.const_str_plain_DEFAULT_TIMEOUT_CONFIG,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_DEFAULT_TIMEOUT_CONFIG);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_TIMEOUT_CONFIG, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain__models;
tmp_globals_arg_value_4 = (PyObject *)moduledict_httpx$_api;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_Response_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_httpx$_api->m_frame.f_lineno = 8;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_httpx$_api,
        mod_consts.const_str_plain_Response,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Response);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts.const_str_plain_Response, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain__types;
tmp_globals_arg_value_5 = (PyObject *)moduledict_httpx$_api;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_85ce936dd85d5dbcf28982ec3fdefe02_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_httpx$_api->m_frame.f_lineno = 9;
tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_10;
}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_httpx$_api,
        mod_consts.const_str_plain_AuthTypes,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_AuthTypes);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts.const_str_plain_AuthTypes, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_httpx$_api,
        mod_consts.const_str_plain_CookieTypes,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_CookieTypes);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts.const_str_plain_CookieTypes, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_7 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_httpx$_api,
        mod_consts.const_str_plain_HeaderTypes,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_HeaderTypes);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts.const_str_plain_HeaderTypes, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_8 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_httpx$_api,
        mod_consts.const_str_plain_ProxyTypes,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_ProxyTypes);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyTypes, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_9 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_httpx$_api,
        mod_consts.const_str_plain_QueryParamTypes,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_QueryParamTypes);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts.const_str_plain_QueryParamTypes, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_10 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_httpx$_api,
        mod_consts.const_str_plain_RequestContent,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_RequestContent);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestContent, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_11 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_httpx$_api,
        mod_consts.const_str_plain_RequestData,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_RequestData);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestData, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_12 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_httpx$_api,
        mod_consts.const_str_plain_RequestFiles,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_RequestFiles);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestFiles, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_13 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_httpx$_api,
        mod_consts.const_str_plain_TimeoutTypes,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_TimeoutTypes);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts.const_str_plain_TimeoutTypes, tmp_assign_source_19);
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
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_14;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain__urls;
tmp_globals_arg_value_6 = (PyObject *)moduledict_httpx$_api;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_URL_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_httpx$_api->m_frame.f_lineno = 20;
tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_httpx$_api,
        mod_consts.const_str_plain_URL,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_URL);
}

CHECK_OBJECT(tmp_import_name_from_14);
Py_DECREF(tmp_import_name_from_14);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts.const_str_plain_URL, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = MAKE_LIST9(tstate, mod_consts.const_list_b08510d48559de10b8384beefc5a6ac5_list);
UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_annotations_1;
tmp_dict_key_1 = mod_consts.const_str_plain_params;
tmp_dict_value_1 = Py_None;
tmp_kw_defaults_1 = _PyDict_NewPresized( 13 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_content;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_data;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_files;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_json;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_headers;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_cookies;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_auth;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_proxy;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_timeout;
tmp_dict_value_1 = module_var_accessor_httpx$_api$DEFAULT_TIMEOUT_CONFIG(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_TIMEOUT_CONFIG);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_follow_redirects;
tmp_dict_value_1 = Py_False;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_verify;
tmp_dict_value_1 = Py_True;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_trust_env;
tmp_dict_value_1 = Py_True;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_kw_defaults_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_426dfdd2f3601e5e50bc2496a34ea747);

tmp_assign_source_22 = MAKE_FUNCTION_httpx$_api$$$function__1_request(tstate, tmp_kw_defaults_1, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts.const_str_plain_request, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_kw_defaults_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_annotations_2;
tmp_called_value_1 = module_var_accessor_httpx$_api$contextmanager(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_contextmanager);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 123;

    goto frame_exception_exit_1;
}
tmp_dict_key_2 = mod_consts.const_str_plain_params;
tmp_dict_value_2 = Py_None;
tmp_kw_defaults_2 = _PyDict_NewPresized( 13 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_content;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_data;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_files;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_json;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_headers;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_cookies;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_auth;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_proxy;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_timeout;
tmp_dict_value_2 = module_var_accessor_httpx$_api$DEFAULT_TIMEOUT_CONFIG(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_TIMEOUT_CONFIG);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 137;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_follow_redirects;
tmp_dict_value_2 = Py_False;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_verify;
tmp_dict_value_2 = Py_True;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_trust_env;
tmp_dict_value_2 = Py_True;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_kw_defaults_2);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_9f3905139289af5d52a48633f6cb4bde);

tmp_args_element_value_1 = MAKE_FUNCTION_httpx$_api$$$function__2_stream(tstate, tmp_kw_defaults_2, tmp_annotations_2);

frame_frame_httpx$_api->m_frame.f_lineno = 123;
tmp_assign_source_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts.const_str_plain_stream, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_kw_defaults_3;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_annotations_3;
tmp_dict_key_3 = mod_consts.const_str_plain_params;
tmp_dict_value_3 = Py_None;
tmp_kw_defaults_3 = _PyDict_NewPresized( 9 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_headers;
tmp_dict_value_3 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_cookies;
tmp_dict_value_3 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_auth;
tmp_dict_value_3 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_proxy;
tmp_dict_value_3 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_follow_redirects;
tmp_dict_value_3 = Py_False;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_verify;
tmp_dict_value_3 = Py_True;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_timeout;
tmp_dict_value_3 = module_var_accessor_httpx$_api$DEFAULT_TIMEOUT_CONFIG(tstate);
if (unlikely(tmp_dict_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_TIMEOUT_CONFIG);
}

if (tmp_dict_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 184;

    goto dict_build_exception_3;
}
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_trust_env;
tmp_dict_value_3 = Py_True;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
goto dict_build_no_exception_3;
// Exception handling pass through code for dict_build:
dict_build_exception_3:;
Py_DECREF(tmp_kw_defaults_3);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_3:;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_ea349960b169abcbc0ec0febc91aee1a);

tmp_assign_source_24 = MAKE_FUNCTION_httpx$_api$$$function__3_get(tstate, tmp_kw_defaults_3, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)const_str_plain_get, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_kw_defaults_4;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
PyObject *tmp_annotations_4;
tmp_dict_key_4 = mod_consts.const_str_plain_params;
tmp_dict_value_4 = Py_None;
tmp_kw_defaults_4 = _PyDict_NewPresized( 9 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_headers;
tmp_dict_value_4 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_cookies;
tmp_dict_value_4 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_auth;
tmp_dict_value_4 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_proxy;
tmp_dict_value_4 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_follow_redirects;
tmp_dict_value_4 = Py_False;
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_verify;
tmp_dict_value_4 = Py_True;
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_timeout;
tmp_dict_value_4 = module_var_accessor_httpx$_api$DEFAULT_TIMEOUT_CONFIG(tstate);
if (unlikely(tmp_dict_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_TIMEOUT_CONFIG);
}

if (tmp_dict_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 220;

    goto dict_build_exception_4;
}
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_trust_env;
tmp_dict_value_4 = Py_True;
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
goto dict_build_no_exception_4;
// Exception handling pass through code for dict_build:
dict_build_exception_4:;
Py_DECREF(tmp_kw_defaults_4);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_4:;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_ea349960b169abcbc0ec0febc91aee1a);

tmp_assign_source_25 = MAKE_FUNCTION_httpx$_api$$$function__4_options(tstate, tmp_kw_defaults_4, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts.const_str_plain_options, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_kw_defaults_5;
PyObject *tmp_dict_key_5;
PyObject *tmp_dict_value_5;
PyObject *tmp_annotations_5;
tmp_dict_key_5 = mod_consts.const_str_plain_params;
tmp_dict_value_5 = Py_None;
tmp_kw_defaults_5 = _PyDict_NewPresized( 9 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_headers;
tmp_dict_value_5 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_cookies;
tmp_dict_value_5 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_auth;
tmp_dict_value_5 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_proxy;
tmp_dict_value_5 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_follow_redirects;
tmp_dict_value_5 = Py_False;
tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_verify;
tmp_dict_value_5 = Py_True;
tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_timeout;
tmp_dict_value_5 = module_var_accessor_httpx$_api$DEFAULT_TIMEOUT_CONFIG(tstate);
if (unlikely(tmp_dict_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_TIMEOUT_CONFIG);
}

if (tmp_dict_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 256;

    goto dict_build_exception_5;
}
tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_trust_env;
tmp_dict_value_5 = Py_True;
tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
goto dict_build_no_exception_5;
// Exception handling pass through code for dict_build:
dict_build_exception_5:;
Py_DECREF(tmp_kw_defaults_5);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_5:;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_ea349960b169abcbc0ec0febc91aee1a);

tmp_assign_source_26 = MAKE_FUNCTION_httpx$_api$$$function__5_head(tstate, tmp_kw_defaults_5, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts.const_str_plain_head, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_kw_defaults_6;
PyObject *tmp_dict_key_6;
PyObject *tmp_dict_value_6;
PyObject *tmp_annotations_6;
tmp_dict_key_6 = mod_consts.const_str_plain_content;
tmp_dict_value_6 = Py_None;
tmp_kw_defaults_6 = _PyDict_NewPresized( 13 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_data;
tmp_dict_value_6 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_files;
tmp_dict_value_6 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_json;
tmp_dict_value_6 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_params;
tmp_dict_value_6 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_headers;
tmp_dict_value_6 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_cookies;
tmp_dict_value_6 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_auth;
tmp_dict_value_6 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_proxy;
tmp_dict_value_6 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_follow_redirects;
tmp_dict_value_6 = Py_False;
tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_verify;
tmp_dict_value_6 = Py_True;
tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_timeout;
tmp_dict_value_6 = module_var_accessor_httpx$_api$DEFAULT_TIMEOUT_CONFIG(tstate);
if (unlikely(tmp_dict_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_TIMEOUT_CONFIG);
}

if (tmp_dict_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 296;

    goto dict_build_exception_6;
}
tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_trust_env;
tmp_dict_value_6 = Py_True;
tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
goto dict_build_no_exception_6;
// Exception handling pass through code for dict_build:
dict_build_exception_6:;
Py_DECREF(tmp_kw_defaults_6);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_6:;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_c33b7c1d317d9aab5d73567f2964c07a);

tmp_assign_source_27 = MAKE_FUNCTION_httpx$_api$$$function__6_post(tstate, tmp_kw_defaults_6, tmp_annotations_6);

UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts.const_str_plain_post, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_kw_defaults_7;
PyObject *tmp_dict_key_7;
PyObject *tmp_dict_value_7;
PyObject *tmp_annotations_7;
tmp_dict_key_7 = mod_consts.const_str_plain_content;
tmp_dict_value_7 = Py_None;
tmp_kw_defaults_7 = _PyDict_NewPresized( 13 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_data;
tmp_dict_value_7 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_files;
tmp_dict_value_7 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_json;
tmp_dict_value_7 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_params;
tmp_dict_value_7 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_headers;
tmp_dict_value_7 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_cookies;
tmp_dict_value_7 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_auth;
tmp_dict_value_7 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_proxy;
tmp_dict_value_7 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_follow_redirects;
tmp_dict_value_7 = Py_False;
tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_verify;
tmp_dict_value_7 = Py_True;
tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_timeout;
tmp_dict_value_7 = module_var_accessor_httpx$_api$DEFAULT_TIMEOUT_CONFIG(tstate);
if (unlikely(tmp_dict_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_TIMEOUT_CONFIG);
}

if (tmp_dict_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 337;

    goto dict_build_exception_7;
}
tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_trust_env;
tmp_dict_value_7 = Py_True;
tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
goto dict_build_no_exception_7;
// Exception handling pass through code for dict_build:
dict_build_exception_7:;
Py_DECREF(tmp_kw_defaults_7);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_7:;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_c33b7c1d317d9aab5d73567f2964c07a);

tmp_assign_source_28 = MAKE_FUNCTION_httpx$_api$$$function__7_put(tstate, tmp_kw_defaults_7, tmp_annotations_7);

UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts.const_str_plain_put, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_kw_defaults_8;
PyObject *tmp_dict_key_8;
PyObject *tmp_dict_value_8;
PyObject *tmp_annotations_8;
tmp_dict_key_8 = mod_consts.const_str_plain_content;
tmp_dict_value_8 = Py_None;
tmp_kw_defaults_8 = _PyDict_NewPresized( 13 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_data;
tmp_dict_value_8 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_files;
tmp_dict_value_8 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_json;
tmp_dict_value_8 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_params;
tmp_dict_value_8 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_headers;
tmp_dict_value_8 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_cookies;
tmp_dict_value_8 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_auth;
tmp_dict_value_8 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_proxy;
tmp_dict_value_8 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_follow_redirects;
tmp_dict_value_8 = Py_False;
tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_verify;
tmp_dict_value_8 = Py_True;
tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_timeout;
tmp_dict_value_8 = module_var_accessor_httpx$_api$DEFAULT_TIMEOUT_CONFIG(tstate);
if (unlikely(tmp_dict_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_TIMEOUT_CONFIG);
}

if (tmp_dict_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 378;

    goto dict_build_exception_8;
}
tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_trust_env;
tmp_dict_value_8 = Py_True;
tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
goto dict_build_no_exception_8;
// Exception handling pass through code for dict_build:
dict_build_exception_8:;
Py_DECREF(tmp_kw_defaults_8);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_8:;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_c33b7c1d317d9aab5d73567f2964c07a);

tmp_assign_source_29 = MAKE_FUNCTION_httpx$_api$$$function__8_patch(tstate, tmp_kw_defaults_8, tmp_annotations_8);

UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts.const_str_plain_patch, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_kw_defaults_9;
PyObject *tmp_dict_key_9;
PyObject *tmp_dict_value_9;
PyObject *tmp_annotations_9;
tmp_dict_key_9 = mod_consts.const_str_plain_params;
tmp_dict_value_9 = Py_None;
tmp_kw_defaults_9 = _PyDict_NewPresized( 9 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_9, tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_headers;
tmp_dict_value_9 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_9, tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_cookies;
tmp_dict_value_9 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_9, tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_auth;
tmp_dict_value_9 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_9, tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_proxy;
tmp_dict_value_9 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_9, tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_follow_redirects;
tmp_dict_value_9 = Py_False;
tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_9, tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_timeout;
tmp_dict_value_9 = module_var_accessor_httpx$_api$DEFAULT_TIMEOUT_CONFIG(tstate);
if (unlikely(tmp_dict_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_TIMEOUT_CONFIG);
}

if (tmp_dict_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 414;

    goto dict_build_exception_9;
}
tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_9, tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_verify;
tmp_dict_value_9 = Py_True;
tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_9, tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_trust_env;
tmp_dict_value_9 = Py_True;
tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_9, tmp_dict_value_9);
assert(!(tmp_res != 0));
goto dict_build_no_exception_9;
// Exception handling pass through code for dict_build:
dict_build_exception_9:;
Py_DECREF(tmp_kw_defaults_9);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_9:;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_592926cf9e4f5b88e3b33c4a19398ba2);

tmp_assign_source_30 = MAKE_FUNCTION_httpx$_api$$$function__9_delete(tstate, tmp_kw_defaults_9, tmp_annotations_9);

UPDATE_STRING_DICT1(moduledict_httpx$_api, (Nuitka_StringObject *)mod_consts.const_str_plain_delete, tmp_assign_source_30);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_httpx$_api, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_httpx$_api->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_httpx$_api, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_httpx$_api);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("httpx$_api", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "httpx._api" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_httpx$_api);
    return module_httpx$_api;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_api, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("httpx$_api", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

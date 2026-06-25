/* Generated code for Python module 'google$oauth2$sts'
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



/* The "module_google$oauth2$sts" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_google$oauth2$sts;
PyDictObject *moduledict_google$oauth2$sts;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_Client;
PyObject *const_str_plain__token_exchange_endpoint;
PyObject *const_str_digest_2b0bd633c36571d094bc9e71fbfdb077;
PyObject *const_str_plain__URLENCODED_HEADERS;
PyObject *const_str_plain_copy;
PyObject *const_str_plain_request_headers;
PyObject *const_str_plain_apply_client_authentication_options;
PyObject *const_str_plain_POST;
PyObject *const_str_plain_urllib;
PyObject *const_str_plain_parse;
PyObject *const_str_plain_urlencode;
PyObject *const_str_plain_encode;
PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
PyObject *const_tuple_4d2628c628983f920806be4976c06ae1_tuple;
PyObject *const_str_plain_data;
PyObject *const_str_plain_decode;
PyObject *const_str_plain_status;
PyObject *const_str_plain_http_client;
PyObject *const_str_plain_OK;
PyObject *const_str_plain_utils;
PyObject *const_str_plain_handle_error_response;
PyObject *const_str_plain_json;
PyObject *const_str_plain_loads;
PyObject *const_str_plain_grant_type;
PyObject *const_str_plain_resource;
PyObject *const_str_plain_audience;
PyObject *const_str_plain_scope;
PyObject *const_str_space;
PyObject *const_str_plain_requested_token_type;
PyObject *const_str_plain_subject_token;
PyObject *const_str_plain_subject_token_type;
PyObject *const_str_plain_actor_token;
PyObject *const_str_plain_actor_token_type;
PyObject *const_str_plain_options;
PyObject *const_str_plain_quote;
PyObject *const_str_plain_dumps;
PyObject *const_str_plain_request_body;
PyObject *const_str_plain__make_request;
PyObject *const_str_digest_b40efa3d9f4b67c978b7a535399d3ac5;
PyObject *const_str_plain_refresh_token;
PyObject *const_str_digest_460b77ba04a39ba219648a626896fc21;
PyObject *const_str_plain_token;
PyObject *const_str_plain_token_type_hint;
PyObject *const_str_digest_3d61e6ecfd321595ae402c83ccbdf489;
PyObject *const_str_digest_0be7b4f41a93545884b4e980de036c25;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_digest_096ca139beaf8ac5201071e235ad66b6;
PyObject *const_str_plain_client;
PyObject *const_str_digest_31b40dbd93ddd4efa91cab6083c18890;
PyObject *const_tuple_str_plain_utils_tuple;
PyObject *const_dict_1f12e24529a26445b2166baf2d3d134c;
PyObject *const_str_plain_OAuthClientAuthHandler;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_df20c1ea9af1c8223c43c386ae72226c;
PyObject *const_str_digest_95b2255a0d296ca107ea6e3026d4527f;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_44;
PyObject *const_str_plain___firstlineno__;
PyObject *const_tuple_none_tuple;
PyObject *const_str_digest_c4d1bac7225b40ef28eb2acc8ea377da;
PyObject *const_str_digest_af551857a8823c79d32af3ff88109b71;
PyObject *const_tuple_none_none_none_none_none_none_none_none_tuple;
PyObject *const_str_plain_exchange_token;
PyObject *const_str_digest_6de8123c868e090d87eaff150c52b570;
PyObject *const_str_digest_6b990b9db3ffec27b4c8a115b95bff72;
PyObject *const_str_plain_revoke_token;
PyObject *const_str_digest_b778d6702a0207886a4cbf5568ba2196;
PyObject *const_tuple_str_plain__token_exchange_endpoint_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_ad7ccf993a40ea88f5d18f29f63922b0;
PyObject *const_str_digest_1d5b99a2776cfbf8f8c5a7db0eb67b07;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_0b9071cf9db72745a2f598ae7ef790e8_tuple;
PyObject *const_tuple_12fc1a2ffea80c3b4e7f988f9469f074_tuple;
PyObject *const_tuple_79ac9efc02451380f0d74c7de9f0ea32_tuple;
PyObject *const_tuple_str_plain_self_str_plain_request_str_plain_refresh_token_tuple;
PyObject *const_tuple_1ba760d13cc0eb522d07b761493f75cb_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[82];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("google.oauth2.sts"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_Client);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__token_exchange_endpoint);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_2b0bd633c36571d094bc9e71fbfdb077);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain__URLENCODED_HEADERS);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_request_headers);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_apply_client_authentication_options);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_POST);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_urllib);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_urlencode);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_tuple_4d2628c628983f920806be4976c06ae1_tuple);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_data);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_status);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_http_client);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_OK);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_utils);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_handle_error_response);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_json);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_loads);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_grant_type);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_resource);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_audience);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_scope);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_space);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_requested_token_type);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_subject_token);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_subject_token_type);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_actor_token);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_actor_token_type);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_options);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_quote);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_dumps);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_request_body);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain__make_request);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_b40efa3d9f4b67c978b7a535399d3ac5);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_refresh_token);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_460b77ba04a39ba219648a626896fc21);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_token);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_token_type_hint);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_3d61e6ecfd321595ae402c83ccbdf489);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_0be7b4f41a93545884b4e980de036c25);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_096ca139beaf8ac5201071e235ad66b6);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_client);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_31b40dbd93ddd4efa91cab6083c18890);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_utils_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_dict_1f12e24529a26445b2166baf2d3d134c);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_OAuthClientAuthHandler);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_df20c1ea9af1c8223c43c386ae72226c);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_95b2255a0d296ca107ea6e3026d4527f);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_int_pos_44);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_c4d1bac7225b40ef28eb2acc8ea377da);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_af551857a8823c79d32af3ff88109b71);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_none_none_none_none_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_exchange_token);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_6de8123c868e090d87eaff150c52b570);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_6b990b9db3ffec27b4c8a115b95bff72);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_revoke_token);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_b778d6702a0207886a4cbf5568ba2196);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__token_exchange_endpoint_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_ad7ccf993a40ea88f5d18f29f63922b0);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_1d5b99a2776cfbf8f8c5a7db0eb67b07);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_0b9071cf9db72745a2f598ae7ef790e8_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_12fc1a2ffea80c3b4e7f988f9469f074_tuple);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_79ac9efc02451380f0d74c7de9f0ea32_tuple);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_request_str_plain_refresh_token_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_1ba760d13cc0eb522d07b761493f75cb_tuple);
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
void checkModuleConstants_google$oauth2$sts(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_Client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Client);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__token_exchange_endpoint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__token_exchange_endpoint);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_2b0bd633c36571d094bc9e71fbfdb077));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2b0bd633c36571d094bc9e71fbfdb077);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain__URLENCODED_HEADERS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__URLENCODED_HEADERS);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copy);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_request_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_request_headers);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_apply_client_authentication_options));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_apply_client_authentication_options);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_POST));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_POST);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_urllib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_urllib);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_urlencode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_urlencode);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encode);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_tuple_4d2628c628983f920806be4976c06ae1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4d2628c628983f920806be4976c06ae1_tuple);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_data);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decode);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_status));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_status);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_http_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_http_client);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_OK));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OK);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_utils);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_handle_error_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_handle_error_response);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_json);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_loads));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_loads);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_grant_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_grant_type);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_resource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_resource);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_audience));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_audience);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_scope));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scope);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_space));
CHECK_OBJECT_DEEP(mod_consts.const_str_space);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_requested_token_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_requested_token_type);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_subject_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_subject_token);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_subject_token_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_subject_token_type);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_actor_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_actor_token);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_actor_token_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_actor_token_type);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_options));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_options);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_quote));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_quote);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_dumps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dumps);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_request_body));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_request_body);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain__make_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__make_request);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_b40efa3d9f4b67c978b7a535399d3ac5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b40efa3d9f4b67c978b7a535399d3ac5);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_refresh_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_refresh_token);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_460b77ba04a39ba219648a626896fc21));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_460b77ba04a39ba219648a626896fc21);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_token_type_hint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token_type_hint);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_3d61e6ecfd321595ae402c83ccbdf489));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3d61e6ecfd321595ae402c83ccbdf489);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_0be7b4f41a93545884b4e980de036c25));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0be7b4f41a93545884b4e980de036c25);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_096ca139beaf8ac5201071e235ad66b6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_096ca139beaf8ac5201071e235ad66b6);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_client);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_31b40dbd93ddd4efa91cab6083c18890));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_31b40dbd93ddd4efa91cab6083c18890);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_utils_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_utils_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_dict_1f12e24529a26445b2166baf2d3d134c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1f12e24529a26445b2166baf2d3d134c);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_OAuthClientAuthHandler));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OAuthClientAuthHandler);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_df20c1ea9af1c8223c43c386ae72226c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_df20c1ea9af1c8223c43c386ae72226c);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_95b2255a0d296ca107ea6e3026d4527f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_95b2255a0d296ca107ea6e3026d4527f);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_int_pos_44));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_44);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_c4d1bac7225b40ef28eb2acc8ea377da));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c4d1bac7225b40ef28eb2acc8ea377da);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_af551857a8823c79d32af3ff88109b71));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_af551857a8823c79d32af3ff88109b71);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_none_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_none_none_none_none_none_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_exchange_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exchange_token);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_6de8123c868e090d87eaff150c52b570));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6de8123c868e090d87eaff150c52b570);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_6b990b9db3ffec27b4c8a115b95bff72));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6b990b9db3ffec27b4c8a115b95bff72);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_revoke_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_revoke_token);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_b778d6702a0207886a4cbf5568ba2196));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b778d6702a0207886a4cbf5568ba2196);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__token_exchange_endpoint_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__token_exchange_endpoint_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_ad7ccf993a40ea88f5d18f29f63922b0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ad7ccf993a40ea88f5d18f29f63922b0);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_1d5b99a2776cfbf8f8c5a7db0eb67b07));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1d5b99a2776cfbf8f8c5a7db0eb67b07);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_0b9071cf9db72745a2f598ae7ef790e8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0b9071cf9db72745a2f598ae7ef790e8_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_12fc1a2ffea80c3b4e7f988f9469f074_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_12fc1a2ffea80c3b4e7f988f9469f074_tuple);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_79ac9efc02451380f0d74c7de9f0ea32_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_79ac9efc02451380f0d74c7de9f0ea32_tuple);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_request_str_plain_refresh_token_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_request_str_plain_refresh_token_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_1ba760d13cc0eb522d07b761493f75cb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1ba760d13cc0eb522d07b761493f75cb_tuple);
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
static PyObject *module_var_accessor_google$oauth2$sts$Client(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$sts->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$sts->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$sts, (Nuitka_StringObject *)mod_consts.const_str_plain_Client);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$sts->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$sts, (Nuitka_StringObject *)mod_consts.const_str_plain_Client);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$sts, (Nuitka_StringObject *)mod_consts.const_str_plain_Client);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Client);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$sts$_URLENCODED_HEADERS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$sts->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$sts->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$sts, (Nuitka_StringObject *)mod_consts.const_str_plain__URLENCODED_HEADERS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$sts->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__URLENCODED_HEADERS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__URLENCODED_HEADERS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__URLENCODED_HEADERS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__URLENCODED_HEADERS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$sts, (Nuitka_StringObject *)mod_consts.const_str_plain__URLENCODED_HEADERS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$sts, (Nuitka_StringObject *)mod_consts.const_str_plain__URLENCODED_HEADERS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__URLENCODED_HEADERS);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$sts$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$sts->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$sts->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$sts, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$sts->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$sts, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$sts, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$sts$http_client(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$sts->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$sts->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$sts, (Nuitka_StringObject *)mod_consts.const_str_plain_http_client);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$sts->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_http_client);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_http_client, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_http_client);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_http_client, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$sts, (Nuitka_StringObject *)mod_consts.const_str_plain_http_client);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$sts, (Nuitka_StringObject *)mod_consts.const_str_plain_http_client);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_http_client);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$sts$json(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$sts->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$sts->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$sts, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$sts->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_json);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_json, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_json);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_json, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$sts, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$sts, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$sts$urllib(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$sts->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$sts->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$sts, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$sts->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urllib);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urllib, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urllib);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urllib, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$sts, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$sts, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$sts$utils(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$sts->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$sts->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$sts, (Nuitka_StringObject *)mod_consts.const_str_plain_utils);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$sts->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_utils);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_utils, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_utils);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_utils, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$sts, (Nuitka_StringObject *)mod_consts.const_str_plain_utils);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$sts, (Nuitka_StringObject *)mod_consts.const_str_plain_utils);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_utils);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_c93eb7dba5d0c6ab0b759313be3d19d0;
static PyCodeObject *code_objects_aa031536396def83ecd5d505220cadbf;
static PyCodeObject *code_objects_df7c50a09a1ad4e001c7a99e96a62c4d;
static PyCodeObject *code_objects_534487b8290f9aaa81fd579719247eff;
static PyCodeObject *code_objects_aec2860acf29eddab29825e7957e1a9d;
static PyCodeObject *code_objects_80ab5574eda26e8b851e4aa4af97ba62;
static PyCodeObject *code_objects_fba59b4947e528bc5d3954d99176d41d;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_ad7ccf993a40ea88f5d18f29f63922b0); CHECK_OBJECT(module_filename_obj);
code_objects_c93eb7dba5d0c6ab0b759313be3d19d0 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_1d5b99a2776cfbf8f8c5a7db0eb67b07, mod_consts.const_str_digest_1d5b99a2776cfbf8f8c5a7db0eb67b07, NULL, NULL, 0, 0, 0);
code_objects_aa031536396def83ecd5d505220cadbf = MAKE_CODE_OBJECT(module_filename_obj, 44, 0, mod_consts.const_str_plain_Client, mod_consts.const_str_plain_Client, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_df7c50a09a1ad4e001c7a99e96a62c4d = MAKE_CODE_OBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_c4d1bac7225b40ef28eb2acc8ea377da, mod_consts.const_tuple_0b9071cf9db72745a2f598ae7ef790e8_tuple, NULL, 3, 0, 0);
code_objects_534487b8290f9aaa81fd579719247eff = MAKE_CODE_OBJECT(module_filename_obj, 60, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__make_request, mod_consts.const_str_digest_af551857a8823c79d32af3ff88109b71, mod_consts.const_tuple_12fc1a2ffea80c3b4e7f988f9469f074_tuple, NULL, 5, 0, 0);
code_objects_aec2860acf29eddab29825e7957e1a9d = MAKE_CODE_OBJECT(module_filename_obj, 100, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_exchange_token, mod_consts.const_str_digest_6de8123c868e090d87eaff150c52b570, mod_consts.const_tuple_79ac9efc02451380f0d74c7de9f0ea32_tuple, NULL, 13, 0, 0);
code_objects_80ab5574eda26e8b851e4aa4af97ba62 = MAKE_CODE_OBJECT(module_filename_obj, 167, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_refresh_token, mod_consts.const_str_digest_6b990b9db3ffec27b4c8a115b95bff72, mod_consts.const_tuple_str_plain_self_str_plain_request_str_plain_refresh_token_tuple, NULL, 3, 0, 0);
code_objects_fba59b4947e528bc5d3954d99176d41d = MAKE_CODE_OBJECT(module_filename_obj, 183, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_revoke_token, mod_consts.const_str_digest_b778d6702a0207886a4cbf5568ba2196, mod_consts.const_tuple_1ba760d13cc0eb522d07b761493f75cb_tuple, NULL, 5, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_google$oauth2$sts$$$function__1___init__(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$oauth2$sts$$$function__2__make_request(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$oauth2$sts$$$function__3_exchange_token(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$oauth2$sts$$$function__4_refresh_token(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$sts$$$function__5_revoke_token(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_google$oauth2$sts$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_token_exchange_endpoint = python_pars[1];
PyObject *par_client_authentication = python_pars[2];
struct Nuitka_FrameObject *frame_frame_google$oauth2$sts$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$sts$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$oauth2$sts$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$sts$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$sts$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$sts$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_df7c50a09a1ad4e001c7a99e96a62c4d, module_google$oauth2$sts, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$sts$$$function__1___init__->m_type_description == NULL);
frame_frame_google$oauth2$sts$$$function__1___init__ = cache_frame_frame_google$oauth2$sts$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$sts$$$function__1___init__);
assert(Py_REFCNT(frame_frame_google$oauth2$sts$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
tmp_type_arg_value_1 = module_var_accessor_google$oauth2$sts$Client(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Client);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 57;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER2(tstate, moduledict_google$oauth2$sts, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_client_authentication);
tmp_args_element_value_1 = par_client_authentication;
frame_frame_google$oauth2$sts$$$function__1___init__->m_frame.f_lineno = 57;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, const_str_plain___init__, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_token_exchange_endpoint);
tmp_assattr_value_1 = par_token_exchange_endpoint;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__token_exchange_endpoint, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oooN";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$sts$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$sts$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$sts$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$sts$$$function__1___init__,
    type_description_1,
    par_self,
    par_token_exchange_endpoint,
    par_client_authentication,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$sts$$$function__1___init__ == cache_frame_frame_google$oauth2$sts$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$sts$$$function__1___init__);
    cache_frame_frame_google$oauth2$sts$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_google$oauth2$sts$$$function__1___init__);

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
CHECK_OBJECT(par_token_exchange_endpoint);
Py_DECREF(par_token_exchange_endpoint);
CHECK_OBJECT(par_client_authentication);
Py_DECREF(par_client_authentication);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_token_exchange_endpoint);
Py_DECREF(par_token_exchange_endpoint);
CHECK_OBJECT(par_client_authentication);
Py_DECREF(par_client_authentication);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$oauth2$sts$$$function__2__make_request(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_request = python_pars[1];
PyObject *par_headers = python_pars[2];
PyObject *par_request_body = python_pars[3];
PyObject *par_url = python_pars[4];
PyObject *var_request_headers = NULL;
PyObject *var_k = NULL;
PyObject *var_v = NULL;
PyObject *var_response = NULL;
PyObject *var_response_body = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_google$oauth2$sts$$$function__2__make_request;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$sts$$$function__2__make_request = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$oauth2$sts$$$function__2__make_request)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$sts$$$function__2__make_request);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$sts$$$function__2__make_request == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$sts$$$function__2__make_request = MAKE_FUNCTION_FRAME(tstate, code_objects_534487b8290f9aaa81fd579719247eff, module_google$oauth2$sts, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$sts$$$function__2__make_request->m_type_description == NULL);
frame_frame_google$oauth2$sts$$$function__2__make_request = cache_frame_frame_google$oauth2$sts$$$function__2__make_request;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$sts$$$function__2__make_request);
assert(Py_REFCNT(frame_frame_google$oauth2$sts$$$function__2__make_request) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_google$oauth2$sts$_URLENCODED_HEADERS(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__URLENCODED_HEADERS);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 62;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_copy);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$sts$$$function__2__make_request->m_frame.f_lineno = 62;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_request_headers == NULL);
var_request_headers = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_headers);
tmp_truth_name_1 = CHECK_IF_TRUE(par_headers);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oooooooooo";
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
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_dict_arg_1;
PyObject *tmp_dict_seq_1;
CHECK_OBJECT(par_headers);
tmp_dict_seq_1 = par_headers;
tmp_dict_arg_1 = TO_DICT(tstate, tmp_dict_seq_1, NULL);
if (tmp_dict_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_iter_arg_1 = DICT_ITERITEMS(tstate, tmp_dict_arg_1);
CHECK_OBJECT(tmp_dict_arg_1);
Py_DECREF(tmp_dict_arg_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "oooooooooo";
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
type_description_1 = "oooooooooo";
exception_lineno = 66;
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


exception_lineno = 66;
type_description_1 = "oooooooooo";
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



exception_lineno = 66;
type_description_1 = "oooooooooo";
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



exception_lineno = 66;
type_description_1 = "oooooooooo";
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



exception_lineno = 66;
type_description_1 = "oooooooooo";
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
    PyObject *old = var_k;
    var_k = tmp_assign_source_7;
    Py_INCREF(var_k);
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
    PyObject *old = var_v;
    var_v = tmp_assign_source_8;
    Py_INCREF(var_v);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var_v);
tmp_ass_subvalue_1 = var_v;
if (var_request_headers == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_request_headers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 67;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_ass_subscribed_1 = var_request_headers;
CHECK_OBJECT(var_k);
tmp_ass_subscript_1 = var_k;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "oooooooooo";
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
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
branch_no_1:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_apply_client_authentication_options);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (var_request_headers == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_request_headers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 70;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = var_request_headers;
CHECK_OBJECT(par_request_body);
tmp_args_element_value_2 = par_request_body;
frame_frame_google$oauth2$sts$$$function__2__make_request->m_frame.f_lineno = 70;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_9;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_url);
tmp_or_left_value_1 = par_url;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_or_right_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__token_exchange_endpoint);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_9 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_assign_source_9 = tmp_or_left_value_1;
or_end_1:;
{
    PyObject *old = par_url;
    assert(old != NULL);
    par_url = tmp_assign_source_9;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_request);
tmp_called_value_3 = par_request;
CHECK_OBJECT(par_url);
tmp_kw_call_value_0_1 = par_url;
tmp_kw_call_value_1_1 = mod_consts.const_str_plain_POST;
if (var_request_headers == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_request_headers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 79;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_2_1 = var_request_headers;
tmp_expression_value_5 = module_var_accessor_google$oauth2$sts$urllib(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urllib);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 80;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_parse);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request_body);
tmp_args_element_value_3 = par_request_body;
frame_frame_google$oauth2$sts$$$function__2__make_request->m_frame.f_lineno = 80;
tmp_expression_value_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_urlencode, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_encode);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$sts$$$function__2__make_request->m_frame.f_lineno = 80;
tmp_kw_call_value_3_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_kw_call_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$sts$$$function__2__make_request->m_frame.f_lineno = 76;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_assign_source_10 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_4d2628c628983f920806be4976c06ae1_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_3_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_response == NULL);
var_response = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
bool tmp_condition_result_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(var_response);
tmp_expression_value_7 = var_response;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_data);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_6, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(var_response);
tmp_expression_value_9 = var_response;
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_data);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$sts$$$function__2__make_request->m_frame.f_lineno = 84;
tmp_assign_source_11 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(var_response);
tmp_expression_value_10 = var_response;
tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_data);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
assert(var_response_body == NULL);
var_response_body = tmp_assign_source_11;
}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(var_response);
tmp_expression_value_11 = var_response;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_status);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_12 = module_var_accessor_google$oauth2$sts$http_client(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_http_client);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 90;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_OK);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 90;
type_description_1 = "oooooooooo";
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


exception_lineno = 90;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_4;
tmp_called_instance_2 = module_var_accessor_google$oauth2$sts$utils(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_utils);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 91;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_response_body);
tmp_args_element_value_4 = var_response_body;
frame_frame_google$oauth2$sts$$$function__2__make_request->m_frame.f_lineno = 91;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_handle_error_response, tmp_args_element_value_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_2:;
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_response_body);
tmp_operand_value_1 = var_response_body;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "oooooooooo";
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
tmp_return_value = MAKE_DICT_EMPTY(tstate);
goto frame_return_exit_1;
branch_no_3:;
{
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_5;
tmp_called_instance_3 = module_var_accessor_google$oauth2$sts$json(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 98;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_response_body);
tmp_args_element_value_5 = var_response_body;
frame_frame_google$oauth2$sts$$$function__2__make_request->m_frame.f_lineno = 98;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_loads, tmp_args_element_value_5);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$sts$$$function__2__make_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$sts$$$function__2__make_request->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$sts$$$function__2__make_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$sts$$$function__2__make_request,
    type_description_1,
    par_self,
    par_request,
    par_headers,
    par_request_body,
    par_url,
    var_request_headers,
    var_k,
    var_v,
    var_response,
    var_response_body
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$sts$$$function__2__make_request == cache_frame_frame_google$oauth2$sts$$$function__2__make_request) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$sts$$$function__2__make_request);
    cache_frame_frame_google$oauth2$sts$$$function__2__make_request = NULL;
}

assertFrameObject(frame_frame_google$oauth2$sts$$$function__2__make_request);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_url);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
par_url = NULL;
Py_XDECREF(var_request_headers);
var_request_headers = NULL;
Py_XDECREF(var_k);
var_k = NULL;
Py_XDECREF(var_v);
var_v = NULL;
CHECK_OBJECT(var_response);
CHECK_OBJECT(var_response);
Py_DECREF(var_response);
var_response = NULL;
CHECK_OBJECT(var_response_body);
CHECK_OBJECT(var_response_body);
Py_DECREF(var_response_body);
var_response_body = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_url);
par_url = NULL;
Py_XDECREF(var_request_headers);
var_request_headers = NULL;
Py_XDECREF(var_k);
var_k = NULL;
Py_XDECREF(var_v);
var_v = NULL;
Py_XDECREF(var_response);
var_response = NULL;
Py_XDECREF(var_response_body);
var_response_body = NULL;
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
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_request_body);
Py_DECREF(par_request_body);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_request_body);
Py_DECREF(par_request_body);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$oauth2$sts$$$function__3_exchange_token(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_request = python_pars[1];
PyObject *par_grant_type = python_pars[2];
PyObject *par_subject_token = python_pars[3];
PyObject *par_subject_token_type = python_pars[4];
PyObject *par_resource = python_pars[5];
PyObject *par_audience = python_pars[6];
PyObject *par_scopes = python_pars[7];
PyObject *par_requested_token_type = python_pars[8];
PyObject *par_actor_token = python_pars[9];
PyObject *par_actor_token_type = python_pars[10];
PyObject *par_additional_options = python_pars[11];
PyObject *par_additional_headers = python_pars[12];
PyObject *var_request_body = NULL;
PyObject *var_k = NULL;
PyObject *var_v = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_google$oauth2$sts$$$function__3_exchange_token;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_dictdel_dict;
PyObject *tmp_dictdel_key;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$sts$$$function__3_exchange_token = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$oauth2$sts$$$function__3_exchange_token)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$sts$$$function__3_exchange_token);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$sts$$$function__3_exchange_token == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$sts$$$function__3_exchange_token = MAKE_FUNCTION_FRAME(tstate, code_objects_aec2860acf29eddab29825e7957e1a9d, module_google$oauth2$sts, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$sts$$$function__3_exchange_token->m_type_description == NULL);
frame_frame_google$oauth2$sts$$$function__3_exchange_token = cache_frame_frame_google$oauth2$sts$$$function__3_exchange_token;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$sts$$$function__3_exchange_token);
assert(Py_REFCNT(frame_frame_google$oauth2$sts$$$function__3_exchange_token) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_grant_type;
CHECK_OBJECT(par_grant_type);
tmp_dict_value_1 = par_grant_type;
tmp_assign_source_1 = _PyDict_NewPresized( 10 );
{
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_resource;
CHECK_OBJECT(par_resource);
tmp_dict_value_1 = par_resource;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_audience;
CHECK_OBJECT(par_audience);
tmp_dict_value_1 = par_audience;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_scope;
tmp_str_arg_value_1 = mod_consts.const_str_space;
CHECK_OBJECT(par_scopes);
tmp_or_left_value_1 = par_scopes;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oooooooooooooooo";
    goto dict_build_exception_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_or_right_value_1 = MAKE_LIST_EMPTY(tstate, 0);
tmp_iterable_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_iterable_value_1 = tmp_or_left_value_1;
or_end_1:;
tmp_dict_value_1 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oooooooooooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_requested_token_type;
CHECK_OBJECT(par_requested_token_type);
tmp_dict_value_1 = par_requested_token_type;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_subject_token;
CHECK_OBJECT(par_subject_token);
tmp_dict_value_1 = par_subject_token;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_subject_token_type;
CHECK_OBJECT(par_subject_token_type);
tmp_dict_value_1 = par_subject_token_type;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_actor_token;
CHECK_OBJECT(par_actor_token);
tmp_dict_value_1 = par_actor_token;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_actor_token_type;
CHECK_OBJECT(par_actor_token_type);
tmp_dict_value_1 = par_actor_token_type;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_options;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
assert(var_request_body == NULL);
var_request_body = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_additional_options);
tmp_truth_name_1 = CHECK_IF_TRUE(par_additional_options);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "oooooooooooooooo";
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
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_2 = module_var_accessor_google$oauth2$sts$urllib(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urllib);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 159;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_parse);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_quote);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = module_var_accessor_google$oauth2$sts$json(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 159;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_additional_options);
tmp_args_element_value_2 = par_additional_options;
frame_frame_google$oauth2$sts$$$function__3_exchange_token->m_frame.f_lineno = 159;
tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_dumps, tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 159;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$sts$$$function__3_exchange_token->m_frame.f_lineno = 159;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_request_body);
tmp_dictset_dict = var_request_body;
tmp_dictset_key = mod_consts.const_str_plain_options;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_dict_arg_1;
PyObject *tmp_dict_seq_1;
CHECK_OBJECT(var_request_body);
tmp_dict_seq_1 = var_request_body;
tmp_dict_arg_1 = TO_DICT(tstate, tmp_dict_seq_1, NULL);
if (tmp_dict_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_iter_arg_1 = DICT_ITERITEMS(tstate, tmp_dict_arg_1);
CHECK_OBJECT(tmp_dict_arg_1);
Py_DECREF(tmp_dict_arg_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "oooooooooooooooo";
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
type_description_1 = "oooooooooooooooo";
exception_lineno = 161;
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


exception_lineno = 161;
type_description_1 = "oooooooooooooooo";
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



exception_lineno = 161;
type_description_1 = "oooooooooooooooo";
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



exception_lineno = 161;
type_description_1 = "oooooooooooooooo";
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



exception_lineno = 161;
type_description_1 = "oooooooooooooooo";
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
    PyObject *old = var_k;
    var_k = tmp_assign_source_7;
    Py_INCREF(var_k);
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
    PyObject *old = var_v;
    var_v = tmp_assign_source_8;
    Py_INCREF(var_v);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_2;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_v);
tmp_cmp_expr_left_1 = var_v;
tmp_cmp_expr_right_1 = Py_None;
tmp_or_left_value_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(var_v);
tmp_cmp_expr_left_2 = var_v;
tmp_cmp_expr_right_2 = const_str_empty;
tmp_or_right_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_or_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_2 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_condition_result_2 = tmp_or_left_value_2;
or_end_2:;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
if (var_request_body == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_request_body);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 163;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}

tmp_dictdel_dict = var_request_body;
CHECK_OBJECT(var_k);
tmp_dictdel_key = var_k;
tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "oooooooooooooooo";
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
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__make_request);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_args_element_value_3 = par_request;
CHECK_OBJECT(par_additional_headers);
tmp_args_element_value_4 = par_additional_headers;
if (var_request_body == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_request_body);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 165;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_5 = var_request_body;
frame_frame_google$oauth2$sts$$$function__3_exchange_token->m_frame.f_lineno = 165;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "oooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$sts$$$function__3_exchange_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$sts$$$function__3_exchange_token->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$sts$$$function__3_exchange_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$sts$$$function__3_exchange_token,
    type_description_1,
    par_self,
    par_request,
    par_grant_type,
    par_subject_token,
    par_subject_token_type,
    par_resource,
    par_audience,
    par_scopes,
    par_requested_token_type,
    par_actor_token,
    par_actor_token_type,
    par_additional_options,
    par_additional_headers,
    var_request_body,
    var_k,
    var_v
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$sts$$$function__3_exchange_token == cache_frame_frame_google$oauth2$sts$$$function__3_exchange_token) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$sts$$$function__3_exchange_token);
    cache_frame_frame_google$oauth2$sts$$$function__3_exchange_token = NULL;
}

assertFrameObject(frame_frame_google$oauth2$sts$$$function__3_exchange_token);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_request_body);
var_request_body = NULL;
Py_XDECREF(var_k);
var_k = NULL;
Py_XDECREF(var_v);
var_v = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_request_body);
var_request_body = NULL;
Py_XDECREF(var_k);
var_k = NULL;
Py_XDECREF(var_v);
var_v = NULL;
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
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_grant_type);
Py_DECREF(par_grant_type);
CHECK_OBJECT(par_subject_token);
Py_DECREF(par_subject_token);
CHECK_OBJECT(par_subject_token_type);
Py_DECREF(par_subject_token_type);
CHECK_OBJECT(par_resource);
Py_DECREF(par_resource);
CHECK_OBJECT(par_audience);
Py_DECREF(par_audience);
CHECK_OBJECT(par_scopes);
Py_DECREF(par_scopes);
CHECK_OBJECT(par_requested_token_type);
Py_DECREF(par_requested_token_type);
CHECK_OBJECT(par_actor_token);
Py_DECREF(par_actor_token);
CHECK_OBJECT(par_actor_token_type);
Py_DECREF(par_actor_token_type);
CHECK_OBJECT(par_additional_options);
Py_DECREF(par_additional_options);
CHECK_OBJECT(par_additional_headers);
Py_DECREF(par_additional_headers);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_grant_type);
Py_DECREF(par_grant_type);
CHECK_OBJECT(par_subject_token);
Py_DECREF(par_subject_token);
CHECK_OBJECT(par_subject_token_type);
Py_DECREF(par_subject_token_type);
CHECK_OBJECT(par_resource);
Py_DECREF(par_resource);
CHECK_OBJECT(par_audience);
Py_DECREF(par_audience);
CHECK_OBJECT(par_scopes);
Py_DECREF(par_scopes);
CHECK_OBJECT(par_requested_token_type);
Py_DECREF(par_requested_token_type);
CHECK_OBJECT(par_actor_token);
Py_DECREF(par_actor_token);
CHECK_OBJECT(par_actor_token_type);
Py_DECREF(par_actor_token_type);
CHECK_OBJECT(par_additional_options);
Py_DECREF(par_additional_options);
CHECK_OBJECT(par_additional_headers);
Py_DECREF(par_additional_headers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$oauth2$sts$$$function__4_refresh_token(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_request = python_pars[1];
PyObject *par_refresh_token = python_pars[2];
struct Nuitka_FrameObject *frame_frame_google$oauth2$sts$$$function__4_refresh_token;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$sts$$$function__4_refresh_token = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$oauth2$sts$$$function__4_refresh_token)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$sts$$$function__4_refresh_token);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$sts$$$function__4_refresh_token == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$sts$$$function__4_refresh_token = MAKE_FUNCTION_FRAME(tstate, code_objects_80ab5574eda26e8b851e4aa4af97ba62, module_google$oauth2$sts, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$sts$$$function__4_refresh_token->m_type_description == NULL);
frame_frame_google$oauth2$sts$$$function__4_refresh_token = cache_frame_frame_google$oauth2$sts$$$function__4_refresh_token;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$sts$$$function__4_refresh_token);
assert(Py_REFCNT(frame_frame_google$oauth2$sts$$$function__4_refresh_token) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_request);
tmp_args_element_value_1 = par_request;
tmp_args_element_value_2 = Py_None;
tmp_dict_key_1 = mod_consts.const_str_plain_grant_type;
tmp_dict_value_1 = mod_consts.const_str_plain_refresh_token;
tmp_args_element_value_3 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_args_element_value_3, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_refresh_token;
CHECK_OBJECT(par_refresh_token);
tmp_dict_value_1 = par_refresh_token;
tmp_res = PyDict_SetItem(tmp_args_element_value_3, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
frame_frame_google$oauth2$sts$$$function__4_refresh_token->m_frame.f_lineno = 177;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain__make_request,
        call_args
    );
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$sts$$$function__4_refresh_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$sts$$$function__4_refresh_token->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$sts$$$function__4_refresh_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$sts$$$function__4_refresh_token,
    type_description_1,
    par_self,
    par_request,
    par_refresh_token
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$sts$$$function__4_refresh_token == cache_frame_frame_google$oauth2$sts$$$function__4_refresh_token) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$sts$$$function__4_refresh_token);
    cache_frame_frame_google$oauth2$sts$$$function__4_refresh_token = NULL;
}

assertFrameObject(frame_frame_google$oauth2$sts$$$function__4_refresh_token);

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
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_refresh_token);
Py_DECREF(par_refresh_token);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_refresh_token);
Py_DECREF(par_refresh_token);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$oauth2$sts$$$function__5_revoke_token(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_request = python_pars[1];
PyObject *par_token = python_pars[2];
PyObject *par_token_type_hint = python_pars[3];
PyObject *par_revoke_url = python_pars[4];
PyObject *var_request_body = NULL;
int tmp_res;
struct Nuitka_FrameObject *frame_frame_google$oauth2$sts$$$function__5_revoke_token;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$sts$$$function__5_revoke_token = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_token;
CHECK_OBJECT(par_token);
tmp_dict_value_1 = par_token;
tmp_assign_source_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
assert(var_request_body == NULL);
var_request_body = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$oauth2$sts$$$function__5_revoke_token)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$sts$$$function__5_revoke_token);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$sts$$$function__5_revoke_token == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$sts$$$function__5_revoke_token = MAKE_FUNCTION_FRAME(tstate, code_objects_fba59b4947e528bc5d3954d99176d41d, module_google$oauth2$sts, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$sts$$$function__5_revoke_token->m_type_description == NULL);
frame_frame_google$oauth2$sts$$$function__5_revoke_token = cache_frame_frame_google$oauth2$sts$$$function__5_revoke_token;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$sts$$$function__5_revoke_token);
assert(Py_REFCNT(frame_frame_google$oauth2$sts$$$function__5_revoke_token) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_token_type_hint);
tmp_truth_name_1 = CHECK_IF_TRUE(par_token_type_hint);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oooooo";
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
CHECK_OBJECT(par_token_type_hint);
tmp_dictset_value = par_token_type_hint;
CHECK_OBJECT(var_request_body);
tmp_dictset_dict = var_request_body;
tmp_dictset_key = mod_consts.const_str_plain_token_type_hint;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
branch_no_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_request);
tmp_args_element_value_1 = par_request;
tmp_args_element_value_2 = Py_None;
CHECK_OBJECT(var_request_body);
tmp_args_element_value_3 = var_request_body;
CHECK_OBJECT(par_revoke_url);
tmp_args_element_value_4 = par_revoke_url;
frame_frame_google$oauth2$sts$$$function__5_revoke_token->m_frame.f_lineno = 201;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_METHOD_WITH_ARGS4(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain__make_request,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$sts$$$function__5_revoke_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$sts$$$function__5_revoke_token->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$sts$$$function__5_revoke_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$sts$$$function__5_revoke_token,
    type_description_1,
    par_self,
    par_request,
    par_token,
    par_token_type_hint,
    par_revoke_url,
    var_request_body
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$sts$$$function__5_revoke_token == cache_frame_frame_google$oauth2$sts$$$function__5_revoke_token) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$sts$$$function__5_revoke_token);
    cache_frame_frame_google$oauth2$sts$$$function__5_revoke_token = NULL;
}

assertFrameObject(frame_frame_google$oauth2$sts$$$function__5_revoke_token);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_request_body);
CHECK_OBJECT(var_request_body);
Py_DECREF(var_request_body);
var_request_body = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_request_body);
CHECK_OBJECT(var_request_body);
Py_DECREF(var_request_body);
var_request_body = NULL;
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
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_token);
Py_DECREF(par_token);
CHECK_OBJECT(par_token_type_hint);
Py_DECREF(par_token_type_hint);
CHECK_OBJECT(par_revoke_url);
Py_DECREF(par_revoke_url);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_token);
Py_DECREF(par_token);
CHECK_OBJECT(par_token_type_hint);
Py_DECREF(par_token_type_hint);
CHECK_OBJECT(par_revoke_url);
Py_DECREF(par_revoke_url);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_google$oauth2$sts$$$function__1___init__(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$sts$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c4d1bac7225b40ef28eb2acc8ea377da,
#endif
        code_objects_df7c50a09a1ad4e001c7a99e96a62c4d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$sts,
        mod_consts.const_str_digest_2b0bd633c36571d094bc9e71fbfdb077,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$sts$$$function__2__make_request(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$sts$$$function__2__make_request,
        mod_consts.const_str_plain__make_request,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_af551857a8823c79d32af3ff88109b71,
#endif
        code_objects_534487b8290f9aaa81fd579719247eff,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$sts,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$sts$$$function__3_exchange_token(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$sts$$$function__3_exchange_token,
        mod_consts.const_str_plain_exchange_token,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6de8123c868e090d87eaff150c52b570,
#endif
        code_objects_aec2860acf29eddab29825e7957e1a9d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$sts,
        mod_consts.const_str_digest_b40efa3d9f4b67c978b7a535399d3ac5,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$sts$$$function__4_refresh_token(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$sts$$$function__4_refresh_token,
        mod_consts.const_str_plain_refresh_token,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6b990b9db3ffec27b4c8a115b95bff72,
#endif
        code_objects_80ab5574eda26e8b851e4aa4af97ba62,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$sts,
        mod_consts.const_str_digest_460b77ba04a39ba219648a626896fc21,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$sts$$$function__5_revoke_token(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$sts$$$function__5_revoke_token,
        mod_consts.const_str_plain_revoke_token,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b778d6702a0207886a4cbf5568ba2196,
#endif
        code_objects_fba59b4947e528bc5d3954d99176d41d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$sts,
        mod_consts.const_str_digest_3d61e6ecfd321595ae402c83ccbdf489,
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

static function_impl_code const function_table_google$oauth2$sts[] = {
impl_google$oauth2$sts$$$function__1___init__,
impl_google$oauth2$sts$$$function__2__make_request,
impl_google$oauth2$sts$$$function__3_exchange_token,
impl_google$oauth2$sts$$$function__4_refresh_token,
impl_google$oauth2$sts$$$function__5_revoke_token,
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

    return Nuitka_Function_GetFunctionState(function, function_table_google$oauth2$sts);
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
        module_google$oauth2$sts,
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
        function_table_google$oauth2$sts,
        sizeof(function_table_google$oauth2$sts) / sizeof(function_impl_code)
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
static char const *module_full_name = "google.oauth2.sts";
#endif

// Internal entry point for module code.
PyObject *module_code_google$oauth2$sts(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("google$oauth2$sts");

    // Store the module for future use.
    module_google$oauth2$sts = module;

    moduledict_google$oauth2$sts = MODULE_DICT(module_google$oauth2$sts);

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
        PRINT_STRING("google$oauth2$sts: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("google$oauth2$sts: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("google$oauth2$sts: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "google.oauth2.sts" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initgoogle$oauth2$sts\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$oauth2$sts, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_google$oauth2$sts,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_google$oauth2$sts,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$oauth2$sts, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_google$oauth2$sts,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$oauth2$sts, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_google$oauth2$sts,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$oauth2$sts, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_google$oauth2$sts,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_google$oauth2$sts);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_google$oauth2$sts, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_google$oauth2$sts, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_google$oauth2$sts, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_google$oauth2$sts, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_google$oauth2$sts);
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

        UPDATE_STRING_DICT1(moduledict_google$oauth2$sts, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
struct Nuitka_FrameObject *frame_frame_google$oauth2$sts;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_google$oauth2$sts$$$class__1_Client_44 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_google$oauth2$sts$$$class__1_Client_2;
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
tmp_assign_source_1 = mod_consts.const_str_digest_0be7b4f41a93545884b4e980de036c25;
UPDATE_STRING_DICT0(moduledict_google$oauth2$sts, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_google$oauth2$sts, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_google$oauth2$sts = MAKE_MODULE_FRAME(code_objects_c93eb7dba5d0c6ab0b759313be3d19d0, module_google$oauth2$sts);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$sts);
assert(Py_REFCNT(frame_frame_google$oauth2$sts) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_google$oauth2$sts$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_google$oauth2$sts$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_google$oauth2$sts, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_096ca139beaf8ac5201071e235ad66b6;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$oauth2$sts;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_google$oauth2$sts->m_frame.f_lineno = 34;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$oauth2$sts,
        mod_consts.const_str_plain_client,
        const_int_0
    );
} else {
    tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_client);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$oauth2$sts, (Nuitka_StringObject *)mod_consts.const_str_plain_http_client, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_json;
tmp_globals_arg_value_2 = (PyObject *)moduledict_google$oauth2$sts;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_google$oauth2$sts->m_frame.f_lineno = 35;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$oauth2$sts, (Nuitka_StringObject *)mod_consts.const_str_plain_json, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_urllib;
tmp_globals_arg_value_3 = (PyObject *)moduledict_google$oauth2$sts;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_google$oauth2$sts->m_frame.f_lineno = 36;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$oauth2$sts, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_31b40dbd93ddd4efa91cab6083c18890;
tmp_globals_arg_value_4 = (PyObject *)moduledict_google$oauth2$sts;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_utils_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_google$oauth2$sts->m_frame.f_lineno = 38;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_google$oauth2$sts,
        mod_consts.const_str_plain_utils,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_utils);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$oauth2$sts, (Nuitka_StringObject *)mod_consts.const_str_plain_utils, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = DICT_COPY(tstate, mod_consts.const_dict_1f12e24529a26445b2166baf2d3d134c);
UPDATE_STRING_DICT1(moduledict_google$oauth2$sts, (Nuitka_StringObject *)mod_consts.const_str_plain__URLENCODED_HEADERS, tmp_assign_source_8);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_google$oauth2$sts$utils(tstate);
assert(!(tmp_expression_value_1 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_OAuthClientAuthHandler);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_1;
}
tmp_assign_source_9 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_9, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_10 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

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
tmp_expression_value_2 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_1;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_12 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_12;
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


exception_lineno = 44;

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
PyObject *tmp_assign_source_13;
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


exception_lineno = 44;

    goto try_except_handler_1;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_Client;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_google$oauth2$sts->m_frame.f_lineno = 44;
tmp_assign_source_13 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_13;
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


exception_lineno = 44;

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
PyObject *tmp_expression_value_6;
PyObject *tmp_name_value_5;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_5 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_5, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_1;
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


exception_lineno = 44;

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


exception_lineno = 44;

    goto try_except_handler_1;
}
frame_frame_google$oauth2$sts->m_frame.f_lineno = 44;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 44;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_14;
}
branch_end_1:;
{
PyObject *tmp_assign_source_15;
outline_0_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_google$oauth2$sts$$$class__1_Client_44 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_df20c1ea9af1c8223c43c386ae72226c;
tmp_res = PyObject_SetItem(locals_google$oauth2$sts$$$class__1_Client_44, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_digest_95b2255a0d296ca107ea6e3026d4527f;
tmp_res = PyObject_SetItem(locals_google$oauth2$sts$$$class__1_Client_44, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_plain_Client;
tmp_res = PyObject_SetItem(locals_google$oauth2$sts$$$class__1_Client_44, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_int_pos_44;
tmp_res = PyObject_SetItem(locals_google$oauth2$sts$$$class__1_Client_44, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_3;
}
frame_frame_google$oauth2$sts$$$class__1_Client_2 = MAKE_CLASS_FRAME(tstate, code_objects_aa031536396def83ecd5d505220cadbf, module_google$oauth2$sts, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$sts$$$class__1_Client_2);
assert(Py_REFCNT(frame_frame_google$oauth2$sts$$$class__1_Client_2) == 2);

// Framed code:
{
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_google$oauth2$sts$$$function__1___init__(tstate, tmp_defaults_1);

tmp_res = PyObject_SetItem(locals_google$oauth2$sts$$$class__1_Client_44, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_2;
tmp_defaults_2 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_google$oauth2$sts$$$function__2__make_request(tstate, tmp_defaults_2);

tmp_res = PyObject_SetItem(locals_google$oauth2$sts$$$class__1_Client_44, mod_consts.const_str_plain__make_request, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_3;
tmp_defaults_3 = mod_consts.const_tuple_none_none_none_none_none_none_none_none_tuple;
Py_INCREF(tmp_defaults_3);

tmp_dictset_value = MAKE_FUNCTION_google$oauth2$sts$$$function__3_exchange_token(tstate, tmp_defaults_3);

tmp_res = PyObject_SetItem(locals_google$oauth2$sts$$$class__1_Client_44, mod_consts.const_str_plain_exchange_token, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}

tmp_dictset_value = MAKE_FUNCTION_google$oauth2$sts$$$function__4_refresh_token(tstate);

tmp_res = PyObject_SetItem(locals_google$oauth2$sts$$$class__1_Client_44, mod_consts.const_str_plain_refresh_token, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_google$oauth2$sts$$$function__5_revoke_token(tstate);

tmp_res = PyObject_SetItem(locals_google$oauth2$sts$$$class__1_Client_44, mod_consts.const_str_plain_revoke_token, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_2 = "c";
    goto frame_exception_exit_2;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$sts$$$class__1_Client_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$sts$$$class__1_Client_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$sts$$$class__1_Client_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$sts$$$class__1_Client_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_google$oauth2$sts$$$class__1_Client_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_3;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__token_exchange_endpoint_tuple;
tmp_res = PyObject_SetItem(locals_google$oauth2$sts$$$class__1_Client_44, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

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


exception_lineno = 44;

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
tmp_res = PyObject_SetItem(locals_google$oauth2$sts$$$class__1_Client_44, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_3;
}
branch_no_3:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_Client;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_google$oauth2$sts$$$class__1_Client_44;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_google$oauth2$sts->m_frame.f_lineno = 44;
tmp_assign_source_16 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_3;
}
assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
Nuitka_Cell_SET(outline_0_var___class__, tmp_assign_source_16);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
tmp_assign_source_15 = Nuitka_Cell_GET(outline_0_var___class__);
Py_INCREF(tmp_assign_source_15);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_google$oauth2$sts$$$class__1_Client_44);
locals_google$oauth2$sts$$$class__1_Client_44 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$oauth2$sts$$$class__1_Client_44);
locals_google$oauth2$sts$$$class__1_Client_44 = NULL;
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
exception_lineno = 44;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_google$oauth2$sts, (Nuitka_StringObject *)mod_consts.const_str_plain_Client, tmp_assign_source_15);
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$sts, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$sts->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$sts, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_google$oauth2$sts);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("google$oauth2$sts", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "google.oauth2.sts" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_google$oauth2$sts);
    return module_google$oauth2$sts;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$oauth2$sts, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("google$oauth2$sts", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

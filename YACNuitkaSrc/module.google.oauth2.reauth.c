/* Generated code for Python module 'google$oauth2$reauth'
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



/* The "module_google$oauth2$reauth" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_google$oauth2$reauth;
PyDictObject *moduledict_google$oauth2$reauth;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_stdin;
PyObject *const_str_plain_isatty;
PyObject *const_str_digest_d5fe51a8092261ab19335fcb0a3e2331;
PyObject *const_str_plain_supportedChallengeTypes;
PyObject *const_str_plain_oauthScopesForDomainPolicyLookup;
PyObject *const_str_plain_metrics;
PyObject *const_str_plain_API_CLIENT_HEADER;
PyObject *const_str_plain_reauth_start;
PyObject *const_str_plain__client;
PyObject *const_str_plain__token_endpoint_request;
PyObject *const_str_plain__REAUTH_API;
PyObject *const_str_digest_bef9e6aed4b5a3c7c53058fcc4f45936;
PyObject *const_tuple_str_plain_access_token_str_plain_use_json_str_plain_headers_tuple;
PyObject *const_str_digest_966c6febc66b1698b55493ac805ce06c;
PyObject *const_str_plain_sessionId;
PyObject *const_str_plain_challengeId;
PyObject *const_str_plain_action;
PyObject *const_str_plain_RESPOND;
PyObject *const_str_plain_proposalResponse;
PyObject *const_str_plain_reauth_continue;
PyObject *const_str_digest_8749bcdbbf72d7e237bd4219c79a677b;
PyObject *const_str_digest_dbf03fbecbecd084f3605afb3d08a075;
PyObject *const_str_plain_challenges;
PyObject *const_str_plain_status;
PyObject *const_str_plain_READY;
PyObject *const_str_plain_AVAILABLE_CHALLENGES;
PyObject *const_str_plain_challengeType;
PyObject *const_str_plain_exceptions;
PyObject *const_str_plain_ReauthFailError;
PyObject *const_str_digest_6c3934ef18a671d02e5434c3a1f0f426;
PyObject *const_str_chr_44;
PyObject *const_str_plain_is_locally_eligible;
PyObject *const_str_digest_6132d0493ef375a067d15e7e7b60e6ab;
PyObject *const_str_plain_obtain_challenge_input;
PyObject *const_str_plain__send_challenge_result;
PyObject *const_str_digest_be1facc4a089d6a44dd7c97aa58b962d;
PyObject *const_str_plain__get_challenges;
PyObject *const_str_plain__AUTHENTICATED;
PyObject *const_str_plain_encodedProofOfReauthToken;
PyObject *const_str_plain_RUN_CHALLENGE_RETRY_LIMIT;
PyObject *const_str_plain_msg;
PyObject *const_str_plain__CHALLENGE_REQUIRED;
PyObject *const_str_plain__CHALLENGE_PENDING;
PyObject *const_str_digest_d1698be685cbefd148623f215fedda80;
PyObject *const_str_plain_is_interactive;
PyObject *const_tuple_str_digest_e9013a301e0d176872757feeb91a52e1_tuple;
PyObject *const_str_plain__run_next_challenge;
PyObject *const_str_plain_request;
PyObject *const_str_plain_access_token;
PyObject *const_tuple_str_digest_afc6d2584b7f3ed8c307ca8c7f98af60_tuple;
PyObject *const_str_digest_b2806fdac1214177912ef039d7319490;
PyObject *const_str_plain_stderr;
PyObject *const_str_plain_write;
PyObject *const_tuple_str_digest_aab139c511a113079df5d84bd0d617ea_tuple;
PyObject *const_str_plain_refresh_grant;
PyObject *const_str_plain__REAUTH_SCOPE;
PyObject *const_tuple_ce2f6fbf35d098f41bd108005c24e869_tuple;
PyObject *const_str_plain__obtain_rapt;
PyObject *const_tuple_str_plain_requested_scopes_tuple;
PyObject *const_tuple_str_digest_0d8693b3dce3512b904b9514f062b0b6_tuple;
PyObject *const_str_digest_6063265f4867051e9e936f79d2076b3c;
PyObject *const_str_plain_grant_type;
PyObject *const_str_plain__REFRESH_GRANT_TYPE;
PyObject *const_str_plain_client_id;
PyObject *const_str_plain_client_secret;
PyObject *const_str_plain_refresh_token;
PyObject *const_str_space;
PyObject *const_str_plain_scope;
PyObject *const_str_plain_rapt;
PyObject *const_str_plain_token_request_user;
PyObject *const_str_plain__token_endpoint_request_no_throw;
PyObject *const_tuple_str_plain_headers_tuple;
PyObject *const_str_plain_RefreshError;
PyObject *const_dict_5c377bc7d8faa045be8b31f22779c87e;
PyObject *const_tuple_str_plain_error_tuple;
PyObject *const_str_plain__REAUTH_NEEDED_ERROR;
PyObject *const_tuple_str_plain_error_subtype_tuple;
PyObject *const_str_plain__REAUTH_NEEDED_ERROR_INVALID_RAPT;
PyObject *const_str_plain__REAUTH_NEEDED_ERROR_RAPT_REQUIRED;
PyObject *const_tuple_str_digest_4ca56fec74ba2aab1d22c639bc946aec_tuple;
PyObject *const_str_plain_get_rapt_token;
PyObject *const_tuple_str_plain_scopes_tuple;
PyObject *const_str_plain__handle_error_response;
PyObject *const_str_plain_response_data;
PyObject *const_str_plain__handle_refresh_grant_response;
PyObject *const_str_digest_0e709d8812f80cd0f96824376f801880;
PyObject *const_str_digest_da8a77e61fbc99161dfe32d43b9f2931;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_sys;
PyObject *const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
PyObject *const_tuple_str_plain_exceptions_tuple;
PyObject *const_tuple_str_plain_metrics_tuple;
PyObject *const_str_digest_31b40dbd93ddd4efa91cab6083c18890;
PyObject *const_tuple_str_plain__client_tuple;
PyObject *const_tuple_str_plain_challenges_tuple;
PyObject *const_str_digest_17fc7f05ee49a10f8345fc955408f07d;
PyObject *const_str_digest_58b36d4be8a02b763f82794d97f94836;
PyObject *const_str_plain_invalid_grant;
PyObject *const_str_plain_invalid_rapt;
PyObject *const_str_plain_rapt_required;
PyObject *const_str_plain_AUTHENTICATED;
PyObject *const_str_plain_CHALLENGE_REQUIRED;
PyObject *const_str_plain_CHALLENGE_PENDING;
PyObject *const_int_pos_5;
PyObject *const_tuple_none_tuple;
PyObject *const_tuple_none_none_false_tuple;
PyObject *const_str_digest_20078073331abe113e7c0ba033bac137;
PyObject *const_str_digest_a862b430deb6b9e0c6abf3687bfef44c;
PyObject *const_tuple_ce8a8256745d71fbc36b555883b8e124_tuple;
PyObject *const_tuple_264fca4b50b0af278152ad2d855ebf96_tuple;
PyObject *const_tuple_42b503b69786572836f41a71b36e44d9_tuple;
PyObject *const_tuple_254f5c57871827118b36d55acd388160_tuple;
PyObject *const_tuple_833f665abeda41cb203967ad8a8cab24_tuple;
PyObject *const_tuple_0a2d55751e997ed032c6917657fac193_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[115];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("google.oauth2.reauth"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_stdin);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_isatty);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_d5fe51a8092261ab19335fcb0a3e2331);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_supportedChallengeTypes);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_oauthScopesForDomainPolicyLookup);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_metrics);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_API_CLIENT_HEADER);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_reauth_start);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain__client);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain__token_endpoint_request);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain__REAUTH_API);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_bef9e6aed4b5a3c7c53058fcc4f45936);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_access_token_str_plain_use_json_str_plain_headers_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_966c6febc66b1698b55493ac805ce06c);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_sessionId);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_challengeId);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_action);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_RESPOND);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_proposalResponse);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_reauth_continue);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_8749bcdbbf72d7e237bd4219c79a677b);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_dbf03fbecbecd084f3605afb3d08a075);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_challenges);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_status);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_READY);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_AVAILABLE_CHALLENGES);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_challengeType);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReauthFailError);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_6c3934ef18a671d02e5434c3a1f0f426);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_chr_44);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_locally_eligible);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_6132d0493ef375a067d15e7e7b60e6ab);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_obtain_challenge_input);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain__send_challenge_result);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_be1facc4a089d6a44dd7c97aa58b962d);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_challenges);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain__AUTHENTICATED);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_encodedProofOfReauthToken);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_RUN_CHALLENGE_RETRY_LIMIT);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_msg);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain__CHALLENGE_REQUIRED);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain__CHALLENGE_PENDING);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_d1698be685cbefd148623f215fedda80);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_interactive);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e9013a301e0d176872757feeb91a52e1_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain__run_next_challenge);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_request);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_access_token);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_afc6d2584b7f3ed8c307ca8c7f98af60_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_b2806fdac1214177912ef039d7319490);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_stderr);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_write);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_aab139c511a113079df5d84bd0d617ea_tuple);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_refresh_grant);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain__REAUTH_SCOPE);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_ce2f6fbf35d098f41bd108005c24e869_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain__obtain_rapt);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_requested_scopes_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_0d8693b3dce3512b904b9514f062b0b6_tuple);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_6063265f4867051e9e936f79d2076b3c);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_grant_type);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain__REFRESH_GRANT_TYPE);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_client_id);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_client_secret);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_refresh_token);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_space);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_scope);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_rapt);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_token_request_user);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain__token_endpoint_request_no_throw);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_headers_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_RefreshError);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_dict_5c377bc7d8faa045be8b31f22779c87e);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_error_tuple);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain__REAUTH_NEEDED_ERROR);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_error_subtype_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain__REAUTH_NEEDED_ERROR_INVALID_RAPT);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain__REAUTH_NEEDED_ERROR_RAPT_REQUIRED);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_4ca56fec74ba2aab1d22c639bc946aec_tuple);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_rapt_token);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_scopes_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain__handle_error_response);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_data);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain__handle_refresh_grant_response);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_0e709d8812f80cd0f96824376f801880);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_digest_da8a77e61fbc99161dfe32d43b9f2931);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_metrics_tuple);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_31b40dbd93ddd4efa91cab6083c18890);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__client_tuple);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_challenges_tuple);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_17fc7f05ee49a10f8345fc955408f07d);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_58b36d4be8a02b763f82794d97f94836);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_invalid_grant);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_invalid_rapt);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_rapt_required);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_AUTHENTICATED);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_CHALLENGE_REQUIRED);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_CHALLENGE_PENDING);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_int_pos_5);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_false_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_digest_20078073331abe113e7c0ba033bac137);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_a862b430deb6b9e0c6abf3687bfef44c);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_tuple_ce8a8256745d71fbc36b555883b8e124_tuple);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_tuple_264fca4b50b0af278152ad2d855ebf96_tuple);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_42b503b69786572836f41a71b36e44d9_tuple);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_tuple_254f5c57871827118b36d55acd388160_tuple);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_tuple_833f665abeda41cb203967ad8a8cab24_tuple);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_tuple_0a2d55751e997ed032c6917657fac193_tuple);
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
void checkModuleConstants_google$oauth2$reauth(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_stdin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stdin);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_isatty));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isatty);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_d5fe51a8092261ab19335fcb0a3e2331));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d5fe51a8092261ab19335fcb0a3e2331);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_supportedChallengeTypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_supportedChallengeTypes);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_oauthScopesForDomainPolicyLookup));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_oauthScopesForDomainPolicyLookup);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_metrics));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_metrics);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_API_CLIENT_HEADER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_API_CLIENT_HEADER);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_reauth_start));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reauth_start);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain__client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__client);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain__token_endpoint_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__token_endpoint_request);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain__REAUTH_API));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__REAUTH_API);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_bef9e6aed4b5a3c7c53058fcc4f45936));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bef9e6aed4b5a3c7c53058fcc4f45936);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_access_token_str_plain_use_json_str_plain_headers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_access_token_str_plain_use_json_str_plain_headers_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_966c6febc66b1698b55493ac805ce06c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_966c6febc66b1698b55493ac805ce06c);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_sessionId));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sessionId);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_challengeId));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_challengeId);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_action));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_action);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_RESPOND));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RESPOND);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_proposalResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_proposalResponse);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_reauth_continue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reauth_continue);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_8749bcdbbf72d7e237bd4219c79a677b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8749bcdbbf72d7e237bd4219c79a677b);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_dbf03fbecbecd084f3605afb3d08a075));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dbf03fbecbecd084f3605afb3d08a075);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_challenges));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_challenges);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_status));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_status);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_READY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_READY);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_AVAILABLE_CHALLENGES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AVAILABLE_CHALLENGES);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_challengeType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_challengeType);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReauthFailError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ReauthFailError);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_6c3934ef18a671d02e5434c3a1f0f426));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6c3934ef18a671d02e5434c3a1f0f426);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_chr_44));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_44);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_locally_eligible));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_locally_eligible);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_6132d0493ef375a067d15e7e7b60e6ab));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6132d0493ef375a067d15e7e7b60e6ab);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_obtain_challenge_input));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_obtain_challenge_input);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain__send_challenge_result));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__send_challenge_result);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_be1facc4a089d6a44dd7c97aa58b962d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_be1facc4a089d6a44dd7c97aa58b962d);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_challenges));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_challenges);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain__AUTHENTICATED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__AUTHENTICATED);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_encodedProofOfReauthToken));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encodedProofOfReauthToken);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_RUN_CHALLENGE_RETRY_LIMIT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RUN_CHALLENGE_RETRY_LIMIT);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_msg));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_msg);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain__CHALLENGE_REQUIRED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__CHALLENGE_REQUIRED);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain__CHALLENGE_PENDING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__CHALLENGE_PENDING);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_d1698be685cbefd148623f215fedda80));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d1698be685cbefd148623f215fedda80);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_interactive));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_interactive);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e9013a301e0d176872757feeb91a52e1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_e9013a301e0d176872757feeb91a52e1_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain__run_next_challenge));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__run_next_challenge);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_request);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_access_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_access_token);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_afc6d2584b7f3ed8c307ca8c7f98af60_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_afc6d2584b7f3ed8c307ca8c7f98af60_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_b2806fdac1214177912ef039d7319490));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b2806fdac1214177912ef039d7319490);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_stderr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stderr);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_write));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_write);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_aab139c511a113079df5d84bd0d617ea_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_aab139c511a113079df5d84bd0d617ea_tuple);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_refresh_grant));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_refresh_grant);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain__REAUTH_SCOPE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__REAUTH_SCOPE);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_ce2f6fbf35d098f41bd108005c24e869_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ce2f6fbf35d098f41bd108005c24e869_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain__obtain_rapt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__obtain_rapt);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_requested_scopes_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_requested_scopes_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_0d8693b3dce3512b904b9514f062b0b6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_0d8693b3dce3512b904b9514f062b0b6_tuple);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_6063265f4867051e9e936f79d2076b3c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6063265f4867051e9e936f79d2076b3c);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_grant_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_grant_type);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain__REFRESH_GRANT_TYPE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__REFRESH_GRANT_TYPE);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_client_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_client_id);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_client_secret));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_client_secret);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_refresh_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_refresh_token);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_space));
CHECK_OBJECT_DEEP(mod_consts.const_str_space);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_scope));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scope);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_rapt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rapt);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_token_request_user));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token_request_user);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain__token_endpoint_request_no_throw));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__token_endpoint_request_no_throw);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_headers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_headers_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_RefreshError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RefreshError);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_dict_5c377bc7d8faa045be8b31f22779c87e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5c377bc7d8faa045be8b31f22779c87e);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_error_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_error_tuple);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain__REAUTH_NEEDED_ERROR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__REAUTH_NEEDED_ERROR);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_error_subtype_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_error_subtype_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain__REAUTH_NEEDED_ERROR_INVALID_RAPT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__REAUTH_NEEDED_ERROR_INVALID_RAPT);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain__REAUTH_NEEDED_ERROR_RAPT_REQUIRED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__REAUTH_NEEDED_ERROR_RAPT_REQUIRED);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_4ca56fec74ba2aab1d22c639bc946aec_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_4ca56fec74ba2aab1d22c639bc946aec_tuple);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_rapt_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_rapt_token);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_scopes_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_scopes_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain__handle_error_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__handle_error_response);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_data);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain__handle_refresh_grant_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__handle_refresh_grant_response);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_0e709d8812f80cd0f96824376f801880));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0e709d8812f80cd0f96824376f801880);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_digest_da8a77e61fbc99161dfe32d43b9f2931));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_da8a77e61fbc99161dfe32d43b9f2931);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_exceptions_tuple);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_metrics_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_metrics_tuple);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_31b40dbd93ddd4efa91cab6083c18890));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_31b40dbd93ddd4efa91cab6083c18890);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__client_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__client_tuple);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_challenges_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_challenges_tuple);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_17fc7f05ee49a10f8345fc955408f07d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_17fc7f05ee49a10f8345fc955408f07d);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_58b36d4be8a02b763f82794d97f94836));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_58b36d4be8a02b763f82794d97f94836);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_invalid_grant));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_invalid_grant);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_invalid_rapt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_invalid_rapt);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_rapt_required));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rapt_required);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_AUTHENTICATED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AUTHENTICATED);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_CHALLENGE_REQUIRED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CHALLENGE_REQUIRED);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_CHALLENGE_PENDING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CHALLENGE_PENDING);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_int_pos_5));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_5);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_false_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_digest_20078073331abe113e7c0ba033bac137));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_20078073331abe113e7c0ba033bac137);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_a862b430deb6b9e0c6abf3687bfef44c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a862b430deb6b9e0c6abf3687bfef44c);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_tuple_ce8a8256745d71fbc36b555883b8e124_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ce8a8256745d71fbc36b555883b8e124_tuple);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_tuple_264fca4b50b0af278152ad2d855ebf96_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_264fca4b50b0af278152ad2d855ebf96_tuple);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_42b503b69786572836f41a71b36e44d9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_42b503b69786572836f41a71b36e44d9_tuple);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_tuple_254f5c57871827118b36d55acd388160_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_254f5c57871827118b36d55acd388160_tuple);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_tuple_833f665abeda41cb203967ad8a8cab24_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_833f665abeda41cb203967ad8a8cab24_tuple);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_tuple_0a2d55751e997ed032c6917657fac193_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0a2d55751e997ed032c6917657fac193_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 20
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
static PyObject *module_var_accessor_google$oauth2$reauth$RUN_CHALLENGE_RETRY_LIMIT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$reauth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$reauth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain_RUN_CHALLENGE_RETRY_LIMIT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$reauth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RUN_CHALLENGE_RETRY_LIMIT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RUN_CHALLENGE_RETRY_LIMIT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RUN_CHALLENGE_RETRY_LIMIT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RUN_CHALLENGE_RETRY_LIMIT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain_RUN_CHALLENGE_RETRY_LIMIT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain_RUN_CHALLENGE_RETRY_LIMIT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RUN_CHALLENGE_RETRY_LIMIT);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$reauth$_AUTHENTICATED(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$reauth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$reauth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__AUTHENTICATED);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$reauth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__AUTHENTICATED);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__AUTHENTICATED, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__AUTHENTICATED);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__AUTHENTICATED, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__AUTHENTICATED);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__AUTHENTICATED);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__AUTHENTICATED);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$reauth$_CHALLENGE_PENDING(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$reauth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$reauth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__CHALLENGE_PENDING);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$reauth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__CHALLENGE_PENDING);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__CHALLENGE_PENDING, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__CHALLENGE_PENDING);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__CHALLENGE_PENDING, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__CHALLENGE_PENDING);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__CHALLENGE_PENDING);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__CHALLENGE_PENDING);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$reauth$_CHALLENGE_REQUIRED(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$reauth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$reauth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__CHALLENGE_REQUIRED);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$reauth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__CHALLENGE_REQUIRED);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__CHALLENGE_REQUIRED, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__CHALLENGE_REQUIRED);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__CHALLENGE_REQUIRED, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__CHALLENGE_REQUIRED);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__CHALLENGE_REQUIRED);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__CHALLENGE_REQUIRED);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$reauth$_REAUTH_API(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$reauth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$reauth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__REAUTH_API);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$reauth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__REAUTH_API);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__REAUTH_API, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__REAUTH_API);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__REAUTH_API, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__REAUTH_API);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__REAUTH_API);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__REAUTH_API);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$reauth$_REAUTH_NEEDED_ERROR(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$reauth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$reauth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__REAUTH_NEEDED_ERROR);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$reauth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__REAUTH_NEEDED_ERROR);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__REAUTH_NEEDED_ERROR, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__REAUTH_NEEDED_ERROR);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__REAUTH_NEEDED_ERROR, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__REAUTH_NEEDED_ERROR);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__REAUTH_NEEDED_ERROR);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__REAUTH_NEEDED_ERROR);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$reauth$_REAUTH_NEEDED_ERROR_INVALID_RAPT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$reauth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$reauth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__REAUTH_NEEDED_ERROR_INVALID_RAPT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$reauth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__REAUTH_NEEDED_ERROR_INVALID_RAPT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__REAUTH_NEEDED_ERROR_INVALID_RAPT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__REAUTH_NEEDED_ERROR_INVALID_RAPT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__REAUTH_NEEDED_ERROR_INVALID_RAPT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__REAUTH_NEEDED_ERROR_INVALID_RAPT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__REAUTH_NEEDED_ERROR_INVALID_RAPT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__REAUTH_NEEDED_ERROR_INVALID_RAPT);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$reauth$_REAUTH_NEEDED_ERROR_RAPT_REQUIRED(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$reauth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$reauth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__REAUTH_NEEDED_ERROR_RAPT_REQUIRED);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$reauth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__REAUTH_NEEDED_ERROR_RAPT_REQUIRED);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__REAUTH_NEEDED_ERROR_RAPT_REQUIRED, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__REAUTH_NEEDED_ERROR_RAPT_REQUIRED);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__REAUTH_NEEDED_ERROR_RAPT_REQUIRED, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__REAUTH_NEEDED_ERROR_RAPT_REQUIRED);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__REAUTH_NEEDED_ERROR_RAPT_REQUIRED);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__REAUTH_NEEDED_ERROR_RAPT_REQUIRED);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$reauth$_REAUTH_SCOPE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$reauth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$reauth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__REAUTH_SCOPE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$reauth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__REAUTH_SCOPE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__REAUTH_SCOPE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__REAUTH_SCOPE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__REAUTH_SCOPE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__REAUTH_SCOPE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__REAUTH_SCOPE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__REAUTH_SCOPE);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$reauth$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$reauth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$reauth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$reauth->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$reauth$_client(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$reauth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$reauth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__client);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$reauth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__client);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__client, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__client);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__client, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__client);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__client);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__client);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$reauth$_get_challenges(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$reauth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$reauth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__get_challenges);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$reauth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_challenges);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_challenges, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_challenges);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_challenges, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__get_challenges);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__get_challenges);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__get_challenges);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$reauth$_obtain_rapt(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$reauth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$reauth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__obtain_rapt);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$reauth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__obtain_rapt);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__obtain_rapt, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__obtain_rapt);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__obtain_rapt, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__obtain_rapt);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__obtain_rapt);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__obtain_rapt);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$reauth$_run_next_challenge(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$reauth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$reauth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__run_next_challenge);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$reauth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__run_next_challenge);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__run_next_challenge, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__run_next_challenge);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__run_next_challenge, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__run_next_challenge);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__run_next_challenge);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__run_next_challenge);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$reauth$_send_challenge_result(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$reauth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$reauth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__send_challenge_result);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$reauth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__send_challenge_result);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__send_challenge_result, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__send_challenge_result);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__send_challenge_result, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__send_challenge_result);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__send_challenge_result);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__send_challenge_result);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$reauth$challenges(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$reauth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$reauth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain_challenges);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$reauth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_challenges);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_challenges, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_challenges);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_challenges, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain_challenges);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain_challenges);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_challenges);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$reauth$exceptions(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$reauth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$reauth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$reauth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_exceptions);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_exceptions, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_exceptions);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_exceptions, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$reauth$get_rapt_token(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$reauth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$reauth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain_get_rapt_token);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$reauth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_rapt_token);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_rapt_token, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_rapt_token);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_rapt_token, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain_get_rapt_token);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain_get_rapt_token);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_rapt_token);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$reauth$is_interactive(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$reauth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$reauth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain_is_interactive);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$reauth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_interactive);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_interactive, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_interactive);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_interactive, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain_is_interactive);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain_is_interactive);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_is_interactive);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$reauth$metrics(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$reauth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$reauth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain_metrics);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$reauth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_metrics);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_metrics, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_metrics);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_metrics, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain_metrics);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain_metrics);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_metrics);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_e6594c5d92eb2853bda4517002321499;
static PyCodeObject *code_objects_fe0b43de651384804e8fdf9bea5abe33;
static PyCodeObject *code_objects_0a9ea31f5a0ed4a155877127f4d52025;
static PyCodeObject *code_objects_fe0ed4beed55bb6000ae971d5f0c438a;
static PyCodeObject *code_objects_faed30e77310f911940807b7d641bfd6;
static PyCodeObject *code_objects_ebed9a0a08160f776966affa28ec82f2;
static PyCodeObject *code_objects_8d02352f35f3c43cc0cca33b3c6af121;
static PyCodeObject *code_objects_2d71dbce2c8006687edbef058984c896;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_20078073331abe113e7c0ba033bac137); CHECK_OBJECT(module_filename_obj);
code_objects_e6594c5d92eb2853bda4517002321499 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_a862b430deb6b9e0c6abf3687bfef44c, mod_consts.const_str_digest_a862b430deb6b9e0c6abf3687bfef44c, NULL, NULL, 0, 0, 0);
code_objects_fe0b43de651384804e8fdf9bea5abe33 = MAKE_CODE_OBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__get_challenges, mod_consts.const_str_plain__get_challenges, mod_consts.const_tuple_ce8a8256745d71fbc36b555883b8e124_tuple, NULL, 4, 0, 0);
code_objects_0a9ea31f5a0ed4a155877127f4d52025 = MAKE_CODE_OBJECT(module_filename_obj, 192, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__obtain_rapt, mod_consts.const_str_plain__obtain_rapt, mod_consts.const_tuple_264fca4b50b0af278152ad2d855ebf96_tuple, NULL, 3, 0, 0);
code_objects_fe0ed4beed55bb6000ae971d5f0c438a = MAKE_CODE_OBJECT(module_filename_obj, 143, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__run_next_challenge, mod_consts.const_str_plain__run_next_challenge, mod_consts.const_tuple_42b503b69786572836f41a71b36e44d9_tuple, NULL, 3, 0, 0);
code_objects_faed30e77310f911940807b7d641bfd6 = MAKE_CODE_OBJECT(module_filename_obj, 108, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__send_challenge_result, mod_consts.const_str_plain__send_challenge_result, mod_consts.const_tuple_254f5c57871827118b36d55acd388160_tuple, NULL, 5, 0, 0);
code_objects_ebed9a0a08160f776966affa28ec82f2 = MAKE_CODE_OBJECT(module_filename_obj, 244, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_rapt_token, mod_consts.const_str_plain_get_rapt_token, mod_consts.const_tuple_833f665abeda41cb203967ad8a8cab24_tuple, NULL, 6, 0, 0);
code_objects_8d02352f35f3c43cc0cca33b3c6af121 = MAKE_CODE_OBJECT(module_filename_obj, 60, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_is_interactive, mod_consts.const_str_plain_is_interactive, NULL, NULL, 0, 0, 0);
code_objects_2d71dbce2c8006687edbef058984c896 = MAKE_CODE_OBJECT(module_filename_obj, 282, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_refresh_grant, mod_consts.const_str_plain_refresh_grant, mod_consts.const_tuple_0a2d55751e997ed032c6917657fac193_tuple, NULL, 8, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_google$oauth2$reauth$$$function__1_is_interactive(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$reauth$$$function__2__get_challenges(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$oauth2$reauth$$$function__3__send_challenge_result(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$reauth$$$function__4__run_next_challenge(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$reauth$$$function__5__obtain_rapt(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$reauth$$$function__6_get_rapt_token(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$oauth2$reauth$$$function__7_refresh_grant(PyThreadState *tstate, PyObject *defaults);


// The module function definitions.
static PyObject *impl_google$oauth2$reauth$$$function__1_is_interactive(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_google$oauth2$reauth$$$function__1_is_interactive;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$reauth$$$function__1_is_interactive = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$oauth2$reauth$$$function__1_is_interactive)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$reauth$$$function__1_is_interactive);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$reauth$$$function__1_is_interactive == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$reauth$$$function__1_is_interactive = MAKE_FUNCTION_FRAME(tstate, code_objects_8d02352f35f3c43cc0cca33b3c6af121, module_google$oauth2$reauth, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$reauth$$$function__1_is_interactive->m_type_description == NULL);
frame_frame_google$oauth2$reauth$$$function__1_is_interactive = cache_frame_frame_google$oauth2$reauth$$$function__1_is_interactive;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$reauth$$$function__1_is_interactive);
assert(Py_REFCNT(frame_frame_google$oauth2$reauth$$$function__1_is_interactive) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_stdin);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$reauth$$$function__1_is_interactive->m_frame.f_lineno = 74;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_isatty);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$reauth$$$function__1_is_interactive, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$reauth$$$function__1_is_interactive->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$reauth$$$function__1_is_interactive, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$reauth$$$function__1_is_interactive,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$reauth$$$function__1_is_interactive == cache_frame_frame_google$oauth2$reauth$$$function__1_is_interactive) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$reauth$$$function__1_is_interactive);
    cache_frame_frame_google$oauth2$reauth$$$function__1_is_interactive = NULL;
}

assertFrameObject(frame_frame_google$oauth2$reauth$$$function__1_is_interactive);

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


static PyObject *impl_google$oauth2$reauth$$$function__2__get_challenges(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_request = python_pars[0];
PyObject *par_supported_challenge_types = python_pars[1];
PyObject *par_access_token = python_pars[2];
PyObject *par_requested_scopes = python_pars[3];
PyObject *var_body = NULL;
PyObject *var_metrics_header = NULL;
int tmp_res;
struct Nuitka_FrameObject *frame_frame_google$oauth2$reauth$$$function__2__get_challenges;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$reauth$$$function__2__get_challenges = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_supportedChallengeTypes;
CHECK_OBJECT(par_supported_challenge_types);
tmp_dict_value_1 = par_supported_challenge_types;
tmp_assign_source_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
assert(var_body == NULL);
var_body = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$oauth2$reauth$$$function__2__get_challenges)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$reauth$$$function__2__get_challenges);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$reauth$$$function__2__get_challenges == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$reauth$$$function__2__get_challenges = MAKE_FUNCTION_FRAME(tstate, code_objects_fe0b43de651384804e8fdf9bea5abe33, module_google$oauth2$reauth, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$reauth$$$function__2__get_challenges->m_type_description == NULL);
frame_frame_google$oauth2$reauth$$$function__2__get_challenges = cache_frame_frame_google$oauth2$reauth$$$function__2__get_challenges;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$reauth$$$function__2__get_challenges);
assert(Py_REFCNT(frame_frame_google$oauth2$reauth$$$function__2__get_challenges) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_requested_scopes);
tmp_truth_name_1 = CHECK_IF_TRUE(par_requested_scopes);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
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
CHECK_OBJECT(par_requested_scopes);
tmp_dictset_value = par_requested_scopes;
CHECK_OBJECT(var_body);
tmp_dictset_dict = var_body;
tmp_dictset_key = mod_consts.const_str_plain_oauthScopesForDomainPolicyLookup;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_1;
tmp_expression_value_1 = module_var_accessor_google$oauth2$reauth$metrics(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_metrics);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 96;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_API_CLIENT_HEADER);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = module_var_accessor_google$oauth2$reauth$metrics(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_metrics);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_2);

exception_lineno = 96;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$reauth$$$function__2__get_challenges->m_frame.f_lineno = 96;
tmp_dict_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_reauth_start);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_2);

exception_lineno = 96;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oooooo";
    goto dict_build_exception_1;
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_2);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
assert(var_metrics_header == NULL);
var_metrics_header = tmp_assign_source_2;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
tmp_expression_value_2 = module_var_accessor_google$oauth2$reauth$_client(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__client);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 98;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__token_endpoint_request);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_kw_call_arg_value_0_1 = par_request;
tmp_add_expr_left_1 = module_var_accessor_google$oauth2$reauth$_REAUTH_API(tstate);
if (unlikely(tmp_add_expr_left_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__REAUTH_API);
}

if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 100;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = mod_consts.const_str_digest_bef9e6aed4b5a3c7c53058fcc4f45936;
tmp_kw_call_arg_value_1_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 100;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_body);
tmp_kw_call_arg_value_2_1 = var_body;
CHECK_OBJECT(par_access_token);
tmp_kw_call_dict_value_0_1 = par_access_token;
tmp_kw_call_dict_value_1_1 = Py_True;
CHECK_OBJECT(var_metrics_header);
tmp_kw_call_dict_value_2_1 = var_metrics_header;
frame_frame_google$oauth2$reauth$$$function__2__get_challenges->m_frame.f_lineno = 98;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_access_token_str_plain_use_json_str_plain_headers_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$reauth$$$function__2__get_challenges, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$reauth$$$function__2__get_challenges->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$reauth$$$function__2__get_challenges, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$reauth$$$function__2__get_challenges,
    type_description_1,
    par_request,
    par_supported_challenge_types,
    par_access_token,
    par_requested_scopes,
    var_body,
    var_metrics_header
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$reauth$$$function__2__get_challenges == cache_frame_frame_google$oauth2$reauth$$$function__2__get_challenges) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$reauth$$$function__2__get_challenges);
    cache_frame_frame_google$oauth2$reauth$$$function__2__get_challenges = NULL;
}

assertFrameObject(frame_frame_google$oauth2$reauth$$$function__2__get_challenges);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_body);
CHECK_OBJECT(var_body);
Py_DECREF(var_body);
var_body = NULL;
CHECK_OBJECT(var_metrics_header);
CHECK_OBJECT(var_metrics_header);
Py_DECREF(var_metrics_header);
var_metrics_header = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_body);
CHECK_OBJECT(var_body);
Py_DECREF(var_body);
var_body = NULL;
Py_XDECREF(var_metrics_header);
var_metrics_header = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_supported_challenge_types);
Py_DECREF(par_supported_challenge_types);
CHECK_OBJECT(par_access_token);
Py_DECREF(par_access_token);
CHECK_OBJECT(par_requested_scopes);
Py_DECREF(par_requested_scopes);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_supported_challenge_types);
Py_DECREF(par_supported_challenge_types);
CHECK_OBJECT(par_access_token);
Py_DECREF(par_access_token);
CHECK_OBJECT(par_requested_scopes);
Py_DECREF(par_requested_scopes);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$oauth2$reauth$$$function__3__send_challenge_result(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_request = python_pars[0];
PyObject *par_session_id = python_pars[1];
PyObject *par_challenge_id = python_pars[2];
PyObject *par_client_input = python_pars[3];
PyObject *par_access_token = python_pars[4];
PyObject *var_body = NULL;
PyObject *var_metrics_header = NULL;
int tmp_res;
struct Nuitka_FrameObject *frame_frame_google$oauth2$reauth$$$function__3__send_challenge_result;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$reauth$$$function__3__send_challenge_result = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_sessionId;
CHECK_OBJECT(par_session_id);
tmp_dict_value_1 = par_session_id;
tmp_assign_source_1 = _PyDict_NewPresized( 4 );
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_challengeId;
CHECK_OBJECT(par_challenge_id);
tmp_dict_value_1 = par_challenge_id;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_action;
tmp_dict_value_1 = mod_consts.const_str_plain_RESPOND;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_proposalResponse;
CHECK_OBJECT(par_client_input);
tmp_dict_value_1 = par_client_input;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
assert(var_body == NULL);
var_body = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$oauth2$reauth$$$function__3__send_challenge_result)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$reauth$$$function__3__send_challenge_result);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$reauth$$$function__3__send_challenge_result == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$reauth$$$function__3__send_challenge_result = MAKE_FUNCTION_FRAME(tstate, code_objects_faed30e77310f911940807b7d641bfd6, module_google$oauth2$reauth, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$reauth$$$function__3__send_challenge_result->m_type_description == NULL);
frame_frame_google$oauth2$reauth$$$function__3__send_challenge_result = cache_frame_frame_google$oauth2$reauth$$$function__3__send_challenge_result;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$reauth$$$function__3__send_challenge_result);
assert(Py_REFCNT(frame_frame_google$oauth2$reauth$$$function__3__send_challenge_result) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_1;
tmp_expression_value_1 = module_var_accessor_google$oauth2$reauth$metrics(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_metrics);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 131;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_API_CLIENT_HEADER);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = module_var_accessor_google$oauth2$reauth$metrics(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_metrics);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_2);

exception_lineno = 131;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$reauth$$$function__3__send_challenge_result->m_frame.f_lineno = 131;
tmp_dict_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_reauth_continue);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_2);

exception_lineno = 131;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "ooooooo";
    goto dict_build_exception_1;
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_2);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
assert(var_metrics_header == NULL);
var_metrics_header = tmp_assign_source_2;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_2;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
tmp_expression_value_2 = module_var_accessor_google$oauth2$reauth$_client(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__client);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 133;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__token_endpoint_request);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_kw_call_arg_value_0_1 = par_request;
tmp_add_expr_left_1 = module_var_accessor_google$oauth2$reauth$_REAUTH_API(tstate);
if (unlikely(tmp_add_expr_left_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__REAUTH_API);
}

if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 135;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_2 = mod_consts.const_str_digest_8749bcdbbf72d7e237bd4219c79a677b;
CHECK_OBJECT(par_session_id);
tmp_kw_call_arg_value_1_2 = par_session_id;
frame_frame_google$oauth2$reauth$$$function__3__send_challenge_result->m_frame.f_lineno = 135;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
    tmp_add_expr_right_1 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 135;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_1_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 135;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_body);
tmp_kw_call_arg_value_2_1 = var_body;
CHECK_OBJECT(par_access_token);
tmp_kw_call_dict_value_0_1 = par_access_token;
tmp_kw_call_dict_value_1_1 = Py_True;
CHECK_OBJECT(var_metrics_header);
tmp_kw_call_dict_value_2_1 = var_metrics_header;
frame_frame_google$oauth2$reauth$$$function__3__send_challenge_result->m_frame.f_lineno = 133;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_access_token_str_plain_use_json_str_plain_headers_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$reauth$$$function__3__send_challenge_result, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$reauth$$$function__3__send_challenge_result->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$reauth$$$function__3__send_challenge_result, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$reauth$$$function__3__send_challenge_result,
    type_description_1,
    par_request,
    par_session_id,
    par_challenge_id,
    par_client_input,
    par_access_token,
    var_body,
    var_metrics_header
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$reauth$$$function__3__send_challenge_result == cache_frame_frame_google$oauth2$reauth$$$function__3__send_challenge_result) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$reauth$$$function__3__send_challenge_result);
    cache_frame_frame_google$oauth2$reauth$$$function__3__send_challenge_result = NULL;
}

assertFrameObject(frame_frame_google$oauth2$reauth$$$function__3__send_challenge_result);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_body);
CHECK_OBJECT(var_body);
Py_DECREF(var_body);
var_body = NULL;
CHECK_OBJECT(var_metrics_header);
CHECK_OBJECT(var_metrics_header);
Py_DECREF(var_metrics_header);
var_metrics_header = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_body);
CHECK_OBJECT(var_body);
Py_DECREF(var_body);
var_body = NULL;
Py_XDECREF(var_metrics_header);
var_metrics_header = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_session_id);
Py_DECREF(par_session_id);
CHECK_OBJECT(par_challenge_id);
Py_DECREF(par_challenge_id);
CHECK_OBJECT(par_client_input);
Py_DECREF(par_client_input);
CHECK_OBJECT(par_access_token);
Py_DECREF(par_access_token);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_session_id);
Py_DECREF(par_session_id);
CHECK_OBJECT(par_challenge_id);
Py_DECREF(par_challenge_id);
CHECK_OBJECT(par_client_input);
Py_DECREF(par_client_input);
CHECK_OBJECT(par_access_token);
Py_DECREF(par_access_token);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$oauth2$reauth$$$function__4__run_next_challenge(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_msg = python_pars[0];
PyObject *par_request = python_pars[1];
PyObject *par_access_token = python_pars[2];
PyObject *var_challenge = NULL;
PyObject *var_c = NULL;
PyObject *var_client_input = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_google$oauth2$reauth$$$function__4__run_next_challenge;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$reauth$$$function__4__run_next_challenge = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$oauth2$reauth$$$function__4__run_next_challenge)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$reauth$$$function__4__run_next_challenge);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$reauth$$$function__4__run_next_challenge == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$reauth$$$function__4__run_next_challenge = MAKE_FUNCTION_FRAME(tstate, code_objects_fe0ed4beed55bb6000ae971d5f0c438a, module_google$oauth2$reauth, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$reauth$$$function__4__run_next_challenge->m_type_description == NULL);
frame_frame_google$oauth2$reauth$$$function__4__run_next_challenge = cache_frame_frame_google$oauth2$reauth$$$function__4__run_next_challenge;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$reauth$$$function__4__run_next_challenge);
assert(Py_REFCNT(frame_frame_google$oauth2$reauth$$$function__4__run_next_challenge) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_msg);
tmp_expression_value_1 = par_msg;
tmp_subscript_value_1 = mod_consts.const_str_plain_challenges;
tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "oooooo";
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
type_description_1 = "oooooo";
exception_lineno = 161;
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
    PyObject *old = var_challenge;
    var_challenge = tmp_assign_source_3;
    Py_INCREF(var_challenge);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_challenge);
tmp_expression_value_2 = var_challenge;
tmp_subscript_value_2 = mod_consts.const_str_plain_status;
tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_READY;
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
goto loop_start_1;
branch_no_1:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_3;
PyObject *tmp_args_element_value_2;
tmp_expression_value_4 = module_var_accessor_google$oauth2$reauth$challenges(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_challenges);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 165;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_AVAILABLE_CHALLENGES);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_challenge);
tmp_expression_value_5 = var_challenge;
tmp_subscript_value_3 = mod_consts.const_str_plain_challengeType;
tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_3);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 165;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_2 = Py_None;
frame_frame_google$oauth2$reauth$$$function__4__run_next_challenge->m_frame.f_lineno = 165;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
assert(var_c == NULL);
var_c = tmp_assign_source_4;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_c);
tmp_operand_value_1 = var_c;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oooooo";
    goto try_except_handler_2;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_3;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_4;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_list_arg_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
tmp_expression_value_6 = module_var_accessor_google$oauth2$reauth$exceptions(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 167;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_ReauthFailError);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_6c3934ef18a671d02e5434c3a1f0f426;
CHECK_OBJECT(var_challenge);
tmp_expression_value_7 = var_challenge;
tmp_subscript_value_4 = mod_consts.const_str_plain_challengeType;
tmp_kw_call_arg_value_1_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_4);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 169;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_str_arg_value_1 = mod_consts.const_str_chr_44;
tmp_expression_value_9 = module_var_accessor_google$oauth2$reauth$challenges(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_challenges);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 170;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_AVAILABLE_CHALLENGES);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 170;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain_keys);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 170;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
frame_frame_google$oauth2$reauth$$$function__4__run_next_challenge->m_frame.f_lineno = 170;
tmp_list_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 170;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_iterable_value_1 = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_iterable_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 170;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_kw_call_arg_value_2_1 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_kw_call_arg_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 170;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
frame_frame_google$oauth2$reauth$$$function__4__run_next_challenge->m_frame.f_lineno = 168;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    tmp_args_element_value_3 = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
CHECK_OBJECT(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 168;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
frame_frame_google$oauth2$reauth$$$function__4__run_next_challenge->m_frame.f_lineno = 167;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 167;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto try_except_handler_2;
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(var_c);
tmp_expression_value_10 = var_c;
tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_is_locally_eligible);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "oooooo";
    goto try_except_handler_2;
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
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_4;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_2;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_5;
tmp_expression_value_11 = module_var_accessor_google$oauth2$reauth$exceptions(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 174;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_ReauthFailError);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_kw_call_arg_value_0_2 = mod_consts.const_str_digest_6132d0493ef375a067d15e7e7b60e6ab;
CHECK_OBJECT(var_challenge);
tmp_expression_value_12 = var_challenge;
tmp_subscript_value_5 = mod_consts.const_str_plain_challengeType;
tmp_kw_call_arg_value_1_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_5);
if (tmp_kw_call_arg_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 176;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
frame_frame_google$oauth2$reauth$$$function__4__run_next_challenge->m_frame.f_lineno = 175;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
    tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_2);
Py_DECREF(tmp_kw_call_arg_value_1_2);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 175;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
frame_frame_google$oauth2$reauth$$$function__4__run_next_challenge->m_frame.f_lineno = 174;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 174;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto try_except_handler_2;
}
branch_no_3:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(var_c);
tmp_called_instance_1 = var_c;
CHECK_OBJECT(var_challenge);
tmp_args_element_value_5 = var_challenge;
frame_frame_google$oauth2$reauth$$$function__4__run_next_challenge->m_frame.f_lineno = 179;
tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_obtain_challenge_input, tmp_args_element_value_5);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
assert(var_client_input == NULL);
var_client_input = tmp_assign_source_5;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_3;
CHECK_OBJECT(var_client_input);
tmp_operand_value_3 = var_client_input;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_2;
branch_no_4:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_6;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_7;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
tmp_called_value_5 = module_var_accessor_google$oauth2$reauth$_send_challenge_result(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__send_challenge_result);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 182;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_request);
tmp_args_element_value_6 = par_request;
CHECK_OBJECT(par_msg);
tmp_expression_value_13 = par_msg;
tmp_subscript_value_6 = mod_consts.const_str_plain_sessionId;
tmp_args_element_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_6);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_challenge);
tmp_expression_value_14 = var_challenge;
tmp_subscript_value_7 = mod_consts.const_str_plain_challengeId;
tmp_args_element_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_7);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_7);

exception_lineno = 185;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_client_input);
tmp_args_element_value_9 = var_client_input;
CHECK_OBJECT(par_access_token);
tmp_args_element_value_10 = par_access_token;
frame_frame_google$oauth2$reauth$$$function__4__run_next_challenge->m_frame.f_lineno = 182;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
goto try_return_handler_2;
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$reauth$$$function__4__run_next_challenge, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$reauth$$$function__4__run_next_challenge->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$reauth$$$function__4__run_next_challenge, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$reauth$$$function__4__run_next_challenge,
    type_description_1,
    par_msg,
    par_request,
    par_access_token,
    var_challenge,
    var_c,
    var_client_input
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$reauth$$$function__4__run_next_challenge == cache_frame_frame_google$oauth2$reauth$$$function__4__run_next_challenge) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$reauth$$$function__4__run_next_challenge);
    cache_frame_frame_google$oauth2$reauth$$$function__4__run_next_challenge = NULL;
}

assertFrameObject(frame_frame_google$oauth2$reauth$$$function__4__run_next_challenge);

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
Py_XDECREF(var_challenge);
var_challenge = NULL;
Py_XDECREF(var_c);
var_c = NULL;
Py_XDECREF(var_client_input);
var_client_input = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_challenge);
var_challenge = NULL;
Py_XDECREF(var_c);
var_c = NULL;
Py_XDECREF(var_client_input);
var_client_input = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_msg);
Py_DECREF(par_msg);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_access_token);
Py_DECREF(par_access_token);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_msg);
Py_DECREF(par_msg);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_access_token);
Py_DECREF(par_access_token);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$oauth2$reauth$$$function__5__obtain_rapt(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_request = python_pars[0];
PyObject *par_access_token = python_pars[1];
PyObject *par_requested_scopes = python_pars[2];
PyObject *var_msg = NULL;
PyObject *var__ = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_google$oauth2$reauth$$$function__5__obtain_rapt;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$reauth$$$function__5__obtain_rapt = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$oauth2$reauth$$$function__5__obtain_rapt)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$reauth$$$function__5__obtain_rapt);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$reauth$$$function__5__obtain_rapt == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$reauth$$$function__5__obtain_rapt = MAKE_FUNCTION_FRAME(tstate, code_objects_0a9ea31f5a0ed4a155877127f4d52025, module_google$oauth2$reauth, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$reauth$$$function__5__obtain_rapt->m_type_description == NULL);
frame_frame_google$oauth2$reauth$$$function__5__obtain_rapt = cache_frame_frame_google$oauth2$reauth$$$function__5__obtain_rapt;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$reauth$$$function__5__obtain_rapt);
assert(Py_REFCNT(frame_frame_google$oauth2$reauth$$$function__5__obtain_rapt) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_list_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_1 = module_var_accessor_google$oauth2$reauth$_get_challenges(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__get_challenges);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 207;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_args_element_value_1 = par_request;
tmp_expression_value_2 = module_var_accessor_google$oauth2$reauth$challenges(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_challenges);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 209;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_AVAILABLE_CHALLENGES);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_keys);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$reauth$$$function__5__obtain_rapt->m_frame.f_lineno = 209;
tmp_list_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_access_token);
tmp_args_element_value_3 = par_access_token;
CHECK_OBJECT(par_requested_scopes);
tmp_args_element_value_4 = par_requested_scopes;
frame_frame_google$oauth2$reauth$$$function__5__obtain_rapt->m_frame.f_lineno = 207;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_msg == NULL);
var_msg = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_msg);
tmp_expression_value_3 = var_msg;
tmp_subscript_value_1 = mod_consts.const_str_plain_status;
tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_google$oauth2$reauth$_AUTHENTICATED(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__AUTHENTICATED);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 214;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "ooooo";
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
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_msg);
tmp_expression_value_4 = var_msg;
tmp_subscript_value_2 = mod_consts.const_str_plain_encodedProofOfReauthToken;
tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_xrange_low_1;
PyObject *tmp_xrange_high_1;
tmp_xrange_low_1 = const_int_0;
tmp_xrange_high_1 = module_var_accessor_google$oauth2$reauth$RUN_CHALLENGE_RETRY_LIMIT(tstate);
if (unlikely(tmp_xrange_high_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RUN_CHALLENGE_RETRY_LIMIT);
}

if (tmp_xrange_high_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 217;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_iter_arg_1 = BUILTIN_XRANGE2(tstate, tmp_xrange_low_1, tmp_xrange_high_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "ooooo";
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
tmp_assign_source_3 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooo";
exception_lineno = 217;
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
    PyObject *old = var__;
    var__ = tmp_assign_source_4;
    Py_INCREF(var__);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_4;
if (var_msg == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_msg);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 219;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}

tmp_expression_value_5 = var_msg;
tmp_subscript_value_3 = mod_consts.const_str_plain_status;
tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_3);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_2 = module_var_accessor_google$oauth2$reauth$_CHALLENGE_REQUIRED(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__CHALLENGE_REQUIRED);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 219;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_or_left_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 219;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(tmp_or_left_value_1);
Py_DECREF(tmp_or_left_value_1);
if (var_msg == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_msg);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 219;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}

tmp_expression_value_6 = var_msg;
tmp_subscript_value_4 = mod_consts.const_str_plain_status;
tmp_cmp_expr_left_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_4);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_3 = module_var_accessor_google$oauth2$reauth$_CHALLENGE_PENDING(tstate);
if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__CHALLENGE_PENDING);
}

if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 219;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_or_right_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_operand_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_operand_value_1 = tmp_or_left_value_1;
or_end_1:;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "ooooo";
    goto try_except_handler_2;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_5;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_5;
tmp_expression_value_7 = module_var_accessor_google$oauth2$reauth$exceptions(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 221;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_ReauthFailError);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_d1698be685cbefd148623f215fedda80;
if (var_msg == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_msg);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 223;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}

tmp_expression_value_8 = var_msg;
tmp_subscript_value_5 = mod_consts.const_str_plain_status;
tmp_kw_call_arg_value_1_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_5);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 223;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
frame_frame_google$oauth2$reauth$$$function__5__obtain_rapt->m_frame.f_lineno = 222;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_args_element_value_5 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 222;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
frame_frame_google$oauth2$reauth$$$function__5__obtain_rapt->m_frame.f_lineno = 221;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 221;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto try_except_handler_2;
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_4;
tmp_called_value_4 = module_var_accessor_google$oauth2$reauth$is_interactive(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_interactive);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 227;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
frame_frame_google$oauth2$reauth$$$function__5__obtain_rapt->m_frame.f_lineno = 227;
tmp_operand_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "ooooo";
    goto try_except_handler_2;
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
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$oauth2$reauth$exceptions(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 228;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
frame_frame_google$oauth2$reauth$$$function__5__obtain_rapt->m_frame.f_lineno = 228;
tmp_raise_type_input_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_ReauthFailError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_e9013a301e0d176872757feeb91a52e1_tuple, 0)
);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 228;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto try_except_handler_2;
}
branch_no_3:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
tmp_called_value_5 = module_var_accessor_google$oauth2$reauth$_run_next_challenge(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__run_next_challenge);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 233;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
if (var_msg == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_msg);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 233;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_6 = var_msg;
if (par_request == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 233;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_7 = par_request;
if (par_access_token == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_access_token);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 233;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_8 = par_access_token;
frame_frame_google$oauth2$reauth$$$function__5__obtain_rapt->m_frame.f_lineno = 233;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_msg;
    var_msg = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_3;
CHECK_OBJECT(var_msg);
tmp_operand_value_3 = var_msg;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = module_var_accessor_google$oauth2$reauth$exceptions(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 236;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
frame_frame_google$oauth2$reauth$$$function__5__obtain_rapt->m_frame.f_lineno = 236;
tmp_raise_type_input_3 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_ReauthFailError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_afc6d2584b7f3ed8c307ca8c7f98af60_tuple, 0)
);

if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 236;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto try_except_handler_2;
}
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_6;
CHECK_OBJECT(var_msg);
tmp_expression_value_9 = var_msg;
tmp_subscript_value_6 = mod_consts.const_str_plain_status;
tmp_cmp_expr_left_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_6);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_4 = module_var_accessor_google$oauth2$reauth$_AUTHENTICATED(tstate);
if (unlikely(tmp_cmp_expr_right_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__AUTHENTICATED);
}

if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_4);

exception_lineno = 237;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_7;
CHECK_OBJECT(var_msg);
tmp_expression_value_10 = var_msg;
tmp_subscript_value_7 = mod_consts.const_str_plain_encodedProofOfReauthToken;
tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_7);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
goto try_return_handler_2;
}
branch_no_5:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
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
PyObject *tmp_raise_type_4;
PyObject *tmp_raise_type_input_4;
PyObject *tmp_called_instance_3;
tmp_called_instance_3 = module_var_accessor_google$oauth2$reauth$exceptions(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 241;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$reauth$$$function__5__obtain_rapt->m_frame.f_lineno = 241;
tmp_raise_type_input_4 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_ReauthFailError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_afc6d2584b7f3ed8c307ca8c7f98af60_tuple, 0)
);

if (tmp_raise_type_input_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_4 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_4);
CHECK_OBJECT(tmp_raise_type_input_4);
Py_DECREF(tmp_raise_type_input_4);
if (tmp_raise_type_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 241;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$reauth$$$function__5__obtain_rapt, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$reauth$$$function__5__obtain_rapt->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$reauth$$$function__5__obtain_rapt, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$reauth$$$function__5__obtain_rapt,
    type_description_1,
    par_request,
    par_access_token,
    par_requested_scopes,
    var_msg,
    var__
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$reauth$$$function__5__obtain_rapt == cache_frame_frame_google$oauth2$reauth$$$function__5__obtain_rapt) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$reauth$$$function__5__obtain_rapt);
    cache_frame_frame_google$oauth2$reauth$$$function__5__obtain_rapt = NULL;
}

assertFrameObject(frame_frame_google$oauth2$reauth$$$function__5__obtain_rapt);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_msg);
CHECK_OBJECT(var_msg);
Py_DECREF(var_msg);
var_msg = NULL;
Py_XDECREF(var__);
var__ = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_msg);
var_msg = NULL;
Py_XDECREF(var__);
var__ = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_access_token);
Py_DECREF(par_access_token);
CHECK_OBJECT(par_requested_scopes);
Py_DECREF(par_requested_scopes);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_access_token);
Py_DECREF(par_access_token);
CHECK_OBJECT(par_requested_scopes);
Py_DECREF(par_requested_scopes);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$oauth2$reauth$$$function__6_get_rapt_token(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_request = python_pars[0];
PyObject *par_client_id = python_pars[1];
PyObject *par_client_secret = python_pars[2];
PyObject *par_refresh_token = python_pars[3];
PyObject *par_token_uri = python_pars[4];
PyObject *par_scopes = python_pars[5];
PyObject *var_access_token = NULL;
PyObject *var__ = NULL;
PyObject *var_rapt_token = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__element_4 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_google$oauth2$reauth$$$function__6_get_rapt_token;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$reauth$$$function__6_get_rapt_token = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$oauth2$reauth$$$function__6_get_rapt_token)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$reauth$$$function__6_get_rapt_token);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$reauth$$$function__6_get_rapt_token == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$reauth$$$function__6_get_rapt_token = MAKE_FUNCTION_FRAME(tstate, code_objects_ebed9a0a08160f776966affa28ec82f2, module_google$oauth2$reauth, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$reauth$$$function__6_get_rapt_token->m_type_description == NULL);
frame_frame_google$oauth2$reauth$$$function__6_get_rapt_token = cache_frame_frame_google$oauth2$reauth$$$function__6_get_rapt_token;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$reauth$$$function__6_get_rapt_token);
assert(Py_REFCNT(frame_frame_google$oauth2$reauth$$$function__6_get_rapt_token) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
tmp_expression_value_1 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_stderr);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$reauth$$$function__6_get_rapt_token->m_frame.f_lineno = 263;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_write,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_aab139c511a113079df5d84bd0d617ea_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
PyObject *tmp_kw_call_value_5_1;
PyObject *tmp_list_element_1;
tmp_expression_value_2 = module_var_accessor_google$oauth2$reauth$_client(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__client);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 266;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_refresh_grant);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_request);
tmp_kw_call_value_0_1 = par_request;
CHECK_OBJECT(par_client_id);
tmp_kw_call_value_1_1 = par_client_id;
CHECK_OBJECT(par_client_secret);
tmp_kw_call_value_2_1 = par_client_secret;
CHECK_OBJECT(par_refresh_token);
tmp_kw_call_value_3_1 = par_refresh_token;
CHECK_OBJECT(par_token_uri);
tmp_kw_call_value_4_1 = par_token_uri;
tmp_list_element_1 = module_var_accessor_google$oauth2$reauth$_REAUTH_SCOPE(tstate);
if (unlikely(tmp_list_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__REAUTH_SCOPE);
}

if (tmp_list_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 272;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_kw_call_value_5_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_kw_call_value_5_1, 0, tmp_list_element_1);
frame_frame_google$oauth2$reauth$$$function__6_get_rapt_token->m_frame.f_lineno = 266;
{
    PyObject *kw_values[6] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1};

    tmp_iter_arg_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_ce2f6fbf35d098f41bd108005c24e869_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_value_5_1);
Py_DECREF(tmp_kw_call_value_5_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "ooooooooo";
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
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 4);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 266;
type_description_1 = "ooooooooo";
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
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 4);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 266;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 4);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 266;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_3 == NULL);
tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 3, 4);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 266;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_4 == NULL);
tmp_tuple_unpack_1__element_4 = tmp_assign_source_5;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 4);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 266;
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
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
assert(var_access_token == NULL);
Py_INCREF(tmp_assign_source_6);
var_access_token = tmp_assign_source_6;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
assert(var__ == NULL);
Py_INCREF(tmp_assign_source_7);
var__ = tmp_assign_source_7;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;
{
    PyObject *old = var__;
    assert(old != NULL);
    var__ = tmp_assign_source_8;
    Py_INCREF(var__);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_4;
{
    PyObject *old = var__;
    assert(old != NULL);
    var__ = tmp_assign_source_9;
    Py_INCREF(var__);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_4);
tmp_tuple_unpack_1__element_4 = NULL;

{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_2 = module_var_accessor_google$oauth2$reauth$_obtain_rapt(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__obtain_rapt);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 276;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_kw_call_arg_value_0_1 = par_request;
CHECK_OBJECT(var_access_token);
tmp_kw_call_arg_value_1_1 = var_access_token;
CHECK_OBJECT(par_scopes);
tmp_kw_call_dict_value_0_1 = par_scopes;
frame_frame_google$oauth2$reauth$$$function__6_get_rapt_token->m_frame.f_lineno = 276;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_requested_scopes_tuple);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_rapt_token == NULL);
var_rapt_token = tmp_assign_source_10;
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_2;
tmp_expression_value_3 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_3 == NULL));
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_stderr);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$reauth$$$function__6_get_rapt_token->m_frame.f_lineno = 277;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_write,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_0d8693b3dce3512b904b9514f062b0b6_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$reauth$$$function__6_get_rapt_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$reauth$$$function__6_get_rapt_token->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$reauth$$$function__6_get_rapt_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$reauth$$$function__6_get_rapt_token,
    type_description_1,
    par_request,
    par_client_id,
    par_client_secret,
    par_refresh_token,
    par_token_uri,
    par_scopes,
    var_access_token,
    var__,
    var_rapt_token
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$reauth$$$function__6_get_rapt_token == cache_frame_frame_google$oauth2$reauth$$$function__6_get_rapt_token) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$reauth$$$function__6_get_rapt_token);
    cache_frame_frame_google$oauth2$reauth$$$function__6_get_rapt_token = NULL;
}

assertFrameObject(frame_frame_google$oauth2$reauth$$$function__6_get_rapt_token);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_rapt_token);
tmp_return_value = var_rapt_token;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_access_token);
CHECK_OBJECT(var_access_token);
Py_DECREF(var_access_token);
var_access_token = NULL;
CHECK_OBJECT(var__);
CHECK_OBJECT(var__);
Py_DECREF(var__);
var__ = NULL;
CHECK_OBJECT(var_rapt_token);
CHECK_OBJECT(var_rapt_token);
Py_DECREF(var_rapt_token);
var_rapt_token = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_access_token);
var_access_token = NULL;
Py_XDECREF(var__);
var__ = NULL;
Py_XDECREF(var_rapt_token);
var_rapt_token = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_client_id);
Py_DECREF(par_client_id);
CHECK_OBJECT(par_client_secret);
Py_DECREF(par_client_secret);
CHECK_OBJECT(par_refresh_token);
Py_DECREF(par_refresh_token);
CHECK_OBJECT(par_token_uri);
Py_DECREF(par_token_uri);
CHECK_OBJECT(par_scopes);
Py_DECREF(par_scopes);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_client_id);
Py_DECREF(par_client_id);
CHECK_OBJECT(par_client_secret);
Py_DECREF(par_client_secret);
CHECK_OBJECT(par_refresh_token);
Py_DECREF(par_refresh_token);
CHECK_OBJECT(par_token_uri);
Py_DECREF(par_token_uri);
CHECK_OBJECT(par_scopes);
Py_DECREF(par_scopes);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$oauth2$reauth$$$function__7_refresh_grant(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_request = python_pars[0];
PyObject *par_token_uri = python_pars[1];
PyObject *par_refresh_token = python_pars[2];
PyObject *par_client_id = python_pars[3];
PyObject *par_client_secret = python_pars[4];
PyObject *par_scopes = python_pars[5];
PyObject *par_rapt_token = python_pars[6];
PyObject *par_enable_reauth_refresh = python_pars[7];
PyObject *var_body = NULL;
PyObject *var_metrics_header = NULL;
PyObject *var_response_status_ok = NULL;
PyObject *var_response_data = NULL;
PyObject *var_retryable_error = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__element_3 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_google$oauth2$reauth$$$function__7_refresh_grant;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$reauth$$$function__7_refresh_grant = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$oauth2$reauth$$$function__7_refresh_grant)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$reauth$$$function__7_refresh_grant);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$reauth$$$function__7_refresh_grant == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$reauth$$$function__7_refresh_grant = MAKE_FUNCTION_FRAME(tstate, code_objects_2d71dbce2c8006687edbef058984c896, module_google$oauth2$reauth, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$reauth$$$function__7_refresh_grant->m_type_description == NULL);
frame_frame_google$oauth2$reauth$$$function__7_refresh_grant = cache_frame_frame_google$oauth2$reauth$$$function__7_refresh_grant;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$reauth$$$function__7_refresh_grant);
assert(Py_REFCNT(frame_frame_google$oauth2$reauth$$$function__7_refresh_grant) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_grant_type;
tmp_expression_value_1 = module_var_accessor_google$oauth2$reauth$_client(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__client);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 322;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__REFRESH_GRANT_TYPE);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = _PyDict_NewPresized( 4 );
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_client_id;
CHECK_OBJECT(par_client_id);
tmp_dict_value_1 = par_client_id;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_client_secret;
CHECK_OBJECT(par_client_secret);
tmp_dict_value_1 = par_client_secret;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_refresh_token;
CHECK_OBJECT(par_refresh_token);
tmp_dict_value_1 = par_refresh_token;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
assert(var_body == NULL);
var_body = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_scopes);
tmp_truth_name_1 = CHECK_IF_TRUE(par_scopes);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
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
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_str_arg_value_1 = mod_consts.const_str_space;
CHECK_OBJECT(par_scopes);
tmp_iterable_value_1 = par_scopes;
tmp_dictset_value = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_body);
tmp_dictset_dict = var_body;
tmp_dictset_key = mod_consts.const_str_plain_scope;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_rapt_token);
tmp_truth_name_2 = CHECK_IF_TRUE(par_rapt_token);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "ooooooooooooo";
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
CHECK_OBJECT(par_rapt_token);
tmp_dictset_value = par_rapt_token;
CHECK_OBJECT(var_body);
tmp_dictset_dict = var_body;
tmp_dictset_key = mod_consts.const_str_plain_rapt;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
branch_no_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_instance_1;
tmp_expression_value_2 = module_var_accessor_google$oauth2$reauth$metrics(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_metrics);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 331;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_API_CLIENT_HEADER);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = module_var_accessor_google$oauth2$reauth$metrics(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_metrics);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_2);

exception_lineno = 331;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$reauth$$$function__7_refresh_grant->m_frame.f_lineno = 331;
tmp_dict_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_token_request_user);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_2);

exception_lineno = 331;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "ooooooooooooo";
    goto dict_build_exception_1;
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_2);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
assert(var_metrics_header == NULL);
var_metrics_header = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_expression_value_3 = module_var_accessor_google$oauth2$reauth$_client(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__client);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 337;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__token_endpoint_request_no_throw);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_request);
tmp_kw_call_arg_value_0_1 = par_request;
CHECK_OBJECT(par_token_uri);
tmp_kw_call_arg_value_1_1 = par_token_uri;
CHECK_OBJECT(var_body);
tmp_kw_call_arg_value_2_1 = var_body;
CHECK_OBJECT(var_metrics_header);
tmp_kw_call_dict_value_0_1 = var_metrics_header;
frame_frame_google$oauth2$reauth$$$function__7_refresh_grant->m_frame.f_lineno = 337;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_headers_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 333;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 333;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 333;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_3 == NULL);
tmp_tuple_unpack_1__element_3 = tmp_assign_source_6;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 333;
type_description_1 = "ooooooooooooo";
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
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
assert(var_response_status_ok == NULL);
Py_INCREF(tmp_assign_source_7);
var_response_status_ok = tmp_assign_source_7;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
assert(var_response_data == NULL);
Py_INCREF(tmp_assign_source_8);
var_response_data = tmp_assign_source_8;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_3;
assert(var_retryable_error == NULL);
Py_INCREF(tmp_assign_source_9);
var_retryable_error = tmp_assign_source_9;
}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
nuitka_bool tmp_condition_result_3;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(var_response_status_ok);
tmp_operand_value_1 = var_response_status_ok;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_response_data);
tmp_isinstance_inst_1 = var_response_data;
tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_4 = module_var_accessor_google$oauth2$reauth$exceptions(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 342;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_RefreshError);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_response_data);
tmp_tuple_element_1 = var_response_data;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_5c377bc7d8faa045be8b31f22779c87e);
frame_frame_google$oauth2$reauth$$$function__7_refresh_grant->m_frame.f_lineno = 342;
tmp_raise_type_input_1 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 342;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_operand_value_2;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var_response_status_ok);
tmp_operand_value_2 = var_response_status_ok;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(var_response_data);
tmp_expression_value_5 = var_response_data;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_get);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$reauth$$$function__7_refresh_grant->m_frame.f_lineno = 346;
tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_error_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_google$oauth2$reauth$_REAUTH_NEEDED_ERROR(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__REAUTH_NEEDED_ERROR);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 346;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_and_left_value_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(var_response_data);
tmp_expression_value_6 = var_response_data;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_get);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$reauth$$$function__7_refresh_grant->m_frame.f_lineno = 348;
tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_plain_error_subtype_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = module_var_accessor_google$oauth2$reauth$_REAUTH_NEEDED_ERROR_INVALID_RAPT(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__REAUTH_NEEDED_ERROR_INVALID_RAPT);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 348;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_response_data);
tmp_expression_value_7 = var_response_data;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_get);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$reauth$$$function__7_refresh_grant->m_frame.f_lineno = 349;
tmp_cmp_expr_left_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_plain_error_subtype_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = module_var_accessor_google$oauth2$reauth$_REAUTH_NEEDED_ERROR_RAPT_REQUIRED(tstate);
if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__REAUTH_NEEDED_ERROR_RAPT_REQUIRED);
}

if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 349;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_3 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_and_right_value_3 = tmp_or_left_value_1;
or_end_1:;
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
bool tmp_condition_result_5;
PyObject *tmp_operand_value_3;
CHECK_OBJECT(par_enable_reauth_refresh);
tmp_operand_value_3 = par_enable_reauth_refresh;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = module_var_accessor_google$oauth2$reauth$exceptions(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 353;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$reauth$$$function__7_refresh_grant->m_frame.f_lineno = 353;
tmp_raise_type_input_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_RefreshError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_4ca56fec74ba2aab1d22c639bc946aec_tuple, 0)
);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 353;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_5:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_6;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_2;
PyObject *tmp_kw_call_arg_value_2_2;
PyObject *tmp_kw_call_arg_value_3_1;
PyObject *tmp_kw_call_arg_value_4_1;
PyObject *tmp_kw_call_dict_value_0_2;
tmp_called_value_6 = module_var_accessor_google$oauth2$reauth$get_rapt_token(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_rapt_token);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 357;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_kw_call_arg_value_0_2 = par_request;
CHECK_OBJECT(par_client_id);
tmp_kw_call_arg_value_1_2 = par_client_id;
CHECK_OBJECT(par_client_secret);
tmp_kw_call_arg_value_2_2 = par_client_secret;
CHECK_OBJECT(par_refresh_token);
tmp_kw_call_arg_value_3_1 = par_refresh_token;
CHECK_OBJECT(par_token_uri);
tmp_kw_call_arg_value_4_1 = par_token_uri;
CHECK_OBJECT(par_scopes);
tmp_kw_call_dict_value_0_2 = par_scopes;
frame_frame_google$oauth2$reauth$$$function__7_refresh_grant->m_frame.f_lineno = 357;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_2, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS5_KW_SPLIT(tstate, tmp_called_value_6, args, kw_values, mod_consts.const_tuple_str_plain_scopes_tuple);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_rapt_token;
    assert(old != NULL);
    par_rapt_token = tmp_assign_source_10;
    Py_DECREF(old);
}

}
CHECK_OBJECT(par_rapt_token);
tmp_dictset_value = par_rapt_token;
CHECK_OBJECT(var_body);
tmp_dictset_dict = var_body;
tmp_dictset_key = mod_consts.const_str_plain_rapt;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_arg_value_1_3;
PyObject *tmp_kw_call_arg_value_2_3;
PyObject *tmp_kw_call_dict_value_0_3;
tmp_expression_value_8 = module_var_accessor_google$oauth2$reauth$_client(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__client);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 365;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__token_endpoint_request_no_throw);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_request);
tmp_kw_call_arg_value_0_3 = par_request;
CHECK_OBJECT(par_token_uri);
tmp_kw_call_arg_value_1_3 = par_token_uri;
CHECK_OBJECT(var_body);
tmp_kw_call_arg_value_2_3 = var_body;
CHECK_OBJECT(var_metrics_header);
tmp_kw_call_dict_value_0_3 = var_metrics_header;
frame_frame_google$oauth2$reauth$$$function__7_refresh_grant->m_frame.f_lineno = 365;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3, tmp_kw_call_arg_value_2_3};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_7, args, kw_values, mod_consts.const_tuple_str_plain_headers_tuple);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_11 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
assert(tmp_tuple_unpack_2__source_iter == NULL);
tmp_tuple_unpack_2__source_iter = tmp_assign_source_11;
}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_12 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 0, 3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 361;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_1 == NULL);
tmp_tuple_unpack_2__element_1 = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_13 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 1, 3);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 361;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_2 == NULL);
tmp_tuple_unpack_2__element_2 = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_14 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 2, 3);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 361;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_3 == NULL);
tmp_tuple_unpack_2__element_3 = tmp_assign_source_14;
}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 361;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_3);
tmp_tuple_unpack_2__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_15 = tmp_tuple_unpack_2__element_1;
{
    PyObject *old = var_response_status_ok;
    assert(old != NULL);
    var_response_status_ok = tmp_assign_source_15;
    Py_INCREF(var_response_status_ok);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_16 = tmp_tuple_unpack_2__element_2;
{
    PyObject *old = var_response_data;
    assert(old != NULL);
    var_response_data = tmp_assign_source_16;
    Py_INCREF(var_response_data);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
tmp_assign_source_17 = tmp_tuple_unpack_2__element_3;
{
    PyObject *old = var_retryable_error;
    assert(old != NULL);
    var_retryable_error = tmp_assign_source_17;
    Py_INCREF(var_retryable_error);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_3);
tmp_tuple_unpack_2__element_3 = NULL;

branch_no_4:;
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_4;
CHECK_OBJECT(var_response_status_ok);
tmp_operand_value_4 = var_response_status_ok;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_9 = module_var_accessor_google$oauth2$reauth$_client(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__client);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 370;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__handle_error_response);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_response_data == NULL) {
Py_DECREF(tmp_called_value_8);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_response_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 370;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = var_response_data;
CHECK_OBJECT(var_retryable_error);
tmp_args_element_value_2 = var_retryable_error;
frame_frame_google$oauth2$reauth$$$function__7_refresh_grant->m_frame.f_lineno = 370;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_6:;
{
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_tuple_element_2;
tmp_expression_value_10 = module_var_accessor_google$oauth2$reauth$_client(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__client);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 371;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain__handle_refresh_grant_response);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_response_data == NULL) {
Py_DECREF(tmp_called_value_9);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_response_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 371;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_3 = var_response_data;
CHECK_OBJECT(par_refresh_token);
tmp_args_element_value_4 = par_refresh_token;
frame_frame_google$oauth2$reauth$$$function__7_refresh_grant->m_frame.f_lineno = 371;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_add_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
}

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_rapt_token);
tmp_tuple_element_2 = par_rapt_token;
tmp_add_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_add_expr_right_1, 0, tmp_tuple_element_2);
tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_TUPLE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_1 = "ooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$reauth$$$function__7_refresh_grant, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$reauth$$$function__7_refresh_grant->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$reauth$$$function__7_refresh_grant, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$reauth$$$function__7_refresh_grant,
    type_description_1,
    par_request,
    par_token_uri,
    par_refresh_token,
    par_client_id,
    par_client_secret,
    par_scopes,
    par_rapt_token,
    par_enable_reauth_refresh,
    var_body,
    var_metrics_header,
    var_response_status_ok,
    var_response_data,
    var_retryable_error
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$reauth$$$function__7_refresh_grant == cache_frame_frame_google$oauth2$reauth$$$function__7_refresh_grant) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$reauth$$$function__7_refresh_grant);
    cache_frame_frame_google$oauth2$reauth$$$function__7_refresh_grant = NULL;
}

assertFrameObject(frame_frame_google$oauth2$reauth$$$function__7_refresh_grant);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_rapt_token);
CHECK_OBJECT(par_rapt_token);
Py_DECREF(par_rapt_token);
par_rapt_token = NULL;
CHECK_OBJECT(var_body);
CHECK_OBJECT(var_body);
Py_DECREF(var_body);
var_body = NULL;
CHECK_OBJECT(var_metrics_header);
CHECK_OBJECT(var_metrics_header);
Py_DECREF(var_metrics_header);
var_metrics_header = NULL;
CHECK_OBJECT(var_response_status_ok);
CHECK_OBJECT(var_response_status_ok);
Py_DECREF(var_response_status_ok);
var_response_status_ok = NULL;
Py_XDECREF(var_response_data);
var_response_data = NULL;
CHECK_OBJECT(var_retryable_error);
CHECK_OBJECT(var_retryable_error);
Py_DECREF(var_retryable_error);
var_retryable_error = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_rapt_token);
CHECK_OBJECT(par_rapt_token);
Py_DECREF(par_rapt_token);
par_rapt_token = NULL;
Py_XDECREF(var_body);
var_body = NULL;
Py_XDECREF(var_metrics_header);
var_metrics_header = NULL;
Py_XDECREF(var_response_status_ok);
var_response_status_ok = NULL;
Py_XDECREF(var_response_data);
var_response_data = NULL;
Py_XDECREF(var_retryable_error);
var_retryable_error = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_token_uri);
Py_DECREF(par_token_uri);
CHECK_OBJECT(par_refresh_token);
Py_DECREF(par_refresh_token);
CHECK_OBJECT(par_client_id);
Py_DECREF(par_client_id);
CHECK_OBJECT(par_client_secret);
Py_DECREF(par_client_secret);
CHECK_OBJECT(par_scopes);
Py_DECREF(par_scopes);
CHECK_OBJECT(par_enable_reauth_refresh);
Py_DECREF(par_enable_reauth_refresh);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_token_uri);
Py_DECREF(par_token_uri);
CHECK_OBJECT(par_refresh_token);
Py_DECREF(par_refresh_token);
CHECK_OBJECT(par_client_id);
Py_DECREF(par_client_id);
CHECK_OBJECT(par_client_secret);
Py_DECREF(par_client_secret);
CHECK_OBJECT(par_scopes);
Py_DECREF(par_scopes);
CHECK_OBJECT(par_enable_reauth_refresh);
Py_DECREF(par_enable_reauth_refresh);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_google$oauth2$reauth$$$function__1_is_interactive(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$reauth$$$function__1_is_interactive,
        mod_consts.const_str_plain_is_interactive,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8d02352f35f3c43cc0cca33b3c6af121,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$reauth,
        mod_consts.const_str_digest_d5fe51a8092261ab19335fcb0a3e2331,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$reauth$$$function__2__get_challenges(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$reauth$$$function__2__get_challenges,
        mod_consts.const_str_plain__get_challenges,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_fe0b43de651384804e8fdf9bea5abe33,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$reauth,
        mod_consts.const_str_digest_966c6febc66b1698b55493ac805ce06c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$reauth$$$function__3__send_challenge_result(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$reauth$$$function__3__send_challenge_result,
        mod_consts.const_str_plain__send_challenge_result,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_faed30e77310f911940807b7d641bfd6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$reauth,
        mod_consts.const_str_digest_dbf03fbecbecd084f3605afb3d08a075,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$reauth$$$function__4__run_next_challenge(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$reauth$$$function__4__run_next_challenge,
        mod_consts.const_str_plain__run_next_challenge,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_fe0ed4beed55bb6000ae971d5f0c438a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$reauth,
        mod_consts.const_str_digest_be1facc4a089d6a44dd7c97aa58b962d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$reauth$$$function__5__obtain_rapt(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$reauth$$$function__5__obtain_rapt,
        mod_consts.const_str_plain__obtain_rapt,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_0a9ea31f5a0ed4a155877127f4d52025,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$reauth,
        mod_consts.const_str_digest_b2806fdac1214177912ef039d7319490,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$reauth$$$function__6_get_rapt_token(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$reauth$$$function__6_get_rapt_token,
        mod_consts.const_str_plain_get_rapt_token,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ebed9a0a08160f776966affa28ec82f2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$reauth,
        mod_consts.const_str_digest_6063265f4867051e9e936f79d2076b3c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$reauth$$$function__7_refresh_grant(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$reauth$$$function__7_refresh_grant,
        mod_consts.const_str_plain_refresh_grant,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2d71dbce2c8006687edbef058984c896,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$reauth,
        mod_consts.const_str_digest_0e709d8812f80cd0f96824376f801880,
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

static function_impl_code const function_table_google$oauth2$reauth[] = {
impl_google$oauth2$reauth$$$function__1_is_interactive,
impl_google$oauth2$reauth$$$function__2__get_challenges,
impl_google$oauth2$reauth$$$function__3__send_challenge_result,
impl_google$oauth2$reauth$$$function__4__run_next_challenge,
impl_google$oauth2$reauth$$$function__5__obtain_rapt,
impl_google$oauth2$reauth$$$function__6_get_rapt_token,
impl_google$oauth2$reauth$$$function__7_refresh_grant,
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

    return Nuitka_Function_GetFunctionState(function, function_table_google$oauth2$reauth);
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
        module_google$oauth2$reauth,
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
        function_table_google$oauth2$reauth,
        sizeof(function_table_google$oauth2$reauth) / sizeof(function_impl_code)
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
static char const *module_full_name = "google.oauth2.reauth";
#endif

// Internal entry point for module code.
PyObject *module_code_google$oauth2$reauth(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("google$oauth2$reauth");

    // Store the module for future use.
    module_google$oauth2$reauth = module;

    moduledict_google$oauth2$reauth = MODULE_DICT(module_google$oauth2$reauth);

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
        PRINT_STRING("google$oauth2$reauth: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("google$oauth2$reauth: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("google$oauth2$reauth: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "google.oauth2.reauth" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initgoogle$oauth2$reauth\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_google$oauth2$reauth,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_google$oauth2$reauth,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_google$oauth2$reauth,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_google$oauth2$reauth,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_google$oauth2$reauth,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_google$oauth2$reauth);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_google$oauth2$reauth);
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

        UPDATE_STRING_DICT1(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_google$oauth2$reauth;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_da8a77e61fbc99161dfe32d43b9f2931;
UPDATE_STRING_DICT0(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_google$oauth2$reauth = MAKE_MODULE_FRAME(code_objects_e6594c5d92eb2853bda4517002321499, module_google$oauth2$reauth);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$reauth);
assert(Py_REFCNT(frame_frame_google$oauth2$reauth) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_google$oauth2$reauth$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_google$oauth2$reauth$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT0(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$oauth2$reauth;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_exceptions_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_google$oauth2$reauth->m_frame.f_lineno = 37;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$oauth2$reauth,
        mod_consts.const_str_plain_exceptions,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_exceptions);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_2 = (PyObject *)moduledict_google$oauth2$reauth;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_metrics_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_google$oauth2$reauth->m_frame.f_lineno = 38;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_google$oauth2$reauth,
        mod_consts.const_str_plain_metrics,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_metrics);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain_metrics, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_31b40dbd93ddd4efa91cab6083c18890;
tmp_globals_arg_value_3 = (PyObject *)moduledict_google$oauth2$reauth;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain__client_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_google$oauth2$reauth->m_frame.f_lineno = 39;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_google$oauth2$reauth,
        mod_consts.const_str_plain__client,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain__client);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__client, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_31b40dbd93ddd4efa91cab6083c18890;
tmp_globals_arg_value_4 = (PyObject *)moduledict_google$oauth2$reauth;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_challenges_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_google$oauth2$reauth->m_frame.f_lineno = 40;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_google$oauth2$reauth,
        mod_consts.const_str_plain_challenges,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_challenges);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain_challenges, tmp_assign_source_8);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$reauth, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$reauth->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$reauth, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_google$oauth2$reauth);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = mod_consts.const_str_digest_17fc7f05ee49a10f8345fc955408f07d;
UPDATE_STRING_DICT0(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__REAUTH_SCOPE, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = mod_consts.const_str_digest_58b36d4be8a02b763f82794d97f94836;
UPDATE_STRING_DICT0(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__REAUTH_API, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = mod_consts.const_str_plain_invalid_grant;
UPDATE_STRING_DICT0(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__REAUTH_NEEDED_ERROR, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = mod_consts.const_str_plain_invalid_rapt;
UPDATE_STRING_DICT0(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__REAUTH_NEEDED_ERROR_INVALID_RAPT, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = mod_consts.const_str_plain_rapt_required;
UPDATE_STRING_DICT0(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__REAUTH_NEEDED_ERROR_RAPT_REQUIRED, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = mod_consts.const_str_plain_AUTHENTICATED;
UPDATE_STRING_DICT0(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__AUTHENTICATED, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = mod_consts.const_str_plain_CHALLENGE_REQUIRED;
UPDATE_STRING_DICT0(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__CHALLENGE_REQUIRED, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = mod_consts.const_str_plain_CHALLENGE_PENDING;
UPDATE_STRING_DICT0(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__CHALLENGE_PENDING, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = mod_consts.const_int_pos_5;
UPDATE_STRING_DICT0(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain_RUN_CHALLENGE_RETRY_LIMIT, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;

tmp_assign_source_18 = MAKE_FUNCTION_google$oauth2$reauth$$$function__1_is_interactive(tstate);

UPDATE_STRING_DICT1(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain_is_interactive, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_1);

tmp_assign_source_19 = MAKE_FUNCTION_google$oauth2$reauth$$$function__2__get_challenges(tstate, tmp_defaults_1);

UPDATE_STRING_DICT1(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__get_challenges, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;

tmp_assign_source_20 = MAKE_FUNCTION_google$oauth2$reauth$$$function__3__send_challenge_result(tstate);

UPDATE_STRING_DICT1(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__send_challenge_result, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;

tmp_assign_source_21 = MAKE_FUNCTION_google$oauth2$reauth$$$function__4__run_next_challenge(tstate);

UPDATE_STRING_DICT1(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__run_next_challenge, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;

tmp_assign_source_22 = MAKE_FUNCTION_google$oauth2$reauth$$$function__5__obtain_rapt(tstate);

UPDATE_STRING_DICT1(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain__obtain_rapt, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_defaults_2;
tmp_defaults_2 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_2);

tmp_assign_source_23 = MAKE_FUNCTION_google$oauth2$reauth$$$function__6_get_rapt_token(tstate, tmp_defaults_2);

UPDATE_STRING_DICT1(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain_get_rapt_token, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_defaults_3;
tmp_defaults_3 = mod_consts.const_tuple_none_none_false_tuple;
Py_INCREF(tmp_defaults_3);

tmp_assign_source_24 = MAKE_FUNCTION_google$oauth2$reauth$$$function__7_refresh_grant(tstate, tmp_defaults_3);

UPDATE_STRING_DICT1(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)mod_consts.const_str_plain_refresh_grant, tmp_assign_source_24);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("google$oauth2$reauth", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "google.oauth2.reauth" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_google$oauth2$reauth);
    return module_google$oauth2$reauth;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$oauth2$reauth, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("google$oauth2$reauth", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

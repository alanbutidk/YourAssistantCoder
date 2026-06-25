/* Generated code for Python module 'google$oauth2$_client'
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



/* The "module_google$oauth2$_client" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_google$oauth2$_client;
PyDictObject *moduledict_google$oauth2$_client;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_exceptions;
PyObject *const_str_plain_RefreshError;
PyObject *const_tuple_str_plain_retryable_tuple;
PyObject *const_str_digest_126d63f60861e654fd4c8deaf6ded412;
PyObject *const_str_plain_error;
PyObject *const_tuple_str_plain_error_description_tuple;
PyObject *const_tuple_type_KeyError_type_ValueError_tuple;
PyObject *const_str_plain_json;
PyObject *const_str_plain_dumps;
PyObject *const_str_digest_795d9b6d652298e6343f1916e17424ac;
PyObject *const_str_plain_transport;
PyObject *const_str_plain_DEFAULT_RETRYABLE_STATUS_CODES;
PyObject *const_tuple_str_plain_error_tuple;
PyObject *const_set_b9021210084e14a8cf34244701532551;
PyObject *const_str_digest_89b9930870d783114f1977f37803f7c7;
PyObject *const_str_plain_retryable_error_descriptions;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_064e74b0f4619f0b7282aa826558ef32;
PyObject *const_tuple_str_plain_expires_in_none_tuple;
PyObject *const_str_plain__helpers;
PyObject *const_str_plain_utcnow;
PyObject *const_str_plain_datetime;
PyObject *const_str_plain_timedelta;
PyObject *const_tuple_str_plain_seconds_tuple;
PyObject *const_str_digest_0461e382cddb51f19b57e3c74c32eb8b;
PyObject *const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3;
PyObject *const_str_plain__JSON_CONTENT_TYPE;
PyObject *const_str_plain_encode;
PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
PyObject *const_str_plain__URLENCODED_CONTENT_TYPE;
PyObject *const_str_plain_urllib;
PyObject *const_str_plain_parse;
PyObject *const_str_plain_urlencode;
PyObject *const_str_digest_f3fd0f72635220c9d36e1bb0526ac376;
PyObject *const_str_plain_Authorization;
PyObject *const_str_plain_update;
PyObject *const_str_plain__exponential_backoff;
PyObject *const_str_plain_ExponentialBackoff;
PyObject *const_str_plain_request;
PyObject *const_str_plain_method;
PyObject *const_str_plain_POST;
PyObject *const_str_plain_url;
PyObject *const_str_plain_token_uri;
PyObject *const_str_plain_headers;
PyObject *const_str_plain_headers_to_use;
PyObject *const_str_plain_body;
PyObject *const_str_plain_kwargs;
PyObject *const_str_plain_data;
PyObject *const_str_plain_decode;
PyObject *const_str_plain_loads;
PyObject *const_str_plain_status;
PyObject *const_str_plain_http_client;
PyObject *const_str_plain_OK;
PyObject *const_str_plain__can_retry;
PyObject *const_tuple_str_plain_status_code_str_plain_response_data_tuple;
PyObject *const_str_plain_response_data;
PyObject *const_str_plain_retryable_error;
PyObject *const_str_digest_eaa9af1896cc21e94b87e0e3e8aebaa3;
PyObject *const_str_plain__token_endpoint_request_no_throw;
PyObject *const_str_plain_access_token;
PyObject *const_str_plain_use_json;
PyObject *const_str_plain_can_retry;
PyObject *const_str_plain__handle_error_response;
PyObject *const_str_digest_fbc351633d7ec2de1405e00eceda533e;
PyObject *const_str_plain_assertion;
PyObject *const_str_plain_grant_type;
PyObject *const_str_plain__JWT_GRANT_TYPE;
PyObject *const_str_plain__token_endpoint_request;
PyObject *const_str_plain_metrics;
PyObject *const_str_plain_API_CLIENT_HEADER;
PyObject *const_str_plain_token_request_access_token_sa_assertion;
PyObject *const_tuple_str_plain_can_retry_str_plain_headers_tuple;
PyObject *const_str_digest_728562b8c352be6ab357abc24ac67e2b;
PyObject *const_dict_5c377bc7d8faa045be8b31f22779c87e;
PyObject *const_str_plain__parse_expiry;
PyObject *const_str_digest_a7af7e07b45e1fd5913ace5d72133ed5;
PyObject *const_str_plain_audience;
PyObject *const_str_plain_includeEmail;
PyObject *const_str_plain_true;
PyObject *const_str_plain_useEmailAzp;
PyObject *const_str_plain_replace;
PyObject *const_str_plain_credentials;
PyObject *const_str_plain_DEFAULT_UNIVERSE_DOMAIN;
PyObject *const_tuple_str_plain_access_token_str_plain_use_json_tuple;
PyObject *const_str_plain_token;
PyObject *const_str_digest_0031e5d3a6c81cc90766d5ea441959e1;
PyObject *const_str_plain_jwt;
PyObject *const_dict_f3e8b111ded9225be3e397b0a4e57df6;
PyObject *const_str_plain_utcfromtimestamp;
PyObject *const_str_plain_exp;
PyObject *const_str_digest_8b9ee3dd5e85e6d54e56f0a25fd2a4b9;
PyObject *const_str_plain_token_request_id_token_sa_assertion;
PyObject *const_str_plain_id_token;
PyObject *const_str_digest_53d39e8de107dd8a0af6d51502b81232;
PyObject *const_str_plain_refresh_token;
PyObject *const_str_digest_8e0c8508570713c264d2996befa3fc60;
PyObject *const_str_plain__REFRESH_GRANT_TYPE;
PyObject *const_str_plain_client_id;
PyObject *const_str_plain_client_secret;
PyObject *const_str_space;
PyObject *const_str_plain_scope;
PyObject *const_str_plain_rapt;
PyObject *const_tuple_str_plain_can_retry_tuple;
PyObject *const_str_plain__handle_refresh_grant_response;
PyObject *const_str_digest_09d0b12d14c88443c682231f76dcd516;
PyObject *const_str_plain__lookup_trust_boundary_request;
PyObject *const_tuple_str_plain_headers_tuple;
PyObject *const_str_plain_encodedLocations;
PyObject *const_str_plain_MalformedError;
PyObject *const_str_digest_bcea6aefefc94a2ddb33ce29210609ff;
PyObject *const_str_digest_be249da1a7622adb74c0aeef1fb24ae7;
PyObject *const_str_plain__lookup_trust_boundary_request_no_throw;
PyObject *const_str_digest_61a438f5f48286adbdde2f45cda453dc;
PyObject *const_str_plain_GET;
PyObject *const_tuple_str_plain_method_str_plain_url_str_plain_headers_tuple;
PyObject *const_str_digest_5d52b6d5fcb468a0bb8b8829c336a817;
PyObject *const_str_digest_93fcdd301a16c2c9a74c2fdbe3aa0a36;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_digest_096ca139beaf8ac5201071e235ad66b6;
PyObject *const_str_plain_client;
PyObject *const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
PyObject *const_tuple_str_plain__exponential_backoff_tuple;
PyObject *const_tuple_str_plain__helpers_tuple;
PyObject *const_tuple_str_plain_credentials_tuple;
PyObject *const_tuple_str_plain_exceptions_tuple;
PyObject *const_tuple_str_plain_jwt_tuple;
PyObject *const_tuple_str_plain_metrics_tuple;
PyObject *const_tuple_str_plain_transport_tuple;
PyObject *const_str_digest_5d735bc80d16f0fedbdde78344a2d394;
PyObject *const_str_digest_1781891970018ef9597f363946d7327b;
PyObject *const_str_digest_b932071f578984d52d6d21644a5ba26d;
PyObject *const_tuple_none_false_true_none_tuple;
PyObject *const_tuple_true_tuple;
PyObject *const_str_plain_jwt_grant;
PyObject *const_str_plain_call_iam_generate_id_token_endpoint;
PyObject *const_str_plain_id_token_jwt_grant;
PyObject *const_tuple_none_none_true_tuple;
PyObject *const_str_plain_refresh_grant;
PyObject *const_tuple_none_tuple;
PyObject *const_str_plain__lookup_trust_boundary;
PyObject *const_tuple_true_none_tuple;
PyObject *const_str_digest_6e261346dc1fdf1b2ba6c03bec4715e4;
PyObject *const_tuple_efe892ea6c987be1d834b09758e6cc9d_tuple;
PyObject *const_str_digest_4502083255624bc13af5fc67c4a1711b;
PyObject *const_tuple_f1654950a5ffc05d941566159a8726c8_tuple;
PyObject *const_tuple_6c2648cf9acc19651cf06e7a3b5d6b67_tuple;
PyObject *const_tuple_24435875b1fadbe790f50de5775dbf4a_tuple;
PyObject *const_tuple_86e617b248fe73d5eeb0b6d49eaf1dce_tuple;
PyObject *const_tuple_744cf3cd4923dee406e49ea6381bff8b_tuple;
PyObject *const_tuple_9270871b7e86c6523bda4cb669efcc43_tuple;
PyObject *const_tuple_str_plain_response_data_str_plain_expires_in_tuple;
PyObject *const_tuple_c7f6c08e9d35447ac62e408f7e4b2b61_tuple;
PyObject *const_tuple_db0ee35d4f2bc7c455183c8e17228d11_tuple;
PyObject *const_tuple_6a181c98d0d197be6dc799f26a382512_tuple;
PyObject *const_tuple_d6564e976d9d93d88f3913130697055a_tuple;
PyObject *const_tuple_3a2ddb85b12c3f7395de4e457859e423_tuple;
PyObject *const_tuple_8107670417095489726fdb7b89222cd3_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[158];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("google.oauth2._client"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_RefreshError);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_retryable_tuple);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_126d63f60861e654fd4c8deaf6ded412);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_error);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_error_description_tuple);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_tuple_type_KeyError_type_ValueError_tuple);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_json);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_dumps);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_795d9b6d652298e6343f1916e17424ac);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_transport);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_RETRYABLE_STATUS_CODES);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_error_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_set_b9021210084e14a8cf34244701532551);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_89b9930870d783114f1977f37803f7c7);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_retryable_error_descriptions);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_064e74b0f4619f0b7282aa826558ef32);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_expires_in_none_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain__helpers);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_utcnow);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_datetime);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_timedelta);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_seconds_tuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_0461e382cddb51f19b57e3c74c32eb8b);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain__JSON_CONTENT_TYPE);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain__URLENCODED_CONTENT_TYPE);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_urllib);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_urlencode);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_f3fd0f72635220c9d36e1bb0526ac376);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_Authorization);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_update);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain__exponential_backoff);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_ExponentialBackoff);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_request);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_method);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_POST);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_url);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_token_uri);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_headers);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_headers_to_use);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_body);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_kwargs);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_data);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_loads);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_status);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_http_client);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_OK);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain__can_retry);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_status_code_str_plain_response_data_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_data);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_retryable_error);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_eaa9af1896cc21e94b87e0e3e8aebaa3);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain__token_endpoint_request_no_throw);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_access_token);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_use_json);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_can_retry);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain__handle_error_response);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_fbc351633d7ec2de1405e00eceda533e);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_assertion);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_grant_type);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain__JWT_GRANT_TYPE);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain__token_endpoint_request);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_metrics);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_API_CLIENT_HEADER);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_token_request_access_token_sa_assertion);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_can_retry_str_plain_headers_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_728562b8c352be6ab357abc24ac67e2b);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_dict_5c377bc7d8faa045be8b31f22779c87e);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain__parse_expiry);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_a7af7e07b45e1fd5913ace5d72133ed5);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_audience);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_includeEmail);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_true);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_useEmailAzp);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_replace);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_credentials);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_UNIVERSE_DOMAIN);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_access_token_str_plain_use_json_tuple);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_token);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_0031e5d3a6c81cc90766d5ea441959e1);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_jwt);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_dict_f3e8b111ded9225be3e397b0a4e57df6);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_utcfromtimestamp);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_exp);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_8b9ee3dd5e85e6d54e56f0a25fd2a4b9);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_token_request_id_token_sa_assertion);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_id_token);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_53d39e8de107dd8a0af6d51502b81232);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_refresh_token);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_digest_8e0c8508570713c264d2996befa3fc60);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain__REFRESH_GRANT_TYPE);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_client_id);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_client_secret);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_space);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_scope);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_rapt);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_can_retry_tuple);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain__handle_refresh_grant_response);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_digest_09d0b12d14c88443c682231f76dcd516);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain__lookup_trust_boundary_request);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_headers_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_encodedLocations);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_MalformedError);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_bcea6aefefc94a2ddb33ce29210609ff);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_be249da1a7622adb74c0aeef1fb24ae7);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain__lookup_trust_boundary_request_no_throw);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_61a438f5f48286adbdde2f45cda453dc);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_GET);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_method_str_plain_url_str_plain_headers_tuple);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_5d52b6d5fcb468a0bb8b8829c336a817);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_digest_93fcdd301a16c2c9a74c2fdbe3aa0a36);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_digest_096ca139beaf8ac5201071e235ad66b6);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_client);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__exponential_backoff_tuple);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__helpers_tuple);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_credentials_tuple);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_jwt_tuple);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_metrics_tuple);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_transport_tuple);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_5d735bc80d16f0fedbdde78344a2d394);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_digest_1781891970018ef9597f363946d7327b);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_b932071f578984d52d6d21644a5ba26d);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_tuple_none_false_true_none_tuple);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_jwt_grant);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_call_iam_generate_id_token_endpoint);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_id_token_jwt_grant);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_true_tuple);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_refresh_grant);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain__lookup_trust_boundary);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_tuple_true_none_tuple);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_digest_6e261346dc1fdf1b2ba6c03bec4715e4);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_tuple_efe892ea6c987be1d834b09758e6cc9d_tuple);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_digest_4502083255624bc13af5fc67c4a1711b);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_tuple_f1654950a5ffc05d941566159a8726c8_tuple);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_tuple_6c2648cf9acc19651cf06e7a3b5d6b67_tuple);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_tuple_24435875b1fadbe790f50de5775dbf4a_tuple);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_tuple_86e617b248fe73d5eeb0b6d49eaf1dce_tuple);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_tuple_744cf3cd4923dee406e49ea6381bff8b_tuple);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_tuple_9270871b7e86c6523bda4cb669efcc43_tuple);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_response_data_str_plain_expires_in_tuple);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_tuple_c7f6c08e9d35447ac62e408f7e4b2b61_tuple);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_tuple_db0ee35d4f2bc7c455183c8e17228d11_tuple);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_tuple_6a181c98d0d197be6dc799f26a382512_tuple);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_tuple_d6564e976d9d93d88f3913130697055a_tuple);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_tuple_3a2ddb85b12c3f7395de4e457859e423_tuple);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_tuple_8107670417095489726fdb7b89222cd3_tuple);
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
void checkModuleConstants_google$oauth2$_client(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_RefreshError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RefreshError);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_retryable_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_retryable_tuple);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_126d63f60861e654fd4c8deaf6ded412));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_126d63f60861e654fd4c8deaf6ded412);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_error);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_error_description_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_error_description_tuple);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_tuple_type_KeyError_type_ValueError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_KeyError_type_ValueError_tuple);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_json);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_dumps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dumps);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_795d9b6d652298e6343f1916e17424ac));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_795d9b6d652298e6343f1916e17424ac);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_transport));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_transport);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_RETRYABLE_STATUS_CODES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_RETRYABLE_STATUS_CODES);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_error_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_error_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_set_b9021210084e14a8cf34244701532551));
CHECK_OBJECT_DEEP(mod_consts.const_set_b9021210084e14a8cf34244701532551);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_89b9930870d783114f1977f37803f7c7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_89b9930870d783114f1977f37803f7c7);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_retryable_error_descriptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_retryable_error_descriptions);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_064e74b0f4619f0b7282aa826558ef32));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_064e74b0f4619f0b7282aa826558ef32);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_expires_in_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_expires_in_none_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain__helpers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__helpers);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_utcnow));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_utcnow);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_datetime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_datetime);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_timedelta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_timedelta);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_seconds_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_seconds_tuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_0461e382cddb51f19b57e3c74c32eb8b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0461e382cddb51f19b57e3c74c32eb8b);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain__JSON_CONTENT_TYPE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__JSON_CONTENT_TYPE);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encode);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain__URLENCODED_CONTENT_TYPE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__URLENCODED_CONTENT_TYPE);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_urllib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_urllib);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_urlencode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_urlencode);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_f3fd0f72635220c9d36e1bb0526ac376));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f3fd0f72635220c9d36e1bb0526ac376);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_Authorization));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Authorization);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_update));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_update);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain__exponential_backoff));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__exponential_backoff);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_ExponentialBackoff));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ExponentialBackoff);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_request);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_method));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_method);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_POST));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_POST);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_url);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_token_uri));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token_uri);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_headers);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_headers_to_use));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_headers_to_use);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_body));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_body);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_kwargs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_kwargs);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_data);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decode);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_loads));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_loads);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_status));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_status);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_http_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_http_client);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_OK));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OK);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain__can_retry));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__can_retry);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_status_code_str_plain_response_data_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_status_code_str_plain_response_data_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_data);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_retryable_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_retryable_error);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_eaa9af1896cc21e94b87e0e3e8aebaa3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eaa9af1896cc21e94b87e0e3e8aebaa3);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain__token_endpoint_request_no_throw));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__token_endpoint_request_no_throw);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_access_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_access_token);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_use_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_use_json);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_can_retry));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_can_retry);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain__handle_error_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__handle_error_response);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_fbc351633d7ec2de1405e00eceda533e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fbc351633d7ec2de1405e00eceda533e);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_assertion));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_assertion);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_grant_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_grant_type);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain__JWT_GRANT_TYPE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__JWT_GRANT_TYPE);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain__token_endpoint_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__token_endpoint_request);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_metrics));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_metrics);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_API_CLIENT_HEADER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_API_CLIENT_HEADER);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_token_request_access_token_sa_assertion));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token_request_access_token_sa_assertion);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_can_retry_str_plain_headers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_can_retry_str_plain_headers_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_728562b8c352be6ab357abc24ac67e2b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_728562b8c352be6ab357abc24ac67e2b);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_dict_5c377bc7d8faa045be8b31f22779c87e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5c377bc7d8faa045be8b31f22779c87e);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain__parse_expiry));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__parse_expiry);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_a7af7e07b45e1fd5913ace5d72133ed5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a7af7e07b45e1fd5913ace5d72133ed5);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_audience));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_audience);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_includeEmail));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_includeEmail);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_true));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_true);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_useEmailAzp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_useEmailAzp);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_replace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_replace);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_credentials));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_credentials);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_UNIVERSE_DOMAIN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_UNIVERSE_DOMAIN);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_access_token_str_plain_use_json_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_access_token_str_plain_use_json_tuple);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_0031e5d3a6c81cc90766d5ea441959e1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0031e5d3a6c81cc90766d5ea441959e1);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_jwt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_jwt);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_dict_f3e8b111ded9225be3e397b0a4e57df6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f3e8b111ded9225be3e397b0a4e57df6);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_utcfromtimestamp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_utcfromtimestamp);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_exp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exp);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_8b9ee3dd5e85e6d54e56f0a25fd2a4b9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8b9ee3dd5e85e6d54e56f0a25fd2a4b9);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_token_request_id_token_sa_assertion));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token_request_id_token_sa_assertion);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_id_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_id_token);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_53d39e8de107dd8a0af6d51502b81232));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_53d39e8de107dd8a0af6d51502b81232);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_refresh_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_refresh_token);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_digest_8e0c8508570713c264d2996befa3fc60));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8e0c8508570713c264d2996befa3fc60);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain__REFRESH_GRANT_TYPE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__REFRESH_GRANT_TYPE);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_client_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_client_id);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_client_secret));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_client_secret);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_space));
CHECK_OBJECT_DEEP(mod_consts.const_str_space);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_scope));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scope);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_rapt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rapt);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_can_retry_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_can_retry_tuple);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain__handle_refresh_grant_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__handle_refresh_grant_response);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_digest_09d0b12d14c88443c682231f76dcd516));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_09d0b12d14c88443c682231f76dcd516);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain__lookup_trust_boundary_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__lookup_trust_boundary_request);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_headers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_headers_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_encodedLocations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encodedLocations);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_MalformedError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MalformedError);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_bcea6aefefc94a2ddb33ce29210609ff));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bcea6aefefc94a2ddb33ce29210609ff);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_be249da1a7622adb74c0aeef1fb24ae7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_be249da1a7622adb74c0aeef1fb24ae7);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain__lookup_trust_boundary_request_no_throw));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__lookup_trust_boundary_request_no_throw);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_61a438f5f48286adbdde2f45cda453dc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_61a438f5f48286adbdde2f45cda453dc);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_GET));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GET);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_method_str_plain_url_str_plain_headers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_method_str_plain_url_str_plain_headers_tuple);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_5d52b6d5fcb468a0bb8b8829c336a817));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5d52b6d5fcb468a0bb8b8829c336a817);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_digest_93fcdd301a16c2c9a74c2fdbe3aa0a36));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_93fcdd301a16c2c9a74c2fdbe3aa0a36);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_digest_096ca139beaf8ac5201071e235ad66b6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_096ca139beaf8ac5201071e235ad66b6);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_client);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__exponential_backoff_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__exponential_backoff_tuple);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__helpers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__helpers_tuple);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_credentials_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_credentials_tuple);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_exceptions_tuple);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_jwt_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_jwt_tuple);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_metrics_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_metrics_tuple);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_transport_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_transport_tuple);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_5d735bc80d16f0fedbdde78344a2d394));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5d735bc80d16f0fedbdde78344a2d394);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_digest_1781891970018ef9597f363946d7327b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1781891970018ef9597f363946d7327b);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_b932071f578984d52d6d21644a5ba26d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b932071f578984d52d6d21644a5ba26d);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_tuple_none_false_true_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_false_true_none_tuple);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_jwt_grant));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_jwt_grant);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_call_iam_generate_id_token_endpoint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_call_iam_generate_id_token_endpoint);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_id_token_jwt_grant));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_id_token_jwt_grant);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_true_tuple);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_refresh_grant));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_refresh_grant);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain__lookup_trust_boundary));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__lookup_trust_boundary);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_tuple_true_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_none_tuple);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_digest_6e261346dc1fdf1b2ba6c03bec4715e4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6e261346dc1fdf1b2ba6c03bec4715e4);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_tuple_efe892ea6c987be1d834b09758e6cc9d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_efe892ea6c987be1d834b09758e6cc9d_tuple);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_digest_4502083255624bc13af5fc67c4a1711b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4502083255624bc13af5fc67c4a1711b);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_tuple_f1654950a5ffc05d941566159a8726c8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f1654950a5ffc05d941566159a8726c8_tuple);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_tuple_6c2648cf9acc19651cf06e7a3b5d6b67_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6c2648cf9acc19651cf06e7a3b5d6b67_tuple);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_tuple_24435875b1fadbe790f50de5775dbf4a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_24435875b1fadbe790f50de5775dbf4a_tuple);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_tuple_86e617b248fe73d5eeb0b6d49eaf1dce_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_86e617b248fe73d5eeb0b6d49eaf1dce_tuple);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_tuple_744cf3cd4923dee406e49ea6381bff8b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_744cf3cd4923dee406e49ea6381bff8b_tuple);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_tuple_9270871b7e86c6523bda4cb669efcc43_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9270871b7e86c6523bda4cb669efcc43_tuple);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_response_data_str_plain_expires_in_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_response_data_str_plain_expires_in_tuple);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_tuple_c7f6c08e9d35447ac62e408f7e4b2b61_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c7f6c08e9d35447ac62e408f7e4b2b61_tuple);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_tuple_db0ee35d4f2bc7c455183c8e17228d11_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_db0ee35d4f2bc7c455183c8e17228d11_tuple);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_tuple_6a181c98d0d197be6dc799f26a382512_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6a181c98d0d197be6dc799f26a382512_tuple);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_tuple_d6564e976d9d93d88f3913130697055a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d6564e976d9d93d88f3913130697055a_tuple);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_tuple_3a2ddb85b12c3f7395de4e457859e423_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3a2ddb85b12c3f7395de4e457859e423_tuple);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_tuple_8107670417095489726fdb7b89222cd3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8107670417095489726fdb7b89222cd3_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 24
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
static PyObject *module_var_accessor_google$oauth2$_client$_JSON_CONTENT_TYPE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__JSON_CONTENT_TYPE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$_client->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__JSON_CONTENT_TYPE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__JSON_CONTENT_TYPE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__JSON_CONTENT_TYPE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__JSON_CONTENT_TYPE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__JSON_CONTENT_TYPE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__JSON_CONTENT_TYPE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__JSON_CONTENT_TYPE);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$_client$_JWT_GRANT_TYPE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__JWT_GRANT_TYPE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$_client->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__JWT_GRANT_TYPE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__JWT_GRANT_TYPE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__JWT_GRANT_TYPE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__JWT_GRANT_TYPE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__JWT_GRANT_TYPE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__JWT_GRANT_TYPE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__JWT_GRANT_TYPE);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$_client$_REFRESH_GRANT_TYPE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__REFRESH_GRANT_TYPE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$_client->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__REFRESH_GRANT_TYPE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__REFRESH_GRANT_TYPE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__REFRESH_GRANT_TYPE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__REFRESH_GRANT_TYPE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__REFRESH_GRANT_TYPE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__REFRESH_GRANT_TYPE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__REFRESH_GRANT_TYPE);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$_client$_URLENCODED_CONTENT_TYPE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__URLENCODED_CONTENT_TYPE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$_client->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__URLENCODED_CONTENT_TYPE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__URLENCODED_CONTENT_TYPE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__URLENCODED_CONTENT_TYPE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__URLENCODED_CONTENT_TYPE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__URLENCODED_CONTENT_TYPE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__URLENCODED_CONTENT_TYPE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__URLENCODED_CONTENT_TYPE);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$_client$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$_client->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$_client$_can_retry(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__can_retry);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$_client->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__can_retry);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__can_retry, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__can_retry);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__can_retry, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__can_retry);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__can_retry);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__can_retry);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$_client$_exponential_backoff(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__exponential_backoff);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$_client->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__exponential_backoff);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__exponential_backoff, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__exponential_backoff);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__exponential_backoff, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__exponential_backoff);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__exponential_backoff);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__exponential_backoff);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$_client$_handle_error_response(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__handle_error_response);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$_client->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__handle_error_response);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__handle_error_response, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__handle_error_response);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__handle_error_response, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__handle_error_response);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__handle_error_response);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__handle_error_response);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$_client$_handle_refresh_grant_response(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__handle_refresh_grant_response);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$_client->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__handle_refresh_grant_response);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__handle_refresh_grant_response, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__handle_refresh_grant_response);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__handle_refresh_grant_response, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__handle_refresh_grant_response);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__handle_refresh_grant_response);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__handle_refresh_grant_response);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$_client$_helpers(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$_client->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__helpers);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__helpers, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__helpers);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__helpers, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$_client$_lookup_trust_boundary_request(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__lookup_trust_boundary_request);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$_client->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__lookup_trust_boundary_request);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__lookup_trust_boundary_request, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__lookup_trust_boundary_request);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__lookup_trust_boundary_request, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__lookup_trust_boundary_request);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__lookup_trust_boundary_request);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__lookup_trust_boundary_request);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$_client$_lookup_trust_boundary_request_no_throw(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__lookup_trust_boundary_request_no_throw);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$_client->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__lookup_trust_boundary_request_no_throw);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__lookup_trust_boundary_request_no_throw, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__lookup_trust_boundary_request_no_throw);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__lookup_trust_boundary_request_no_throw, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__lookup_trust_boundary_request_no_throw);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__lookup_trust_boundary_request_no_throw);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__lookup_trust_boundary_request_no_throw);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$_client$_parse_expiry(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__parse_expiry);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$_client->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__parse_expiry);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__parse_expiry, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__parse_expiry);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__parse_expiry, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__parse_expiry);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__parse_expiry);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__parse_expiry);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$_client$_token_endpoint_request(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__token_endpoint_request);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$_client->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__token_endpoint_request);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__token_endpoint_request, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__token_endpoint_request);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__token_endpoint_request, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__token_endpoint_request);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__token_endpoint_request);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__token_endpoint_request);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$_client$_token_endpoint_request_no_throw(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__token_endpoint_request_no_throw);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$_client->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__token_endpoint_request_no_throw);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__token_endpoint_request_no_throw, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__token_endpoint_request_no_throw);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__token_endpoint_request_no_throw, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__token_endpoint_request_no_throw);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__token_endpoint_request_no_throw);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__token_endpoint_request_no_throw);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$_client$credentials(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_credentials);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$_client->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_credentials);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_credentials, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_credentials);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_credentials, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_credentials);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_credentials);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_credentials);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$_client$datetime(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_datetime);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$_client->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_datetime);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_datetime, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_datetime);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_datetime, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_datetime);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_datetime);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_datetime);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$_client$exceptions(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$_client->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$_client$http_client(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_http_client);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$_client->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_http_client);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_http_client);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_http_client);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$_client$json(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$_client->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$_client$jwt(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_jwt);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$_client->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_jwt);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_jwt, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_jwt);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_jwt, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_jwt);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_jwt);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_jwt);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$_client$metrics(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_metrics);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$_client->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_metrics);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_metrics);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_metrics);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$_client$transport(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_transport);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$_client->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_transport);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_transport, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_transport);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_transport, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_transport);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_transport);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_transport);
    }

    return result;
}

static PyObject *module_var_accessor_google$oauth2$_client$urllib(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$oauth2$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$oauth2$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$oauth2$_client->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_abe5200b3403218d08d06ce40ac24f86;
static PyCodeObject *code_objects_84cfecf0a7669945744e00a7b5925642;
static PyCodeObject *code_objects_98f14249830ad9b33c7927940d49d209;
static PyCodeObject *code_objects_09758069fd80fb959b933a0655aae473;
static PyCodeObject *code_objects_1e595036faadc85f8f0bfc3890fa2ff0;
static PyCodeObject *code_objects_24a0c036429bbdfded271ffa66644cfc;
static PyCodeObject *code_objects_f593081b9a2b9028110a2a4377938217;
static PyCodeObject *code_objects_5c0bcbb8623d7789b3885a056a27391c;
static PyCodeObject *code_objects_8979353c0c00572f43fee8a6090a95c0;
static PyCodeObject *code_objects_f8295ed1d895a424b73b4fb8808370a3;
static PyCodeObject *code_objects_fdf50ef7e258979e0d272606a185c159;
static PyCodeObject *code_objects_ef6c39f7761193833111eede41337567;
static PyCodeObject *code_objects_03745765f918cbad31915482b9cd462f;
static PyCodeObject *code_objects_1e3e0b3289ff41f571e5a967583c495e;
static PyCodeObject *code_objects_06d784f6031ae7583fbb271e1bed7954;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_6e261346dc1fdf1b2ba6c03bec4715e4); CHECK_OBJECT(module_filename_obj);
code_objects_abe5200b3403218d08d06ce40ac24f86 = MAKE_CODE_OBJECT(module_filename_obj, 104, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_064e74b0f4619f0b7282aa826558ef32, mod_consts.const_tuple_efe892ea6c987be1d834b09758e6cc9d_tuple, NULL, 1, 0, 0);
code_objects_84cfecf0a7669945744e00a7b5925642 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_4502083255624bc13af5fc67c4a1711b, mod_consts.const_str_digest_4502083255624bc13af5fc67c4a1711b, NULL, NULL, 0, 0, 0);
code_objects_98f14249830ad9b33c7927940d49d209 = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__can_retry, mod_consts.const_str_plain__can_retry, mod_consts.const_tuple_f1654950a5ffc05d941566159a8726c8_tuple, NULL, 2, 0, 0);
code_objects_09758069fd80fb959b933a0655aae473 = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__handle_error_response, mod_consts.const_str_plain__handle_error_response, mod_consts.const_tuple_6c2648cf9acc19651cf06e7a3b5d6b67_tuple, NULL, 2, 0, 0);
code_objects_1e595036faadc85f8f0bfc3890fa2ff0 = MAKE_CODE_OBJECT(module_filename_obj, 428, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__handle_refresh_grant_response, mod_consts.const_str_plain__handle_refresh_grant_response, mod_consts.const_tuple_24435875b1fadbe790f50de5775dbf4a_tuple, NULL, 2, 0, 0);
code_objects_24a0c036429bbdfded271ffa66644cfc = MAKE_CODE_OBJECT(module_filename_obj, 517, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__lookup_trust_boundary, mod_consts.const_str_plain__lookup_trust_boundary, mod_consts.const_tuple_86e617b248fe73d5eeb0b6d49eaf1dce_tuple, NULL, 3, 0, 0);
code_objects_f593081b9a2b9028110a2a4377938217 = MAKE_CODE_OBJECT(module_filename_obj, 558, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__lookup_trust_boundary_request, mod_consts.const_str_plain__lookup_trust_boundary_request, mod_consts.const_tuple_744cf3cd4923dee406e49ea6381bff8b_tuple, NULL, 4, 0, 0);
code_objects_5c0bcbb8623d7789b3885a056a27391c = MAKE_CODE_OBJECT(module_filename_obj, 585, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__lookup_trust_boundary_request_no_throw, mod_consts.const_str_plain__lookup_trust_boundary_request_no_throw, mod_consts.const_tuple_9270871b7e86c6523bda4cb669efcc43_tuple, NULL, 4, 0, 0);
code_objects_8979353c0c00572f43fee8a6090a95c0 = MAKE_CODE_OBJECT(module_filename_obj, 113, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__parse_expiry, mod_consts.const_str_plain__parse_expiry, mod_consts.const_tuple_str_plain_response_data_str_plain_expires_in_tuple, NULL, 1, 0, 0);
code_objects_f8295ed1d895a424b73b4fb8808370a3 = MAKE_CODE_OBJECT(module_filename_obj, 220, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain__token_endpoint_request, mod_consts.const_str_plain__token_endpoint_request, mod_consts.const_tuple_c7f6c08e9d35447ac62e408f7e4b2b61_tuple, NULL, 7, 0, 0);
code_objects_fdf50ef7e258979e0d272606a185c159 = MAKE_CODE_OBJECT(module_filename_obj, 136, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain__token_endpoint_request_no_throw, mod_consts.const_str_plain__token_endpoint_request_no_throw, mod_consts.const_tuple_db0ee35d4f2bc7c455183c8e17228d11_tuple, NULL, 7, 0, 0);
code_objects_ef6c39f7761193833111eede41337567 = MAKE_CODE_OBJECT(module_filename_obj, 326, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_call_iam_generate_id_token_endpoint, mod_consts.const_str_plain_call_iam_generate_id_token_endpoint, mod_consts.const_tuple_6a181c98d0d197be6dc799f26a382512_tuple, NULL, 6, 0, 0);
code_objects_03745765f918cbad31915482b9cd462f = MAKE_CODE_OBJECT(module_filename_obj, 376, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_id_token_jwt_grant, mod_consts.const_str_plain_id_token_jwt_grant, mod_consts.const_tuple_d6564e976d9d93d88f3913130697055a_tuple, NULL, 4, 0, 0);
code_objects_1e3e0b3289ff41f571e5a967583c495e = MAKE_CODE_OBJECT(module_filename_obj, 278, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_jwt_grant, mod_consts.const_str_plain_jwt_grant, mod_consts.const_tuple_3a2ddb85b12c3f7395de4e457859e423_tuple, NULL, 4, 0, 0);
code_objects_06d784f6031ae7583fbb271e1bed7954 = MAKE_CODE_OBJECT(module_filename_obj, 459, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_refresh_grant, mod_consts.const_str_plain_refresh_grant, mod_consts.const_tuple_8107670417095489726fdb7b89222cd3_tuple, NULL, 8, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_google$oauth2$_client$$$function__2__can_retry$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_google$oauth2$_client$$$function__10_refresh_grant(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$oauth2$_client$$$function__11__lookup_trust_boundary(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$oauth2$_client$$$function__12__lookup_trust_boundary_request(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$oauth2$_client$$$function__13__lookup_trust_boundary_request_no_throw(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$oauth2$_client$$$function__1__handle_error_response(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$_client$$$function__2__can_retry(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$_client$$$function__3__parse_expiry(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$oauth2$_client$$$function__5__token_endpoint_request(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$oauth2$_client$$$function__6_jwt_grant(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$oauth2$_client$$$function__7_call_iam_generate_id_token_endpoint(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$oauth2$_client$$$function__8_id_token_jwt_grant(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$oauth2$_client$$$function__9__handle_refresh_grant_response(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_google$oauth2$_client$$$function__1__handle_error_response(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_response_data = python_pars[0];
PyObject *par_retryable_error = python_pars[1];
PyObject *var_error_details = NULL;
struct Nuitka_FrameObject *frame_frame_google$oauth2$_client$$$function__1__handle_error_response;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$_client$$$function__1__handle_error_response = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$oauth2$_client$$$function__1__handle_error_response)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$_client$$$function__1__handle_error_response);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$_client$$$function__1__handle_error_response == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$_client$$$function__1__handle_error_response = MAKE_FUNCTION_FRAME(tstate, code_objects_09758069fd80fb959b933a0655aae473, module_google$oauth2$_client, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$_client$$$function__1__handle_error_response->m_type_description == NULL);
frame_frame_google$oauth2$_client$$$function__1__handle_error_response = cache_frame_frame_google$oauth2$_client$$$function__1__handle_error_response;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$_client$$$function__1__handle_error_response);
assert(Py_REFCNT(frame_frame_google$oauth2$_client$$$function__1__handle_error_response) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_retryable_error);
tmp_truth_name_1 = CHECK_IF_TRUE(par_retryable_error);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_retryable_error);
tmp_assign_source_1 = par_retryable_error;
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_1 = Py_False;
condexpr_end_1:;
{
    PyObject *old = par_retryable_error;
    assert(old != NULL);
    par_retryable_error = tmp_assign_source_1;
    Py_INCREF(par_retryable_error);
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_response_data);
tmp_isinstance_inst_1 = par_response_data;
tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_expression_value_1 = module_var_accessor_google$oauth2$_client$exceptions(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_RefreshError);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_response_data);
tmp_kw_call_arg_value_0_1 = par_response_data;
CHECK_OBJECT(par_retryable_error);
tmp_kw_call_dict_value_0_1 = par_retryable_error;
frame_frame_google$oauth2$_client$$$function__1__handle_error_response->m_frame.f_lineno = 60;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_raise_type_input_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_retryable_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 60;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
tmp_kw_call_arg_value_0_2 = mod_consts.const_str_digest_126d63f60861e654fd4c8deaf6ded412;
CHECK_OBJECT(par_response_data);
tmp_expression_value_2 = par_response_data;
tmp_subscript_value_1 = mod_consts.const_str_plain_error;
tmp_kw_call_arg_value_1_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_response_data);
tmp_expression_value_3 = par_response_data;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 63;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
frame_frame_google$oauth2$_client$$$function__1__handle_error_response->m_frame.f_lineno = 63;
tmp_kw_call_arg_value_2_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_error_description_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_kw_call_arg_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 63;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
frame_frame_google$oauth2$_client$$$function__1__handle_error_response->m_frame.f_lineno = 62;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
CHECK_OBJECT(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
assert(var_error_details == NULL);
var_error_details = tmp_assign_source_2;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$_client$$$function__1__handle_error_response, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$_client$$$function__1__handle_error_response, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = mod_consts.const_tuple_type_KeyError_type_ValueError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_google$oauth2$_client$json(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_response_data);
tmp_args_element_value_1 = par_response_data;
frame_frame_google$oauth2$_client$$$function__1__handle_error_response->m_frame.f_lineno = 67;
tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_dumps, tmp_args_element_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
assert(var_error_details == NULL);
var_error_details = tmp_assign_source_3;
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 61;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$oauth2$_client$$$function__1__handle_error_response->m_frame)) {
        frame_frame_google$oauth2$_client$$$function__1__handle_error_response->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_3;
branch_end_2:;
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
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_arg_value_1_2;
PyObject *tmp_kw_call_dict_value_0_2;
tmp_expression_value_4 = module_var_accessor_google$oauth2$_client$exceptions(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_RefreshError);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_error_details);
tmp_kw_call_arg_value_0_3 = var_error_details;
CHECK_OBJECT(par_response_data);
tmp_kw_call_arg_value_1_2 = par_response_data;
CHECK_OBJECT(par_retryable_error);
tmp_kw_call_dict_value_0_2 = par_retryable_error;
frame_frame_google$oauth2$_client$$$function__1__handle_error_response->m_frame.f_lineno = 69;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_2};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_raise_type_input_2 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_retryable_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 69;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$_client$$$function__1__handle_error_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$_client$$$function__1__handle_error_response->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$_client$$$function__1__handle_error_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$_client$$$function__1__handle_error_response,
    type_description_1,
    par_response_data,
    par_retryable_error,
    var_error_details
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$_client$$$function__1__handle_error_response == cache_frame_frame_google$oauth2$_client$$$function__1__handle_error_response) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$_client$$$function__1__handle_error_response);
    cache_frame_frame_google$oauth2$_client$$$function__1__handle_error_response = NULL;
}

assertFrameObject(frame_frame_google$oauth2$_client$$$function__1__handle_error_response);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_retryable_error);
par_retryable_error = NULL;
Py_XDECREF(var_error_details);
var_error_details = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_response_data);
Py_DECREF(par_response_data);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_google$oauth2$_client$$$function__2__can_retry(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_status_code = python_pars[0];
PyObject *par_response_data = python_pars[1];
PyObject *var_error_desc = NULL;
PyObject *var_error_code = NULL;
struct Nuitka_CellObject *var_retryable_error_descriptions = Nuitka_Cell_NewEmpty();
PyObject *tmp_genexpr_1__$0 = NULL;
struct Nuitka_FrameObject *frame_frame_google$oauth2$_client$$$function__2__can_retry;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$_client$$$function__2__can_retry = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$oauth2$_client$$$function__2__can_retry)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$_client$$$function__2__can_retry);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$_client$$$function__2__can_retry == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$_client$$$function__2__can_retry = MAKE_FUNCTION_FRAME(tstate, code_objects_98f14249830ad9b33c7927940d49d209, module_google$oauth2$_client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$_client$$$function__2__can_retry->m_type_description == NULL);
frame_frame_google$oauth2$_client$$$function__2__can_retry = cache_frame_frame_google$oauth2$_client$$$function__2__can_retry;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$_client$$$function__2__can_retry);
assert(Py_REFCNT(frame_frame_google$oauth2$_client$$$function__2__can_retry) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_status_code);
tmp_cmp_expr_left_1 = par_status_code;
tmp_expression_value_1 = module_var_accessor_google$oauth2$_client$transport(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_DEFAULT_RETRYABLE_STATUS_CODES);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooc";
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
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_response_data);
tmp_expression_value_2 = par_response_data;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooooc";
    goto try_except_handler_2;
}
frame_frame_google$oauth2$_client$$$function__2__can_retry->m_frame.f_lineno = 90;
tmp_or_left_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_error_description_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooooc";
    goto try_except_handler_2;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 90;
type_description_1 = "ooooc";
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
tmp_or_right_value_1 = const_str_empty;
Py_INCREF(tmp_or_right_value_1);
tmp_assign_source_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assign_source_1 = tmp_or_left_value_1;
or_end_1:;
assert(var_error_desc == NULL);
var_error_desc = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_response_data);
tmp_expression_value_3 = par_response_data;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooc";
    goto try_except_handler_2;
}
frame_frame_google$oauth2$_client$$$function__2__can_retry->m_frame.f_lineno = 91;
tmp_or_left_value_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_error_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_or_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooc";
    goto try_except_handler_2;
}
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_2);

exception_lineno = 91;
type_description_1 = "ooooc";
    goto try_except_handler_2;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(tmp_or_left_value_2);
Py_DECREF(tmp_or_left_value_2);
tmp_or_right_value_2 = const_str_empty;
Py_INCREF(tmp_or_right_value_2);
tmp_assign_source_2 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_assign_source_2 = tmp_or_left_value_2;
or_end_2:;
assert(var_error_code == NULL);
var_error_code = tmp_assign_source_2;
}
{
bool tmp_condition_result_2;
int tmp_or_left_truth_3;
bool tmp_or_left_value_3;
bool tmp_or_right_value_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
CHECK_OBJECT(var_error_code);
tmp_isinstance_inst_1 = var_error_code;
tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooc";
    goto try_except_handler_2;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooc";
    goto try_except_handler_2;
}
tmp_or_left_value_3 = (tmp_res == 0) ? true : false;
tmp_or_left_truth_3 = tmp_or_left_value_3 != false ? 1 : 0;
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
CHECK_OBJECT(var_error_desc);
tmp_isinstance_inst_2 = var_error_desc;
tmp_isinstance_cls_2 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooc";
    goto try_except_handler_2;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooc";
    goto try_except_handler_2;
}
tmp_or_right_value_3 = (tmp_res == 0) ? true : false;
tmp_condition_result_2 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_condition_result_2 = tmp_or_left_value_3;
or_end_3:;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = PySet_New(mod_consts.const_set_b9021210084e14a8cf34244701532551);
assert(Nuitka_Cell_GET(var_retryable_error_descriptions) == NULL);
Nuitka_Cell_SET(var_retryable_error_descriptions, tmp_assign_source_3);

}
{
bool tmp_condition_result_3;
PyObject *tmp_any_arg_1;
PyObject *tmp_capi_result_1;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_error_code);
tmp_tuple_element_1 = var_error_code;
tmp_iter_arg_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_iter_arg_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_error_desc);
tmp_tuple_element_1 = var_error_desc;
PyTuple_SET_ITEM0(tmp_iter_arg_1, 1, tmp_tuple_element_1);
tmp_assign_source_4 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
assert(!(tmp_assign_source_4 == NULL));
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_4;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_closure_1[1] = var_retryable_error_descriptions;
Py_INCREF(tmp_closure_1[1]);
tmp_any_arg_1 = MAKE_GENERATOR_google$oauth2$_client$$$function__2__can_retry$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_3;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
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


exception_lineno = 104;
type_description_1 = "ooooc";
    goto try_except_handler_2;
}
tmp_condition_result_3 = CHECK_IF_TRUE(tmp_capi_result_1) == 1;
CHECK_OBJECT(tmp_capi_result_1);
Py_DECREF(tmp_capi_result_1);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_3:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$_client$$$function__2__can_retry, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$_client$$$function__2__can_retry, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_AttributeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(tmp_res == -1));
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
    exception_lineno = 88;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$oauth2$_client$$$function__2__can_retry->m_frame)) {
        frame_frame_google$oauth2$_client$$$function__2__can_retry->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooc";
goto try_except_handler_4;
branch_no_4:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
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
frame_return_exit_1:

// Put the previous frame back on top.
popFrameStack(tstate);

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$_client$$$function__2__can_retry, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$_client$$$function__2__can_retry->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$_client$$$function__2__can_retry, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$_client$$$function__2__can_retry,
    type_description_1,
    par_status_code,
    par_response_data,
    var_error_desc,
    var_error_code,
    var_retryable_error_descriptions
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$_client$$$function__2__can_retry == cache_frame_frame_google$oauth2$_client$$$function__2__can_retry) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$_client$$$function__2__can_retry);
    cache_frame_frame_google$oauth2$_client$$$function__2__can_retry = NULL;
}

assertFrameObject(frame_frame_google$oauth2$_client$$$function__2__can_retry);

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
Py_XDECREF(var_error_desc);
var_error_desc = NULL;
Py_XDECREF(var_error_code);
var_error_code = NULL;
CHECK_OBJECT(var_retryable_error_descriptions);
CHECK_OBJECT(var_retryable_error_descriptions);
Py_DECREF(var_retryable_error_descriptions);
var_retryable_error_descriptions = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_error_desc);
var_error_desc = NULL;
Py_XDECREF(var_error_code);
var_error_code = NULL;
CHECK_OBJECT(var_retryable_error_descriptions);
CHECK_OBJECT(var_retryable_error_descriptions);
Py_DECREF(var_retryable_error_descriptions);
var_retryable_error_descriptions = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_status_code);
Py_DECREF(par_status_code);
CHECK_OBJECT(par_response_data);
Py_DECREF(par_response_data);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_status_code);
Py_DECREF(par_status_code);
CHECK_OBJECT(par_response_data);
Py_DECREF(par_response_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct google$oauth2$_client$$$function__2__can_retry$$$genexpr__1_genexpr_locals {
PyObject *var_e;
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

static PyObject *google$oauth2$_client$$$function__2__can_retry$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$oauth2$_client$$$function__2__can_retry$$$genexpr__1_genexpr_locals *generator_heap = (struct google$oauth2$_client$$$function__2__can_retry$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_e = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_abe5200b3403218d08d06ce40ac24f86, module_google$oauth2$_client, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
generator_heap->type_description_1 = "Noc";
generator_heap->exception_lineno = 104;
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
    PyObject *old = generator_heap->var_e;
    generator_heap->var_e = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_e);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_e);
tmp_cmp_expr_left_1 = generator_heap->var_e;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_retryable_error_descriptions);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 104;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}

tmp_cmp_expr_right_1 = Nuitka_Cell_GET(generator->m_closure[1]);
generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 104;
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


generator_heap->exception_lineno = 104;
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


generator_heap->exception_lineno = 104;
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
    generator_heap->var_e,
    generator->m_closure[1]
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

Py_XDECREF(generator_heap->var_e);
generator_heap->var_e = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_e);
generator_heap->var_e = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_google$oauth2$_client$$$function__2__can_retry$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        google$oauth2$_client$$$function__2__can_retry$$$genexpr__1_genexpr_context,
        module_google$oauth2$_client,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_064e74b0f4619f0b7282aa826558ef32,
#endif
        code_objects_abe5200b3403218d08d06ce40ac24f86,
        closure,
        2,
#if 1
        sizeof(struct google$oauth2$_client$$$function__2__can_retry$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_google$oauth2$_client$$$function__3__parse_expiry(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_response_data = python_pars[0];
PyObject *var_expires_in = NULL;
struct Nuitka_FrameObject *frame_frame_google$oauth2$_client$$$function__3__parse_expiry;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$_client$$$function__3__parse_expiry = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$oauth2$_client$$$function__3__parse_expiry)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$_client$$$function__3__parse_expiry);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$_client$$$function__3__parse_expiry == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$_client$$$function__3__parse_expiry = MAKE_FUNCTION_FRAME(tstate, code_objects_8979353c0c00572f43fee8a6090a95c0, module_google$oauth2$_client, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$_client$$$function__3__parse_expiry->m_type_description == NULL);
frame_frame_google$oauth2$_client$$$function__3__parse_expiry = cache_frame_frame_google$oauth2$_client$$$function__3__parse_expiry;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$_client$$$function__3__parse_expiry);
assert(Py_REFCNT(frame_frame_google$oauth2$_client$$$function__3__parse_expiry) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_response_data);
tmp_expression_value_1 = par_response_data;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$_client$$$function__3__parse_expiry->m_frame.f_lineno = 123;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_expires_in_none_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_expires_in == NULL);
var_expires_in = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_expires_in);
tmp_cmp_expr_left_1 = var_expires_in;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(var_expires_in);
tmp_isinstance_inst_1 = var_expires_in;
tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_int_arg_1;
CHECK_OBJECT(var_expires_in);
tmp_int_arg_1 = var_expires_in;
tmp_assign_source_2 = PyNumber_Int(tmp_int_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_expires_in;
    assert(old != NULL);
    var_expires_in = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_2:;
{
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_value_0_1;
tmp_called_instance_1 = module_var_accessor_google$oauth2$_client$_helpers(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 131;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$_client$$$function__3__parse_expiry->m_frame.f_lineno = 131;
tmp_add_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_utcnow);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_google$oauth2$_client$datetime(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_datetime);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 131;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_timedelta);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 131;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_expires_in);
tmp_kw_call_value_0_1 = var_expires_in;
frame_frame_google$oauth2$_client$$$function__3__parse_expiry->m_frame.f_lineno = 131;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_add_expr_right_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_str_plain_seconds_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 131;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$_client$$$function__3__parse_expiry, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$_client$$$function__3__parse_expiry->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$_client$$$function__3__parse_expiry, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$_client$$$function__3__parse_expiry,
    type_description_1,
    par_response_data,
    var_expires_in
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$_client$$$function__3__parse_expiry == cache_frame_frame_google$oauth2$_client$$$function__3__parse_expiry) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$_client$$$function__3__parse_expiry);
    cache_frame_frame_google$oauth2$_client$$$function__3__parse_expiry = NULL;
}

assertFrameObject(frame_frame_google$oauth2$_client$$$function__3__parse_expiry);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_expires_in);
var_expires_in = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_expires_in);
var_expires_in = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_response_data);
Py_DECREF(par_response_data);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_response_data);
Py_DECREF(par_response_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_request = python_pars[0];
PyObject *par_token_uri = python_pars[1];
PyObject *par_body = python_pars[2];
PyObject *par_access_token = python_pars[3];
PyObject *par_use_json = python_pars[4];
PyObject *par_can_retry = python_pars[5];
PyObject *par_headers = python_pars[6];
PyObject *par_kwargs = python_pars[7];
PyObject *var_headers_to_use = NULL;
PyObject *var_response_data = NULL;
PyObject *var_retryable_error = NULL;
PyObject *var_retries = NULL;
PyObject *var__ = NULL;
PyObject *var_response = NULL;
PyObject *var_response_body = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw = MAKE_FUNCTION_FRAME(tstate, code_objects_fdf50ef7e258979e0d272606a185c159, module_google$oauth2$_client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw->m_type_description == NULL);
frame_frame_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw = cache_frame_frame_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw);
assert(Py_REFCNT(frame_frame_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_use_json);
tmp_truth_name_1 = CHECK_IF_TRUE(par_use_json);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "ooooooooooooooo";
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
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3;
tmp_dict_value_1 = module_var_accessor_google$oauth2$_client$_JSON_CONTENT_TYPE(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__JSON_CONTENT_TYPE);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 175;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
assert(var_headers_to_use == NULL);
var_headers_to_use = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_google$oauth2$_client$json(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 176;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_body);
tmp_args_element_value_1 = par_body;
frame_frame_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw->m_frame.f_lineno = 176;
tmp_expression_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_dumps, tmp_args_element_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_encode);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw->m_frame.f_lineno = 176;
tmp_assign_source_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_body;
    assert(old != NULL);
    par_body = tmp_assign_source_2;
    Py_DECREF(old);
}

}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
tmp_dict_key_2 = mod_consts.const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3;
tmp_dict_value_2 = module_var_accessor_google$oauth2$_client$_URLENCODED_CONTENT_TYPE(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__URLENCODED_CONTENT_TYPE);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 178;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
assert(var_headers_to_use == NULL);
var_headers_to_use = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
tmp_expression_value_3 = module_var_accessor_google$oauth2$_client$urllib(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urllib);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 179;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_parse);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_body);
tmp_args_element_value_2 = par_body;
frame_frame_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw->m_frame.f_lineno = 179;
tmp_expression_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_urlencode, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_encode);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw->m_frame.f_lineno = 179;
tmp_assign_source_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_body;
    assert(old != NULL);
    par_body = tmp_assign_source_4;
    Py_DECREF(old);
}

}
branch_end_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_access_token);
tmp_truth_name_2 = CHECK_IF_TRUE(par_access_token);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "ooooooooooooooo";
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
{
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_f3fd0f72635220c9d36e1bb0526ac376;
CHECK_OBJECT(par_access_token);
tmp_kw_call_arg_value_1_1 = par_access_token;
frame_frame_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw->m_frame.f_lineno = 182;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_headers_to_use);
tmp_dictset_dict = var_headers_to_use;
tmp_dictset_key = mod_consts.const_str_plain_Authorization;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_3;
CHECK_OBJECT(par_headers);
tmp_truth_name_3 = CHECK_IF_TRUE(par_headers);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(var_headers_to_use);
tmp_expression_value_4 = var_headers_to_use;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_update);
assert(!(tmp_called_value_3 == NULL));
CHECK_OBJECT(par_headers);
tmp_args_element_value_3 = par_headers;
frame_frame_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw->m_frame.f_lineno = 185;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_3:;
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = MAKE_DICT_EMPTY(tstate);
assert(var_response_data == NULL);
var_response_data = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = Py_False;
assert(var_retryable_error == NULL);
Py_INCREF(tmp_assign_source_6);
var_retryable_error = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_instance_3;
tmp_called_instance_3 = module_var_accessor_google$oauth2$_client$_exponential_backoff(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__exponential_backoff);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 190;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw->m_frame.f_lineno = 190;
tmp_assign_source_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_ExponentialBackoff);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_retries == NULL);
var_retries = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_retries);
tmp_iter_arg_1 = var_retries;
tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_8;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_9 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooooo";
exception_lineno = 191;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_10 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var__;
    var__ = tmp_assign_source_10;
    Py_INCREF(var__);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_direct_call_arg3_1;
if (par_request == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 192;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}

tmp_direct_call_arg1_1 = par_request;
tmp_dict_key_3 = mod_consts.const_str_plain_method;
tmp_dict_value_3 = mod_consts.const_str_plain_POST;
tmp_direct_call_arg2_1 = _PyDict_NewPresized( 4 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_url;
if (par_token_uri == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_token_uri);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 193;
type_description_1 = "ooooooooooooooo";
    goto dict_build_exception_1;
}

tmp_dict_value_3 = par_token_uri;
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_headers;
if (var_headers_to_use == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_headers_to_use);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 193;
type_description_1 = "ooooooooooooooo";
    goto dict_build_exception_1;
}

tmp_dict_value_3 = var_headers_to_use;
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_body;
if (par_body == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_body);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 193;
type_description_1 = "ooooooooooooooo";
    goto dict_build_exception_1;
}

tmp_dict_value_3 = par_body;
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_direct_call_arg2_1);
goto try_except_handler_2;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
if (par_kwargs == NULL) {
Py_DECREF(tmp_direct_call_arg2_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kwargs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 193;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}

tmp_direct_call_arg3_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_assign_source_11 = impl___main__$$$helper_function_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_response;
    var_response = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
bool tmp_condition_result_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(var_response);
tmp_expression_value_6 = var_response;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_data);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_4 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(var_response);
tmp_expression_value_8 = var_response;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_data);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw->m_frame.f_lineno = 196;
tmp_assign_source_12 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(var_response);
tmp_expression_value_9 = var_response;
tmp_assign_source_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_data);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
condexpr_end_1:;
{
    PyObject *old = var_response_body;
    var_response_body = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_4;
tmp_called_instance_4 = module_var_accessor_google$oauth2$_client$json(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 203;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_response_body);
tmp_args_element_value_4 = var_response_body;
frame_frame_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw->m_frame.f_lineno = 203;
tmp_assign_source_13 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_loads, tmp_args_element_value_4);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = var_response_data;
    var_response_data = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_ValueError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_5 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(var_response_body);
tmp_assign_source_14 = var_response_body;
{
    PyObject *old = var_response_data;
    var_response_data = tmp_assign_source_14;
    Py_INCREF(var_response_data);
    Py_XDECREF(old);
}

}
goto branch_end_4;
branch_no_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 201;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw->m_frame)) {
        frame_frame_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooooo";
goto try_except_handler_4;
branch_end_4:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_2;
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
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(var_response);
tmp_expression_value_10 = var_response;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_status);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
tmp_expression_value_11 = module_var_accessor_google$oauth2$_client$http_client(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_http_client);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 207;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_OK);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 207;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = Py_True;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_response_data);
tmp_tuple_element_1 = var_response_data;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = Py_None;
PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
goto try_return_handler_2;
}
branch_no_5:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_5;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_12;
PyObject *tmp_kw_call_value_1_1;
tmp_called_value_5 = module_var_accessor_google$oauth2$_client$_can_retry(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__can_retry);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 210;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_response);
tmp_expression_value_12 = var_response;
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_status);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_response_data);
tmp_kw_call_value_1_1 = var_response_data;
frame_frame_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw->m_frame.f_lineno = 210;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    tmp_assign_source_15 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_5, kw_values, mod_consts.const_tuple_str_plain_status_code_str_plain_response_data_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_retryable_error;
    var_retryable_error = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_7;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(par_can_retry);
tmp_operand_value_1 = par_can_retry;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
tmp_or_left_value_1 = (tmp_res == 0) ? true : false;
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_retryable_error);
tmp_operand_value_2 = var_retryable_error;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
tmp_or_right_value_1 = (tmp_res == 0) ? true : false;
tmp_condition_result_7 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_7 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_7 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = Py_False;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_response_data);
tmp_tuple_element_2 = var_response_data;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
CHECK_OBJECT(var_retryable_error);
tmp_tuple_element_2 = var_retryable_error;
PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_2);
goto try_return_handler_2;
}
branch_no_6:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
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
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = Py_False;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_3);
if (var_response_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_response_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 217;
type_description_1 = "ooooooooooooooo";
    goto tuple_build_exception_1;
}

tmp_tuple_element_3 = var_response_data;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_3);
if (var_retryable_error == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_retryable_error);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 217;
type_description_1 = "ooooooooooooooo";
    goto tuple_build_exception_1;
}

tmp_tuple_element_3 = var_retryable_error;
PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_3);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw,
    type_description_1,
    par_request,
    par_token_uri,
    par_body,
    par_access_token,
    par_use_json,
    par_can_retry,
    par_headers,
    par_kwargs,
    var_headers_to_use,
    var_response_data,
    var_retryable_error,
    var_retries,
    var__,
    var_response,
    var_response_body
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw == cache_frame_frame_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw);
    cache_frame_frame_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw = NULL;
}

assertFrameObject(frame_frame_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_body);
par_body = NULL;
Py_XDECREF(var_headers_to_use);
var_headers_to_use = NULL;
Py_XDECREF(var_response_data);
var_response_data = NULL;
Py_XDECREF(var_retryable_error);
var_retryable_error = NULL;
CHECK_OBJECT(var_retries);
CHECK_OBJECT(var_retries);
Py_DECREF(var_retries);
var_retries = NULL;
Py_XDECREF(var__);
var__ = NULL;
Py_XDECREF(var_response);
var_response = NULL;
Py_XDECREF(var_response_body);
var_response_body = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_body);
par_body = NULL;
Py_XDECREF(var_headers_to_use);
var_headers_to_use = NULL;
Py_XDECREF(var_response_data);
var_response_data = NULL;
Py_XDECREF(var_retryable_error);
var_retryable_error = NULL;
Py_XDECREF(var_retries);
var_retries = NULL;
Py_XDECREF(var__);
var__ = NULL;
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
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_token_uri);
Py_DECREF(par_token_uri);
CHECK_OBJECT(par_access_token);
Py_DECREF(par_access_token);
CHECK_OBJECT(par_use_json);
Py_DECREF(par_use_json);
CHECK_OBJECT(par_can_retry);
Py_DECREF(par_can_retry);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_token_uri);
Py_DECREF(par_token_uri);
CHECK_OBJECT(par_access_token);
Py_DECREF(par_access_token);
CHECK_OBJECT(par_use_json);
Py_DECREF(par_use_json);
CHECK_OBJECT(par_can_retry);
Py_DECREF(par_can_retry);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$oauth2$_client$$$function__5__token_endpoint_request(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_request = python_pars[0];
PyObject *par_token_uri = python_pars[1];
PyObject *par_body = python_pars[2];
PyObject *par_access_token = python_pars[3];
PyObject *par_use_json = python_pars[4];
PyObject *par_can_retry = python_pars[5];
PyObject *par_headers = python_pars[6];
PyObject *par_kwargs = python_pars[7];
PyObject *var_response_status_ok = NULL;
PyObject *var_response_data = NULL;
PyObject *var_retryable_error = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_google$oauth2$_client$$$function__5__token_endpoint_request;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$_client$$$function__5__token_endpoint_request = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$oauth2$_client$$$function__5__token_endpoint_request)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$_client$$$function__5__token_endpoint_request);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$_client$$$function__5__token_endpoint_request == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$_client$$$function__5__token_endpoint_request = MAKE_FUNCTION_FRAME(tstate, code_objects_f8295ed1d895a424b73b4fb8808370a3, module_google$oauth2$_client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$_client$$$function__5__token_endpoint_request->m_type_description == NULL);
frame_frame_google$oauth2$_client$$$function__5__token_endpoint_request = cache_frame_frame_google$oauth2$_client$$$function__5__token_endpoint_request;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$_client$$$function__5__token_endpoint_request);
assert(Py_REFCNT(frame_frame_google$oauth2$_client$$$function__5__token_endpoint_request) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_direct_call_arg4_1;
tmp_direct_call_arg1_1 = module_var_accessor_google$oauth2$_client$_token_endpoint_request_no_throw(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__token_endpoint_request_no_throw);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 263;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_request);
tmp_tuple_element_1 = par_request;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_token_uri);
tmp_tuple_element_1 = par_token_uri;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_body);
tmp_tuple_element_1 = par_body;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 2, tmp_tuple_element_1);
tmp_dict_key_1 = mod_consts.const_str_plain_access_token;
CHECK_OBJECT(par_access_token);
tmp_dict_value_1 = par_access_token;
tmp_direct_call_arg3_1 = _PyDict_NewPresized( 4 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_use_json;
CHECK_OBJECT(par_use_json);
tmp_dict_value_1 = par_use_json;
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_can_retry;
CHECK_OBJECT(par_can_retry);
tmp_dict_value_1 = par_can_retry;
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_headers;
CHECK_OBJECT(par_headers);
tmp_dict_value_1 = par_headers;
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg4_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg4_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
    tmp_iter_arg_1 = impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "ooooooooooo";
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
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 259;
type_description_1 = "ooooooooooo";
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
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 259;
type_description_1 = "ooooooooooo";
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
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 259;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_3 == NULL);
tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 259;
type_description_1 = "ooooooooooo";
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
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
assert(var_response_status_ok == NULL);
Py_INCREF(tmp_assign_source_5);
var_response_status_ok = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
assert(var_response_data == NULL);
Py_INCREF(tmp_assign_source_6);
var_response_data = tmp_assign_source_6;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
assert(var_retryable_error == NULL);
Py_INCREF(tmp_assign_source_7);
var_retryable_error = tmp_assign_source_7;
}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_response_status_ok);
tmp_operand_value_1 = var_response_status_ok;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "ooooooooooo";
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
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_google$oauth2$_client$_handle_error_response(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__handle_error_response);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 274;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_response_data);
tmp_args_element_value_1 = var_response_data;
CHECK_OBJECT(var_retryable_error);
tmp_args_element_value_2 = var_retryable_error;
frame_frame_google$oauth2$_client$$$function__5__token_endpoint_request->m_frame.f_lineno = 274;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "ooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$_client$$$function__5__token_endpoint_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$_client$$$function__5__token_endpoint_request->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$_client$$$function__5__token_endpoint_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$_client$$$function__5__token_endpoint_request,
    type_description_1,
    par_request,
    par_token_uri,
    par_body,
    par_access_token,
    par_use_json,
    par_can_retry,
    par_headers,
    par_kwargs,
    var_response_status_ok,
    var_response_data,
    var_retryable_error
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$_client$$$function__5__token_endpoint_request == cache_frame_frame_google$oauth2$_client$$$function__5__token_endpoint_request) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$_client$$$function__5__token_endpoint_request);
    cache_frame_frame_google$oauth2$_client$$$function__5__token_endpoint_request = NULL;
}

assertFrameObject(frame_frame_google$oauth2$_client$$$function__5__token_endpoint_request);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_response_data);
tmp_return_value = var_response_data;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_response_status_ok);
CHECK_OBJECT(var_response_status_ok);
Py_DECREF(var_response_status_ok);
var_response_status_ok = NULL;
CHECK_OBJECT(var_response_data);
CHECK_OBJECT(var_response_data);
Py_DECREF(var_response_data);
var_response_data = NULL;
CHECK_OBJECT(var_retryable_error);
CHECK_OBJECT(var_retryable_error);
Py_DECREF(var_retryable_error);
var_retryable_error = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_response_status_ok);
var_response_status_ok = NULL;
Py_XDECREF(var_response_data);
var_response_data = NULL;
Py_XDECREF(var_retryable_error);
var_retryable_error = NULL;
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
CHECK_OBJECT(par_token_uri);
Py_DECREF(par_token_uri);
CHECK_OBJECT(par_body);
Py_DECREF(par_body);
CHECK_OBJECT(par_access_token);
Py_DECREF(par_access_token);
CHECK_OBJECT(par_use_json);
Py_DECREF(par_use_json);
CHECK_OBJECT(par_can_retry);
Py_DECREF(par_can_retry);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_token_uri);
Py_DECREF(par_token_uri);
CHECK_OBJECT(par_body);
Py_DECREF(par_body);
CHECK_OBJECT(par_access_token);
Py_DECREF(par_access_token);
CHECK_OBJECT(par_use_json);
Py_DECREF(par_use_json);
CHECK_OBJECT(par_can_retry);
Py_DECREF(par_can_retry);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$oauth2$_client$$$function__6_jwt_grant(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_request = python_pars[0];
PyObject *par_token_uri = python_pars[1];
PyObject *par_assertion = python_pars[2];
PyObject *par_can_retry = python_pars[3];
PyObject *var_body = NULL;
PyObject *var_response_data = NULL;
PyObject *var_access_token = NULL;
PyObject *var_caught_exc = NULL;
PyObject *var_new_exc = NULL;
PyObject *var_expiry = NULL;
struct Nuitka_FrameObject *frame_frame_google$oauth2$_client$$$function__6_jwt_grant;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$_client$$$function__6_jwt_grant = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$oauth2$_client$$$function__6_jwt_grant)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$_client$$$function__6_jwt_grant);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$_client$$$function__6_jwt_grant == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$_client$$$function__6_jwt_grant = MAKE_FUNCTION_FRAME(tstate, code_objects_1e3e0b3289ff41f571e5a967583c495e, module_google$oauth2$_client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$_client$$$function__6_jwt_grant->m_type_description == NULL);
frame_frame_google$oauth2$_client$$$function__6_jwt_grant = cache_frame_frame_google$oauth2$_client$$$function__6_jwt_grant;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$_client$$$function__6_jwt_grant);
assert(Py_REFCNT(frame_frame_google$oauth2$_client$$$function__6_jwt_grant) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_assertion;
CHECK_OBJECT(par_assertion);
tmp_dict_value_1 = par_assertion;
tmp_assign_source_1 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_grant_type;
tmp_dict_value_1 = module_var_accessor_google$oauth2$_client$_JWT_GRANT_TYPE(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__JWT_GRANT_TYPE);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 301;
type_description_1 = "oooooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
assert(var_body == NULL);
var_body = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_1;
tmp_called_value_1 = module_var_accessor_google$oauth2$_client$_token_endpoint_request(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__token_endpoint_request);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 303;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_kw_call_arg_value_0_1 = par_request;
CHECK_OBJECT(par_token_uri);
tmp_kw_call_arg_value_1_1 = par_token_uri;
CHECK_OBJECT(var_body);
tmp_kw_call_arg_value_2_1 = var_body;
CHECK_OBJECT(par_can_retry);
tmp_kw_call_dict_value_0_1 = par_can_retry;
tmp_expression_value_1 = module_var_accessor_google$oauth2$_client$metrics(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_metrics);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 309;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_API_CLIENT_HEADER);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = module_var_accessor_google$oauth2$_client$metrics(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_metrics);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_2);

exception_lineno = 309;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$_client$$$function__6_jwt_grant->m_frame.f_lineno = 309;
tmp_dict_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_token_request_access_token_sa_assertion);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_2);

exception_lineno = 309;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_1_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_kw_call_dict_value_1_1, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_1 = "oooooooooo";
    goto dict_build_exception_2;
}
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_kw_call_dict_value_1_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
frame_frame_google$oauth2$_client$$$function__6_jwt_grant->m_frame.f_lineno = 303;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_can_retry_str_plain_headers_tuple);
}

CHECK_OBJECT(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_response_data == NULL);
var_response_data = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_response_data);
tmp_expression_value_2 = var_response_data;
tmp_subscript_value_1 = mod_consts.const_str_plain_access_token;
tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
assert(var_access_token == NULL);
var_access_token = tmp_assign_source_3;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$_client$$$function__6_jwt_grant, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$_client$$$function__6_jwt_grant, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_KeyError;
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
tmp_assign_source_4 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_4); 
assert(var_caught_exc == NULL);
Py_INCREF(tmp_assign_source_4);
var_caught_exc = tmp_assign_source_4;
}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_3 = module_var_accessor_google$oauth2$_client$exceptions(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 316;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_RefreshError);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_728562b8c352be6ab357abc24ac67e2b;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_response_data);
tmp_tuple_element_1 = var_response_data;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_5c377bc7d8faa045be8b31f22779c87e);
frame_frame_google$oauth2$_client$$$function__6_jwt_grant->m_frame.f_lineno = 316;
tmp_assign_source_5 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
assert(var_new_exc == NULL);
var_new_exc = tmp_assign_source_5;
}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_raise_cause_1;
CHECK_OBJECT(var_new_exc);
tmp_raise_type_input_1 = var_new_exc;
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_caught_exc);
tmp_raise_cause_1 = var_caught_exc;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 319;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oooooooooo";
goto try_except_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_caught_exc);
var_caught_exc = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 313;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$oauth2$_client$$$function__6_jwt_grant->m_frame)) {
        frame_frame_google$oauth2$_client$$$function__6_jwt_grant->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooo";
goto try_except_handler_3;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
tmp_called_value_3 = module_var_accessor_google$oauth2$_client$_parse_expiry(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__parse_expiry);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 321;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_response_data);
tmp_args_element_value_1 = var_response_data;
frame_frame_google$oauth2$_client$$$function__6_jwt_grant->m_frame.f_lineno = 321;
tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_expiry == NULL);
var_expiry = tmp_assign_source_6;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$_client$$$function__6_jwt_grant, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$_client$$$function__6_jwt_grant->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$_client$$$function__6_jwt_grant, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$_client$$$function__6_jwt_grant,
    type_description_1,
    par_request,
    par_token_uri,
    par_assertion,
    par_can_retry,
    var_body,
    var_response_data,
    var_access_token,
    var_caught_exc,
    var_new_exc,
    var_expiry
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$_client$$$function__6_jwt_grant == cache_frame_frame_google$oauth2$_client$$$function__6_jwt_grant) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$_client$$$function__6_jwt_grant);
    cache_frame_frame_google$oauth2$_client$$$function__6_jwt_grant = NULL;
}

assertFrameObject(frame_frame_google$oauth2$_client$$$function__6_jwt_grant);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(var_access_token);
tmp_tuple_element_2 = var_access_token;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_expiry);
tmp_tuple_element_2 = var_expiry;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
CHECK_OBJECT(var_response_data);
tmp_tuple_element_2 = var_response_data;
PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_2);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_body);
CHECK_OBJECT(var_body);
Py_DECREF(var_body);
var_body = NULL;
CHECK_OBJECT(var_response_data);
CHECK_OBJECT(var_response_data);
Py_DECREF(var_response_data);
var_response_data = NULL;
CHECK_OBJECT(var_access_token);
CHECK_OBJECT(var_access_token);
Py_DECREF(var_access_token);
var_access_token = NULL;
CHECK_OBJECT(var_expiry);
CHECK_OBJECT(var_expiry);
Py_DECREF(var_expiry);
var_expiry = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_body);
var_body = NULL;
Py_XDECREF(var_response_data);
var_response_data = NULL;
Py_XDECREF(var_access_token);
var_access_token = NULL;
Py_XDECREF(var_new_exc);
var_new_exc = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_token_uri);
Py_DECREF(par_token_uri);
CHECK_OBJECT(par_assertion);
Py_DECREF(par_assertion);
CHECK_OBJECT(par_can_retry);
Py_DECREF(par_can_retry);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_token_uri);
Py_DECREF(par_token_uri);
CHECK_OBJECT(par_assertion);
Py_DECREF(par_assertion);
CHECK_OBJECT(par_can_retry);
Py_DECREF(par_can_retry);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$oauth2$_client$$$function__7_call_iam_generate_id_token_endpoint(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_request = python_pars[0];
PyObject *par_iam_id_token_endpoint = python_pars[1];
PyObject *par_signer_email = python_pars[2];
PyObject *par_audience = python_pars[3];
PyObject *par_access_token = python_pars[4];
PyObject *par_universe_domain = python_pars[5];
PyObject *var_body = NULL;
PyObject *var_response_data = NULL;
PyObject *var_id_token = NULL;
PyObject *var_caught_exc = NULL;
PyObject *var_new_exc = NULL;
PyObject *var_payload = NULL;
PyObject *var_expiry = NULL;
int tmp_res;
struct Nuitka_FrameObject *frame_frame_google$oauth2$_client$$$function__7_call_iam_generate_id_token_endpoint;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$_client$$$function__7_call_iam_generate_id_token_endpoint = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_audience;
CHECK_OBJECT(par_audience);
tmp_dict_value_1 = par_audience;
tmp_assign_source_1 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_includeEmail;
tmp_dict_value_1 = mod_consts.const_str_plain_true;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_useEmailAzp;
tmp_dict_value_1 = mod_consts.const_str_plain_true;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
assert(var_body == NULL);
var_body = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$oauth2$_client$$$function__7_call_iam_generate_id_token_endpoint)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$_client$$$function__7_call_iam_generate_id_token_endpoint);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$_client$$$function__7_call_iam_generate_id_token_endpoint == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$_client$$$function__7_call_iam_generate_id_token_endpoint = MAKE_FUNCTION_FRAME(tstate, code_objects_ef6c39f7761193833111eede41337567, module_google$oauth2$_client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$_client$$$function__7_call_iam_generate_id_token_endpoint->m_type_description == NULL);
frame_frame_google$oauth2$_client$$$function__7_call_iam_generate_id_token_endpoint = cache_frame_frame_google$oauth2$_client$$$function__7_call_iam_generate_id_token_endpoint;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$_client$$$function__7_call_iam_generate_id_token_endpoint);
assert(Py_REFCNT(frame_frame_google$oauth2$_client$$$function__7_call_iam_generate_id_token_endpoint) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_called_value_1 = module_var_accessor_google$oauth2$_client$_token_endpoint_request(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__token_endpoint_request);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 352;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_kw_call_arg_value_0_1 = par_request;
CHECK_OBJECT(par_iam_id_token_endpoint);
tmp_expression_value_2 = par_iam_id_token_endpoint;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_replace);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = module_var_accessor_google$oauth2$_client$credentials(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_credentials);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 355;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_DEFAULT_UNIVERSE_DOMAIN);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 355;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_universe_domain);
tmp_args_element_value_2 = par_universe_domain;
frame_frame_google$oauth2$_client$$$function__7_call_iam_generate_id_token_endpoint->m_frame.f_lineno = 354;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_format);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_signer_email);
tmp_args_element_value_3 = par_signer_email;
frame_frame_google$oauth2$_client$$$function__7_call_iam_generate_id_token_endpoint->m_frame.f_lineno = 354;
tmp_kw_call_arg_value_1_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_body);
tmp_kw_call_arg_value_2_1 = var_body;
CHECK_OBJECT(par_access_token);
tmp_kw_call_dict_value_0_1 = par_access_token;
tmp_kw_call_dict_value_1_1 = Py_True;
frame_frame_google$oauth2$_client$$$function__7_call_iam_generate_id_token_endpoint->m_frame.f_lineno = 352;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_access_token_str_plain_use_json_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_response_data == NULL);
var_response_data = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_response_data);
tmp_expression_value_4 = var_response_data;
tmp_subscript_value_1 = mod_consts.const_str_plain_token;
tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
assert(var_id_token == NULL);
var_id_token = tmp_assign_source_3;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$_client$$$function__7_call_iam_generate_id_token_endpoint, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$_client$$$function__7_call_iam_generate_id_token_endpoint, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_KeyError;
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
tmp_assign_source_4 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_4); 
assert(var_caught_exc == NULL);
Py_INCREF(tmp_assign_source_4);
var_caught_exc = tmp_assign_source_4;
}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_5 = module_var_accessor_google$oauth2$_client$exceptions(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 365;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_RefreshError);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_0031e5d3a6c81cc90766d5ea441959e1;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_response_data);
tmp_tuple_element_1 = var_response_data;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_5c377bc7d8faa045be8b31f22779c87e);
frame_frame_google$oauth2$_client$$$function__7_call_iam_generate_id_token_endpoint->m_frame.f_lineno = 365;
tmp_assign_source_5 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
assert(var_new_exc == NULL);
var_new_exc = tmp_assign_source_5;
}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_raise_cause_1;
CHECK_OBJECT(var_new_exc);
tmp_raise_type_input_1 = var_new_exc;
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_caught_exc);
tmp_raise_cause_1 = var_caught_exc;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 368;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "ooooooooooooo";
goto try_except_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_caught_exc);
var_caught_exc = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 362;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$oauth2$_client$$$function__7_call_iam_generate_id_token_endpoint->m_frame)) {
        frame_frame_google$oauth2$_client$$$function__7_call_iam_generate_id_token_endpoint->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooo";
goto try_except_handler_3;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_2;
tmp_expression_value_6 = module_var_accessor_google$oauth2$_client$jwt(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_jwt);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 370;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_decode);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_id_token);
tmp_tuple_element_2 = var_id_token;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts.const_dict_f3e8b111ded9225be3e397b0a4e57df6);
frame_frame_google$oauth2$_client$$$function__7_call_iam_generate_id_token_endpoint->m_frame.f_lineno = 370;
tmp_assign_source_6 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
CHECK_OBJECT(tmp_kwargs_value_2);
Py_DECREF(tmp_kwargs_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_payload == NULL);
var_payload = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_2;
tmp_expression_value_7 = module_var_accessor_google$oauth2$_client$_helpers(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 371;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_utcfromtimestamp);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_payload);
tmp_expression_value_8 = var_payload;
tmp_subscript_value_2 = mod_consts.const_str_plain_exp;
tmp_args_element_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_2);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 371;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$_client$$$function__7_call_iam_generate_id_token_endpoint->m_frame.f_lineno = 371;
tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_expiry == NULL);
var_expiry = tmp_assign_source_7;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$_client$$$function__7_call_iam_generate_id_token_endpoint, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$_client$$$function__7_call_iam_generate_id_token_endpoint->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$_client$$$function__7_call_iam_generate_id_token_endpoint, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$_client$$$function__7_call_iam_generate_id_token_endpoint,
    type_description_1,
    par_request,
    par_iam_id_token_endpoint,
    par_signer_email,
    par_audience,
    par_access_token,
    par_universe_domain,
    var_body,
    var_response_data,
    var_id_token,
    var_caught_exc,
    var_new_exc,
    var_payload,
    var_expiry
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$_client$$$function__7_call_iam_generate_id_token_endpoint == cache_frame_frame_google$oauth2$_client$$$function__7_call_iam_generate_id_token_endpoint) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$_client$$$function__7_call_iam_generate_id_token_endpoint);
    cache_frame_frame_google$oauth2$_client$$$function__7_call_iam_generate_id_token_endpoint = NULL;
}

assertFrameObject(frame_frame_google$oauth2$_client$$$function__7_call_iam_generate_id_token_endpoint);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_tuple_element_3;
CHECK_OBJECT(var_id_token);
tmp_tuple_element_3 = var_id_token;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_3);
CHECK_OBJECT(var_expiry);
tmp_tuple_element_3 = var_expiry;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_3);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_body);
CHECK_OBJECT(var_body);
Py_DECREF(var_body);
var_body = NULL;
CHECK_OBJECT(var_response_data);
CHECK_OBJECT(var_response_data);
Py_DECREF(var_response_data);
var_response_data = NULL;
CHECK_OBJECT(var_id_token);
CHECK_OBJECT(var_id_token);
Py_DECREF(var_id_token);
var_id_token = NULL;
CHECK_OBJECT(var_payload);
CHECK_OBJECT(var_payload);
Py_DECREF(var_payload);
var_payload = NULL;
CHECK_OBJECT(var_expiry);
CHECK_OBJECT(var_expiry);
Py_DECREF(var_expiry);
var_expiry = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_body);
CHECK_OBJECT(var_body);
Py_DECREF(var_body);
var_body = NULL;
Py_XDECREF(var_response_data);
var_response_data = NULL;
Py_XDECREF(var_id_token);
var_id_token = NULL;
Py_XDECREF(var_new_exc);
var_new_exc = NULL;
Py_XDECREF(var_payload);
var_payload = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_iam_id_token_endpoint);
Py_DECREF(par_iam_id_token_endpoint);
CHECK_OBJECT(par_signer_email);
Py_DECREF(par_signer_email);
CHECK_OBJECT(par_audience);
Py_DECREF(par_audience);
CHECK_OBJECT(par_access_token);
Py_DECREF(par_access_token);
CHECK_OBJECT(par_universe_domain);
Py_DECREF(par_universe_domain);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_iam_id_token_endpoint);
Py_DECREF(par_iam_id_token_endpoint);
CHECK_OBJECT(par_signer_email);
Py_DECREF(par_signer_email);
CHECK_OBJECT(par_audience);
Py_DECREF(par_audience);
CHECK_OBJECT(par_access_token);
Py_DECREF(par_access_token);
CHECK_OBJECT(par_universe_domain);
Py_DECREF(par_universe_domain);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$oauth2$_client$$$function__8_id_token_jwt_grant(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_request = python_pars[0];
PyObject *par_token_uri = python_pars[1];
PyObject *par_assertion = python_pars[2];
PyObject *par_can_retry = python_pars[3];
PyObject *var_body = NULL;
PyObject *var_response_data = NULL;
PyObject *var_id_token = NULL;
PyObject *var_caught_exc = NULL;
PyObject *var_new_exc = NULL;
PyObject *var_payload = NULL;
PyObject *var_expiry = NULL;
struct Nuitka_FrameObject *frame_frame_google$oauth2$_client$$$function__8_id_token_jwt_grant;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$_client$$$function__8_id_token_jwt_grant = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$oauth2$_client$$$function__8_id_token_jwt_grant)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$_client$$$function__8_id_token_jwt_grant);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$_client$$$function__8_id_token_jwt_grant == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$_client$$$function__8_id_token_jwt_grant = MAKE_FUNCTION_FRAME(tstate, code_objects_03745765f918cbad31915482b9cd462f, module_google$oauth2$_client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$_client$$$function__8_id_token_jwt_grant->m_type_description == NULL);
frame_frame_google$oauth2$_client$$$function__8_id_token_jwt_grant = cache_frame_frame_google$oauth2$_client$$$function__8_id_token_jwt_grant;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$_client$$$function__8_id_token_jwt_grant);
assert(Py_REFCNT(frame_frame_google$oauth2$_client$$$function__8_id_token_jwt_grant) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_assertion;
CHECK_OBJECT(par_assertion);
tmp_dict_value_1 = par_assertion;
tmp_assign_source_1 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_grant_type;
tmp_dict_value_1 = module_var_accessor_google$oauth2$_client$_JWT_GRANT_TYPE(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__JWT_GRANT_TYPE);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 402;
type_description_1 = "ooooooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
assert(var_body == NULL);
var_body = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_1;
tmp_called_value_1 = module_var_accessor_google$oauth2$_client$_token_endpoint_request(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__token_endpoint_request);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 404;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_kw_call_arg_value_0_1 = par_request;
CHECK_OBJECT(par_token_uri);
tmp_kw_call_arg_value_1_1 = par_token_uri;
CHECK_OBJECT(var_body);
tmp_kw_call_arg_value_2_1 = var_body;
CHECK_OBJECT(par_can_retry);
tmp_kw_call_dict_value_0_1 = par_can_retry;
tmp_expression_value_1 = module_var_accessor_google$oauth2$_client$metrics(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_metrics);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 410;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_API_CLIENT_HEADER);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 410;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = module_var_accessor_google$oauth2$_client$metrics(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_metrics);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_2);

exception_lineno = 410;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$_client$$$function__8_id_token_jwt_grant->m_frame.f_lineno = 410;
tmp_dict_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_token_request_id_token_sa_assertion);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_2);

exception_lineno = 410;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_1_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_kw_call_dict_value_1_1, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 410;
type_description_1 = "ooooooooooo";
    goto dict_build_exception_2;
}
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_kw_call_dict_value_1_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
frame_frame_google$oauth2$_client$$$function__8_id_token_jwt_grant->m_frame.f_lineno = 404;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_can_retry_str_plain_headers_tuple);
}

CHECK_OBJECT(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 404;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_response_data == NULL);
var_response_data = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_response_data);
tmp_expression_value_2 = var_response_data;
tmp_subscript_value_1 = mod_consts.const_str_plain_id_token;
tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 415;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
assert(var_id_token == NULL);
var_id_token = tmp_assign_source_3;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$_client$$$function__8_id_token_jwt_grant, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$_client$$$function__8_id_token_jwt_grant, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_KeyError;
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
tmp_assign_source_4 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_4); 
assert(var_caught_exc == NULL);
Py_INCREF(tmp_assign_source_4);
var_caught_exc = tmp_assign_source_4;
}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_3 = module_var_accessor_google$oauth2$_client$exceptions(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 417;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_RefreshError);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_0031e5d3a6c81cc90766d5ea441959e1;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_response_data);
tmp_tuple_element_1 = var_response_data;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_5c377bc7d8faa045be8b31f22779c87e);
frame_frame_google$oauth2$_client$$$function__8_id_token_jwt_grant->m_frame.f_lineno = 417;
tmp_assign_source_5 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
assert(var_new_exc == NULL);
var_new_exc = tmp_assign_source_5;
}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_raise_cause_1;
CHECK_OBJECT(var_new_exc);
tmp_raise_type_input_1 = var_new_exc;
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_caught_exc);
tmp_raise_cause_1 = var_caught_exc;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 420;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "ooooooooooo";
goto try_except_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_caught_exc);
var_caught_exc = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 414;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$oauth2$_client$$$function__8_id_token_jwt_grant->m_frame)) {
        frame_frame_google$oauth2$_client$$$function__8_id_token_jwt_grant->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooo";
goto try_except_handler_3;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_2;
tmp_expression_value_4 = module_var_accessor_google$oauth2$_client$jwt(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_jwt);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 422;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_decode);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 422;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_id_token);
tmp_tuple_element_2 = var_id_token;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts.const_dict_f3e8b111ded9225be3e397b0a4e57df6);
frame_frame_google$oauth2$_client$$$function__8_id_token_jwt_grant->m_frame.f_lineno = 422;
tmp_assign_source_6 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
CHECK_OBJECT(tmp_kwargs_value_2);
Py_DECREF(tmp_kwargs_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 422;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_payload == NULL);
var_payload = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
tmp_expression_value_5 = module_var_accessor_google$oauth2$_client$_helpers(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 423;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_utcfromtimestamp);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_payload);
tmp_expression_value_6 = var_payload;
tmp_subscript_value_2 = mod_consts.const_str_plain_exp;
tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 423;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$_client$$$function__8_id_token_jwt_grant->m_frame.f_lineno = 423;
tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_expiry == NULL);
var_expiry = tmp_assign_source_7;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$_client$$$function__8_id_token_jwt_grant, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$_client$$$function__8_id_token_jwt_grant->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$_client$$$function__8_id_token_jwt_grant, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$_client$$$function__8_id_token_jwt_grant,
    type_description_1,
    par_request,
    par_token_uri,
    par_assertion,
    par_can_retry,
    var_body,
    var_response_data,
    var_id_token,
    var_caught_exc,
    var_new_exc,
    var_payload,
    var_expiry
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$_client$$$function__8_id_token_jwt_grant == cache_frame_frame_google$oauth2$_client$$$function__8_id_token_jwt_grant) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$_client$$$function__8_id_token_jwt_grant);
    cache_frame_frame_google$oauth2$_client$$$function__8_id_token_jwt_grant = NULL;
}

assertFrameObject(frame_frame_google$oauth2$_client$$$function__8_id_token_jwt_grant);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_tuple_element_3;
CHECK_OBJECT(var_id_token);
tmp_tuple_element_3 = var_id_token;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_3);
CHECK_OBJECT(var_expiry);
tmp_tuple_element_3 = var_expiry;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_3);
CHECK_OBJECT(var_response_data);
tmp_tuple_element_3 = var_response_data;
PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_3);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_body);
CHECK_OBJECT(var_body);
Py_DECREF(var_body);
var_body = NULL;
CHECK_OBJECT(var_response_data);
CHECK_OBJECT(var_response_data);
Py_DECREF(var_response_data);
var_response_data = NULL;
CHECK_OBJECT(var_id_token);
CHECK_OBJECT(var_id_token);
Py_DECREF(var_id_token);
var_id_token = NULL;
CHECK_OBJECT(var_payload);
CHECK_OBJECT(var_payload);
Py_DECREF(var_payload);
var_payload = NULL;
CHECK_OBJECT(var_expiry);
CHECK_OBJECT(var_expiry);
Py_DECREF(var_expiry);
var_expiry = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_body);
var_body = NULL;
Py_XDECREF(var_response_data);
var_response_data = NULL;
Py_XDECREF(var_id_token);
var_id_token = NULL;
Py_XDECREF(var_new_exc);
var_new_exc = NULL;
Py_XDECREF(var_payload);
var_payload = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_token_uri);
Py_DECREF(par_token_uri);
CHECK_OBJECT(par_assertion);
Py_DECREF(par_assertion);
CHECK_OBJECT(par_can_retry);
Py_DECREF(par_can_retry);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_token_uri);
Py_DECREF(par_token_uri);
CHECK_OBJECT(par_assertion);
Py_DECREF(par_assertion);
CHECK_OBJECT(par_can_retry);
Py_DECREF(par_can_retry);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$oauth2$_client$$$function__9__handle_refresh_grant_response(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_response_data = python_pars[0];
PyObject *par_refresh_token = python_pars[1];
PyObject *var_access_token = NULL;
PyObject *var_caught_exc = NULL;
PyObject *var_new_exc = NULL;
PyObject *var_expiry = NULL;
struct Nuitka_FrameObject *frame_frame_google$oauth2$_client$$$function__9__handle_refresh_grant_response;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$_client$$$function__9__handle_refresh_grant_response = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$oauth2$_client$$$function__9__handle_refresh_grant_response)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$_client$$$function__9__handle_refresh_grant_response);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$_client$$$function__9__handle_refresh_grant_response == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$_client$$$function__9__handle_refresh_grant_response = MAKE_FUNCTION_FRAME(tstate, code_objects_1e595036faadc85f8f0bfc3890fa2ff0, module_google$oauth2$_client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$_client$$$function__9__handle_refresh_grant_response->m_type_description == NULL);
frame_frame_google$oauth2$_client$$$function__9__handle_refresh_grant_response = cache_frame_frame_google$oauth2$_client$$$function__9__handle_refresh_grant_response;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$_client$$$function__9__handle_refresh_grant_response);
assert(Py_REFCNT(frame_frame_google$oauth2$_client$$$function__9__handle_refresh_grant_response) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_response_data);
tmp_expression_value_1 = par_response_data;
tmp_subscript_value_1 = mod_consts.const_str_plain_access_token;
tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 446;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
assert(var_access_token == NULL);
var_access_token = tmp_assign_source_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$_client$$$function__9__handle_refresh_grant_response, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$_client$$$function__9__handle_refresh_grant_response, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_KeyError;
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
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_2); 
assert(var_caught_exc == NULL);
Py_INCREF(tmp_assign_source_2);
var_caught_exc = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_2 = module_var_accessor_google$oauth2$_client$exceptions(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 448;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_RefreshError);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_728562b8c352be6ab357abc24ac67e2b;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_response_data);
tmp_tuple_element_1 = par_response_data;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_5c377bc7d8faa045be8b31f22779c87e);
frame_frame_google$oauth2$_client$$$function__9__handle_refresh_grant_response->m_frame.f_lineno = 448;
tmp_assign_source_3 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
assert(var_new_exc == NULL);
var_new_exc = tmp_assign_source_3;
}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_raise_cause_1;
CHECK_OBJECT(var_new_exc);
tmp_raise_type_input_1 = var_new_exc;
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_caught_exc);
tmp_raise_cause_1 = var_caught_exc;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 451;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oooooo";
goto try_except_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_caught_exc);
var_caught_exc = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 445;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$oauth2$_client$$$function__9__handle_refresh_grant_response->m_frame)) {
        frame_frame_google$oauth2$_client$$$function__9__handle_refresh_grant_response->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooo";
goto try_except_handler_3;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_response_data);
tmp_expression_value_3 = par_response_data;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 453;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_plain_refresh_token;
CHECK_OBJECT(par_refresh_token);
tmp_args_element_value_2 = par_refresh_token;
frame_frame_google$oauth2$_client$$$function__9__handle_refresh_grant_response->m_frame.f_lineno = 453;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 453;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_refresh_token;
    assert(old != NULL);
    par_refresh_token = tmp_assign_source_4;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
tmp_called_value_3 = module_var_accessor_google$oauth2$_client$_parse_expiry(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__parse_expiry);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 454;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_response_data);
tmp_args_element_value_3 = par_response_data;
frame_frame_google$oauth2$_client$$$function__9__handle_refresh_grant_response->m_frame.f_lineno = 454;
tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_expiry == NULL);
var_expiry = tmp_assign_source_5;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$_client$$$function__9__handle_refresh_grant_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$_client$$$function__9__handle_refresh_grant_response->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$_client$$$function__9__handle_refresh_grant_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$_client$$$function__9__handle_refresh_grant_response,
    type_description_1,
    par_response_data,
    par_refresh_token,
    var_access_token,
    var_caught_exc,
    var_new_exc,
    var_expiry
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$_client$$$function__9__handle_refresh_grant_response == cache_frame_frame_google$oauth2$_client$$$function__9__handle_refresh_grant_response) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$_client$$$function__9__handle_refresh_grant_response);
    cache_frame_frame_google$oauth2$_client$$$function__9__handle_refresh_grant_response = NULL;
}

assertFrameObject(frame_frame_google$oauth2$_client$$$function__9__handle_refresh_grant_response);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(var_access_token);
tmp_tuple_element_2 = var_access_token;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_refresh_token);
tmp_tuple_element_2 = par_refresh_token;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
CHECK_OBJECT(var_expiry);
tmp_tuple_element_2 = var_expiry;
PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_2);
CHECK_OBJECT(par_response_data);
tmp_tuple_element_2 = par_response_data;
PyTuple_SET_ITEM0(tmp_return_value, 3, tmp_tuple_element_2);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_refresh_token);
CHECK_OBJECT(par_refresh_token);
Py_DECREF(par_refresh_token);
par_refresh_token = NULL;
CHECK_OBJECT(var_access_token);
CHECK_OBJECT(var_access_token);
Py_DECREF(var_access_token);
var_access_token = NULL;
CHECK_OBJECT(var_expiry);
CHECK_OBJECT(var_expiry);
Py_DECREF(var_expiry);
var_expiry = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_refresh_token);
par_refresh_token = NULL;
Py_XDECREF(var_access_token);
var_access_token = NULL;
Py_XDECREF(var_new_exc);
var_new_exc = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_response_data);
Py_DECREF(par_response_data);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_response_data);
Py_DECREF(par_response_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$oauth2$_client$$$function__10_refresh_grant(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
PyObject *par_can_retry = python_pars[7];
PyObject *var_body = NULL;
PyObject *var_response_data = NULL;
struct Nuitka_FrameObject *frame_frame_google$oauth2$_client$$$function__10_refresh_grant;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$_client$$$function__10_refresh_grant = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$oauth2$_client$$$function__10_refresh_grant)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$_client$$$function__10_refresh_grant);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$_client$$$function__10_refresh_grant == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$_client$$$function__10_refresh_grant = MAKE_FUNCTION_FRAME(tstate, code_objects_06d784f6031ae7583fbb271e1bed7954, module_google$oauth2$_client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$_client$$$function__10_refresh_grant->m_type_description == NULL);
frame_frame_google$oauth2$_client$$$function__10_refresh_grant = cache_frame_frame_google$oauth2$_client$$$function__10_refresh_grant;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$_client$$$function__10_refresh_grant);
assert(Py_REFCNT(frame_frame_google$oauth2$_client$$$function__10_refresh_grant) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_grant_type;
tmp_dict_value_1 = module_var_accessor_google$oauth2$_client$_REFRESH_GRANT_TYPE(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__REFRESH_GRANT_TYPE);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 501;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = _PyDict_NewPresized( 4 );
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
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


exception_lineno = 506;
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
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_str_arg_value_1 = mod_consts.const_str_space;
CHECK_OBJECT(par_scopes);
tmp_iterable_value_1 = par_scopes;
tmp_dictset_value = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 507;
type_description_1 = "oooooooooo";
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


exception_lineno = 508;
type_description_1 = "oooooooooo";
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
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_1 = module_var_accessor_google$oauth2$_client$_token_endpoint_request(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__token_endpoint_request);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 511;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_kw_call_arg_value_0_1 = par_request;
CHECK_OBJECT(par_token_uri);
tmp_kw_call_arg_value_1_1 = par_token_uri;
CHECK_OBJECT(var_body);
tmp_kw_call_arg_value_2_1 = var_body;
CHECK_OBJECT(par_can_retry);
tmp_kw_call_dict_value_0_1 = par_can_retry;
frame_frame_google$oauth2$_client$$$function__10_refresh_grant->m_frame.f_lineno = 511;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_can_retry_tuple);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 511;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_response_data == NULL);
var_response_data = tmp_assign_source_2;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_2 = module_var_accessor_google$oauth2$_client$_handle_refresh_grant_response(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__handle_refresh_grant_response);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 514;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_response_data);
tmp_args_element_value_1 = var_response_data;
CHECK_OBJECT(par_refresh_token);
tmp_args_element_value_2 = par_refresh_token;
frame_frame_google$oauth2$_client$$$function__10_refresh_grant->m_frame.f_lineno = 514;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 514;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$_client$$$function__10_refresh_grant, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$_client$$$function__10_refresh_grant->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$_client$$$function__10_refresh_grant, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$_client$$$function__10_refresh_grant,
    type_description_1,
    par_request,
    par_token_uri,
    par_refresh_token,
    par_client_id,
    par_client_secret,
    par_scopes,
    par_rapt_token,
    par_can_retry,
    var_body,
    var_response_data
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$_client$$$function__10_refresh_grant == cache_frame_frame_google$oauth2$_client$$$function__10_refresh_grant) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$_client$$$function__10_refresh_grant);
    cache_frame_frame_google$oauth2$_client$$$function__10_refresh_grant = NULL;
}

assertFrameObject(frame_frame_google$oauth2$_client$$$function__10_refresh_grant);

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
CHECK_OBJECT(var_response_data);
CHECK_OBJECT(var_response_data);
Py_DECREF(var_response_data);
var_response_data = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_body);
var_body = NULL;
Py_XDECREF(var_response_data);
var_response_data = NULL;
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
CHECK_OBJECT(par_rapt_token);
Py_DECREF(par_rapt_token);
CHECK_OBJECT(par_can_retry);
Py_DECREF(par_can_retry);
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
CHECK_OBJECT(par_rapt_token);
Py_DECREF(par_rapt_token);
CHECK_OBJECT(par_can_retry);
Py_DECREF(par_can_retry);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$oauth2$_client$$$function__11__lookup_trust_boundary(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_request = python_pars[0];
PyObject *par_url = python_pars[1];
PyObject *par_headers = python_pars[2];
PyObject *var_response_data = NULL;
struct Nuitka_FrameObject *frame_frame_google$oauth2$_client$$$function__11__lookup_trust_boundary;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$_client$$$function__11__lookup_trust_boundary = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$oauth2$_client$$$function__11__lookup_trust_boundary)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$_client$$$function__11__lookup_trust_boundary);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$_client$$$function__11__lookup_trust_boundary == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$_client$$$function__11__lookup_trust_boundary = MAKE_FUNCTION_FRAME(tstate, code_objects_24a0c036429bbdfded271ffa66644cfc, module_google$oauth2$_client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$_client$$$function__11__lookup_trust_boundary->m_type_description == NULL);
frame_frame_google$oauth2$_client$$$function__11__lookup_trust_boundary = cache_frame_frame_google$oauth2$_client$$$function__11__lookup_trust_boundary;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$_client$$$function__11__lookup_trust_boundary);
assert(Py_REFCNT(frame_frame_google$oauth2$_client$$$function__11__lookup_trust_boundary) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_1 = module_var_accessor_google$oauth2$_client$_lookup_trust_boundary_request(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__lookup_trust_boundary_request);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 549;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_kw_call_arg_value_0_1 = par_request;
CHECK_OBJECT(par_url);
tmp_kw_call_arg_value_1_1 = par_url;
CHECK_OBJECT(par_headers);
tmp_kw_call_dict_value_0_1 = par_headers;
frame_frame_google$oauth2$_client$$$function__11__lookup_trust_boundary->m_frame.f_lineno = 549;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_headers_tuple);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 549;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_response_data == NULL);
var_response_data = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = mod_consts.const_str_plain_encodedLocations;
CHECK_OBJECT(var_response_data);
tmp_cmp_expr_right_1 = var_response_data;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 551;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_2;
tmp_expression_value_1 = module_var_accessor_google$oauth2$_client$exceptions(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 552;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_MalformedError);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_2 = mod_consts.const_str_digest_bcea6aefefc94a2ddb33ce29210609ff;
CHECK_OBJECT(var_response_data);
tmp_kw_call_arg_value_1_2 = var_response_data;
frame_frame_google$oauth2$_client$$$function__11__lookup_trust_boundary->m_frame.f_lineno = 553;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 553;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$_client$$$function__11__lookup_trust_boundary->m_frame.f_lineno = 552;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 552;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 552;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$_client$$$function__11__lookup_trust_boundary, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$_client$$$function__11__lookup_trust_boundary->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$_client$$$function__11__lookup_trust_boundary, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$_client$$$function__11__lookup_trust_boundary,
    type_description_1,
    par_request,
    par_url,
    par_headers,
    var_response_data
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$_client$$$function__11__lookup_trust_boundary == cache_frame_frame_google$oauth2$_client$$$function__11__lookup_trust_boundary) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$_client$$$function__11__lookup_trust_boundary);
    cache_frame_frame_google$oauth2$_client$$$function__11__lookup_trust_boundary = NULL;
}

assertFrameObject(frame_frame_google$oauth2$_client$$$function__11__lookup_trust_boundary);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_response_data);
tmp_return_value = var_response_data;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_response_data);
CHECK_OBJECT(var_response_data);
Py_DECREF(var_response_data);
var_response_data = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_response_data);
var_response_data = NULL;
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
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$oauth2$_client$$$function__12__lookup_trust_boundary_request(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_request = python_pars[0];
PyObject *par_url = python_pars[1];
PyObject *par_can_retry = python_pars[2];
PyObject *par_headers = python_pars[3];
PyObject *var_response_status_ok = NULL;
PyObject *var_response_data = NULL;
PyObject *var_retryable_error = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_google$oauth2$_client$$$function__12__lookup_trust_boundary_request;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$_client$$$function__12__lookup_trust_boundary_request = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$oauth2$_client$$$function__12__lookup_trust_boundary_request)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$_client$$$function__12__lookup_trust_boundary_request);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$_client$$$function__12__lookup_trust_boundary_request == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$_client$$$function__12__lookup_trust_boundary_request = MAKE_FUNCTION_FRAME(tstate, code_objects_f593081b9a2b9028110a2a4377938217, module_google$oauth2$_client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$_client$$$function__12__lookup_trust_boundary_request->m_type_description == NULL);
frame_frame_google$oauth2$_client$$$function__12__lookup_trust_boundary_request = cache_frame_frame_google$oauth2$_client$$$function__12__lookup_trust_boundary_request;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$_client$$$function__12__lookup_trust_boundary_request);
assert(Py_REFCNT(frame_frame_google$oauth2$_client$$$function__12__lookup_trust_boundary_request) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_1 = module_var_accessor_google$oauth2$_client$_lookup_trust_boundary_request_no_throw(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__lookup_trust_boundary_request_no_throw);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 579;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_request);
tmp_args_element_value_1 = par_request;
CHECK_OBJECT(par_url);
tmp_args_element_value_2 = par_url;
CHECK_OBJECT(par_can_retry);
tmp_args_element_value_3 = par_can_retry;
CHECK_OBJECT(par_headers);
tmp_args_element_value_4 = par_headers;
frame_frame_google$oauth2$_client$$$function__12__lookup_trust_boundary_request->m_frame.f_lineno = 579;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 579;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 575;
type_description_1 = "ooooooo";
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
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 575;
type_description_1 = "ooooooo";
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
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 575;
type_description_1 = "ooooooo";
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
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 575;
type_description_1 = "ooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_3 == NULL);
tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 575;
type_description_1 = "ooooooo";
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
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
assert(var_response_status_ok == NULL);
Py_INCREF(tmp_assign_source_5);
var_response_status_ok = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
assert(var_response_data == NULL);
Py_INCREF(tmp_assign_source_6);
var_response_data = tmp_assign_source_6;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
assert(var_retryable_error == NULL);
Py_INCREF(tmp_assign_source_7);
var_retryable_error = tmp_assign_source_7;
}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_response_status_ok);
tmp_operand_value_1 = var_response_status_ok;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 580;
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
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_value_2 = module_var_accessor_google$oauth2$_client$_handle_error_response(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__handle_error_response);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 581;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_response_data);
tmp_args_element_value_5 = var_response_data;
CHECK_OBJECT(var_retryable_error);
tmp_args_element_value_6 = var_retryable_error;
frame_frame_google$oauth2$_client$$$function__12__lookup_trust_boundary_request->m_frame.f_lineno = 581;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 581;
type_description_1 = "ooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$_client$$$function__12__lookup_trust_boundary_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$_client$$$function__12__lookup_trust_boundary_request->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$_client$$$function__12__lookup_trust_boundary_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$_client$$$function__12__lookup_trust_boundary_request,
    type_description_1,
    par_request,
    par_url,
    par_can_retry,
    par_headers,
    var_response_status_ok,
    var_response_data,
    var_retryable_error
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$_client$$$function__12__lookup_trust_boundary_request == cache_frame_frame_google$oauth2$_client$$$function__12__lookup_trust_boundary_request) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$_client$$$function__12__lookup_trust_boundary_request);
    cache_frame_frame_google$oauth2$_client$$$function__12__lookup_trust_boundary_request = NULL;
}

assertFrameObject(frame_frame_google$oauth2$_client$$$function__12__lookup_trust_boundary_request);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_response_data);
tmp_return_value = var_response_data;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_response_status_ok);
CHECK_OBJECT(var_response_status_ok);
Py_DECREF(var_response_status_ok);
var_response_status_ok = NULL;
CHECK_OBJECT(var_response_data);
CHECK_OBJECT(var_response_data);
Py_DECREF(var_response_data);
var_response_data = NULL;
CHECK_OBJECT(var_retryable_error);
CHECK_OBJECT(var_retryable_error);
Py_DECREF(var_retryable_error);
var_retryable_error = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_response_status_ok);
var_response_status_ok = NULL;
Py_XDECREF(var_response_data);
var_response_data = NULL;
Py_XDECREF(var_retryable_error);
var_retryable_error = NULL;
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
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_can_retry);
Py_DECREF(par_can_retry);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_can_retry);
Py_DECREF(par_can_retry);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$oauth2$_client$$$function__13__lookup_trust_boundary_request_no_throw(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_request = python_pars[0];
PyObject *par_url = python_pars[1];
PyObject *par_can_retry = python_pars[2];
PyObject *par_headers = python_pars[3];
PyObject *var_response_data = NULL;
PyObject *var_retryable_error = NULL;
PyObject *var_retries = NULL;
PyObject *var__ = NULL;
PyObject *var_response = NULL;
PyObject *var_response_body = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_google$oauth2$_client$$$function__13__lookup_trust_boundary_request_no_throw;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_google$oauth2$_client$$$function__13__lookup_trust_boundary_request_no_throw = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
assert(var_response_data == NULL);
var_response_data = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = Py_False;
assert(var_retryable_error == NULL);
Py_INCREF(tmp_assign_source_2);
var_retryable_error = tmp_assign_source_2;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$oauth2$_client$$$function__13__lookup_trust_boundary_request_no_throw)) {
    Py_XDECREF(cache_frame_frame_google$oauth2$_client$$$function__13__lookup_trust_boundary_request_no_throw);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$oauth2$_client$$$function__13__lookup_trust_boundary_request_no_throw == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$oauth2$_client$$$function__13__lookup_trust_boundary_request_no_throw = MAKE_FUNCTION_FRAME(tstate, code_objects_5c0bcbb8623d7789b3885a056a27391c, module_google$oauth2$_client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$oauth2$_client$$$function__13__lookup_trust_boundary_request_no_throw->m_type_description == NULL);
frame_frame_google$oauth2$_client$$$function__13__lookup_trust_boundary_request_no_throw = cache_frame_frame_google$oauth2$_client$$$function__13__lookup_trust_boundary_request_no_throw;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$_client$$$function__13__lookup_trust_boundary_request_no_throw);
assert(Py_REFCNT(frame_frame_google$oauth2$_client$$$function__13__lookup_trust_boundary_request_no_throw) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$oauth2$_client$_exponential_backoff(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__exponential_backoff);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 606;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$oauth2$_client$$$function__13__lookup_trust_boundary_request_no_throw->m_frame.f_lineno = 606;
tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_ExponentialBackoff);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 606;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_retries == NULL);
var_retries = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_retries);
tmp_iter_arg_1 = var_retries;
tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_4;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_5 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooo";
exception_lineno = 607;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_6 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var__;
    var__ = tmp_assign_source_6;
    Py_INCREF(var__);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
if (par_request == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 608;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_called_value_1 = par_request;
tmp_kw_call_value_0_1 = mod_consts.const_str_plain_GET;
if (par_url == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_url);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 608;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_kw_call_value_1_1 = par_url;
if (par_headers == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_headers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 608;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}

tmp_kw_call_value_2_1 = par_headers;
frame_frame_google$oauth2$_client$$$function__13__lookup_trust_boundary_request_no_throw->m_frame.f_lineno = 608;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

    tmp_assign_source_7 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_method_str_plain_url_str_plain_headers_tuple);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 608;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_response;
    var_response = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_response);
tmp_expression_value_2 = var_response;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_data);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 611;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 611;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(var_response);
tmp_expression_value_4 = var_response;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_data);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 610;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 610;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
frame_frame_google$oauth2$_client$$$function__13__lookup_trust_boundary_request_no_throw->m_frame.f_lineno = 610;
tmp_assign_source_8 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 610;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(var_response);
tmp_expression_value_5 = var_response;
tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_data);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 612;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
condexpr_end_1:;
{
    PyObject *old = var_response_body;
    var_response_body = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_1;
tmp_called_instance_2 = module_var_accessor_google$oauth2$_client$json(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 617;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_response_body);
tmp_args_element_value_1 = var_response_body;
frame_frame_google$oauth2$_client$$$function__13__lookup_trust_boundary_request_no_throw->m_frame.f_lineno = 617;
tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_loads, tmp_args_element_value_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 617;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = var_response_data;
    var_response_data = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$_client$$$function__13__lookup_trust_boundary_request_no_throw, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$_client$$$function__13__lookup_trust_boundary_request_no_throw, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_ValueError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(var_response_body);
tmp_assign_source_10 = var_response_body;
{
    PyObject *old = var_response_data;
    var_response_data = tmp_assign_source_10;
    Py_INCREF(var_response_data);
    Py_XDECREF(old);
}

}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 615;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$oauth2$_client$$$function__13__lookup_trust_boundary_request_no_throw->m_frame)) {
        frame_frame_google$oauth2$_client$$$function__13__lookup_trust_boundary_request_no_throw->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooo";
goto try_except_handler_4;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_2;
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
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var_response);
tmp_expression_value_6 = var_response;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_status);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 621;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_expression_value_7 = module_var_accessor_google$oauth2$_client$http_client(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_http_client);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 621;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_OK);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 621;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 621;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = Py_True;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_response_data);
tmp_tuple_element_1 = var_response_data;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = Py_None;
PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
goto try_return_handler_2;
}
branch_no_2:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_kw_call_value_1_2;
tmp_called_value_3 = module_var_accessor_google$oauth2$_client$_can_retry(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__can_retry);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 624;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_response);
tmp_expression_value_8 = var_response;
tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_status);
if (tmp_kw_call_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 625;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_response_data);
tmp_kw_call_value_1_2 = var_response_data;
frame_frame_google$oauth2$_client$$$function__13__lookup_trust_boundary_request_no_throw->m_frame.f_lineno = 624;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2};

    tmp_assign_source_11 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_str_plain_status_code_str_plain_response_data_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_0_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 624;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_retryable_error;
    var_retryable_error = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_4;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(par_can_retry);
tmp_operand_value_1 = par_can_retry;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 628;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_or_left_value_1 = (tmp_res == 0) ? true : false;
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_retryable_error);
tmp_operand_value_2 = var_retryable_error;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 628;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_or_right_value_1 = (tmp_res == 0) ? true : false;
tmp_condition_result_4 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_4 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_4 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = Py_False;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_response_data);
tmp_tuple_element_2 = var_response_data;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
CHECK_OBJECT(var_retryable_error);
tmp_tuple_element_2 = var_retryable_error;
PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_2);
goto try_return_handler_2;
}
branch_no_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
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
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = Py_False;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_3);
if (var_response_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_response_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 631;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_1;
}

tmp_tuple_element_3 = var_response_data;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_3);
if (var_retryable_error == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_retryable_error);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 631;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_1;
}

tmp_tuple_element_3 = var_retryable_error;
PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_3);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$_client$$$function__13__lookup_trust_boundary_request_no_throw, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$_client$$$function__13__lookup_trust_boundary_request_no_throw->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$_client$$$function__13__lookup_trust_boundary_request_no_throw, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$oauth2$_client$$$function__13__lookup_trust_boundary_request_no_throw,
    type_description_1,
    par_request,
    par_url,
    par_can_retry,
    par_headers,
    var_response_data,
    var_retryable_error,
    var_retries,
    var__,
    var_response,
    var_response_body
);


// Release cached frame if used for exception.
if (frame_frame_google$oauth2$_client$$$function__13__lookup_trust_boundary_request_no_throw == cache_frame_frame_google$oauth2$_client$$$function__13__lookup_trust_boundary_request_no_throw) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$oauth2$_client$$$function__13__lookup_trust_boundary_request_no_throw);
    cache_frame_frame_google$oauth2$_client$$$function__13__lookup_trust_boundary_request_no_throw = NULL;
}

assertFrameObject(frame_frame_google$oauth2$_client$$$function__13__lookup_trust_boundary_request_no_throw);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_response_data);
var_response_data = NULL;
Py_XDECREF(var_retryable_error);
var_retryable_error = NULL;
CHECK_OBJECT(var_retries);
CHECK_OBJECT(var_retries);
Py_DECREF(var_retries);
var_retries = NULL;
Py_XDECREF(var__);
var__ = NULL;
Py_XDECREF(var_response);
var_response = NULL;
Py_XDECREF(var_response_body);
var_response_body = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_response_data);
var_response_data = NULL;
Py_XDECREF(var_retryable_error);
var_retryable_error = NULL;
Py_XDECREF(var_retries);
var_retries = NULL;
Py_XDECREF(var__);
var__ = NULL;
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
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_can_retry);
Py_DECREF(par_can_retry);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_can_retry);
Py_DECREF(par_can_retry);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_google$oauth2$_client$$$function__10_refresh_grant(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$_client$$$function__10_refresh_grant,
        mod_consts.const_str_plain_refresh_grant,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_06d784f6031ae7583fbb271e1bed7954,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$_client,
        mod_consts.const_str_digest_09d0b12d14c88443c682231f76dcd516,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$_client$$$function__11__lookup_trust_boundary(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$_client$$$function__11__lookup_trust_boundary,
        mod_consts.const_str_plain__lookup_trust_boundary,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_24a0c036429bbdfded271ffa66644cfc,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$_client,
        mod_consts.const_str_digest_be249da1a7622adb74c0aeef1fb24ae7,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$_client$$$function__12__lookup_trust_boundary_request(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$_client$$$function__12__lookup_trust_boundary_request,
        mod_consts.const_str_plain__lookup_trust_boundary_request,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f593081b9a2b9028110a2a4377938217,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$_client,
        mod_consts.const_str_digest_61a438f5f48286adbdde2f45cda453dc,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$_client$$$function__13__lookup_trust_boundary_request_no_throw(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$_client$$$function__13__lookup_trust_boundary_request_no_throw,
        mod_consts.const_str_plain__lookup_trust_boundary_request_no_throw,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5c0bcbb8623d7789b3885a056a27391c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$_client,
        mod_consts.const_str_digest_5d52b6d5fcb468a0bb8b8829c336a817,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$_client$$$function__1__handle_error_response(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$_client$$$function__1__handle_error_response,
        mod_consts.const_str_plain__handle_error_response,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_09758069fd80fb959b933a0655aae473,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$_client,
        mod_consts.const_str_digest_795d9b6d652298e6343f1916e17424ac,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$_client$$$function__2__can_retry(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$_client$$$function__2__can_retry,
        mod_consts.const_str_plain__can_retry,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_98f14249830ad9b33c7927940d49d209,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$_client,
        mod_consts.const_str_digest_89b9930870d783114f1977f37803f7c7,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$_client$$$function__3__parse_expiry(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$_client$$$function__3__parse_expiry,
        mod_consts.const_str_plain__parse_expiry,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8979353c0c00572f43fee8a6090a95c0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$_client,
        mod_consts.const_str_digest_0461e382cddb51f19b57e3c74c32eb8b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw,
        mod_consts.const_str_plain__token_endpoint_request_no_throw,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_fdf50ef7e258979e0d272606a185c159,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$_client,
        mod_consts.const_str_digest_eaa9af1896cc21e94b87e0e3e8aebaa3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$_client$$$function__5__token_endpoint_request(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$_client$$$function__5__token_endpoint_request,
        mod_consts.const_str_plain__token_endpoint_request,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f8295ed1d895a424b73b4fb8808370a3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$_client,
        mod_consts.const_str_digest_fbc351633d7ec2de1405e00eceda533e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$_client$$$function__6_jwt_grant(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$_client$$$function__6_jwt_grant,
        mod_consts.const_str_plain_jwt_grant,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1e3e0b3289ff41f571e5a967583c495e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$_client,
        mod_consts.const_str_digest_a7af7e07b45e1fd5913ace5d72133ed5,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$_client$$$function__7_call_iam_generate_id_token_endpoint(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$_client$$$function__7_call_iam_generate_id_token_endpoint,
        mod_consts.const_str_plain_call_iam_generate_id_token_endpoint,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ef6c39f7761193833111eede41337567,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$_client,
        mod_consts.const_str_digest_8b9ee3dd5e85e6d54e56f0a25fd2a4b9,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$_client$$$function__8_id_token_jwt_grant(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$_client$$$function__8_id_token_jwt_grant,
        mod_consts.const_str_plain_id_token_jwt_grant,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_03745765f918cbad31915482b9cd462f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$_client,
        mod_consts.const_str_digest_53d39e8de107dd8a0af6d51502b81232,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$oauth2$_client$$$function__9__handle_refresh_grant_response(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$oauth2$_client$$$function__9__handle_refresh_grant_response,
        mod_consts.const_str_plain__handle_refresh_grant_response,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1e595036faadc85f8f0bfc3890fa2ff0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$oauth2$_client,
        mod_consts.const_str_digest_8e0c8508570713c264d2996befa3fc60,
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

static function_impl_code const function_table_google$oauth2$_client[] = {
impl_google$oauth2$_client$$$function__1__handle_error_response,
impl_google$oauth2$_client$$$function__2__can_retry,
impl_google$oauth2$_client$$$function__3__parse_expiry,
impl_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw,
impl_google$oauth2$_client$$$function__5__token_endpoint_request,
impl_google$oauth2$_client$$$function__6_jwt_grant,
impl_google$oauth2$_client$$$function__7_call_iam_generate_id_token_endpoint,
impl_google$oauth2$_client$$$function__8_id_token_jwt_grant,
impl_google$oauth2$_client$$$function__9__handle_refresh_grant_response,
impl_google$oauth2$_client$$$function__10_refresh_grant,
impl_google$oauth2$_client$$$function__11__lookup_trust_boundary,
impl_google$oauth2$_client$$$function__12__lookup_trust_boundary_request,
impl_google$oauth2$_client$$$function__13__lookup_trust_boundary_request_no_throw,
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

    return Nuitka_Function_GetFunctionState(function, function_table_google$oauth2$_client);
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
        module_google$oauth2$_client,
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
        function_table_google$oauth2$_client,
        sizeof(function_table_google$oauth2$_client) / sizeof(function_impl_code)
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
static char const *module_full_name = "google.oauth2._client";
#endif

// Internal entry point for module code.
PyObject *module_code_google$oauth2$_client(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("google$oauth2$_client");

    // Store the module for future use.
    module_google$oauth2$_client = module;

    moduledict_google$oauth2$_client = MODULE_DICT(module_google$oauth2$_client);

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
        PRINT_STRING("google$oauth2$_client: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("google$oauth2$_client: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("google$oauth2$_client: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "google.oauth2._client" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initgoogle$oauth2$_client\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_google$oauth2$_client,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_google$oauth2$_client,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_google$oauth2$_client,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_google$oauth2$_client,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_google$oauth2$_client,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_google$oauth2$_client);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_google$oauth2$_client, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_google$oauth2$_client, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_google$oauth2$_client, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_google$oauth2$_client);
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

        UPDATE_STRING_DICT1(moduledict_google$oauth2$_client, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_google$oauth2$_client;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_93fcdd301a16c2c9a74c2fdbe3aa0a36;
UPDATE_STRING_DICT0(moduledict_google$oauth2$_client, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_google$oauth2$_client, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_google$oauth2$_client = MAKE_MODULE_FRAME(code_objects_84cfecf0a7669945744e00a7b5925642, module_google$oauth2$_client);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$oauth2$_client);
assert(Py_REFCNT(frame_frame_google$oauth2$_client) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_google$oauth2$_client$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_google$oauth2$_client$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_google$oauth2$_client, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_datetime;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$oauth2$_client;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_google$oauth2$_client->m_frame.f_lineno = 26;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_datetime, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_096ca139beaf8ac5201071e235ad66b6;
tmp_globals_arg_value_2 = (PyObject *)moduledict_google$oauth2$_client;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_google$oauth2$_client->m_frame.f_lineno = 27;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$oauth2$_client,
        mod_consts.const_str_plain_client,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_client);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_http_client, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_json;
tmp_globals_arg_value_3 = (PyObject *)moduledict_google$oauth2$_client;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_google$oauth2$_client->m_frame.f_lineno = 28;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_json, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_urllib;
tmp_globals_arg_value_4 = (PyObject *)moduledict_google$oauth2$_client;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = Py_None;
tmp_level_value_4 = const_int_0;
frame_frame_google$oauth2$_client->m_frame.f_lineno = 29;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_urllib, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_5 = (PyObject *)moduledict_google$oauth2$_client;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain__exponential_backoff_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_google$oauth2$_client->m_frame.f_lineno = 31;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_google$oauth2$_client,
        mod_consts.const_str_plain__exponential_backoff,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain__exponential_backoff);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__exponential_backoff, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_6 = (PyObject *)moduledict_google$oauth2$_client;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain__helpers_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_google$oauth2$_client->m_frame.f_lineno = 32;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_google$oauth2$_client,
        mod_consts.const_str_plain__helpers,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain__helpers);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_7 = (PyObject *)moduledict_google$oauth2$_client;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_credentials_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_google$oauth2$_client->m_frame.f_lineno = 33;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_google$oauth2$_client,
        mod_consts.const_str_plain_credentials,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_credentials);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_credentials, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_8 = (PyObject *)moduledict_google$oauth2$_client;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_exceptions_tuple;
tmp_level_value_8 = const_int_0;
frame_frame_google$oauth2$_client->m_frame.f_lineno = 34;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_google$oauth2$_client,
        mod_consts.const_str_plain_exceptions,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_exceptions);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_9 = (PyObject *)moduledict_google$oauth2$_client;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_jwt_tuple;
tmp_level_value_9 = const_int_0;
frame_frame_google$oauth2$_client->m_frame.f_lineno = 35;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_google$oauth2$_client,
        mod_consts.const_str_plain_jwt,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_jwt);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_jwt, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_10 = (PyObject *)moduledict_google$oauth2$_client;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_metrics_tuple;
tmp_level_value_10 = const_int_0;
frame_frame_google$oauth2$_client->m_frame.f_lineno = 36;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_google$oauth2$_client,
        mod_consts.const_str_plain_metrics,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_metrics);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_metrics, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_11 = (PyObject *)moduledict_google$oauth2$_client;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_transport_tuple;
tmp_level_value_11 = const_int_0;
frame_frame_google$oauth2$_client->m_frame.f_lineno = 37;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_google$oauth2$_client,
        mod_consts.const_str_plain_transport,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_transport);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_transport, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = mod_consts.const_str_digest_5d735bc80d16f0fedbdde78344a2d394;
UPDATE_STRING_DICT0(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__URLENCODED_CONTENT_TYPE, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = mod_consts.const_str_digest_1781891970018ef9597f363946d7327b;
UPDATE_STRING_DICT0(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__JSON_CONTENT_TYPE, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = mod_consts.const_str_digest_b932071f578984d52d6d21644a5ba26d;
UPDATE_STRING_DICT0(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__JWT_GRANT_TYPE, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = mod_consts.const_str_plain_refresh_token;
UPDATE_STRING_DICT0(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__REFRESH_GRANT_TYPE, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;

tmp_assign_source_19 = MAKE_FUNCTION_google$oauth2$_client$$$function__1__handle_error_response(tstate);

UPDATE_STRING_DICT1(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__handle_error_response, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;

tmp_assign_source_20 = MAKE_FUNCTION_google$oauth2$_client$$$function__2__can_retry(tstate);

UPDATE_STRING_DICT1(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__can_retry, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;

tmp_assign_source_21 = MAKE_FUNCTION_google$oauth2$_client$$$function__3__parse_expiry(tstate);

UPDATE_STRING_DICT1(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__parse_expiry, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_defaults_1;
tmp_defaults_1 = mod_consts.const_tuple_none_false_true_none_tuple;
Py_INCREF(tmp_defaults_1);

tmp_assign_source_22 = MAKE_FUNCTION_google$oauth2$_client$$$function__4__token_endpoint_request_no_throw(tstate, tmp_defaults_1);

UPDATE_STRING_DICT1(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__token_endpoint_request_no_throw, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_defaults_2;
tmp_defaults_2 = mod_consts.const_tuple_none_false_true_none_tuple;
Py_INCREF(tmp_defaults_2);

tmp_assign_source_23 = MAKE_FUNCTION_google$oauth2$_client$$$function__5__token_endpoint_request(tstate, tmp_defaults_2);

UPDATE_STRING_DICT1(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__token_endpoint_request, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_defaults_3;
tmp_defaults_3 = mod_consts.const_tuple_true_tuple;
Py_INCREF(tmp_defaults_3);

tmp_assign_source_24 = MAKE_FUNCTION_google$oauth2$_client$$$function__6_jwt_grant(tstate, tmp_defaults_3);

UPDATE_STRING_DICT1(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_jwt_grant, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_defaults_4;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_google$oauth2$_client$credentials(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_credentials);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 332;

    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_DEFAULT_UNIVERSE_DOMAIN);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;

    goto frame_exception_exit_1;
}
tmp_defaults_4 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_defaults_4, 0, tmp_tuple_element_1);

tmp_assign_source_25 = MAKE_FUNCTION_google$oauth2$_client$$$function__7_call_iam_generate_id_token_endpoint(tstate, tmp_defaults_4);

UPDATE_STRING_DICT1(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_call_iam_generate_id_token_endpoint, tmp_assign_source_25);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$oauth2$_client, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$oauth2$_client->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$oauth2$_client, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_google$oauth2$_client);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_26;
PyObject *tmp_defaults_5;
tmp_defaults_5 = mod_consts.const_tuple_true_tuple;
Py_INCREF(tmp_defaults_5);

tmp_assign_source_26 = MAKE_FUNCTION_google$oauth2$_client$$$function__8_id_token_jwt_grant(tstate, tmp_defaults_5);

UPDATE_STRING_DICT1(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_id_token_jwt_grant, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;

tmp_assign_source_27 = MAKE_FUNCTION_google$oauth2$_client$$$function__9__handle_refresh_grant_response(tstate);

UPDATE_STRING_DICT1(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__handle_refresh_grant_response, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_defaults_6;
tmp_defaults_6 = mod_consts.const_tuple_none_none_true_tuple;
Py_INCREF(tmp_defaults_6);

tmp_assign_source_28 = MAKE_FUNCTION_google$oauth2$_client$$$function__10_refresh_grant(tstate, tmp_defaults_6);

UPDATE_STRING_DICT1(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_refresh_grant, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_defaults_7;
tmp_defaults_7 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_7);

tmp_assign_source_29 = MAKE_FUNCTION_google$oauth2$_client$$$function__11__lookup_trust_boundary(tstate, tmp_defaults_7);

UPDATE_STRING_DICT1(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__lookup_trust_boundary, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_defaults_8;
tmp_defaults_8 = mod_consts.const_tuple_true_none_tuple;
Py_INCREF(tmp_defaults_8);

tmp_assign_source_30 = MAKE_FUNCTION_google$oauth2$_client$$$function__12__lookup_trust_boundary_request(tstate, tmp_defaults_8);

UPDATE_STRING_DICT1(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__lookup_trust_boundary_request, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_defaults_9;
tmp_defaults_9 = mod_consts.const_tuple_true_none_tuple;
Py_INCREF(tmp_defaults_9);

tmp_assign_source_31 = MAKE_FUNCTION_google$oauth2$_client$$$function__13__lookup_trust_boundary_request_no_throw(tstate, tmp_defaults_9);

UPDATE_STRING_DICT1(moduledict_google$oauth2$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__lookup_trust_boundary_request_no_throw, tmp_assign_source_31);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("google$oauth2$_client", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "google.oauth2._client" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_google$oauth2$_client);
    return module_google$oauth2$_client;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$oauth2$_client, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("google$oauth2$_client", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

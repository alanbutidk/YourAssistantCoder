/* Generated code for Python module 'google$auth$impersonated_credentials'
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



/* The "module_google$auth$impersonated_credentials" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_google$auth$impersonated_credentials;
PyDictObject *moduledict_google$auth$impersonated_credentials;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_iam;
PyObject *const_str_plain__IAM_ENDPOINT;
PyObject *const_str_plain_replace;
PyObject *const_str_plain_credentials;
PyObject *const_str_plain_DEFAULT_UNIVERSE_DOMAIN;
PyObject *const_str_plain_json;
PyObject *const_str_plain_dumps;
PyObject *const_str_plain_encode;
PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
PyObject *const_str_plain_POST;
PyObject *const_tuple_4d2628c628983f920806be4976c06ae1_tuple;
PyObject *const_str_plain_data;
PyObject *const_str_plain_decode;
PyObject *const_str_plain_status;
PyObject *const_str_plain_http_client;
PyObject *const_str_plain_OK;
PyObject *const_str_plain_exceptions;
PyObject *const_str_plain_RefreshError;
PyObject *const_str_plain__REFRESH_ERROR;
PyObject *const_str_plain_loads;
PyObject *const_str_plain_accessToken;
PyObject *const_str_plain_datetime;
PyObject *const_str_plain_strptime;
PyObject *const_str_plain_expireTime;
PyObject *const_str_digest_53f294a8f1d906afcbc93214f5cd448d;
PyObject *const_tuple_type_KeyError_type_ValueError_tuple;
PyObject *const_str_digest_a33905df47891e82d7350d3c88c281aa;
PyObject *const_str_digest_ce64ef113c310bcaca0ac1090d79d47f;
PyObject *const_str_plain_Credentials;
PyObject *const_str_plain_copy;
PyObject *const_str_plain__source_credentials;
PyObject *const_str_plain_Scoped;
PyObject *const_str_plain_with_scopes;
PyObject *const_str_plain__IAM_SCOPE;
PyObject *const_str_plain__create_self_signed_jwt;
PyObject *const_str_plain__always_use_jwt_access;
PyObject *const_tuple_none_tuple;
PyObject *const_str_plain_universe_domain;
PyObject *const_str_plain__universe_domain;
PyObject *const_str_plain__target_principal;
PyObject *const_str_plain__target_scopes;
PyObject *const_str_plain__delegates;
PyObject *const_str_plain__subject;
PyObject *const_str_plain__DEFAULT_TOKEN_LIFETIME_SECS;
PyObject *const_str_plain__lifetime;
PyObject *const_str_plain_token;
PyObject *const_str_plain__helpers;
PyObject *const_str_plain_utcnow;
PyObject *const_str_plain_expiry;
PyObject *const_str_plain__quota_project_id;
PyObject *const_str_plain__iam_endpoint_override;
PyObject *const_str_plain__cred_file_path;
PyObject *const_str_plain__trust_boundary;
PyObject *const_str_digest_35bf9f09d759db8274bd252476021855;
PyObject *const_str_plain_metrics;
PyObject *const_str_plain_CRED_TYPE_SA_IMPERSONATE;
PyObject *const_str_plain_token_state;
PyObject *const_str_plain_TokenState;
PyObject *const_str_plain_STALE;
PyObject *const_str_plain_INVALID;
PyObject *const_str_plain_refresh;
PyObject *const_str_plain_delegates;
PyObject *const_str_plain_scope;
PyObject *const_str_plain_lifetime;
PyObject *const_str_plain_s;
PyObject *const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3;
PyObject *const_str_digest_1781891970018ef9597f363946d7327b;
PyObject *const_str_plain_API_CLIENT_HEADER;
PyObject *const_str_plain_token_request_access_token_impersonate;
PyObject *const_str_plain_apply;
PyObject *const_str_plain_GoogleAuthError;
PyObject *const_tuple_str_digest_cdc251d2e5abfac1c34d6f5f13c0ed8c_tuple;
PyObject *const_str_plain_iss;
PyObject *const_str_plain_scopes_to_string;
PyObject *const_str_plain_sub;
PyObject *const_str_plain_aud;
PyObject *const_str_plain__GOOGLE_OAUTH2_TOKEN_ENDPOINT;
PyObject *const_str_plain_iat;
PyObject *const_str_plain_datetime_to_secs;
PyObject *const_str_plain_exp;
PyObject *const_str_plain__sign_jwt_request;
PyObject *const_tuple_98676a120720b67354b26efd02261a67_tuple;
PyObject *const_str_plain__client;
PyObject *const_str_plain_jwt_grant;
PyObject *const_str_plain__make_iam_token_request;
PyObject *const_tuple_d7f4101fd9f5d3223242ac96e3e0712c_tuple;
PyObject *const_str_digest_5f1b642f637a2e14a3f77e2d2351d02d;
PyObject *const_str_plain_service_account_email;
PyObject *const_str_digest_504922937dff7a2cbb99362ea7c63dfc;
PyObject *const_str_plain__TRUST_BOUNDARY_LOOKUP_ENDPOINT;
PyObject *const_str_digest_ac2941dd6632b9f1ac2db738b0f4178a;
PyObject *const_str_digest_eda478fe391780f02c579185f1943916;
PyObject *const_tuple_str_plain_AuthorizedSession_tuple;
PyObject *const_str_plain_AuthorizedSession;
PyObject *const_str_plain__IAM_SIGN_ENDPOINT;
PyObject *const_str_plain_payload;
PyObject *const_str_plain_base64;
PyObject *const_str_plain_b64encode;
PyObject *const_dict_36774e2c4486a45b367e3cd59edfaeea;
PyObject *const_str_plain__exponential_backoff;
PyObject *const_str_plain_ExponentialBackoff;
PyObject *const_str_plain_authed_session;
PyObject *const_str_plain_post;
PyObject *const_str_plain_iam_sign_endpoint;
PyObject *const_str_plain_headers;
PyObject *const_str_plain_body;
PyObject *const_tuple_str_plain_url_str_plain_headers_str_plain_json_tuple;
PyObject *const_str_plain_status_code;
PyObject *const_str_plain_IAM_RETRY_CODES;
PyObject *const_str_plain_TransportError;
PyObject *const_str_digest_82d20e19375797af02a14b67e54008fa;
PyObject *const_str_plain_b64decode;
PyObject *const_str_plain_signedBlob;
PyObject *const_tuple_str_digest_0d4da83f9f91082b8b3328c34bf1fb87_tuple;
PyObject *const_str_plain_credential_source;
PyObject *const_str_plain_credential_type;
PyObject *const_str_digest_9ae0e4636c30231c9622e6c59765aa2a;
PyObject *const_str_plain_principal;
PyObject *const_tuple_70a040236ea8a852feb6c3f54cc5d205_tuple;
PyObject *const_str_plain__make_copy;
PyObject *const_tuple_str_plain_source_credentials_tuple;
PyObject *const_tuple_str_plain_type_tuple;
PyObject *const_str_plain__SOURCE_CREDENTIAL_AUTHORIZED_USER_TYPE;
PyObject *const_str_digest_31b40dbd93ddd4efa91cab6083c18890;
PyObject *const_tuple_str_plain_credentials_tuple;
PyObject *const_str_plain_from_authorized_user_info;
PyObject *const_str_plain__SOURCE_CREDENTIAL_SERVICE_ACCOUNT_TYPE;
PyObject *const_tuple_str_plain_service_account_tuple;
PyObject *const_str_plain_service_account;
PyObject *const_str_plain_from_service_account_info;
PyObject *const_str_digest_9b6de995960e30c87da59da3358c3b6c;
PyObject *const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
PyObject *const_tuple_str_plain_external_account_authorized_user_tuple;
PyObject *const_str_plain_external_account_authorized_user;
PyObject *const_str_plain_from_info;
PyObject *const_str_plain_InvalidType;
PyObject *const_str_digest_762e2487d4f36709829c4b97c948a22e;
PyObject *const_tuple_str_plain_service_account_impersonation_url_tuple;
PyObject *const_str_plain_rfind;
PyObject *const_tuple_str_slash_tuple;
PyObject *const_str_plain_find;
PyObject *const_tuple_str_digest_3e51b004aaa893ad0d2df995a6a87b57_tuple;
PyObject *const_str_plain_InvalidValue;
PyObject *const_str_digest_1fe9e30b42375384764545dafc3578e7;
PyObject *const_tuple_str_plain_delegates_tuple;
PyObject *const_tuple_str_plain_quota_project_id_tuple;
PyObject *const_tuple_str_plain_scopes_tuple;
PyObject *const_tuple_str_plain_trust_boundary_tuple;
PyObject *const_tuple_str_plain_quota_project_id_str_plain_trust_boundary_tuple;
PyObject *const_str_digest_c9984262229af101d6e2f3b105b0b35e;
PyObject *const_str_plain_IDTokenCredentials;
PyObject *const_tuple_str_digest_08d0164f7622702a72289c35aecd1833_tuple;
PyObject *const_str_plain__target_credentials;
PyObject *const_str_plain__target_audience;
PyObject *const_str_plain__include_email;
PyObject *const_str_digest_5df06c5d06671f6396371875636f30ce;
PyObject *const_tuple_411261abc4e78af5fb73b9c4dc77792e_tuple;
PyObject *const_str_plain__IAM_IDTOKEN_ENDPOINT;
PyObject *const_str_plain_signer_email;
PyObject *const_str_plain_audience;
PyObject *const_str_plain_includeEmail;
PyObject *const_str_plain_token_request_id_token_impersonate;
PyObject *const_tuple_str_plain_auth_request_tuple;
PyObject *const_tuple_str_plain_url_str_plain_headers_str_plain_data_tuple;
PyObject *const_str_digest_6d0ad32f0118a39a2d89436871ee39af;
PyObject *const_str_digest_0031e5d3a6c81cc90766d5ea441959e1;
PyObject *const_str_plain_utcfromtimestamp;
PyObject *const_str_plain_jwt;
PyObject *const_dict_f3e8b111ded9225be3e397b0a4e57df6;
PyObject *const_str_plain__IAM_SIGNJWT_ENDPOINT;
PyObject *const_str_plain_signedJwt;
PyObject *const_str_digest_de16208f0a323a6a4b0772d2903acfeb;
PyObject *const_str_digest_13dea018a9a58375af7cfb96d9062cf3;
PyObject *const_str_digest_e8bc2dac6795e3d685eac91fcf09c105;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_tuple_str_plain_datetime_tuple;
PyObject *const_str_digest_096ca139beaf8ac5201071e235ad66b6;
PyObject *const_str_plain_client;
PyObject *const_tuple_str_plain__exponential_backoff_tuple;
PyObject *const_tuple_str_plain__helpers_tuple;
PyObject *const_tuple_str_plain_exceptions_tuple;
PyObject *const_tuple_str_plain_iam_tuple;
PyObject *const_tuple_str_plain_jwt_tuple;
PyObject *const_tuple_str_plain_metrics_tuple;
PyObject *const_tuple_str_plain__client_tuple;
PyObject *const_str_digest_061c56fc1f36e3c8ef4df14092880d01;
PyObject *const_int_pos_3600;
PyObject *const_str_digest_569bac4d93375a3bb6dddf3fd713403e;
PyObject *const_str_digest_5b6e0e83f83855cea6cda0e01c12c935;
PyObject *const_str_plain_authorized_user;
PyObject *const_str_plain_CredentialsWithQuotaProject;
PyObject *const_str_plain_Signing;
PyObject *const_str_plain_CredentialsWithTrustBoundary;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_dc07402eb604b3efdc1fb10895354bdf;
PyObject *const_str_digest_beba1a31d6414f1c8d269b026a1f781f;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_122;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_ece4c0f614049f51dbcf43eaafbb9cdd;
PyObject *const_str_plain__metric_header_for_usage;
PyObject *const_str_digest_5f2d650ac5b0b9ed29e4eae93c0d1e1a;
PyObject *const_str_plain__perform_refresh_token;
PyObject *const_str_digest_00eee5d168e3eb34147d15f840124f09;
PyObject *const_str_plain__build_trust_boundary_lookup_url;
PyObject *const_str_digest_19eaf36f050b366ece91596f0ae2dc0b;
PyObject *const_str_plain_sign_bytes;
PyObject *const_str_digest_28c602ce6311178ae3445fd4d5291753;
PyObject *const_str_plain_property;
PyObject *const_str_digest_9f6780cc9cc369f8216839829b6eed5b;
PyObject *const_str_digest_57ebbe66574bcb89e47410810eeb3c3c;
PyObject *const_str_plain_signer;
PyObject *const_str_digest_2d28140646409296c1a41f5f2f1c82dd;
PyObject *const_str_plain_requires_scopes;
PyObject *const_str_digest_c1f55ab516b4a48572f0044d037333d7;
PyObject *const_str_plain_copy_docstring;
PyObject *const_str_plain_get_cred_info;
PyObject *const_str_digest_2902b573691aef3e2e3d3564ca94d182;
PyObject *const_str_digest_c91c8525babaffcd4ed5a43632506f7c;
PyObject *const_str_plain_with_trust_boundary;
PyObject *const_str_digest_2cc9bf5f8e7558a0c43ef2dd28c94ff5;
PyObject *const_str_plain_with_quota_project;
PyObject *const_str_digest_44f0a4aa7b0a627b3fbd4f24ab4ca513;
PyObject *const_str_digest_afc9d8104efc5e9725cb6028dda826d8;
PyObject *const_str_plain_from_impersonated_service_account_info;
PyObject *const_str_digest_eb6b6d41ecfc97e0360447591888165b;
PyObject *const_tuple_f580526e7135df046d7ada2bc66f3e2d_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_2b5ecd8f4c3a38a0b15d35cad1820333;
PyObject *const_int_pos_542;
PyObject *const_tuple_none_false_none_tuple;
PyObject *const_str_digest_d8ead9bb88af8e4e9ac78ae3398d5b39;
PyObject *const_str_plain_from_credentials;
PyObject *const_str_digest_6ec7d5823ebc632bc038cc2a3e006b66;
PyObject *const_str_plain_with_target_audience;
PyObject *const_str_digest_276fb8f4d65093e22bcf767f2ca8a484;
PyObject *const_str_plain_with_include_email;
PyObject *const_str_digest_63e519a4dc387508ad3aaaac62c7fcb8;
PyObject *const_str_digest_6af9d160c0b4bacec7710303a72b6d4e;
PyObject *const_str_digest_9447c97e984c009b4679b69c423eea2b;
PyObject *const_tuple_9a8199771944c5a790b7280164c1fc7c_tuple;
PyObject *const_str_digest_e4f5144545ade51b4dff2bd860e32915;
PyObject *const_str_digest_850220f22d47a29a22f74180dbbf56f9;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_7e1c0ae1c87a8ad94a5930077e8fb15d_tuple;
PyObject *const_tuple_c4f97a270c4cb6954a73f38f46429192_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_cred_tuple;
PyObject *const_tuple_e59b4d2cb9e2a599fb9ed07d9ff11e96_tuple;
PyObject *const_tuple_4d88875a5378f24900da76d0bd47a8bb_tuple;
PyObject *const_tuple_33b047cf25c173fbbed7cf28d5aa6f49_tuple;
PyObject *const_tuple_9ba4b0ec9a4003b4261156fc5daa0d77_tuple;
PyObject *const_tuple_15c34b2120fb8db0654177ee27b322bd_tuple;
PyObject *const_tuple_843ffeb5699f853dfe49faa8d1ded14a_tuple;
PyObject *const_tuple_40c60aa064c5a3eb715697925381c774_tuple;
PyObject *const_tuple_str_plain_self_str_plain_include_email_tuple;
PyObject *const_tuple_str_plain_self_str_plain_quota_project_id_str_plain_cred_tuple;
PyObject *const_tuple_str_plain_self_str_plain_quota_project_id_tuple;
PyObject *const_tuple_c9f09673b3249d8ad06bbf50173488e2_tuple;
PyObject *const_tuple_str_plain_self_str_plain_target_audience_tuple;
PyObject *const_tuple_str_plain_self_str_plain_trust_boundary_str_plain_cred_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[266];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("google.auth.impersonated_credentials"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_iam);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__IAM_ENDPOINT);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_replace);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_credentials);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_UNIVERSE_DOMAIN);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_json);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_dumps);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_POST);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_tuple_4d2628c628983f920806be4976c06ae1_tuple);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_data);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_status);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_http_client);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_OK);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_RefreshError);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain__REFRESH_ERROR);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_loads);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_accessToken);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_datetime);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_strptime);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_expireTime);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_53f294a8f1d906afcbc93214f5cd448d);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_type_KeyError_type_ValueError_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_a33905df47891e82d7350d3c88c281aa);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_ce64ef113c310bcaca0ac1090d79d47f);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_Credentials);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain__source_credentials);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_Scoped);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_with_scopes);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain__IAM_SCOPE);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain__create_self_signed_jwt);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain__always_use_jwt_access);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_universe_domain);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain__universe_domain);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain__target_principal);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain__target_scopes);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain__delegates);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain__subject);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain__DEFAULT_TOKEN_LIFETIME_SECS);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain__lifetime);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_token);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain__helpers);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_utcnow);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_expiry);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain__quota_project_id);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain__iam_endpoint_override);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain__cred_file_path);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain__trust_boundary);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_35bf9f09d759db8274bd252476021855);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_metrics);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_CRED_TYPE_SA_IMPERSONATE);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_token_state);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_TokenState);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_STALE);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_INVALID);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_refresh);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_delegates);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_scope);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_lifetime);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_s);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_1781891970018ef9597f363946d7327b);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_API_CLIENT_HEADER);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_token_request_access_token_impersonate);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_apply);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_GoogleAuthError);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_cdc251d2e5abfac1c34d6f5f13c0ed8c_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_iss);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_scopes_to_string);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_sub);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_aud);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain__GOOGLE_OAUTH2_TOKEN_ENDPOINT);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_iat);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_datetime_to_secs);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_exp);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain__sign_jwt_request);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_98676a120720b67354b26efd02261a67_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain__client);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_jwt_grant);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain__make_iam_token_request);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_tuple_d7f4101fd9f5d3223242ac96e3e0712c_tuple);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_digest_5f1b642f637a2e14a3f77e2d2351d02d);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_service_account_email);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_digest_504922937dff7a2cbb99362ea7c63dfc);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain__TRUST_BOUNDARY_LOOKUP_ENDPOINT);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_ac2941dd6632b9f1ac2db738b0f4178a);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_digest_eda478fe391780f02c579185f1943916);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AuthorizedSession_tuple);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_AuthorizedSession);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain__IAM_SIGN_ENDPOINT);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_payload);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_base64);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_b64encode);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_dict_36774e2c4486a45b367e3cd59edfaeea);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain__exponential_backoff);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_ExponentialBackoff);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_authed_session);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_post);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_iam_sign_endpoint);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_headers);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_body);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_url_str_plain_headers_str_plain_json_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_status_code);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_IAM_RETRY_CODES);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_TransportError);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_82d20e19375797af02a14b67e54008fa);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_b64decode);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_signedBlob);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_0d4da83f9f91082b8b3328c34bf1fb87_tuple);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_credential_source);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_credential_type);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_digest_9ae0e4636c30231c9622e6c59765aa2a);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_principal);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_tuple_70a040236ea8a852feb6c3f54cc5d205_tuple);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain__make_copy);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_source_credentials_tuple);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type_tuple);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain__SOURCE_CREDENTIAL_AUTHORIZED_USER_TYPE);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_digest_31b40dbd93ddd4efa91cab6083c18890);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_credentials_tuple);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_authorized_user_info);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain__SOURCE_CREDENTIAL_SERVICE_ACCOUNT_TYPE);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_service_account_tuple);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_service_account);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_service_account_info);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_digest_9b6de995960e30c87da59da3358c3b6c);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_external_account_authorized_user_tuple);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_external_account_authorized_user);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_info);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidType);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_digest_762e2487d4f36709829c4b97c948a22e);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_service_account_impersonation_url_tuple);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_rfind);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_tuple_str_slash_tuple);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_find);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_3e51b004aaa893ad0d2df995a6a87b57_tuple);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidValue);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_digest_1fe9e30b42375384764545dafc3578e7);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_delegates_tuple);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_quota_project_id_tuple);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_scopes_tuple);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_trust_boundary_tuple);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_quota_project_id_str_plain_trust_boundary_tuple);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_digest_c9984262229af101d6e2f3b105b0b35e);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_IDTokenCredentials);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_08d0164f7622702a72289c35aecd1833_tuple);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain__target_credentials);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain__target_audience);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain__include_email);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_digest_5df06c5d06671f6396371875636f30ce);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_tuple_411261abc4e78af5fb73b9c4dc77792e_tuple);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain__IAM_IDTOKEN_ENDPOINT);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain_signer_email);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_audience);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain_includeEmail);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain_token_request_id_token_impersonate);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_auth_request_tuple);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_url_str_plain_headers_str_plain_data_tuple);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_digest_6d0ad32f0118a39a2d89436871ee39af);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_digest_0031e5d3a6c81cc90766d5ea441959e1);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain_utcfromtimestamp);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain_jwt);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_dict_f3e8b111ded9225be3e397b0a4e57df6);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain__IAM_SIGNJWT_ENDPOINT);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain_signedJwt);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_digest_de16208f0a323a6a4b0772d2903acfeb);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_digest_13dea018a9a58375af7cfb96d9062cf3);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_digest_e8bc2dac6795e3d685eac91fcf09c105);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_datetime_tuple);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_digest_096ca139beaf8ac5201071e235ad66b6);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain_client);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__exponential_backoff_tuple);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__helpers_tuple);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_iam_tuple);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_jwt_tuple);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_metrics_tuple);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__client_tuple);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_digest_061c56fc1f36e3c8ef4df14092880d01);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_int_pos_3600);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_digest_569bac4d93375a3bb6dddf3fd713403e);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_digest_5b6e0e83f83855cea6cda0e01c12c935);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_plain_authorized_user);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_plain_CredentialsWithQuotaProject);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_plain_Signing);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_plain_CredentialsWithTrustBoundary);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc07402eb604b3efdc1fb10895354bdf);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_digest_beba1a31d6414f1c8d269b026a1f781f);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_int_pos_122);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_str_digest_ece4c0f614049f51dbcf43eaafbb9cdd);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_plain__metric_header_for_usage);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_digest_5f2d650ac5b0b9ed29e4eae93c0d1e1a);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_str_plain__perform_refresh_token);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_str_digest_00eee5d168e3eb34147d15f840124f09);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_str_plain__build_trust_boundary_lookup_url);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_str_digest_19eaf36f050b366ece91596f0ae2dc0b);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_str_plain_sign_bytes);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_str_digest_28c602ce6311178ae3445fd4d5291753);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_str_digest_9f6780cc9cc369f8216839829b6eed5b);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_str_digest_57ebbe66574bcb89e47410810eeb3c3c);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_str_plain_signer);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_str_digest_2d28140646409296c1a41f5f2f1c82dd);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_str_plain_requires_scopes);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_str_digest_c1f55ab516b4a48572f0044d037333d7);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy_docstring);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_cred_info);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_str_digest_2902b573691aef3e2e3d3564ca94d182);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_str_digest_c91c8525babaffcd4ed5a43632506f7c);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_str_plain_with_trust_boundary);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_str_digest_2cc9bf5f8e7558a0c43ef2dd28c94ff5);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_str_plain_with_quota_project);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_str_digest_44f0a4aa7b0a627b3fbd4f24ab4ca513);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_str_digest_afc9d8104efc5e9725cb6028dda826d8);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_impersonated_service_account_info);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_str_digest_eb6b6d41ecfc97e0360447591888165b);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_tuple_f580526e7135df046d7ada2bc66f3e2d_tuple);
mod_consts_hash[231] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[232] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[233] = DEEP_HASH(tstate, mod_consts.const_str_digest_2b5ecd8f4c3a38a0b15d35cad1820333);
mod_consts_hash[234] = DEEP_HASH(tstate, mod_consts.const_int_pos_542);
mod_consts_hash[235] = DEEP_HASH(tstate, mod_consts.const_tuple_none_false_none_tuple);
mod_consts_hash[236] = DEEP_HASH(tstate, mod_consts.const_str_digest_d8ead9bb88af8e4e9ac78ae3398d5b39);
mod_consts_hash[237] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_credentials);
mod_consts_hash[238] = DEEP_HASH(tstate, mod_consts.const_str_digest_6ec7d5823ebc632bc038cc2a3e006b66);
mod_consts_hash[239] = DEEP_HASH(tstate, mod_consts.const_str_plain_with_target_audience);
mod_consts_hash[240] = DEEP_HASH(tstate, mod_consts.const_str_digest_276fb8f4d65093e22bcf767f2ca8a484);
mod_consts_hash[241] = DEEP_HASH(tstate, mod_consts.const_str_plain_with_include_email);
mod_consts_hash[242] = DEEP_HASH(tstate, mod_consts.const_str_digest_63e519a4dc387508ad3aaaac62c7fcb8);
mod_consts_hash[243] = DEEP_HASH(tstate, mod_consts.const_str_digest_6af9d160c0b4bacec7710303a72b6d4e);
mod_consts_hash[244] = DEEP_HASH(tstate, mod_consts.const_str_digest_9447c97e984c009b4679b69c423eea2b);
mod_consts_hash[245] = DEEP_HASH(tstate, mod_consts.const_tuple_9a8199771944c5a790b7280164c1fc7c_tuple);
mod_consts_hash[246] = DEEP_HASH(tstate, mod_consts.const_str_digest_e4f5144545ade51b4dff2bd860e32915);
mod_consts_hash[247] = DEEP_HASH(tstate, mod_consts.const_str_digest_850220f22d47a29a22f74180dbbf56f9);
mod_consts_hash[248] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[249] = DEEP_HASH(tstate, mod_consts.const_tuple_7e1c0ae1c87a8ad94a5930077e8fb15d_tuple);
mod_consts_hash[250] = DEEP_HASH(tstate, mod_consts.const_tuple_c4f97a270c4cb6954a73f38f46429192_tuple);
mod_consts_hash[251] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[252] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_cred_tuple);
mod_consts_hash[253] = DEEP_HASH(tstate, mod_consts.const_tuple_e59b4d2cb9e2a599fb9ed07d9ff11e96_tuple);
mod_consts_hash[254] = DEEP_HASH(tstate, mod_consts.const_tuple_4d88875a5378f24900da76d0bd47a8bb_tuple);
mod_consts_hash[255] = DEEP_HASH(tstate, mod_consts.const_tuple_33b047cf25c173fbbed7cf28d5aa6f49_tuple);
mod_consts_hash[256] = DEEP_HASH(tstate, mod_consts.const_tuple_9ba4b0ec9a4003b4261156fc5daa0d77_tuple);
mod_consts_hash[257] = DEEP_HASH(tstate, mod_consts.const_tuple_15c34b2120fb8db0654177ee27b322bd_tuple);
mod_consts_hash[258] = DEEP_HASH(tstate, mod_consts.const_tuple_843ffeb5699f853dfe49faa8d1ded14a_tuple);
mod_consts_hash[259] = DEEP_HASH(tstate, mod_consts.const_tuple_40c60aa064c5a3eb715697925381c774_tuple);
mod_consts_hash[260] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_include_email_tuple);
mod_consts_hash[261] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_quota_project_id_str_plain_cred_tuple);
mod_consts_hash[262] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_quota_project_id_tuple);
mod_consts_hash[263] = DEEP_HASH(tstate, mod_consts.const_tuple_c9f09673b3249d8ad06bbf50173488e2_tuple);
mod_consts_hash[264] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_target_audience_tuple);
mod_consts_hash[265] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_trust_boundary_str_plain_cred_tuple);
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
void checkModuleConstants_google$auth$impersonated_credentials(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_iam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_iam);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__IAM_ENDPOINT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__IAM_ENDPOINT);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_replace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_replace);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_credentials));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_credentials);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_UNIVERSE_DOMAIN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_UNIVERSE_DOMAIN);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_json);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_dumps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dumps);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encode);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_POST));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_POST);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_tuple_4d2628c628983f920806be4976c06ae1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4d2628c628983f920806be4976c06ae1_tuple);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_data);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decode);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_status));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_status);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_http_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_http_client);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_OK));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OK);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_RefreshError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RefreshError);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain__REFRESH_ERROR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__REFRESH_ERROR);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_loads));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_loads);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_accessToken));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_accessToken);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_datetime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_datetime);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_strptime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strptime);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_expireTime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_expireTime);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_53f294a8f1d906afcbc93214f5cd448d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_53f294a8f1d906afcbc93214f5cd448d);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_type_KeyError_type_ValueError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_KeyError_type_ValueError_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_a33905df47891e82d7350d3c88c281aa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a33905df47891e82d7350d3c88c281aa);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_ce64ef113c310bcaca0ac1090d79d47f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ce64ef113c310bcaca0ac1090d79d47f);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_Credentials));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Credentials);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copy);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain__source_credentials));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__source_credentials);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_Scoped));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Scoped);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_with_scopes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_with_scopes);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain__IAM_SCOPE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__IAM_SCOPE);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain__create_self_signed_jwt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__create_self_signed_jwt);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain__always_use_jwt_access));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__always_use_jwt_access);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_universe_domain));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_universe_domain);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain__universe_domain));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__universe_domain);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain__target_principal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__target_principal);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain__target_scopes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__target_scopes);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain__delegates));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__delegates);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain__subject));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__subject);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain__DEFAULT_TOKEN_LIFETIME_SECS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__DEFAULT_TOKEN_LIFETIME_SECS);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain__lifetime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__lifetime);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain__helpers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__helpers);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_utcnow));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_utcnow);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_expiry));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_expiry);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain__quota_project_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__quota_project_id);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain__iam_endpoint_override));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__iam_endpoint_override);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain__cred_file_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__cred_file_path);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain__trust_boundary));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__trust_boundary);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_35bf9f09d759db8274bd252476021855));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_35bf9f09d759db8274bd252476021855);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_metrics));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_metrics);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_CRED_TYPE_SA_IMPERSONATE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CRED_TYPE_SA_IMPERSONATE);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_token_state));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token_state);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_TokenState));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TokenState);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_STALE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_STALE);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_INVALID));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_INVALID);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_refresh));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_refresh);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_delegates));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_delegates);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_scope));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scope);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_lifetime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lifetime);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_s));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_s);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_1781891970018ef9597f363946d7327b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1781891970018ef9597f363946d7327b);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_API_CLIENT_HEADER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_API_CLIENT_HEADER);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_token_request_access_token_impersonate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token_request_access_token_impersonate);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_apply));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_apply);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_GoogleAuthError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GoogleAuthError);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_cdc251d2e5abfac1c34d6f5f13c0ed8c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_cdc251d2e5abfac1c34d6f5f13c0ed8c_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_iss));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_iss);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_scopes_to_string));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scopes_to_string);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_sub));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sub);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_aud));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_aud);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain__GOOGLE_OAUTH2_TOKEN_ENDPOINT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__GOOGLE_OAUTH2_TOKEN_ENDPOINT);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_iat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_iat);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_datetime_to_secs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_datetime_to_secs);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_exp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exp);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain__sign_jwt_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__sign_jwt_request);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_98676a120720b67354b26efd02261a67_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_98676a120720b67354b26efd02261a67_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain__client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__client);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_jwt_grant));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_jwt_grant);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain__make_iam_token_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__make_iam_token_request);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_tuple_d7f4101fd9f5d3223242ac96e3e0712c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d7f4101fd9f5d3223242ac96e3e0712c_tuple);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_digest_5f1b642f637a2e14a3f77e2d2351d02d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5f1b642f637a2e14a3f77e2d2351d02d);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_service_account_email));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_service_account_email);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_digest_504922937dff7a2cbb99362ea7c63dfc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_504922937dff7a2cbb99362ea7c63dfc);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain__TRUST_BOUNDARY_LOOKUP_ENDPOINT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__TRUST_BOUNDARY_LOOKUP_ENDPOINT);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_ac2941dd6632b9f1ac2db738b0f4178a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ac2941dd6632b9f1ac2db738b0f4178a);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_digest_eda478fe391780f02c579185f1943916));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eda478fe391780f02c579185f1943916);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AuthorizedSession_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AuthorizedSession_tuple);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_AuthorizedSession));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AuthorizedSession);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain__IAM_SIGN_ENDPOINT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__IAM_SIGN_ENDPOINT);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_payload));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_payload);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_base64));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_base64);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_b64encode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_b64encode);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_dict_36774e2c4486a45b367e3cd59edfaeea));
CHECK_OBJECT_DEEP(mod_consts.const_dict_36774e2c4486a45b367e3cd59edfaeea);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain__exponential_backoff));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__exponential_backoff);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_ExponentialBackoff));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ExponentialBackoff);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_authed_session));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_authed_session);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_post));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_post);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_iam_sign_endpoint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_iam_sign_endpoint);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_headers);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_body));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_body);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_url_str_plain_headers_str_plain_json_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_url_str_plain_headers_str_plain_json_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_status_code));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_status_code);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_IAM_RETRY_CODES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IAM_RETRY_CODES);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_TransportError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TransportError);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_82d20e19375797af02a14b67e54008fa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_82d20e19375797af02a14b67e54008fa);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_b64decode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_b64decode);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_signedBlob));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_signedBlob);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_0d4da83f9f91082b8b3328c34bf1fb87_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_0d4da83f9f91082b8b3328c34bf1fb87_tuple);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_credential_source));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_credential_source);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_credential_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_credential_type);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_digest_9ae0e4636c30231c9622e6c59765aa2a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9ae0e4636c30231c9622e6c59765aa2a);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_principal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_principal);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_tuple_70a040236ea8a852feb6c3f54cc5d205_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_70a040236ea8a852feb6c3f54cc5d205_tuple);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain__make_copy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__make_copy);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_source_credentials_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_source_credentials_tuple);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_type_tuple);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain__SOURCE_CREDENTIAL_AUTHORIZED_USER_TYPE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__SOURCE_CREDENTIAL_AUTHORIZED_USER_TYPE);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_digest_31b40dbd93ddd4efa91cab6083c18890));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_31b40dbd93ddd4efa91cab6083c18890);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_credentials_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_credentials_tuple);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_authorized_user_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_authorized_user_info);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain__SOURCE_CREDENTIAL_SERVICE_ACCOUNT_TYPE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__SOURCE_CREDENTIAL_SERVICE_ACCOUNT_TYPE);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_service_account_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_service_account_tuple);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_service_account));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_service_account);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_service_account_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_service_account_info);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_digest_9b6de995960e30c87da59da3358c3b6c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9b6de995960e30c87da59da3358c3b6c);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_external_account_authorized_user_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_external_account_authorized_user_tuple);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_external_account_authorized_user));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_external_account_authorized_user);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_info);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidType);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_digest_762e2487d4f36709829c4b97c948a22e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_762e2487d4f36709829c4b97c948a22e);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_service_account_impersonation_url_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_service_account_impersonation_url_tuple);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_rfind));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rfind);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_tuple_str_slash_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_slash_tuple);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_find));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_find);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_3e51b004aaa893ad0d2df995a6a87b57_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_3e51b004aaa893ad0d2df995a6a87b57_tuple);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidValue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidValue);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_digest_1fe9e30b42375384764545dafc3578e7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1fe9e30b42375384764545dafc3578e7);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_delegates_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_delegates_tuple);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_quota_project_id_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_quota_project_id_tuple);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_scopes_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_scopes_tuple);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_trust_boundary_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_trust_boundary_tuple);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_quota_project_id_str_plain_trust_boundary_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_quota_project_id_str_plain_trust_boundary_tuple);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_digest_c9984262229af101d6e2f3b105b0b35e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c9984262229af101d6e2f3b105b0b35e);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_IDTokenCredentials));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IDTokenCredentials);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_08d0164f7622702a72289c35aecd1833_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_08d0164f7622702a72289c35aecd1833_tuple);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain__target_credentials));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__target_credentials);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain__target_audience));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__target_audience);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain__include_email));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__include_email);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_digest_5df06c5d06671f6396371875636f30ce));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5df06c5d06671f6396371875636f30ce);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_tuple_411261abc4e78af5fb73b9c4dc77792e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_411261abc4e78af5fb73b9c4dc77792e_tuple);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain__IAM_IDTOKEN_ENDPOINT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__IAM_IDTOKEN_ENDPOINT);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain_signer_email));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_signer_email);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_audience));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_audience);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain_includeEmail));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_includeEmail);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain_token_request_id_token_impersonate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token_request_id_token_impersonate);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_auth_request_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_auth_request_tuple);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_url_str_plain_headers_str_plain_data_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_url_str_plain_headers_str_plain_data_tuple);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_digest_6d0ad32f0118a39a2d89436871ee39af));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6d0ad32f0118a39a2d89436871ee39af);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_digest_0031e5d3a6c81cc90766d5ea441959e1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0031e5d3a6c81cc90766d5ea441959e1);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain_utcfromtimestamp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_utcfromtimestamp);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain_jwt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_jwt);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_dict_f3e8b111ded9225be3e397b0a4e57df6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f3e8b111ded9225be3e397b0a4e57df6);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain__IAM_SIGNJWT_ENDPOINT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__IAM_SIGNJWT_ENDPOINT);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain_signedJwt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_signedJwt);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_digest_de16208f0a323a6a4b0772d2903acfeb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_de16208f0a323a6a4b0772d2903acfeb);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_digest_13dea018a9a58375af7cfb96d9062cf3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_13dea018a9a58375af7cfb96d9062cf3);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_digest_e8bc2dac6795e3d685eac91fcf09c105));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e8bc2dac6795e3d685eac91fcf09c105);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_datetime_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_datetime_tuple);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_digest_096ca139beaf8ac5201071e235ad66b6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_096ca139beaf8ac5201071e235ad66b6);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_client);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__exponential_backoff_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__exponential_backoff_tuple);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__helpers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__helpers_tuple);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_exceptions_tuple);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_iam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_iam_tuple);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_jwt_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_jwt_tuple);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_metrics_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_metrics_tuple);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__client_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__client_tuple);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_digest_061c56fc1f36e3c8ef4df14092880d01));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_061c56fc1f36e3c8ef4df14092880d01);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_int_pos_3600));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3600);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_digest_569bac4d93375a3bb6dddf3fd713403e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_569bac4d93375a3bb6dddf3fd713403e);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_digest_5b6e0e83f83855cea6cda0e01c12c935));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5b6e0e83f83855cea6cda0e01c12c935);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_plain_authorized_user));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_authorized_user);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_plain_CredentialsWithQuotaProject));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CredentialsWithQuotaProject);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_plain_Signing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Signing);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_plain_CredentialsWithTrustBoundary));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CredentialsWithTrustBoundary);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc07402eb604b3efdc1fb10895354bdf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc07402eb604b3efdc1fb10895354bdf);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_digest_beba1a31d6414f1c8d269b026a1f781f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_beba1a31d6414f1c8d269b026a1f781f);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_int_pos_122));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_122);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_str_digest_ece4c0f614049f51dbcf43eaafbb9cdd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ece4c0f614049f51dbcf43eaafbb9cdd);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_plain__metric_header_for_usage));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__metric_header_for_usage);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_digest_5f2d650ac5b0b9ed29e4eae93c0d1e1a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5f2d650ac5b0b9ed29e4eae93c0d1e1a);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_str_plain__perform_refresh_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__perform_refresh_token);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_str_digest_00eee5d168e3eb34147d15f840124f09));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_00eee5d168e3eb34147d15f840124f09);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_str_plain__build_trust_boundary_lookup_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__build_trust_boundary_lookup_url);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_str_digest_19eaf36f050b366ece91596f0ae2dc0b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_19eaf36f050b366ece91596f0ae2dc0b);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_str_plain_sign_bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sign_bytes);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_str_digest_28c602ce6311178ae3445fd4d5291753));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_28c602ce6311178ae3445fd4d5291753);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_str_digest_9f6780cc9cc369f8216839829b6eed5b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9f6780cc9cc369f8216839829b6eed5b);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_str_digest_57ebbe66574bcb89e47410810eeb3c3c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_57ebbe66574bcb89e47410810eeb3c3c);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_str_plain_signer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_signer);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_str_digest_2d28140646409296c1a41f5f2f1c82dd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2d28140646409296c1a41f5f2f1c82dd);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_str_plain_requires_scopes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_requires_scopes);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_str_digest_c1f55ab516b4a48572f0044d037333d7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c1f55ab516b4a48572f0044d037333d7);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy_docstring));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copy_docstring);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_cred_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_cred_info);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_str_digest_2902b573691aef3e2e3d3564ca94d182));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2902b573691aef3e2e3d3564ca94d182);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_str_digest_c91c8525babaffcd4ed5a43632506f7c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c91c8525babaffcd4ed5a43632506f7c);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_str_plain_with_trust_boundary));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_with_trust_boundary);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_str_digest_2cc9bf5f8e7558a0c43ef2dd28c94ff5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2cc9bf5f8e7558a0c43ef2dd28c94ff5);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_str_plain_with_quota_project));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_with_quota_project);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_str_digest_44f0a4aa7b0a627b3fbd4f24ab4ca513));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_44f0a4aa7b0a627b3fbd4f24ab4ca513);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_str_digest_afc9d8104efc5e9725cb6028dda826d8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_afc9d8104efc5e9725cb6028dda826d8);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_impersonated_service_account_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_impersonated_service_account_info);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_str_digest_eb6b6d41ecfc97e0360447591888165b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eb6b6d41ecfc97e0360447591888165b);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_tuple_f580526e7135df046d7ada2bc66f3e2d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f580526e7135df046d7ada2bc66f3e2d_tuple);
assert(mod_consts_hash[231] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[232] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[233] == DEEP_HASH(tstate, mod_consts.const_str_digest_2b5ecd8f4c3a38a0b15d35cad1820333));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2b5ecd8f4c3a38a0b15d35cad1820333);
assert(mod_consts_hash[234] == DEEP_HASH(tstate, mod_consts.const_int_pos_542));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_542);
assert(mod_consts_hash[235] == DEEP_HASH(tstate, mod_consts.const_tuple_none_false_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_false_none_tuple);
assert(mod_consts_hash[236] == DEEP_HASH(tstate, mod_consts.const_str_digest_d8ead9bb88af8e4e9ac78ae3398d5b39));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d8ead9bb88af8e4e9ac78ae3398d5b39);
assert(mod_consts_hash[237] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_credentials));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_credentials);
assert(mod_consts_hash[238] == DEEP_HASH(tstate, mod_consts.const_str_digest_6ec7d5823ebc632bc038cc2a3e006b66));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6ec7d5823ebc632bc038cc2a3e006b66);
assert(mod_consts_hash[239] == DEEP_HASH(tstate, mod_consts.const_str_plain_with_target_audience));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_with_target_audience);
assert(mod_consts_hash[240] == DEEP_HASH(tstate, mod_consts.const_str_digest_276fb8f4d65093e22bcf767f2ca8a484));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_276fb8f4d65093e22bcf767f2ca8a484);
assert(mod_consts_hash[241] == DEEP_HASH(tstate, mod_consts.const_str_plain_with_include_email));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_with_include_email);
assert(mod_consts_hash[242] == DEEP_HASH(tstate, mod_consts.const_str_digest_63e519a4dc387508ad3aaaac62c7fcb8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_63e519a4dc387508ad3aaaac62c7fcb8);
assert(mod_consts_hash[243] == DEEP_HASH(tstate, mod_consts.const_str_digest_6af9d160c0b4bacec7710303a72b6d4e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6af9d160c0b4bacec7710303a72b6d4e);
assert(mod_consts_hash[244] == DEEP_HASH(tstate, mod_consts.const_str_digest_9447c97e984c009b4679b69c423eea2b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9447c97e984c009b4679b69c423eea2b);
assert(mod_consts_hash[245] == DEEP_HASH(tstate, mod_consts.const_tuple_9a8199771944c5a790b7280164c1fc7c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9a8199771944c5a790b7280164c1fc7c_tuple);
assert(mod_consts_hash[246] == DEEP_HASH(tstate, mod_consts.const_str_digest_e4f5144545ade51b4dff2bd860e32915));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e4f5144545ade51b4dff2bd860e32915);
assert(mod_consts_hash[247] == DEEP_HASH(tstate, mod_consts.const_str_digest_850220f22d47a29a22f74180dbbf56f9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_850220f22d47a29a22f74180dbbf56f9);
assert(mod_consts_hash[248] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[249] == DEEP_HASH(tstate, mod_consts.const_tuple_7e1c0ae1c87a8ad94a5930077e8fb15d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_7e1c0ae1c87a8ad94a5930077e8fb15d_tuple);
assert(mod_consts_hash[250] == DEEP_HASH(tstate, mod_consts.const_tuple_c4f97a270c4cb6954a73f38f46429192_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c4f97a270c4cb6954a73f38f46429192_tuple);
assert(mod_consts_hash[251] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[252] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_cred_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_cred_tuple);
assert(mod_consts_hash[253] == DEEP_HASH(tstate, mod_consts.const_tuple_e59b4d2cb9e2a599fb9ed07d9ff11e96_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e59b4d2cb9e2a599fb9ed07d9ff11e96_tuple);
assert(mod_consts_hash[254] == DEEP_HASH(tstate, mod_consts.const_tuple_4d88875a5378f24900da76d0bd47a8bb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4d88875a5378f24900da76d0bd47a8bb_tuple);
assert(mod_consts_hash[255] == DEEP_HASH(tstate, mod_consts.const_tuple_33b047cf25c173fbbed7cf28d5aa6f49_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_33b047cf25c173fbbed7cf28d5aa6f49_tuple);
assert(mod_consts_hash[256] == DEEP_HASH(tstate, mod_consts.const_tuple_9ba4b0ec9a4003b4261156fc5daa0d77_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9ba4b0ec9a4003b4261156fc5daa0d77_tuple);
assert(mod_consts_hash[257] == DEEP_HASH(tstate, mod_consts.const_tuple_15c34b2120fb8db0654177ee27b322bd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_15c34b2120fb8db0654177ee27b322bd_tuple);
assert(mod_consts_hash[258] == DEEP_HASH(tstate, mod_consts.const_tuple_843ffeb5699f853dfe49faa8d1ded14a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_843ffeb5699f853dfe49faa8d1ded14a_tuple);
assert(mod_consts_hash[259] == DEEP_HASH(tstate, mod_consts.const_tuple_40c60aa064c5a3eb715697925381c774_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_40c60aa064c5a3eb715697925381c774_tuple);
assert(mod_consts_hash[260] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_include_email_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_include_email_tuple);
assert(mod_consts_hash[261] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_quota_project_id_str_plain_cred_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_quota_project_id_str_plain_cred_tuple);
assert(mod_consts_hash[262] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_quota_project_id_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_quota_project_id_tuple);
assert(mod_consts_hash[263] == DEEP_HASH(tstate, mod_consts.const_tuple_c9f09673b3249d8ad06bbf50173488e2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c9f09673b3249d8ad06bbf50173488e2_tuple);
assert(mod_consts_hash[264] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_target_audience_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_target_audience_tuple);
assert(mod_consts_hash[265] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_trust_boundary_str_plain_cred_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_trust_boundary_str_plain_cred_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 25
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
static PyObject *module_var_accessor_google$auth$impersonated_credentials$Credentials(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$impersonated_credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$impersonated_credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_Credentials);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$impersonated_credentials->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Credentials);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Credentials, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Credentials);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Credentials, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_Credentials);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_Credentials);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Credentials);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$impersonated_credentials$IDTokenCredentials(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$impersonated_credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$impersonated_credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_IDTokenCredentials);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$impersonated_credentials->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IDTokenCredentials);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IDTokenCredentials, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IDTokenCredentials);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IDTokenCredentials, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_IDTokenCredentials);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_IDTokenCredentials);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IDTokenCredentials);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$impersonated_credentials$_DEFAULT_TOKEN_LIFETIME_SECS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$impersonated_credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$impersonated_credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_TOKEN_LIFETIME_SECS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$impersonated_credentials->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__DEFAULT_TOKEN_LIFETIME_SECS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__DEFAULT_TOKEN_LIFETIME_SECS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__DEFAULT_TOKEN_LIFETIME_SECS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__DEFAULT_TOKEN_LIFETIME_SECS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_TOKEN_LIFETIME_SECS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_TOKEN_LIFETIME_SECS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_TOKEN_LIFETIME_SECS);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$impersonated_credentials$_GOOGLE_OAUTH2_TOKEN_ENDPOINT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$impersonated_credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$impersonated_credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__GOOGLE_OAUTH2_TOKEN_ENDPOINT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$impersonated_credentials->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__GOOGLE_OAUTH2_TOKEN_ENDPOINT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__GOOGLE_OAUTH2_TOKEN_ENDPOINT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__GOOGLE_OAUTH2_TOKEN_ENDPOINT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__GOOGLE_OAUTH2_TOKEN_ENDPOINT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__GOOGLE_OAUTH2_TOKEN_ENDPOINT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__GOOGLE_OAUTH2_TOKEN_ENDPOINT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__GOOGLE_OAUTH2_TOKEN_ENDPOINT);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$impersonated_credentials$_REFRESH_ERROR(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$impersonated_credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$impersonated_credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__REFRESH_ERROR);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$impersonated_credentials->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__REFRESH_ERROR);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__REFRESH_ERROR, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__REFRESH_ERROR);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__REFRESH_ERROR, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__REFRESH_ERROR);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__REFRESH_ERROR);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__REFRESH_ERROR);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$impersonated_credentials$_SOURCE_CREDENTIAL_AUTHORIZED_USER_TYPE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$impersonated_credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$impersonated_credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__SOURCE_CREDENTIAL_AUTHORIZED_USER_TYPE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$impersonated_credentials->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__SOURCE_CREDENTIAL_AUTHORIZED_USER_TYPE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__SOURCE_CREDENTIAL_AUTHORIZED_USER_TYPE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__SOURCE_CREDENTIAL_AUTHORIZED_USER_TYPE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__SOURCE_CREDENTIAL_AUTHORIZED_USER_TYPE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__SOURCE_CREDENTIAL_AUTHORIZED_USER_TYPE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__SOURCE_CREDENTIAL_AUTHORIZED_USER_TYPE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__SOURCE_CREDENTIAL_AUTHORIZED_USER_TYPE);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$impersonated_credentials$_SOURCE_CREDENTIAL_EXTERNAL_ACCOUNT_AUTHORIZED_USER_TYPE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$impersonated_credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$impersonated_credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_digest_9b6de995960e30c87da59da3358c3b6c);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$impersonated_credentials->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_9b6de995960e30c87da59da3358c3b6c);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_9b6de995960e30c87da59da3358c3b6c, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_9b6de995960e30c87da59da3358c3b6c);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_9b6de995960e30c87da59da3358c3b6c, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_digest_9b6de995960e30c87da59da3358c3b6c);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_digest_9b6de995960e30c87da59da3358c3b6c);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_9b6de995960e30c87da59da3358c3b6c);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$impersonated_credentials$_SOURCE_CREDENTIAL_SERVICE_ACCOUNT_TYPE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$impersonated_credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$impersonated_credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__SOURCE_CREDENTIAL_SERVICE_ACCOUNT_TYPE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$impersonated_credentials->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__SOURCE_CREDENTIAL_SERVICE_ACCOUNT_TYPE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__SOURCE_CREDENTIAL_SERVICE_ACCOUNT_TYPE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__SOURCE_CREDENTIAL_SERVICE_ACCOUNT_TYPE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__SOURCE_CREDENTIAL_SERVICE_ACCOUNT_TYPE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__SOURCE_CREDENTIAL_SERVICE_ACCOUNT_TYPE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__SOURCE_CREDENTIAL_SERVICE_ACCOUNT_TYPE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__SOURCE_CREDENTIAL_SERVICE_ACCOUNT_TYPE);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$impersonated_credentials$_TRUST_BOUNDARY_LOOKUP_ENDPOINT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$impersonated_credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$impersonated_credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__TRUST_BOUNDARY_LOOKUP_ENDPOINT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$impersonated_credentials->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__TRUST_BOUNDARY_LOOKUP_ENDPOINT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__TRUST_BOUNDARY_LOOKUP_ENDPOINT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__TRUST_BOUNDARY_LOOKUP_ENDPOINT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__TRUST_BOUNDARY_LOOKUP_ENDPOINT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__TRUST_BOUNDARY_LOOKUP_ENDPOINT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__TRUST_BOUNDARY_LOOKUP_ENDPOINT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__TRUST_BOUNDARY_LOOKUP_ENDPOINT);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$impersonated_credentials$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$impersonated_credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$impersonated_credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$impersonated_credentials->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$impersonated_credentials$_client(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$impersonated_credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$impersonated_credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__client);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$impersonated_credentials->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__client);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__client);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__client);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$impersonated_credentials$_exponential_backoff(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$impersonated_credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$impersonated_credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__exponential_backoff);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$impersonated_credentials->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__exponential_backoff);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__exponential_backoff);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__exponential_backoff);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$impersonated_credentials$_helpers(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$impersonated_credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$impersonated_credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$impersonated_credentials->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$impersonated_credentials$_make_iam_token_request(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$impersonated_credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$impersonated_credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__make_iam_token_request);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$impersonated_credentials->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__make_iam_token_request);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__make_iam_token_request, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__make_iam_token_request);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__make_iam_token_request, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__make_iam_token_request);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__make_iam_token_request);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__make_iam_token_request);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$impersonated_credentials$_sign_jwt_request(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$impersonated_credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$impersonated_credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__sign_jwt_request);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$impersonated_credentials->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__sign_jwt_request);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__sign_jwt_request, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__sign_jwt_request);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__sign_jwt_request, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__sign_jwt_request);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__sign_jwt_request);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__sign_jwt_request);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$impersonated_credentials$base64(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$impersonated_credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$impersonated_credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_base64);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$impersonated_credentials->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_base64);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_base64, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_base64);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_base64, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_base64);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_base64);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_base64);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$impersonated_credentials$copy(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$impersonated_credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$impersonated_credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_copy);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$impersonated_credentials->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_copy);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_copy, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_copy);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_copy, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_copy);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_copy);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_copy);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$impersonated_credentials$credentials(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$impersonated_credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$impersonated_credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_credentials);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$impersonated_credentials->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_credentials);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_credentials);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_credentials);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$impersonated_credentials$datetime(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$impersonated_credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$impersonated_credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_datetime);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$impersonated_credentials->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_datetime);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_datetime);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_datetime);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$impersonated_credentials$exceptions(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$impersonated_credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$impersonated_credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$impersonated_credentials->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$impersonated_credentials$http_client(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$impersonated_credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$impersonated_credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_http_client);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$impersonated_credentials->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_http_client);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_http_client);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_http_client);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$impersonated_credentials$iam(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$impersonated_credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$impersonated_credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_iam);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$impersonated_credentials->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_iam);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_iam, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_iam);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_iam, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_iam);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_iam);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_iam);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$impersonated_credentials$json(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$impersonated_credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$impersonated_credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$impersonated_credentials->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$impersonated_credentials$jwt(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$impersonated_credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$impersonated_credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_jwt);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$impersonated_credentials->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_jwt);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_jwt);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_jwt);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$impersonated_credentials$metrics(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$impersonated_credentials->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$impersonated_credentials->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_metrics);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$impersonated_credentials->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_metrics);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_metrics);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_metrics);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_412233e31d639dff49a9453145e5e68d;
static PyCodeObject *code_objects_dcc07c532c9dc80858232be69a0c7cb7;
static PyCodeObject *code_objects_b7d2e4cff753c14e4a01d2d6244b2f0b;
static PyCodeObject *code_objects_19487edaadb4b134b57aafafb4aaf16b;
static PyCodeObject *code_objects_5cb4c463de28fa95e144770737addecb;
static PyCodeObject *code_objects_b2f51ccdc7a6b75b7d1b88eb441b2f2c;
static PyCodeObject *code_objects_e07914f7902de8ea4893ce5b89cacc19;
static PyCodeObject *code_objects_b04652d33a655f80ea1fb2348d8c1f51;
static PyCodeObject *code_objects_1192080584ccb671359f8fa42a922ec4;
static PyCodeObject *code_objects_01123010123c57fbd72416252bfa5f8e;
static PyCodeObject *code_objects_a23d6920a8cd2800dbda8213e82b92be;
static PyCodeObject *code_objects_178f82f3d4e07b1ddf7a952997f4eabe;
static PyCodeObject *code_objects_9d4df1383865e482969c702b8cbe15a5;
static PyCodeObject *code_objects_48357de4beff08983e30d0fb7528c064;
static PyCodeObject *code_objects_0ed3cd336e8d5b0a914f2c3e47ad91c7;
static PyCodeObject *code_objects_b9b32b9a3f0ec84ab69e52132b1d65c0;
static PyCodeObject *code_objects_aebab1dc9cddab67b29df657c429bc24;
static PyCodeObject *code_objects_cc5a194e992bbe5f345245c985a77d64;
static PyCodeObject *code_objects_170aef9e0454dec3ed675b0fbeadac50;
static PyCodeObject *code_objects_8ccaafac72f165ffa9f3732b58945dee;
static PyCodeObject *code_objects_d066b05ebb54c5461f4a7a63d45d9d48;
static PyCodeObject *code_objects_ceb512b8fcb07f8e8b4105897a2fb57b;
static PyCodeObject *code_objects_9f737beeb5dcb9219a3d4983379fb8cb;
static PyCodeObject *code_objects_fff02c2c0e008f33b8dfe54769385fbd;
static PyCodeObject *code_objects_8bec2c5db43526556c2215e4bc939ea8;
static PyCodeObject *code_objects_b83fdb24dcdfb564c0f48118e2bf75b6;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_e4f5144545ade51b4dff2bd860e32915); CHECK_OBJECT(module_filename_obj);
code_objects_412233e31d639dff49a9453145e5e68d = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_850220f22d47a29a22f74180dbbf56f9, mod_consts.const_str_digest_850220f22d47a29a22f74180dbbf56f9, NULL, NULL, 0, 0, 0);
code_objects_dcc07c532c9dc80858232be69a0c7cb7 = MAKE_CODE_OBJECT(module_filename_obj, 126, 0, mod_consts.const_str_plain_Credentials, mod_consts.const_str_plain_Credentials, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_b7d2e4cff753c14e4a01d2d6244b2f0b = MAKE_CODE_OBJECT(module_filename_obj, 542, 0, mod_consts.const_str_plain_IDTokenCredentials, mod_consts.const_str_plain_IDTokenCredentials, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_19487edaadb4b134b57aafafb4aaf16b = MAKE_CODE_OBJECT(module_filename_obj, 197, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_ece4c0f614049f51dbcf43eaafbb9cdd, mod_consts.const_tuple_7e1c0ae1c87a8ad94a5930077e8fb15d_tuple, NULL, 10, 0, 0);
code_objects_5cb4c463de28fa95e144770737addecb = MAKE_CODE_OBJECT(module_filename_obj, 545, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_d8ead9bb88af8e4e9ac78ae3398d5b39, mod_consts.const_tuple_c4f97a270c4cb6954a73f38f46429192_tuple, NULL, 5, 0, 0);
code_objects_b2f51ccdc7a6b75b7d1b88eb441b2f2c = MAKE_CODE_OBJECT(module_filename_obj, 347, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__build_trust_boundary_lookup_url, mod_consts.const_str_digest_19eaf36f050b366ece91596f0ae2dc0b, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_e07914f7902de8ea4893ce5b89cacc19 = MAKE_CODE_OBJECT(module_filename_obj, 429, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__make_copy, mod_consts.const_str_digest_c91c8525babaffcd4ed5a43632506f7c, mod_consts.const_tuple_str_plain_self_str_plain_cred_tuple, NULL, 1, 0, 0);
code_objects_b04652d33a655f80ea1fb2348d8c1f51 = MAKE_CODE_OBJECT(module_filename_obj, 60, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__make_iam_token_request, mod_consts.const_str_plain__make_iam_token_request, mod_consts.const_tuple_e59b4d2cb9e2a599fb9ed07d9ff11e96_tuple, NULL, 6, 0, 0);
code_objects_1192080584ccb671359f8fa42a922ec4 = MAKE_CODE_OBJECT(module_filename_obj, 272, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__metric_header_for_usage, mod_consts.const_str_digest_5f2d650ac5b0b9ed29e4eae93c0d1e1a, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_01123010123c57fbd72416252bfa5f8e = MAKE_CODE_OBJECT(module_filename_obj, 275, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__perform_refresh_token, mod_consts.const_str_digest_00eee5d168e3eb34147d15f840124f09, mod_consts.const_tuple_4d88875a5378f24900da76d0bd47a8bb_tuple, NULL, 2, 0, 0);
code_objects_a23d6920a8cd2800dbda8213e82b92be = MAKE_CODE_OBJECT(module_filename_obj, 657, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__sign_jwt_request, mod_consts.const_str_plain__sign_jwt_request, mod_consts.const_tuple_33b047cf25c173fbbed7cf28d5aa6f49_tuple, NULL, 5, 0, 0);
code_objects_178f82f3d4e07b1ddf7a952997f4eabe = MAKE_CODE_OBJECT(module_filename_obj, 572, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_from_credentials, mod_consts.const_str_digest_6ec7d5823ebc632bc038cc2a3e006b66, mod_consts.const_tuple_9ba4b0ec9a4003b4261156fc5daa0d77_tuple, NULL, 3, 0, 0);
code_objects_9d4df1383865e482969c702b8cbe15a5 = MAKE_CODE_OBJECT(module_filename_obj, 462, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_from_impersonated_service_account_info, mod_consts.const_str_digest_eb6b6d41ecfc97e0360447591888165b, mod_consts.const_tuple_15c34b2120fb8db0654177ee27b322bd_tuple, NULL, 3, 0, 0);
code_objects_48357de4beff08983e30d0fb7528c064 = MAKE_CODE_OBJECT(module_filename_obj, 420, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_cred_info, mod_consts.const_str_digest_2902b573691aef3e2e3d3564ca94d182, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_0ed3cd336e8d5b0a914f2c3e47ad91c7 = MAKE_CODE_OBJECT(module_filename_obj, 606, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_refresh, mod_consts.const_str_digest_9447c97e984c009b4679b69c423eea2b, mod_consts.const_tuple_843ffeb5699f853dfe49faa8d1ded14a_tuple, NULL, 2, 0, 0);
code_objects_b9b32b9a3f0ec84ab69e52132b1d65c0 = MAKE_CODE_OBJECT(module_filename_obj, 416, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_requires_scopes, mod_consts.const_str_digest_c1f55ab516b4a48572f0044d037333d7, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_aebab1dc9cddab67b29df657c429bc24 = MAKE_CODE_OBJECT(module_filename_obj, 408, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_service_account_email, mod_consts.const_str_digest_57ebbe66574bcb89e47410810eeb3c3c, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_cc5a194e992bbe5f345245c985a77d64 = MAKE_CODE_OBJECT(module_filename_obj, 369, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_sign_bytes, mod_consts.const_str_digest_28c602ce6311178ae3445fd4d5291753, mod_consts.const_tuple_40c60aa064c5a3eb715697925381c774_tuple, NULL, 2, 0, 0);
code_objects_170aef9e0454dec3ed675b0fbeadac50 = MAKE_CODE_OBJECT(module_filename_obj, 412, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_signer, mod_consts.const_str_digest_2d28140646409296c1a41f5f2f1c82dd, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_8ccaafac72f165ffa9f3732b58945dee = MAKE_CODE_OBJECT(module_filename_obj, 404, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_signer_email, mod_consts.const_str_digest_9f6780cc9cc369f8216839829b6eed5b, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_d066b05ebb54c5461f4a7a63d45d9d48 = MAKE_CODE_OBJECT(module_filename_obj, 588, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_with_include_email, mod_consts.const_str_digest_63e519a4dc387508ad3aaaac62c7fcb8, mod_consts.const_tuple_str_plain_self_str_plain_include_email_tuple, NULL, 2, 0, 0);
code_objects_ceb512b8fcb07f8e8b4105897a2fb57b = MAKE_CODE_OBJECT(module_filename_obj, 450, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_with_quota_project, mod_consts.const_str_digest_44f0a4aa7b0a627b3fbd4f24ab4ca513, mod_consts.const_tuple_str_plain_self_str_plain_quota_project_id_str_plain_cred_tuple, NULL, 2, 0, 0);
code_objects_9f737beeb5dcb9219a3d4983379fb8cb = MAKE_CODE_OBJECT(module_filename_obj, 597, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_with_quota_project, mod_consts.const_str_digest_6af9d160c0b4bacec7710303a72b6d4e, mod_consts.const_tuple_str_plain_self_str_plain_quota_project_id_tuple, NULL, 2, 0, 0);
code_objects_fff02c2c0e008f33b8dfe54769385fbd = MAKE_CODE_OBJECT(module_filename_obj, 456, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_with_scopes, mod_consts.const_str_digest_afc9d8104efc5e9725cb6028dda826d8, mod_consts.const_tuple_c9f09673b3249d8ad06bbf50173488e2_tuple, NULL, 3, 0, 0);
code_objects_8bec2c5db43526556c2215e4bc939ea8 = MAKE_CODE_OBJECT(module_filename_obj, 580, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_with_target_audience, mod_consts.const_str_digest_276fb8f4d65093e22bcf767f2ca8a484, mod_consts.const_tuple_str_plain_self_str_plain_target_audience_tuple, NULL, 2, 0, 0);
code_objects_b83fdb24dcdfb564c0f48118e2bf75b6 = MAKE_CODE_OBJECT(module_filename_obj, 444, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_with_trust_boundary, mod_consts.const_str_digest_2cc9bf5f8e7558a0c43ef2dd28c94ff5, mod_consts.const_tuple_str_plain_self_str_plain_trust_boundary_str_plain_cred_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__10_requires_scopes(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__11_get_cred_info(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__12__make_copy(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__13_with_trust_boundary(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__14_with_quota_project(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__15_with_scopes(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__17___init__(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__18_from_credentials(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__19_with_target_audience(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__1__make_iam_token_request(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__20_with_include_email(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__21_with_quota_project(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__22_refresh(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__23__sign_jwt_request(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__2___init__(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__3__metric_header_for_usage(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__4__perform_refresh_token(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__5__build_trust_boundary_lookup_url(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__6_sign_bytes(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__7_signer_email(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__8_service_account_email(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__9_signer(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_google$auth$impersonated_credentials$$$function__1__make_iam_token_request(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_request = python_pars[0];
PyObject *par_principal = python_pars[1];
PyObject *par_headers = python_pars[2];
PyObject *par_body = python_pars[3];
PyObject *par_universe_domain = python_pars[4];
PyObject *par_iam_endpoint_override = python_pars[5];
PyObject *var_iam_endpoint = NULL;
PyObject *var_response = NULL;
PyObject *var_response_body = NULL;
PyObject *var_token_response = NULL;
PyObject *var_token = NULL;
PyObject *var_expiry = NULL;
PyObject *var_caught_exc = NULL;
PyObject *var_new_exc = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$impersonated_credentials$$$function__1__make_iam_token_request;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$impersonated_credentials$$$function__1__make_iam_token_request = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$impersonated_credentials$$$function__1__make_iam_token_request)) {
    Py_XDECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__1__make_iam_token_request);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$impersonated_credentials$$$function__1__make_iam_token_request == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$impersonated_credentials$$$function__1__make_iam_token_request = MAKE_FUNCTION_FRAME(tstate, code_objects_b04652d33a655f80ea1fb2348d8c1f51, module_google$auth$impersonated_credentials, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$impersonated_credentials$$$function__1__make_iam_token_request->m_type_description == NULL);
frame_frame_google$auth$impersonated_credentials$$$function__1__make_iam_token_request = cache_frame_frame_google$auth$impersonated_credentials$$$function__1__make_iam_token_request;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$impersonated_credentials$$$function__1__make_iam_token_request);
assert(Py_REFCNT(frame_frame_google$auth$impersonated_credentials$$$function__1__make_iam_token_request) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_iam_endpoint_override);
tmp_or_left_value_1 = par_iam_endpoint_override;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_expression_value_3 = module_var_accessor_google$auth$impersonated_credentials$iam(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_iam);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__IAM_ENDPOINT);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_replace);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = module_var_accessor_google$auth$impersonated_credentials$credentials(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_credentials);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 88;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_DEFAULT_UNIVERSE_DOMAIN);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 88;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_universe_domain);
tmp_args_element_value_2 = par_universe_domain;
frame_frame_google$auth$impersonated_credentials$$$function__1__make_iam_token_request->m_frame.f_lineno = 87;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_format);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_principal);
tmp_args_element_value_3 = par_principal;
frame_frame_google$auth$impersonated_credentials$$$function__1__make_iam_token_request->m_frame.f_lineno = 87;
tmp_or_right_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_assign_source_1 = tmp_or_left_value_1;
or_end_1:;
assert(var_iam_endpoint == NULL);
var_iam_endpoint = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_4;
tmp_called_instance_1 = module_var_accessor_google$auth$impersonated_credentials$json(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 91;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_body);
tmp_args_element_value_4 = par_body;
frame_frame_google$auth$impersonated_credentials$$$function__1__make_iam_token_request->m_frame.f_lineno = 91;
tmp_expression_value_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_dumps, tmp_args_element_value_4);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_encode);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$impersonated_credentials$$$function__1__make_iam_token_request->m_frame.f_lineno = 91;
tmp_assign_source_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_body;
    assert(old != NULL);
    par_body = tmp_assign_source_2;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_4;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
CHECK_OBJECT(par_request);
tmp_called_value_4 = par_request;
CHECK_OBJECT(var_iam_endpoint);
tmp_kw_call_value_0_1 = var_iam_endpoint;
tmp_kw_call_value_1_1 = mod_consts.const_str_plain_POST;
CHECK_OBJECT(par_headers);
tmp_kw_call_value_2_1 = par_headers;
CHECK_OBJECT(par_body);
tmp_kw_call_value_3_1 = par_body;
frame_frame_google$auth$impersonated_credentials$$$function__1__make_iam_token_request->m_frame.f_lineno = 93;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_assign_source_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, kw_values, mod_consts.const_tuple_4d2628c628983f920806be4976c06ae1_tuple);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_response == NULL);
var_response = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
bool tmp_condition_result_1;
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


exception_lineno = 98;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_6, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
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


exception_lineno = 97;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$impersonated_credentials$$$function__1__make_iam_token_request->m_frame.f_lineno = 97;
tmp_assign_source_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(var_response);
tmp_expression_value_10 = var_response;
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_data);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
assert(var_response_body == NULL);
var_response_body = tmp_assign_source_4;
}
{
nuitka_bool tmp_condition_result_2;
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


exception_lineno = 102;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_12 = module_var_accessor_google$auth$impersonated_credentials$http_client(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_http_client);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 102;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_OK);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 102;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
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
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_expression_value_13 = module_var_accessor_google$auth$impersonated_credentials$exceptions(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 103;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_RefreshError);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = module_var_accessor_google$auth$impersonated_credentials$_REFRESH_ERROR(tstate);
if (unlikely(tmp_args_element_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__REFRESH_ERROR);
}

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 103;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_response_body);
tmp_args_element_value_6 = var_response_body;
frame_frame_google$auth$impersonated_credentials$$$function__1__make_iam_token_request->m_frame.f_lineno = 103;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_raise_type_input_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 103;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_7;
tmp_called_instance_2 = module_var_accessor_google$auth$impersonated_credentials$json(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 106;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_response_body);
tmp_args_element_value_7 = var_response_body;
frame_frame_google$auth$impersonated_credentials$$$function__1__make_iam_token_request->m_frame.f_lineno = 106;
tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_loads, tmp_args_element_value_7);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
assert(var_token_response == NULL);
var_token_response = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_token_response);
tmp_expression_value_14 = var_token_response;
tmp_subscript_value_1 = mod_consts.const_str_plain_accessToken;
tmp_assign_source_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
assert(var_token == NULL);
var_token = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_2;
PyObject *tmp_args_element_value_9;
tmp_expression_value_15 = module_var_accessor_google$auth$impersonated_credentials$datetime(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_datetime);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 108;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_strptime);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_token_response);
tmp_expression_value_16 = var_token_response;
tmp_subscript_value_2 = mod_consts.const_str_plain_expireTime;
tmp_args_element_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_2);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 108;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_9 = mod_consts.const_str_digest_53f294a8f1d906afcbc93214f5cd448d;
frame_frame_google$auth$impersonated_credentials$$$function__1__make_iam_token_request->m_frame.f_lineno = 108;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
assert(var_expiry == NULL);
var_expiry = tmp_assign_source_7;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$impersonated_credentials$$$function__1__make_iam_token_request, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$impersonated_credentials$$$function__1__make_iam_token_request, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = mod_consts.const_tuple_type_KeyError_type_ValueError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "oooooooooooooo";
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
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_8); 
assert(var_caught_exc == NULL);
Py_INCREF(tmp_assign_source_8);
var_caught_exc = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_17;
PyObject *tmp_args_element_value_10;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_args_element_value_11;
tmp_expression_value_17 = module_var_accessor_google$auth$impersonated_credentials$exceptions(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_RefreshError);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_a33905df47891e82d7350d3c88c281aa;
tmp_kw_call_arg_value_1_1 = module_var_accessor_google$auth$impersonated_credentials$_REFRESH_ERROR(tstate);
if (unlikely(tmp_kw_call_arg_value_1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__REFRESH_ERROR);
}

if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_8);

exception_lineno = 115;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}
frame_frame_google$auth$impersonated_credentials$$$function__1__make_iam_token_request->m_frame.f_lineno = 114;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_args_element_value_10 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 114;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_response_body);
tmp_args_element_value_11 = var_response_body;
frame_frame_google$auth$impersonated_credentials$$$function__1__make_iam_token_request->m_frame.f_lineno = 113;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}
assert(var_new_exc == NULL);
var_new_exc = tmp_assign_source_9;
}
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_raise_cause_1;
CHECK_OBJECT(var_new_exc);
tmp_raise_type_input_2 = var_new_exc;
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_caught_exc);
tmp_raise_cause_1 = var_caught_exc;
exception_state.exception_value = tmp_raise_type_2;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 119;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oooooooooooooo";
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
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 105;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$impersonated_credentials$$$function__1__make_iam_token_request->m_frame)) {
        frame_frame_google$auth$impersonated_credentials$$$function__1__make_iam_token_request->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooooo";
goto try_except_handler_3;
branch_end_2:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$impersonated_credentials$$$function__1__make_iam_token_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$impersonated_credentials$$$function__1__make_iam_token_request->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$impersonated_credentials$$$function__1__make_iam_token_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$impersonated_credentials$$$function__1__make_iam_token_request,
    type_description_1,
    par_request,
    par_principal,
    par_headers,
    par_body,
    par_universe_domain,
    par_iam_endpoint_override,
    var_iam_endpoint,
    var_response,
    var_response_body,
    var_token_response,
    var_token,
    var_expiry,
    var_caught_exc,
    var_new_exc
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$impersonated_credentials$$$function__1__make_iam_token_request == cache_frame_frame_google$auth$impersonated_credentials$$$function__1__make_iam_token_request) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__1__make_iam_token_request);
    cache_frame_frame_google$auth$impersonated_credentials$$$function__1__make_iam_token_request = NULL;
}

assertFrameObject(frame_frame_google$auth$impersonated_credentials$$$function__1__make_iam_token_request);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_token);
tmp_tuple_element_1 = var_token;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_expiry);
tmp_tuple_element_1 = var_expiry;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_body);
CHECK_OBJECT(par_body);
Py_DECREF(par_body);
par_body = NULL;
CHECK_OBJECT(var_iam_endpoint);
CHECK_OBJECT(var_iam_endpoint);
Py_DECREF(var_iam_endpoint);
var_iam_endpoint = NULL;
CHECK_OBJECT(var_response);
CHECK_OBJECT(var_response);
Py_DECREF(var_response);
var_response = NULL;
CHECK_OBJECT(var_response_body);
CHECK_OBJECT(var_response_body);
Py_DECREF(var_response_body);
var_response_body = NULL;
CHECK_OBJECT(var_token_response);
CHECK_OBJECT(var_token_response);
Py_DECREF(var_token_response);
var_token_response = NULL;
CHECK_OBJECT(var_token);
CHECK_OBJECT(var_token);
Py_DECREF(var_token);
var_token = NULL;
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

Py_XDECREF(par_body);
par_body = NULL;
Py_XDECREF(var_iam_endpoint);
var_iam_endpoint = NULL;
Py_XDECREF(var_response);
var_response = NULL;
Py_XDECREF(var_response_body);
var_response_body = NULL;
Py_XDECREF(var_token_response);
var_token_response = NULL;
Py_XDECREF(var_token);
var_token = NULL;
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
CHECK_OBJECT(par_principal);
Py_DECREF(par_principal);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_universe_domain);
Py_DECREF(par_universe_domain);
CHECK_OBJECT(par_iam_endpoint_override);
Py_DECREF(par_iam_endpoint_override);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_principal);
Py_DECREF(par_principal);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_universe_domain);
Py_DECREF(par_universe_domain);
CHECK_OBJECT(par_iam_endpoint_override);
Py_DECREF(par_iam_endpoint_override);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$impersonated_credentials$$$function__2___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_source_credentials = python_pars[1];
PyObject *par_target_principal = python_pars[2];
PyObject *par_target_scopes = python_pars[3];
PyObject *par_delegates = python_pars[4];
PyObject *par_subject = python_pars[5];
PyObject *par_lifetime = python_pars[6];
PyObject *par_quota_project_id = python_pars[7];
PyObject *par_iam_endpoint_override = python_pars[8];
PyObject *par_trust_boundary = python_pars[9];
struct Nuitka_FrameObject *frame_frame_google$auth$impersonated_credentials$$$function__2___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$impersonated_credentials$$$function__2___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$impersonated_credentials$$$function__2___init__)) {
    Py_XDECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__2___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$impersonated_credentials$$$function__2___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$impersonated_credentials$$$function__2___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_19487edaadb4b134b57aafafb4aaf16b, module_google$auth$impersonated_credentials, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$impersonated_credentials$$$function__2___init__->m_type_description == NULL);
frame_frame_google$auth$impersonated_credentials$$$function__2___init__ = cache_frame_frame_google$auth$impersonated_credentials$$$function__2___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$impersonated_credentials$$$function__2___init__);
assert(Py_REFCNT(frame_frame_google$auth$impersonated_credentials$$$function__2___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
tmp_type_arg_value_1 = module_var_accessor_google$auth$impersonated_credentials$Credentials(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Credentials);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 241;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER2(tstate, moduledict_google$auth$impersonated_credentials, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$impersonated_credentials$$$function__2___init__->m_frame.f_lineno = 241;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain___init__);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_assattr_target_1;
tmp_expression_value_1 = module_var_accessor_google$auth$impersonated_credentials$copy(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_copy);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 243;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_copy);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_source_credentials);
tmp_args_element_value_1 = par_source_credentials;
frame_frame_google$auth$impersonated_credentials$$$function__2___init__->m_frame.f_lineno = 243;
tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__source_credentials, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__source_credentials);
if (tmp_isinstance_inst_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = module_var_accessor_google$auth$impersonated_credentials$credentials(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_credentials);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_isinstance_inst_1);

exception_lineno = 247;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_Scoped);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_isinstance_inst_1);

exception_lineno = 247;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_inst_1);
Py_DECREF(tmp_isinstance_inst_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__source_credentials);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_with_scopes);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = module_var_accessor_google$auth$impersonated_credentials$iam(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_iam);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 249;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__IAM_SCOPE);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 249;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$impersonated_credentials$$$function__2___init__->m_frame.f_lineno = 248;
tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__source_credentials, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__source_credentials);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_7, mod_consts.const_str_plain__create_self_signed_jwt);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "ooooooooooN";
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
tmp_expression_value_10 = par_self;
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain__source_credentials);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__always_use_jwt_access);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 255;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_condition_result_2 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_2 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_11;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain__source_credentials);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$impersonated_credentials$$$function__2___init__->m_frame.f_lineno = 257;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain__create_self_signed_jwt,
    PyTuple_GET_ITEM(mod_consts.const_tuple_none_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_2:;
branch_no_1:;
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_expression_value_12;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_source_credentials);
tmp_expression_value_12 = par_source_credentials;
tmp_assattr_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_universe_domain);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__universe_domain, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_target_principal);
tmp_assattr_value_4 = par_target_principal;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__target_principal, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(par_target_scopes);
tmp_assattr_value_5 = par_target_scopes;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__target_scopes, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
CHECK_OBJECT(par_delegates);
tmp_assattr_value_6 = par_delegates;
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain__delegates, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_assattr_target_7;
CHECK_OBJECT(par_subject);
tmp_assattr_value_7 = par_subject;
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain__subject, tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_8;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_assattr_target_8;
CHECK_OBJECT(par_lifetime);
tmp_or_left_value_1 = par_lifetime;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_or_right_value_1 = module_var_accessor_google$auth$impersonated_credentials$_DEFAULT_TOKEN_LIFETIME_SECS(tstate);
if (unlikely(tmp_or_right_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__DEFAULT_TOKEN_LIFETIME_SECS);
}

if (tmp_or_right_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 264;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
tmp_assattr_value_8 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assattr_value_8 = tmp_or_left_value_1;
or_end_1:;
CHECK_OBJECT(par_self);
tmp_assattr_target_8 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain__lifetime, tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_9;
PyObject *tmp_assattr_target_9;
tmp_assattr_value_9 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_9 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts.const_str_plain_token, tmp_assattr_value_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_10;
PyObject *tmp_called_instance_3;
PyObject *tmp_assattr_target_10;
tmp_called_instance_3 = module_var_accessor_google$auth$impersonated_credentials$_helpers(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 266;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$impersonated_credentials$$$function__2___init__->m_frame.f_lineno = 266;
tmp_assattr_value_10 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_utcnow);
if (tmp_assattr_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_10 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts.const_str_plain_expiry, tmp_assattr_value_10);
CHECK_OBJECT(tmp_assattr_value_10);
Py_DECREF(tmp_assattr_value_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_11;
PyObject *tmp_assattr_target_11;
CHECK_OBJECT(par_quota_project_id);
tmp_assattr_value_11 = par_quota_project_id;
CHECK_OBJECT(par_self);
tmp_assattr_target_11 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts.const_str_plain__quota_project_id, tmp_assattr_value_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_12;
PyObject *tmp_assattr_target_12;
CHECK_OBJECT(par_iam_endpoint_override);
tmp_assattr_value_12 = par_iam_endpoint_override;
CHECK_OBJECT(par_self);
tmp_assattr_target_12 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts.const_str_plain__iam_endpoint_override, tmp_assattr_value_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_13;
PyObject *tmp_assattr_target_13;
tmp_assattr_value_13 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_13 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts.const_str_plain__cred_file_path, tmp_assattr_value_13);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_14;
PyObject *tmp_assattr_target_14;
CHECK_OBJECT(par_trust_boundary);
tmp_assattr_value_14 = par_trust_boundary;
CHECK_OBJECT(par_self);
tmp_assattr_target_14 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, mod_consts.const_str_plain__trust_boundary, tmp_assattr_value_14);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "ooooooooooN";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$impersonated_credentials$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$impersonated_credentials$$$function__2___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$impersonated_credentials$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$impersonated_credentials$$$function__2___init__,
    type_description_1,
    par_self,
    par_source_credentials,
    par_target_principal,
    par_target_scopes,
    par_delegates,
    par_subject,
    par_lifetime,
    par_quota_project_id,
    par_iam_endpoint_override,
    par_trust_boundary,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$impersonated_credentials$$$function__2___init__ == cache_frame_frame_google$auth$impersonated_credentials$$$function__2___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__2___init__);
    cache_frame_frame_google$auth$impersonated_credentials$$$function__2___init__ = NULL;
}

assertFrameObject(frame_frame_google$auth$impersonated_credentials$$$function__2___init__);

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
CHECK_OBJECT(par_source_credentials);
Py_DECREF(par_source_credentials);
CHECK_OBJECT(par_target_principal);
Py_DECREF(par_target_principal);
CHECK_OBJECT(par_target_scopes);
Py_DECREF(par_target_scopes);
CHECK_OBJECT(par_delegates);
Py_DECREF(par_delegates);
CHECK_OBJECT(par_subject);
Py_DECREF(par_subject);
CHECK_OBJECT(par_lifetime);
Py_DECREF(par_lifetime);
CHECK_OBJECT(par_quota_project_id);
Py_DECREF(par_quota_project_id);
CHECK_OBJECT(par_iam_endpoint_override);
Py_DECREF(par_iam_endpoint_override);
CHECK_OBJECT(par_trust_boundary);
Py_DECREF(par_trust_boundary);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_source_credentials);
Py_DECREF(par_source_credentials);
CHECK_OBJECT(par_target_principal);
Py_DECREF(par_target_principal);
CHECK_OBJECT(par_target_scopes);
Py_DECREF(par_target_scopes);
CHECK_OBJECT(par_delegates);
Py_DECREF(par_delegates);
CHECK_OBJECT(par_subject);
Py_DECREF(par_subject);
CHECK_OBJECT(par_lifetime);
Py_DECREF(par_lifetime);
CHECK_OBJECT(par_quota_project_id);
Py_DECREF(par_quota_project_id);
CHECK_OBJECT(par_iam_endpoint_override);
Py_DECREF(par_iam_endpoint_override);
CHECK_OBJECT(par_trust_boundary);
Py_DECREF(par_trust_boundary);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$impersonated_credentials$$$function__3__metric_header_for_usage(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$impersonated_credentials$$$function__3__metric_header_for_usage;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$impersonated_credentials$$$function__3__metric_header_for_usage = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$impersonated_credentials$$$function__3__metric_header_for_usage)) {
    Py_XDECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__3__metric_header_for_usage);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$impersonated_credentials$$$function__3__metric_header_for_usage == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$impersonated_credentials$$$function__3__metric_header_for_usage = MAKE_FUNCTION_FRAME(tstate, code_objects_1192080584ccb671359f8fa42a922ec4, module_google$auth$impersonated_credentials, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$impersonated_credentials$$$function__3__metric_header_for_usage->m_type_description == NULL);
frame_frame_google$auth$impersonated_credentials$$$function__3__metric_header_for_usage = cache_frame_frame_google$auth$impersonated_credentials$$$function__3__metric_header_for_usage;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$impersonated_credentials$$$function__3__metric_header_for_usage);
assert(Py_REFCNT(frame_frame_google$auth$impersonated_credentials$$$function__3__metric_header_for_usage) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_google$auth$impersonated_credentials$metrics(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_metrics);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 273;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_CRED_TYPE_SA_IMPERSONATE);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$impersonated_credentials$$$function__3__metric_header_for_usage, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$impersonated_credentials$$$function__3__metric_header_for_usage->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$impersonated_credentials$$$function__3__metric_header_for_usage, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$impersonated_credentials$$$function__3__metric_header_for_usage,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$impersonated_credentials$$$function__3__metric_header_for_usage == cache_frame_frame_google$auth$impersonated_credentials$$$function__3__metric_header_for_usage) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__3__metric_header_for_usage);
    cache_frame_frame_google$auth$impersonated_credentials$$$function__3__metric_header_for_usage = NULL;
}

assertFrameObject(frame_frame_google$auth$impersonated_credentials$$$function__3__metric_header_for_usage);

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


static PyObject *impl_google$auth$impersonated_credentials$$$function__4__perform_refresh_token(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_request = python_pars[1];
PyObject *var_body = NULL;
PyObject *var_headers = NULL;
PyObject *var_now = NULL;
PyObject *var_payload = NULL;
PyObject *var_assertion = NULL;
PyObject *var__ = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$impersonated_credentials$$$function__4__perform_refresh_token;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$impersonated_credentials$$$function__4__perform_refresh_token = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$impersonated_credentials$$$function__4__perform_refresh_token)) {
    Py_XDECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__4__perform_refresh_token);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$impersonated_credentials$$$function__4__perform_refresh_token == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$impersonated_credentials$$$function__4__perform_refresh_token = MAKE_FUNCTION_FRAME(tstate, code_objects_01123010123c57fbd72416252bfa5f8e, module_google$auth$impersonated_credentials, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$impersonated_credentials$$$function__4__perform_refresh_token->m_type_description == NULL);
frame_frame_google$auth$impersonated_credentials$$$function__4__perform_refresh_token = cache_frame_frame_google$auth$impersonated_credentials$$$function__4__perform_refresh_token;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$impersonated_credentials$$$function__4__perform_refresh_token);
assert(Py_REFCNT(frame_frame_google$auth$impersonated_credentials$$$function__4__perform_refresh_token) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__source_credentials);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_token_state);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = module_var_accessor_google$auth$impersonated_credentials$credentials(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_credentials);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 286;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_TokenState);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 286;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_STALE);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 286;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__source_credentials);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_token_state);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_8 = module_var_accessor_google$auth$impersonated_credentials$credentials(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_credentials);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 287;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_TokenState);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 287;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_INVALID);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 287;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_1 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__source_credentials);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_args_element_value_1 = par_request;
frame_frame_google$auth$impersonated_credentials$$$function__4__perform_refresh_token->m_frame.f_lineno = 289;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_refresh, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_10;
tmp_dict_key_1 = mod_consts.const_str_plain_delegates;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain__delegates);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_11;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_unicode_arg_1;
PyObject *tmp_expression_value_12;
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_scope;
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain__target_scopes);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "oooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_lifetime;
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_unicode_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain__lifetime);
if (tmp_unicode_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "oooooooo";
    goto dict_build_exception_1;
}
tmp_add_expr_left_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
CHECK_OBJECT(tmp_unicode_arg_1);
Py_DECREF(tmp_unicode_arg_1);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "oooooooo";
    goto dict_build_exception_1;
}
tmp_add_expr_right_1 = mod_consts.const_str_plain_s;
tmp_dict_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "oooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
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
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
tmp_dict_key_2 = mod_consts.const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3;
tmp_dict_value_2 = mod_consts.const_str_digest_1781891970018ef9597f363946d7327b;
tmp_assign_source_2 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_13;
PyObject *tmp_called_instance_2;
tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_expression_value_13 = module_var_accessor_google$auth$impersonated_credentials$metrics(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_metrics);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 299;
type_description_1 = "oooooooo";
    goto dict_build_exception_2;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_API_CLIENT_HEADER);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "oooooooo";
    goto dict_build_exception_2;
}
tmp_called_instance_2 = module_var_accessor_google$auth$impersonated_credentials$metrics(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_metrics);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_2);

exception_lineno = 299;
type_description_1 = "oooooooo";
    goto dict_build_exception_2;
}
frame_frame_google$auth$impersonated_credentials$$$function__4__perform_refresh_token->m_frame.f_lineno = 299;
tmp_dict_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_token_request_access_token_impersonate);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_2);

exception_lineno = 299;
type_description_1 = "oooooooo";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "oooooooo";
    goto dict_build_exception_2;
}
}
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_assign_source_2);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
assert(var_headers == NULL);
var_headers = tmp_assign_source_2;
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_14;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_14 = par_self;
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain__source_credentials);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_headers);
tmp_args_element_value_2 = var_headers;
frame_frame_google$auth$impersonated_credentials$$$function__4__perform_refresh_token->m_frame.f_lineno = 303;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_apply, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_15;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_15 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain__subject);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 307;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(par_self);
tmp_expression_value_16 = par_self;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_universe_domain);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_17 = module_var_accessor_google$auth$impersonated_credentials$credentials(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_credentials);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 308;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_DEFAULT_UNIVERSE_DOMAIN);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 308;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_4;
tmp_called_instance_4 = module_var_accessor_google$auth$impersonated_credentials$exceptions(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 309;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$impersonated_credentials$$$function__4__perform_refresh_token->m_frame.f_lineno = 309;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_4,
    mod_consts.const_str_plain_GoogleAuthError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_cdc251d2e5abfac1c34d6f5f13c0ed8c_tuple, 0)
);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 309;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_5;
tmp_called_instance_5 = module_var_accessor_google$auth$impersonated_credentials$_helpers(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 314;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$impersonated_credentials$$$function__4__perform_refresh_token->m_frame.f_lineno = 314;
tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts.const_str_plain_utcnow);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_now == NULL);
var_now = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_expression_value_18;
tmp_dict_key_3 = mod_consts.const_str_plain_iss;
CHECK_OBJECT(par_self);
tmp_expression_value_18 = par_self;
tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain__target_principal);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = _PyDict_NewPresized( 6 );
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_19;
PyObject *tmp_args_element_value_3;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_expression_value_20;
PyObject *tmp_expression_value_21;
PyObject *tmp_called_instance_6;
PyObject *tmp_args_element_value_4;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_called_instance_7;
PyObject *tmp_args_element_value_5;
tmp_res = PyDict_SetItem(tmp_assign_source_4, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_scope;
tmp_expression_value_19 = module_var_accessor_google$auth$impersonated_credentials$_helpers(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 317;
type_description_1 = "oooooooo";
    goto dict_build_exception_3;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_scopes_to_string);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_1 = "oooooooo";
    goto dict_build_exception_3;
}
CHECK_OBJECT(par_self);
tmp_expression_value_20 = par_self;
tmp_or_left_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain__target_scopes);
if (tmp_or_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 317;
type_description_1 = "oooooooo";
    goto dict_build_exception_3;
}
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_or_left_value_2);

exception_lineno = 317;
type_description_1 = "oooooooo";
    goto dict_build_exception_3;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(tmp_or_left_value_2);
Py_DECREF(tmp_or_left_value_2);
tmp_or_right_value_2 = const_tuple_empty;
Py_INCREF(tmp_or_right_value_2);
tmp_args_element_value_3 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_args_element_value_3 = tmp_or_left_value_2;
or_end_2:;
frame_frame_google$auth$impersonated_credentials$$$function__4__perform_refresh_token->m_frame.f_lineno = 317;
tmp_dict_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_1 = "oooooooo";
    goto dict_build_exception_3;
}
tmp_res = PyDict_SetItem(tmp_assign_source_4, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_sub;
CHECK_OBJECT(par_self);
tmp_expression_value_21 = par_self;
tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain__subject);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "oooooooo";
    goto dict_build_exception_3;
}
tmp_res = PyDict_SetItem(tmp_assign_source_4, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_aud;
tmp_dict_value_3 = module_var_accessor_google$auth$impersonated_credentials$_GOOGLE_OAUTH2_TOKEN_ENDPOINT(tstate);
if (unlikely(tmp_dict_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__GOOGLE_OAUTH2_TOKEN_ENDPOINT);
}

if (tmp_dict_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 319;
type_description_1 = "oooooooo";
    goto dict_build_exception_3;
}
tmp_res = PyDict_SetItem(tmp_assign_source_4, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_iat;
tmp_called_instance_6 = module_var_accessor_google$auth$impersonated_credentials$_helpers(tstate);
if (unlikely(tmp_called_instance_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_called_instance_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 320;
type_description_1 = "oooooooo";
    goto dict_build_exception_3;
}
CHECK_OBJECT(var_now);
tmp_args_element_value_4 = var_now;
frame_frame_google$auth$impersonated_credentials$$$function__4__perform_refresh_token->m_frame.f_lineno = 320;
tmp_dict_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts.const_str_plain_datetime_to_secs, tmp_args_element_value_4);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_1 = "oooooooo";
    goto dict_build_exception_3;
}
tmp_res = PyDict_SetItem(tmp_assign_source_4, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_exp;
tmp_called_instance_7 = module_var_accessor_google$auth$impersonated_credentials$_helpers(tstate);
if (unlikely(tmp_called_instance_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_called_instance_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 321;
type_description_1 = "oooooooo";
    goto dict_build_exception_3;
}
CHECK_OBJECT(var_now);
tmp_args_element_value_5 = var_now;
frame_frame_google$auth$impersonated_credentials$$$function__4__perform_refresh_token->m_frame.f_lineno = 321;
tmp_add_expr_left_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts.const_str_plain_datetime_to_secs, tmp_args_element_value_5);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "oooooooo";
    goto dict_build_exception_3;
}
tmp_add_expr_right_2 = module_var_accessor_google$auth$impersonated_credentials$_DEFAULT_TOKEN_LIFETIME_SECS(tstate);
if (unlikely(tmp_add_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__DEFAULT_TOKEN_LIFETIME_SECS);
}

if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 321;
type_description_1 = "oooooooo";
    goto dict_build_exception_3;
}
tmp_dict_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "oooooooo";
    goto dict_build_exception_3;
}
tmp_res = PyDict_SetItem(tmp_assign_source_4, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_3;
// Exception handling pass through code for dict_build:
dict_build_exception_3:;
Py_DECREF(tmp_assign_source_4);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_3:;
assert(var_payload == NULL);
var_payload = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_expression_value_22;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
PyObject *tmp_expression_value_23;
tmp_called_value_2 = module_var_accessor_google$auth$impersonated_credentials$_sign_jwt_request(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__sign_jwt_request);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 324;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_kw_call_value_0_1 = par_request;
CHECK_OBJECT(par_self);
tmp_expression_value_22 = par_self;
tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain__target_principal);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_headers);
tmp_kw_call_value_2_1 = var_headers;
CHECK_OBJECT(var_payload);
tmp_kw_call_value_3_1 = var_payload;
CHECK_OBJECT(par_self);
tmp_expression_value_23 = par_self;
tmp_kw_call_value_4_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain__delegates);
if (tmp_kw_call_value_4_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_1_1);

exception_lineno = 329;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$impersonated_credentials$$$function__4__perform_refresh_token->m_frame.f_lineno = 324;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

    tmp_assign_source_5 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_98676a120720b67354b26efd02261a67_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
CHECK_OBJECT(tmp_kw_call_value_4_1);
Py_DECREF(tmp_kw_call_value_4_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_assertion == NULL);
var_assertion = tmp_assign_source_5;
}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_24;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
tmp_expression_value_24 = module_var_accessor_google$auth$impersonated_credentials$_client(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__client);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 332;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_jwt_grant);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_request);
tmp_args_element_value_6 = par_request;
tmp_args_element_value_7 = module_var_accessor_google$auth$impersonated_credentials$_GOOGLE_OAUTH2_TOKEN_ENDPOINT(tstate);
if (unlikely(tmp_args_element_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__GOOGLE_OAUTH2_TOKEN_ENDPOINT);
}

if (tmp_args_element_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 333;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_assertion);
tmp_args_element_value_8 = var_assertion;
frame_frame_google$auth$impersonated_credentials$$$function__4__perform_refresh_token->m_frame.f_lineno = 332;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 332;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 332;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_9 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 332;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_3 == NULL);
tmp_tuple_unpack_1__element_3 = tmp_assign_source_9;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 332;
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
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assattr_value_1 = tmp_tuple_unpack_1__element_1;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_token, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assattr_value_2 = tmp_tuple_unpack_1__element_2;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_expiry, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
}
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
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_10 = tmp_tuple_unpack_1__element_3;
assert(var__ == NULL);
Py_INCREF(tmp_assign_source_10);
var__ = tmp_assign_source_10;
}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_4;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_expression_value_25;
PyObject *tmp_kw_call_value_2_2;
PyObject *tmp_kw_call_value_3_2;
PyObject *tmp_kw_call_value_4_2;
PyObject *tmp_expression_value_26;
PyObject *tmp_kw_call_value_5_1;
PyObject *tmp_expression_value_27;
tmp_called_value_4 = module_var_accessor_google$auth$impersonated_credentials$_make_iam_token_request(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__make_iam_token_request);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 338;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_request);
tmp_kw_call_value_0_2 = par_request;
CHECK_OBJECT(par_self);
tmp_expression_value_25 = par_self;
tmp_kw_call_value_1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain__target_principal);
if (tmp_kw_call_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_headers);
tmp_kw_call_value_2_2 = var_headers;
CHECK_OBJECT(var_body);
tmp_kw_call_value_3_2 = var_body;
CHECK_OBJECT(par_self);
tmp_expression_value_26 = par_self;
tmp_kw_call_value_4_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_universe_domain);
if (tmp_kw_call_value_4_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_1_2);

exception_lineno = 343;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_self);
tmp_expression_value_27 = par_self;
tmp_kw_call_value_5_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain__iam_endpoint_override);
if (tmp_kw_call_value_5_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_1_2);
Py_DECREF(tmp_kw_call_value_4_2);

exception_lineno = 344;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
frame_frame_google$auth$impersonated_credentials$$$function__4__perform_refresh_token->m_frame.f_lineno = 338;
{
    PyObject *kw_values[6] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2, tmp_kw_call_value_3_2, tmp_kw_call_value_4_2, tmp_kw_call_value_5_1};

    tmp_iter_arg_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, kw_values, mod_consts.const_tuple_d7f4101fd9f5d3223242ac96e3e0712c_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_1_2);
Py_DECREF(tmp_kw_call_value_1_2);
CHECK_OBJECT(tmp_kw_call_value_4_2);
Py_DECREF(tmp_kw_call_value_4_2);
CHECK_OBJECT(tmp_kw_call_value_5_1);
Py_DECREF(tmp_kw_call_value_5_1);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_11 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_1 = "oooooooo";
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
tmp_assign_source_12 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 0, 2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 338;
type_description_1 = "oooooooo";
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
tmp_assign_source_13 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 1, 2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 338;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_2 == NULL);
tmp_tuple_unpack_2__element_2 = tmp_assign_source_13;
}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 338;
type_description_1 = "oooooooo";
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
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assattr_value_3 = tmp_tuple_unpack_2__element_1;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_token, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assattr_value_4 = tmp_tuple_unpack_2__element_2;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_expiry, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
}
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$impersonated_credentials$$$function__4__perform_refresh_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$impersonated_credentials$$$function__4__perform_refresh_token->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$impersonated_credentials$$$function__4__perform_refresh_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$impersonated_credentials$$$function__4__perform_refresh_token,
    type_description_1,
    par_self,
    par_request,
    var_body,
    var_headers,
    var_now,
    var_payload,
    var_assertion,
    var__
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$impersonated_credentials$$$function__4__perform_refresh_token == cache_frame_frame_google$auth$impersonated_credentials$$$function__4__perform_refresh_token) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__4__perform_refresh_token);
    cache_frame_frame_google$auth$impersonated_credentials$$$function__4__perform_refresh_token = NULL;
}

assertFrameObject(frame_frame_google$auth$impersonated_credentials$$$function__4__perform_refresh_token);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_body);
CHECK_OBJECT(var_body);
Py_DECREF(var_body);
var_body = NULL;
CHECK_OBJECT(var_headers);
CHECK_OBJECT(var_headers);
Py_DECREF(var_headers);
var_headers = NULL;
Py_XDECREF(var_now);
var_now = NULL;
Py_XDECREF(var_payload);
var_payload = NULL;
Py_XDECREF(var_assertion);
var_assertion = NULL;
Py_XDECREF(var__);
var__ = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_body);
var_body = NULL;
Py_XDECREF(var_headers);
var_headers = NULL;
Py_XDECREF(var_now);
var_now = NULL;
Py_XDECREF(var_payload);
var_payload = NULL;
Py_XDECREF(var_assertion);
var_assertion = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$impersonated_credentials$$$function__5__build_trust_boundary_lookup_url(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$impersonated_credentials$$$function__5__build_trust_boundary_lookup_url;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$impersonated_credentials$$$function__5__build_trust_boundary_lookup_url = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$impersonated_credentials$$$function__5__build_trust_boundary_lookup_url)) {
    Py_XDECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__5__build_trust_boundary_lookup_url);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$impersonated_credentials$$$function__5__build_trust_boundary_lookup_url == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$impersonated_credentials$$$function__5__build_trust_boundary_lookup_url = MAKE_FUNCTION_FRAME(tstate, code_objects_b2f51ccdc7a6b75b7d1b88eb441b2f2c, module_google$auth$impersonated_credentials, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$impersonated_credentials$$$function__5__build_trust_boundary_lookup_url->m_type_description == NULL);
frame_frame_google$auth$impersonated_credentials$$$function__5__build_trust_boundary_lookup_url = cache_frame_frame_google$auth$impersonated_credentials$$$function__5__build_trust_boundary_lookup_url;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$impersonated_credentials$$$function__5__build_trust_boundary_lookup_url);
assert(Py_REFCNT(frame_frame_google$auth$impersonated_credentials$$$function__5__build_trust_boundary_lookup_url) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_service_account_email);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_1 = "o";
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
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_504922937dff7a2cbb99362ea7c63dfc;
frame_frame_google$auth$impersonated_credentials$$$function__5__build_trust_boundary_lookup_url->m_frame.f_lineno = 362;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 362;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
tmp_expression_value_2 = module_var_accessor_google$auth$impersonated_credentials$_TRUST_BOUNDARY_LOOKUP_ENDPOINT(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__TRUST_BOUNDARY_LOOKUP_ENDPOINT);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 365;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_format);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_universe_domain);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 366;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_service_account_email);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 366;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$impersonated_credentials$$$function__5__build_trust_boundary_lookup_url->m_frame.f_lineno = 365;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$impersonated_credentials$$$function__5__build_trust_boundary_lookup_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$impersonated_credentials$$$function__5__build_trust_boundary_lookup_url->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$impersonated_credentials$$$function__5__build_trust_boundary_lookup_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$impersonated_credentials$$$function__5__build_trust_boundary_lookup_url,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$impersonated_credentials$$$function__5__build_trust_boundary_lookup_url == cache_frame_frame_google$auth$impersonated_credentials$$$function__5__build_trust_boundary_lookup_url) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__5__build_trust_boundary_lookup_url);
    cache_frame_frame_google$auth$impersonated_credentials$$$function__5__build_trust_boundary_lookup_url = NULL;
}

assertFrameObject(frame_frame_google$auth$impersonated_credentials$$$function__5__build_trust_boundary_lookup_url);

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


static PyObject *impl_google$auth$impersonated_credentials$$$function__6_sign_bytes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_message = python_pars[1];
PyObject *var_AuthorizedSession = NULL;
PyObject *var_iam_sign_endpoint = NULL;
PyObject *var_body = NULL;
PyObject *var_headers = NULL;
PyObject *var_authed_session = NULL;
PyObject *var_retries = NULL;
PyObject *var__ = NULL;
PyObject *var_response = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes)) {
    Py_XDECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes = MAKE_FUNCTION_FRAME(tstate, code_objects_cc5a194e992bbe5f345245c985a77d64, module_google$auth$impersonated_credentials, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes->m_type_description == NULL);
frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes = cache_frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes);
assert(Py_REFCNT(frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_eda478fe391780f02c579185f1943916;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$auth$impersonated_credentials;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_AuthorizedSession_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes->m_frame.f_lineno = 370;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$auth$impersonated_credentials,
        mod_consts.const_str_plain_AuthorizedSession,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_AuthorizedSession);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_AuthorizedSession == NULL);
var_AuthorizedSession = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_6;
tmp_expression_value_3 = module_var_accessor_google$auth$impersonated_credentials$iam(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_iam);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 372;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__IAM_SIGN_ENDPOINT);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_replace);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = module_var_accessor_google$auth$impersonated_credentials$credentials(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_credentials);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 373;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_DEFAULT_UNIVERSE_DOMAIN);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 373;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_universe_domain);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 373;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes->m_frame.f_lineno = 372;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_format);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__target_principal);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 374;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes->m_frame.f_lineno = 372;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_iam_sign_endpoint == NULL);
var_iam_sign_endpoint = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_4;
tmp_dict_key_1 = mod_consts.const_str_plain_payload;
tmp_called_instance_1 = module_var_accessor_google$auth$impersonated_credentials$base64(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_base64);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 377;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_message);
tmp_args_element_value_4 = par_message;
frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes->m_frame.f_lineno = 377;
tmp_expression_value_7 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_b64encode, tmp_args_element_value_4);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes->m_frame.f_lineno = 377;
tmp_dict_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_8;
tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_delegates;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__delegates);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;
type_description_1 = "oooooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_3);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
assert(var_body == NULL);
var_body = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = DICT_COPY(tstate, mod_consts.const_dict_36774e2c4486a45b367e3cd59edfaeea);
assert(var_headers == NULL);
var_headers = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(var_AuthorizedSession);
tmp_called_value_4 = var_AuthorizedSession;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__source_credentials);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes->m_frame.f_lineno = 383;
tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_authed_session == NULL);
var_authed_session = tmp_assign_source_5;
}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = module_var_accessor_google$auth$impersonated_credentials$_exponential_backoff(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__exponential_backoff);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 386;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes->m_frame.f_lineno = 386;
tmp_assign_source_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_ExponentialBackoff);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 386;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
assert(var_retries == NULL);
var_retries = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_retries);
tmp_iter_arg_1 = var_retries;
tmp_assign_source_7 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_7;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_8 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooo";
exception_lineno = 387;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_9 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var__;
    var__ = tmp_assign_source_9;
    Py_INCREF(var__);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_10;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
if (var_authed_session == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_authed_session);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 388;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}

tmp_expression_value_10 = var_authed_session;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_post);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
if (var_iam_sign_endpoint == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_iam_sign_endpoint);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 389;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}

tmp_kw_call_value_0_1 = var_iam_sign_endpoint;
if (var_headers == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_headers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 389;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}

tmp_kw_call_value_1_1 = var_headers;
if (var_body == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_body);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 389;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}

tmp_kw_call_value_2_1 = var_body;
frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes->m_frame.f_lineno = 388;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

    tmp_assign_source_10 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_5, kw_values, mod_consts.const_tuple_str_plain_url_str_plain_headers_str_plain_json_tuple);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = var_response;
    var_response = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(var_response);
tmp_expression_value_11 = var_response;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_status_code);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
tmp_expression_value_12 = module_var_accessor_google$auth$impersonated_credentials$iam(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_iam);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 391;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_IAM_RETRY_CODES);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 391;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
tmp_condition_result_1 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
goto loop_start_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(var_response);
tmp_expression_value_13 = var_response;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_status_code);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 393;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
tmp_expression_value_14 = module_var_accessor_google$auth$impersonated_credentials$http_client(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_http_client);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 393;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_OK);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 393;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 393;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_element_value_6;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_called_instance_3;
tmp_expression_value_15 = module_var_accessor_google$auth$impersonated_credentials$exceptions(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 394;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_TransportError);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 394;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_82d20e19375797af02a14b67e54008fa;
CHECK_OBJECT(var_response);
tmp_called_instance_3 = var_response;
frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes->m_frame.f_lineno = 395;
tmp_kw_call_arg_value_1_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_json);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 395;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes->m_frame.f_lineno = 395;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_args_element_value_6 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 395;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes->m_frame.f_lineno = 394;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 394;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 394;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 394;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooo";
goto try_except_handler_3;
}
branch_no_2:;
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_17;
PyObject *tmp_called_instance_4;
PyObject *tmp_subscript_value_1;
tmp_expression_value_16 = module_var_accessor_google$auth$impersonated_credentials$base64(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_base64);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 398;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_b64decode);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 398;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_response);
tmp_called_instance_4 = var_response;
frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes->m_frame.f_lineno = 398;
tmp_expression_value_17 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_json);
if (tmp_expression_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 398;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
tmp_subscript_value_1 = mod_consts.const_str_plain_signedBlob;
tmp_args_element_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 398;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes->m_frame.f_lineno = 398;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 398;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
goto try_return_handler_3;
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
CHECK_OBJECT(tmp_for_loop_1__iter_value);
Py_DECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
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

goto try_except_handler_2;
// End of try:
try_end_1:;
goto try_end_2;
// Return handler code:
try_return_handler_2:;
{
PyObject *tmp_called_instance_5;
PyObject *tmp_call_result_1;
if (var_authed_session == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_authed_session);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 400;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_5 = var_authed_session;
frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes->m_frame.f_lineno = 400;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, const_str_plain_close);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto frame_return_exit_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_2);
// Tried code:
{
PyObject *tmp_called_instance_6;
PyObject *tmp_call_result_2;
if (var_authed_session == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_authed_session);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 400;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}

tmp_called_instance_6 = var_authed_session;
frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes->m_frame.f_lineno = 400;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, const_str_plain_close);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 385;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes->m_frame)) {
        frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooo";
goto try_except_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
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
try_end_2:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_called_instance_7;
PyObject *tmp_call_result_3;
if (var_authed_session == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_authed_session);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 400;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_7 = var_authed_session;
frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes->m_frame.f_lineno = 400;
tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_7, const_str_plain_close);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_instance_8;
tmp_called_instance_8 = module_var_accessor_google$auth$impersonated_credentials$exceptions(tstate);
if (unlikely(tmp_called_instance_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 401;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes->m_frame.f_lineno = 401;
tmp_raise_type_input_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_8,
    mod_consts.const_str_plain_TransportError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_0d4da83f9f91082b8b3328c34bf1fb87_tuple, 0)
);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 401;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 401;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 401;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes,
    type_description_1,
    par_self,
    par_message,
    var_AuthorizedSession,
    var_iam_sign_endpoint,
    var_body,
    var_headers,
    var_authed_session,
    var_retries,
    var__,
    var_response
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes == cache_frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes);
    cache_frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes = NULL;
}

assertFrameObject(frame_frame_google$auth$impersonated_credentials$$$function__6_sign_bytes);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_AuthorizedSession);
CHECK_OBJECT(var_AuthorizedSession);
Py_DECREF(var_AuthorizedSession);
var_AuthorizedSession = NULL;
Py_XDECREF(var_iam_sign_endpoint);
var_iam_sign_endpoint = NULL;
Py_XDECREF(var_body);
var_body = NULL;
Py_XDECREF(var_headers);
var_headers = NULL;
Py_XDECREF(var_authed_session);
var_authed_session = NULL;
CHECK_OBJECT(var_retries);
CHECK_OBJECT(var_retries);
Py_DECREF(var_retries);
var_retries = NULL;
CHECK_OBJECT(var__);
CHECK_OBJECT(var__);
Py_DECREF(var__);
var__ = NULL;
CHECK_OBJECT(var_response);
CHECK_OBJECT(var_response);
Py_DECREF(var_response);
var_response = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_AuthorizedSession);
var_AuthorizedSession = NULL;
Py_XDECREF(var_iam_sign_endpoint);
var_iam_sign_endpoint = NULL;
Py_XDECREF(var_body);
var_body = NULL;
Py_XDECREF(var_headers);
var_headers = NULL;
Py_XDECREF(var_authed_session);
var_authed_session = NULL;
Py_XDECREF(var_retries);
var_retries = NULL;
Py_XDECREF(var__);
var__ = NULL;
Py_XDECREF(var_response);
var_response = NULL;
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
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_message);
Py_DECREF(par_message);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$impersonated_credentials$$$function__7_signer_email(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$impersonated_credentials$$$function__7_signer_email;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$impersonated_credentials$$$function__7_signer_email = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$impersonated_credentials$$$function__7_signer_email)) {
    Py_XDECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__7_signer_email);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$impersonated_credentials$$$function__7_signer_email == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$impersonated_credentials$$$function__7_signer_email = MAKE_FUNCTION_FRAME(tstate, code_objects_8ccaafac72f165ffa9f3732b58945dee, module_google$auth$impersonated_credentials, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$impersonated_credentials$$$function__7_signer_email->m_type_description == NULL);
frame_frame_google$auth$impersonated_credentials$$$function__7_signer_email = cache_frame_frame_google$auth$impersonated_credentials$$$function__7_signer_email;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$impersonated_credentials$$$function__7_signer_email);
assert(Py_REFCNT(frame_frame_google$auth$impersonated_credentials$$$function__7_signer_email) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__target_principal);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 405;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$impersonated_credentials$$$function__7_signer_email, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$impersonated_credentials$$$function__7_signer_email->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$impersonated_credentials$$$function__7_signer_email, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$impersonated_credentials$$$function__7_signer_email,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$impersonated_credentials$$$function__7_signer_email == cache_frame_frame_google$auth$impersonated_credentials$$$function__7_signer_email) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__7_signer_email);
    cache_frame_frame_google$auth$impersonated_credentials$$$function__7_signer_email = NULL;
}

assertFrameObject(frame_frame_google$auth$impersonated_credentials$$$function__7_signer_email);

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


static PyObject *impl_google$auth$impersonated_credentials$$$function__8_service_account_email(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$impersonated_credentials$$$function__8_service_account_email;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$impersonated_credentials$$$function__8_service_account_email = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$impersonated_credentials$$$function__8_service_account_email)) {
    Py_XDECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__8_service_account_email);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$impersonated_credentials$$$function__8_service_account_email == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$impersonated_credentials$$$function__8_service_account_email = MAKE_FUNCTION_FRAME(tstate, code_objects_aebab1dc9cddab67b29df657c429bc24, module_google$auth$impersonated_credentials, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$impersonated_credentials$$$function__8_service_account_email->m_type_description == NULL);
frame_frame_google$auth$impersonated_credentials$$$function__8_service_account_email = cache_frame_frame_google$auth$impersonated_credentials$$$function__8_service_account_email;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$impersonated_credentials$$$function__8_service_account_email);
assert(Py_REFCNT(frame_frame_google$auth$impersonated_credentials$$$function__8_service_account_email) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__target_principal);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$impersonated_credentials$$$function__8_service_account_email, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$impersonated_credentials$$$function__8_service_account_email->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$impersonated_credentials$$$function__8_service_account_email, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$impersonated_credentials$$$function__8_service_account_email,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$impersonated_credentials$$$function__8_service_account_email == cache_frame_frame_google$auth$impersonated_credentials$$$function__8_service_account_email) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__8_service_account_email);
    cache_frame_frame_google$auth$impersonated_credentials$$$function__8_service_account_email = NULL;
}

assertFrameObject(frame_frame_google$auth$impersonated_credentials$$$function__8_service_account_email);

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


static PyObject *impl_google$auth$impersonated_credentials$$$function__9_signer(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *tmp_return_value = NULL;

    // Actual function body.
CHECK_OBJECT(par_self);
tmp_return_value = par_self;
Py_INCREF(tmp_return_value);
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


static PyObject *impl_google$auth$impersonated_credentials$$$function__10_requires_scopes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$impersonated_credentials$$$function__10_requires_scopes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$impersonated_credentials$$$function__10_requires_scopes = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$impersonated_credentials$$$function__10_requires_scopes)) {
    Py_XDECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__10_requires_scopes);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$impersonated_credentials$$$function__10_requires_scopes == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$impersonated_credentials$$$function__10_requires_scopes = MAKE_FUNCTION_FRAME(tstate, code_objects_b9b32b9a3f0ec84ab69e52132b1d65c0, module_google$auth$impersonated_credentials, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$impersonated_credentials$$$function__10_requires_scopes->m_type_description == NULL);
frame_frame_google$auth$impersonated_credentials$$$function__10_requires_scopes = cache_frame_frame_google$auth$impersonated_credentials$$$function__10_requires_scopes;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$impersonated_credentials$$$function__10_requires_scopes);
assert(Py_REFCNT(frame_frame_google$auth$impersonated_credentials$$$function__10_requires_scopes) == 2);

// Framed code:
{
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__target_scopes);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = (tmp_res == 0) ? Py_True : Py_False;
Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$impersonated_credentials$$$function__10_requires_scopes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$impersonated_credentials$$$function__10_requires_scopes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$impersonated_credentials$$$function__10_requires_scopes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$impersonated_credentials$$$function__10_requires_scopes,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$impersonated_credentials$$$function__10_requires_scopes == cache_frame_frame_google$auth$impersonated_credentials$$$function__10_requires_scopes) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__10_requires_scopes);
    cache_frame_frame_google$auth$impersonated_credentials$$$function__10_requires_scopes = NULL;
}

assertFrameObject(frame_frame_google$auth$impersonated_credentials$$$function__10_requires_scopes);

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


static PyObject *impl_google$auth$impersonated_credentials$$$function__11_get_cred_info(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$impersonated_credentials$$$function__11_get_cred_info;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$impersonated_credentials$$$function__11_get_cred_info = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$impersonated_credentials$$$function__11_get_cred_info)) {
    Py_XDECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__11_get_cred_info);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$impersonated_credentials$$$function__11_get_cred_info == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$impersonated_credentials$$$function__11_get_cred_info = MAKE_FUNCTION_FRAME(tstate, code_objects_48357de4beff08983e30d0fb7528c064, module_google$auth$impersonated_credentials, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$impersonated_credentials$$$function__11_get_cred_info->m_type_description == NULL);
frame_frame_google$auth$impersonated_credentials$$$function__11_get_cred_info = cache_frame_frame_google$auth$impersonated_credentials$$$function__11_get_cred_info;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$impersonated_credentials$$$function__11_get_cred_info);
assert(Py_REFCNT(frame_frame_google$auth$impersonated_credentials$$$function__11_get_cred_info) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__cred_file_path);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 421;
type_description_1 = "o";
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
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_2;
tmp_dict_key_1 = mod_consts.const_str_plain_credential_source;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__cred_file_path);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_3;
tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_credential_type;
tmp_dict_value_1 = mod_consts.const_str_digest_9ae0e4636c30231c9622e6c59765aa2a;
tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_principal;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__target_principal);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 425;
type_description_1 = "o";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_return_value);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
goto frame_return_exit_1;
}
branch_no_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$impersonated_credentials$$$function__11_get_cred_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$impersonated_credentials$$$function__11_get_cred_info->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$impersonated_credentials$$$function__11_get_cred_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$impersonated_credentials$$$function__11_get_cred_info,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$impersonated_credentials$$$function__11_get_cred_info == cache_frame_frame_google$auth$impersonated_credentials$$$function__11_get_cred_info) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__11_get_cred_info);
    cache_frame_frame_google$auth$impersonated_credentials$$$function__11_get_cred_info = NULL;
}

assertFrameObject(frame_frame_google$auth$impersonated_credentials$$$function__11_get_cred_info);

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


static PyObject *impl_google$auth$impersonated_credentials$$$function__12__make_copy(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_cred = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$impersonated_credentials$$$function__12__make_copy;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$impersonated_credentials$$$function__12__make_copy = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$impersonated_credentials$$$function__12__make_copy)) {
    Py_XDECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__12__make_copy);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$impersonated_credentials$$$function__12__make_copy == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$impersonated_credentials$$$function__12__make_copy = MAKE_FUNCTION_FRAME(tstate, code_objects_e07914f7902de8ea4893ce5b89cacc19, module_google$auth$impersonated_credentials, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$impersonated_credentials$$$function__12__make_copy->m_type_description == NULL);
frame_frame_google$auth$impersonated_credentials$$$function__12__make_copy = cache_frame_frame_google$auth$impersonated_credentials$$$function__12__make_copy;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$impersonated_credentials$$$function__12__make_copy);
assert(Py_REFCNT(frame_frame_google$auth$impersonated_credentials$$$function__12__make_copy) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_dict_value_4_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_dict_value_5_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_kw_call_dict_value_6_1;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 430;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__source_credentials);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 431;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__target_principal);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 432;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__target_scopes);
if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 433;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_kw_call_dict_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__delegates);
if (tmp_kw_call_dict_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);

exception_lineno = 434;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_kw_call_dict_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__lifetime);
if (tmp_kw_call_dict_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_2_1);

exception_lineno = 435;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_kw_call_dict_value_4_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__quota_project_id);
if (tmp_kw_call_dict_value_4_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_2_1);
Py_DECREF(tmp_kw_call_dict_value_3_1);

exception_lineno = 436;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_kw_call_dict_value_5_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__iam_endpoint_override);
if (tmp_kw_call_dict_value_5_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_2_1);
Py_DECREF(tmp_kw_call_dict_value_3_1);
Py_DECREF(tmp_kw_call_dict_value_4_1);

exception_lineno = 437;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_kw_call_dict_value_6_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__trust_boundary);
if (tmp_kw_call_dict_value_6_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_2_1);
Py_DECREF(tmp_kw_call_dict_value_3_1);
Py_DECREF(tmp_kw_call_dict_value_4_1);
Py_DECREF(tmp_kw_call_dict_value_5_1);

exception_lineno = 438;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$impersonated_credentials$$$function__12__make_copy->m_frame.f_lineno = 430;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[7] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_70a040236ea8a852feb6c3f54cc5d205_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
CHECK_OBJECT(tmp_kw_call_dict_value_2_1);
Py_DECREF(tmp_kw_call_dict_value_2_1);
CHECK_OBJECT(tmp_kw_call_dict_value_3_1);
Py_DECREF(tmp_kw_call_dict_value_3_1);
CHECK_OBJECT(tmp_kw_call_dict_value_4_1);
Py_DECREF(tmp_kw_call_dict_value_4_1);
CHECK_OBJECT(tmp_kw_call_dict_value_5_1);
Py_DECREF(tmp_kw_call_dict_value_5_1);
CHECK_OBJECT(tmp_kw_call_dict_value_6_1);
Py_DECREF(tmp_kw_call_dict_value_6_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 430;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_cred == NULL);
var_cred = tmp_assign_source_1;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain__cred_file_path);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_cred);
tmp_assattr_target_1 = var_cred;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__cred_file_path, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$impersonated_credentials$$$function__12__make_copy, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$impersonated_credentials$$$function__12__make_copy->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$impersonated_credentials$$$function__12__make_copy, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$impersonated_credentials$$$function__12__make_copy,
    type_description_1,
    par_self,
    var_cred
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$impersonated_credentials$$$function__12__make_copy == cache_frame_frame_google$auth$impersonated_credentials$$$function__12__make_copy) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__12__make_copy);
    cache_frame_frame_google$auth$impersonated_credentials$$$function__12__make_copy = NULL;
}

assertFrameObject(frame_frame_google$auth$impersonated_credentials$$$function__12__make_copy);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_cred);
tmp_return_value = var_cred;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_cred);
CHECK_OBJECT(var_cred);
Py_DECREF(var_cred);
var_cred = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_cred);
var_cred = NULL;
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


static PyObject *impl_google$auth$impersonated_credentials$$$function__13_with_trust_boundary(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_trust_boundary = python_pars[1];
PyObject *var_cred = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$impersonated_credentials$$$function__13_with_trust_boundary;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$impersonated_credentials$$$function__13_with_trust_boundary = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$impersonated_credentials$$$function__13_with_trust_boundary)) {
    Py_XDECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__13_with_trust_boundary);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$impersonated_credentials$$$function__13_with_trust_boundary == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$impersonated_credentials$$$function__13_with_trust_boundary = MAKE_FUNCTION_FRAME(tstate, code_objects_b83fdb24dcdfb564c0f48118e2bf75b6, module_google$auth$impersonated_credentials, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$impersonated_credentials$$$function__13_with_trust_boundary->m_type_description == NULL);
frame_frame_google$auth$impersonated_credentials$$$function__13_with_trust_boundary = cache_frame_frame_google$auth$impersonated_credentials$$$function__13_with_trust_boundary;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$impersonated_credentials$$$function__13_with_trust_boundary);
assert(Py_REFCNT(frame_frame_google$auth$impersonated_credentials$$$function__13_with_trust_boundary) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_google$auth$impersonated_credentials$$$function__13_with_trust_boundary->m_frame.f_lineno = 445;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__make_copy);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_cred == NULL);
var_cred = tmp_assign_source_1;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_trust_boundary);
tmp_assattr_value_1 = par_trust_boundary;
CHECK_OBJECT(var_cred);
tmp_assattr_target_1 = var_cred;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__trust_boundary, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 446;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$impersonated_credentials$$$function__13_with_trust_boundary, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$impersonated_credentials$$$function__13_with_trust_boundary->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$impersonated_credentials$$$function__13_with_trust_boundary, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$impersonated_credentials$$$function__13_with_trust_boundary,
    type_description_1,
    par_self,
    par_trust_boundary,
    var_cred
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$impersonated_credentials$$$function__13_with_trust_boundary == cache_frame_frame_google$auth$impersonated_credentials$$$function__13_with_trust_boundary) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__13_with_trust_boundary);
    cache_frame_frame_google$auth$impersonated_credentials$$$function__13_with_trust_boundary = NULL;
}

assertFrameObject(frame_frame_google$auth$impersonated_credentials$$$function__13_with_trust_boundary);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_cred);
tmp_return_value = var_cred;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_cred);
CHECK_OBJECT(var_cred);
Py_DECREF(var_cred);
var_cred = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_cred);
var_cred = NULL;
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
CHECK_OBJECT(par_trust_boundary);
Py_DECREF(par_trust_boundary);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_trust_boundary);
Py_DECREF(par_trust_boundary);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$impersonated_credentials$$$function__14_with_quota_project(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_quota_project_id = python_pars[1];
PyObject *var_cred = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$impersonated_credentials$$$function__14_with_quota_project;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$impersonated_credentials$$$function__14_with_quota_project = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$impersonated_credentials$$$function__14_with_quota_project)) {
    Py_XDECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__14_with_quota_project);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$impersonated_credentials$$$function__14_with_quota_project == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$impersonated_credentials$$$function__14_with_quota_project = MAKE_FUNCTION_FRAME(tstate, code_objects_ceb512b8fcb07f8e8b4105897a2fb57b, module_google$auth$impersonated_credentials, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$impersonated_credentials$$$function__14_with_quota_project->m_type_description == NULL);
frame_frame_google$auth$impersonated_credentials$$$function__14_with_quota_project = cache_frame_frame_google$auth$impersonated_credentials$$$function__14_with_quota_project;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$impersonated_credentials$$$function__14_with_quota_project);
assert(Py_REFCNT(frame_frame_google$auth$impersonated_credentials$$$function__14_with_quota_project) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_google$auth$impersonated_credentials$$$function__14_with_quota_project->m_frame.f_lineno = 451;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__make_copy);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_cred == NULL);
var_cred = tmp_assign_source_1;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_quota_project_id);
tmp_assattr_value_1 = par_quota_project_id;
CHECK_OBJECT(var_cred);
tmp_assattr_target_1 = var_cred;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__quota_project_id, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$impersonated_credentials$$$function__14_with_quota_project, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$impersonated_credentials$$$function__14_with_quota_project->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$impersonated_credentials$$$function__14_with_quota_project, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$impersonated_credentials$$$function__14_with_quota_project,
    type_description_1,
    par_self,
    par_quota_project_id,
    var_cred
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$impersonated_credentials$$$function__14_with_quota_project == cache_frame_frame_google$auth$impersonated_credentials$$$function__14_with_quota_project) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__14_with_quota_project);
    cache_frame_frame_google$auth$impersonated_credentials$$$function__14_with_quota_project = NULL;
}

assertFrameObject(frame_frame_google$auth$impersonated_credentials$$$function__14_with_quota_project);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_cred);
tmp_return_value = var_cred;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_cred);
CHECK_OBJECT(var_cred);
Py_DECREF(var_cred);
var_cred = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_cred);
var_cred = NULL;
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
CHECK_OBJECT(par_quota_project_id);
Py_DECREF(par_quota_project_id);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_quota_project_id);
Py_DECREF(par_quota_project_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$impersonated_credentials$$$function__15_with_scopes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_scopes = python_pars[1];
PyObject *par_default_scopes = python_pars[2];
PyObject *var_cred = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$impersonated_credentials$$$function__15_with_scopes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$impersonated_credentials$$$function__15_with_scopes = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$impersonated_credentials$$$function__15_with_scopes)) {
    Py_XDECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__15_with_scopes);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$impersonated_credentials$$$function__15_with_scopes == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$impersonated_credentials$$$function__15_with_scopes = MAKE_FUNCTION_FRAME(tstate, code_objects_fff02c2c0e008f33b8dfe54769385fbd, module_google$auth$impersonated_credentials, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$impersonated_credentials$$$function__15_with_scopes->m_type_description == NULL);
frame_frame_google$auth$impersonated_credentials$$$function__15_with_scopes = cache_frame_frame_google$auth$impersonated_credentials$$$function__15_with_scopes;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$impersonated_credentials$$$function__15_with_scopes);
assert(Py_REFCNT(frame_frame_google$auth$impersonated_credentials$$$function__15_with_scopes) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_google$auth$impersonated_credentials$$$function__15_with_scopes->m_frame.f_lineno = 457;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__make_copy);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 457;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_cred == NULL);
var_cred = tmp_assign_source_1;
}
{
PyObject *tmp_assattr_value_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_scopes);
tmp_or_left_value_1 = par_scopes;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 458;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_default_scopes);
tmp_or_right_value_1 = par_default_scopes;
tmp_assattr_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assattr_value_1 = tmp_or_left_value_1;
or_end_1:;
CHECK_OBJECT(var_cred);
tmp_assattr_target_1 = var_cred;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__target_scopes, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 458;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$impersonated_credentials$$$function__15_with_scopes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$impersonated_credentials$$$function__15_with_scopes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$impersonated_credentials$$$function__15_with_scopes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$impersonated_credentials$$$function__15_with_scopes,
    type_description_1,
    par_self,
    par_scopes,
    par_default_scopes,
    var_cred
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$impersonated_credentials$$$function__15_with_scopes == cache_frame_frame_google$auth$impersonated_credentials$$$function__15_with_scopes) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__15_with_scopes);
    cache_frame_frame_google$auth$impersonated_credentials$$$function__15_with_scopes = NULL;
}

assertFrameObject(frame_frame_google$auth$impersonated_credentials$$$function__15_with_scopes);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_cred);
tmp_return_value = var_cred;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_cred);
CHECK_OBJECT(var_cred);
Py_DECREF(var_cred);
var_cred = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_cred);
var_cred = NULL;
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
CHECK_OBJECT(par_scopes);
Py_DECREF(par_scopes);
CHECK_OBJECT(par_default_scopes);
Py_DECREF(par_default_scopes);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_scopes);
Py_DECREF(par_scopes);
CHECK_OBJECT(par_default_scopes);
Py_DECREF(par_default_scopes);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_info = python_pars[1];
PyObject *par_scopes = python_pars[2];
PyObject *var_source_credentials_info = NULL;
PyObject *var_source_credentials_type = NULL;
PyObject *var_credentials = NULL;
PyObject *var_source_credentials = NULL;
PyObject *var_service_account = NULL;
PyObject *var_external_account_authorized_user = NULL;
PyObject *var_impersonation_url = NULL;
PyObject *var_start_index = NULL;
PyObject *var_end_index = NULL;
PyObject *var_target_principal = NULL;
PyObject *var_delegates = NULL;
PyObject *var_quota_project_id = NULL;
PyObject *var_trust_boundary = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info)) {
    Py_XDECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info = MAKE_FUNCTION_FRAME(tstate, code_objects_9d4df1383865e482969c702b8cbe15a5, module_google$auth$impersonated_credentials, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info->m_type_description == NULL);
frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info = cache_frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info);
assert(Py_REFCNT(frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_info);
tmp_expression_value_1 = par_info;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info->m_frame.f_lineno = 489;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_source_credentials_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_source_credentials_info == NULL);
var_source_credentials_info = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_source_credentials_info);
tmp_expression_value_2 = var_source_credentials_info;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 490;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info->m_frame.f_lineno = 490;
tmp_assign_source_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_type_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 490;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_source_credentials_type == NULL);
var_source_credentials_type = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_source_credentials_type);
tmp_cmp_expr_left_1 = var_source_credentials_type;
tmp_cmp_expr_right_1 = module_var_accessor_google$auth$impersonated_credentials$_SOURCE_CREDENTIAL_AUTHORIZED_USER_TYPE(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__SOURCE_CREDENTIAL_AUTHORIZED_USER_TYPE);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 491;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 491;
type_description_1 = "oooooooooooooooo";
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
PyObject *tmp_assign_source_3;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_31b40dbd93ddd4efa91cab6083c18890;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$auth$impersonated_credentials;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_credentials_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info->m_frame.f_lineno = 492;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 492;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$auth$impersonated_credentials,
        mod_consts.const_str_plain_credentials,
        const_int_0
    );
} else {
    tmp_assign_source_3 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_credentials);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 492;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_credentials == NULL);
var_credentials = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_credentials);
tmp_expression_value_3 = var_credentials;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_Credentials);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 494;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_source_credentials_info);
tmp_args_element_value_1 = var_source_credentials_info;
frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info->m_frame.f_lineno = 494;
tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_from_authorized_user_info, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 494;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_source_credentials == NULL);
var_source_credentials = tmp_assign_source_4;
}
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_source_credentials_type);
tmp_cmp_expr_left_2 = var_source_credentials_type;
tmp_cmp_expr_right_2 = module_var_accessor_google$auth$impersonated_credentials$_SOURCE_CREDENTIAL_SERVICE_ACCOUNT_TYPE(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__SOURCE_CREDENTIAL_SERVICE_ACCOUNT_TYPE);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 497;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 497;
type_description_1 = "oooooooooooooooo";
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
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_31b40dbd93ddd4efa91cab6083c18890;
tmp_globals_arg_value_2 = (PyObject *)moduledict_google$auth$impersonated_credentials;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_service_account_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info->m_frame.f_lineno = 498;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_google$auth$impersonated_credentials,
        mod_consts.const_str_plain_service_account,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_service_account);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_service_account == NULL);
var_service_account = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var_service_account);
tmp_expression_value_4 = var_service_account;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_Credentials);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 500;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_source_credentials_info);
tmp_args_element_value_2 = var_source_credentials_info;
frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info->m_frame.f_lineno = 500;
tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_from_service_account_info, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 500;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_source_credentials == NULL);
var_source_credentials = tmp_assign_source_6;
}
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_source_credentials_type);
tmp_cmp_expr_left_3 = var_source_credentials_type;
tmp_cmp_expr_right_3 = module_var_accessor_google$auth$impersonated_credentials$_SOURCE_CREDENTIAL_EXTERNAL_ACCOUNT_AUTHORIZED_USER_TYPE(tstate);
if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_9b6de995960e30c87da59da3358c3b6c);
}

if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 505;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 505;
type_description_1 = "oooooooooooooooo";
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
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_3 = (PyObject *)moduledict_google$auth$impersonated_credentials;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_external_account_authorized_user_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info->m_frame.f_lineno = 507;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 507;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_google$auth$impersonated_credentials,
        mod_consts.const_str_plain_external_account_authorized_user,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_external_account_authorized_user);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 507;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_external_account_authorized_user == NULL);
var_external_account_authorized_user = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(var_external_account_authorized_user);
tmp_expression_value_5 = var_external_account_authorized_user;
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_Credentials);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 509;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_source_credentials_info);
tmp_args_element_value_3 = var_source_credentials_info;
frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info->m_frame.f_lineno = 509;
tmp_assign_source_8 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_from_info, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 509;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_source_credentials == NULL);
var_source_credentials = tmp_assign_source_8;
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_4;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
tmp_expression_value_6 = module_var_accessor_google$auth$impersonated_credentials$exceptions(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 513;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_InvalidType);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_762e2487d4f36709829c4b97c948a22e;
CHECK_OBJECT(var_source_credentials_type);
tmp_kw_call_arg_value_1_1 = var_source_credentials_type;
frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info->m_frame.f_lineno = 514;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 514;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info->m_frame.f_lineno = 513;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 513;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooo";
goto frame_exception_exit_1;
}
branch_end_3:;
branch_end_2:;
branch_end_1:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_info);
tmp_expression_value_7 = par_info;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_get);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 519;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info->m_frame.f_lineno = 519;
tmp_assign_source_9 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_plain_service_account_impersonation_url_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 519;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_impersonation_url == NULL);
var_impersonation_url = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(var_impersonation_url);
tmp_expression_value_8 = var_impersonation_url;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_rfind);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 520;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info->m_frame.f_lineno = 520;
tmp_assign_source_10 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_slash_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 520;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_start_index == NULL);
var_start_index = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(var_impersonation_url);
tmp_expression_value_9 = var_impersonation_url;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_find);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 521;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info->m_frame.f_lineno = 521;
tmp_assign_source_11 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_digest_3e51b004aaa893ad0d2df995a6a87b57_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 521;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_end_index == NULL);
var_end_index = tmp_assign_source_11;
}
{
nuitka_bool tmp_condition_result_4;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(var_start_index);
tmp_cmp_expr_left_4 = var_start_index;
tmp_cmp_expr_right_4 = const_int_neg_1;
tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 522;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 522;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_end_index);
tmp_cmp_expr_left_5 = var_end_index;
tmp_cmp_expr_right_5 = const_int_neg_1;
tmp_or_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_or_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 522;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 522;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(var_start_index);
tmp_cmp_expr_left_6 = var_start_index;
CHECK_OBJECT(var_end_index);
tmp_cmp_expr_right_6 = var_end_index;
tmp_or_right_value_2 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_or_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 522;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_or_right_value_1 = tmp_or_left_value_2;
or_end_2:;
tmp_condition_result_4 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_4 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_5;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_2;
tmp_expression_value_10 = module_var_accessor_google$auth$impersonated_credentials$exceptions(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 523;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_InvalidValue);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 523;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_2 = mod_consts.const_str_digest_1fe9e30b42375384764545dafc3578e7;
CHECK_OBJECT(var_impersonation_url);
tmp_kw_call_arg_value_1_2 = var_impersonation_url;
frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info->m_frame.f_lineno = 524;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
    tmp_args_element_value_5 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 524;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info->m_frame.f_lineno = 523;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 523;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 523;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 523;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_4:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_1;
PyObject *tmp_start_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_stop_value_1;
CHECK_OBJECT(var_impersonation_url);
tmp_expression_value_11 = var_impersonation_url;
CHECK_OBJECT(var_start_index);
tmp_add_expr_left_1 = var_start_index;
tmp_add_expr_right_1 = const_int_pos_1;
tmp_start_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_start_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 526;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_end_index);
tmp_stop_value_1 = var_end_index;
tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
CHECK_OBJECT(tmp_start_value_1);
Py_DECREF(tmp_start_value_1);
assert(!(tmp_subscript_value_1 == NULL));
tmp_assign_source_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 526;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_target_principal == NULL);
var_target_principal = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(par_info);
tmp_expression_value_12 = par_info;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain_get);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 527;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info->m_frame.f_lineno = 527;
tmp_assign_source_13 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_8, mod_consts.const_tuple_str_plain_delegates_tuple);

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 527;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_delegates == NULL);
var_delegates = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(par_info);
tmp_expression_value_13 = par_info;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain_get);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 528;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info->m_frame.f_lineno = 528;
tmp_assign_source_14 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_9, mod_consts.const_tuple_str_plain_quota_project_id_tuple);

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 528;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_quota_project_id == NULL);
var_quota_project_id = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
int tmp_or_left_truth_3;
PyObject *tmp_or_left_value_3;
PyObject *tmp_or_right_value_3;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(par_scopes);
tmp_or_left_value_3 = par_scopes;
tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 529;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
CHECK_OBJECT(par_info);
tmp_expression_value_14 = par_info;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, const_str_plain_get);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 529;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info->m_frame.f_lineno = 529;
tmp_or_right_value_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_10, mod_consts.const_tuple_str_plain_scopes_tuple);

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_or_right_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 529;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_15 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
Py_INCREF(tmp_or_left_value_3);
tmp_assign_source_15 = tmp_or_left_value_3;
or_end_3:;
{
    PyObject *old = par_scopes;
    assert(old != NULL);
    par_scopes = tmp_assign_source_15;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(par_info);
tmp_expression_value_15 = par_info;
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, const_str_plain_get);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 530;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info->m_frame.f_lineno = 530;
tmp_assign_source_16 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_11, mod_consts.const_tuple_str_plain_trust_boundary_tuple);

CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 530;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_trust_boundary == NULL);
var_trust_boundary = tmp_assign_source_16;
}
{
PyObject *tmp_called_value_12;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_arg_value_1_3;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_arg_value_3_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
CHECK_OBJECT(par_cls);
tmp_called_value_12 = par_cls;
CHECK_OBJECT(var_source_credentials);
tmp_kw_call_arg_value_0_3 = var_source_credentials;
CHECK_OBJECT(var_target_principal);
tmp_kw_call_arg_value_1_3 = var_target_principal;
CHECK_OBJECT(par_scopes);
tmp_kw_call_arg_value_2_1 = par_scopes;
CHECK_OBJECT(var_delegates);
tmp_kw_call_arg_value_3_1 = var_delegates;
CHECK_OBJECT(var_quota_project_id);
tmp_kw_call_dict_value_0_1 = var_quota_project_id;
CHECK_OBJECT(var_trust_boundary);
tmp_kw_call_dict_value_1_1 = var_trust_boundary;
frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info->m_frame.f_lineno = 532;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS4_KW_SPLIT(tstate, tmp_called_value_12, args, kw_values, mod_consts.const_tuple_str_plain_quota_project_id_str_plain_trust_boundary_tuple);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info,
    type_description_1,
    par_cls,
    par_info,
    par_scopes,
    var_source_credentials_info,
    var_source_credentials_type,
    var_credentials,
    var_source_credentials,
    var_service_account,
    var_external_account_authorized_user,
    var_impersonation_url,
    var_start_index,
    var_end_index,
    var_target_principal,
    var_delegates,
    var_quota_project_id,
    var_trust_boundary
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info == cache_frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info);
    cache_frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info = NULL;
}

assertFrameObject(frame_frame_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_scopes);
CHECK_OBJECT(par_scopes);
Py_DECREF(par_scopes);
par_scopes = NULL;
CHECK_OBJECT(var_source_credentials_info);
CHECK_OBJECT(var_source_credentials_info);
Py_DECREF(var_source_credentials_info);
var_source_credentials_info = NULL;
CHECK_OBJECT(var_source_credentials_type);
CHECK_OBJECT(var_source_credentials_type);
Py_DECREF(var_source_credentials_type);
var_source_credentials_type = NULL;
Py_XDECREF(var_credentials);
var_credentials = NULL;
CHECK_OBJECT(var_source_credentials);
CHECK_OBJECT(var_source_credentials);
Py_DECREF(var_source_credentials);
var_source_credentials = NULL;
Py_XDECREF(var_service_account);
var_service_account = NULL;
Py_XDECREF(var_external_account_authorized_user);
var_external_account_authorized_user = NULL;
CHECK_OBJECT(var_impersonation_url);
CHECK_OBJECT(var_impersonation_url);
Py_DECREF(var_impersonation_url);
var_impersonation_url = NULL;
CHECK_OBJECT(var_start_index);
CHECK_OBJECT(var_start_index);
Py_DECREF(var_start_index);
var_start_index = NULL;
CHECK_OBJECT(var_end_index);
CHECK_OBJECT(var_end_index);
Py_DECREF(var_end_index);
var_end_index = NULL;
CHECK_OBJECT(var_target_principal);
CHECK_OBJECT(var_target_principal);
Py_DECREF(var_target_principal);
var_target_principal = NULL;
CHECK_OBJECT(var_delegates);
CHECK_OBJECT(var_delegates);
Py_DECREF(var_delegates);
var_delegates = NULL;
CHECK_OBJECT(var_quota_project_id);
CHECK_OBJECT(var_quota_project_id);
Py_DECREF(var_quota_project_id);
var_quota_project_id = NULL;
CHECK_OBJECT(var_trust_boundary);
CHECK_OBJECT(var_trust_boundary);
Py_DECREF(var_trust_boundary);
var_trust_boundary = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_scopes);
par_scopes = NULL;
Py_XDECREF(var_source_credentials_info);
var_source_credentials_info = NULL;
Py_XDECREF(var_source_credentials_type);
var_source_credentials_type = NULL;
Py_XDECREF(var_credentials);
var_credentials = NULL;
Py_XDECREF(var_source_credentials);
var_source_credentials = NULL;
Py_XDECREF(var_service_account);
var_service_account = NULL;
Py_XDECREF(var_external_account_authorized_user);
var_external_account_authorized_user = NULL;
Py_XDECREF(var_impersonation_url);
var_impersonation_url = NULL;
Py_XDECREF(var_start_index);
var_start_index = NULL;
Py_XDECREF(var_end_index);
var_end_index = NULL;
Py_XDECREF(var_target_principal);
var_target_principal = NULL;
Py_XDECREF(var_delegates);
var_delegates = NULL;
Py_XDECREF(var_quota_project_id);
var_quota_project_id = NULL;
Py_XDECREF(var_trust_boundary);
var_trust_boundary = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_info);
Py_DECREF(par_info);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_info);
Py_DECREF(par_info);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$impersonated_credentials$$$function__17___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_target_credentials = python_pars[1];
PyObject *par_target_audience = python_pars[2];
PyObject *par_include_email = python_pars[3];
PyObject *par_quota_project_id = python_pars[4];
struct Nuitka_FrameObject *frame_frame_google$auth$impersonated_credentials$$$function__17___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$impersonated_credentials$$$function__17___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$impersonated_credentials$$$function__17___init__)) {
    Py_XDECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__17___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$impersonated_credentials$$$function__17___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$impersonated_credentials$$$function__17___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_5cb4c463de28fa95e144770737addecb, module_google$auth$impersonated_credentials, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$impersonated_credentials$$$function__17___init__->m_type_description == NULL);
frame_frame_google$auth$impersonated_credentials$$$function__17___init__ = cache_frame_frame_google$auth$impersonated_credentials$$$function__17___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$impersonated_credentials$$$function__17___init__);
assert(Py_REFCNT(frame_frame_google$auth$impersonated_credentials$$$function__17___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
tmp_type_arg_value_1 = module_var_accessor_google$auth$impersonated_credentials$IDTokenCredentials(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IDTokenCredentials);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 561;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER2(tstate, moduledict_google$auth$impersonated_credentials, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 561;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$impersonated_credentials$$$function__17___init__->m_frame.f_lineno = 561;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain___init__);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 561;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_target_credentials);
tmp_isinstance_inst_1 = par_target_credentials;
tmp_isinstance_cls_1 = module_var_accessor_google$auth$impersonated_credentials$Credentials(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Credentials);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 563;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 563;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 563;
type_description_1 = "oooooN";
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
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = module_var_accessor_google$auth$impersonated_credentials$exceptions(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 564;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$impersonated_credentials$$$function__17___init__->m_frame.f_lineno = 564;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_GoogleAuthError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_08d0164f7622702a72289c35aecd1833_tuple, 0)
);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 564;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 564;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 564;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooN";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_target_credentials);
tmp_assattr_value_1 = par_target_credentials;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__target_credentials, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 567;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_target_audience);
tmp_assattr_value_2 = par_target_audience;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__target_audience, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 568;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_include_email);
tmp_assattr_value_3 = par_include_email;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__include_email, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 569;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_quota_project_id);
tmp_assattr_value_4 = par_quota_project_id;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__quota_project_id, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 570;
type_description_1 = "oooooN";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$impersonated_credentials$$$function__17___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$impersonated_credentials$$$function__17___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$impersonated_credentials$$$function__17___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$impersonated_credentials$$$function__17___init__,
    type_description_1,
    par_self,
    par_target_credentials,
    par_target_audience,
    par_include_email,
    par_quota_project_id,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$impersonated_credentials$$$function__17___init__ == cache_frame_frame_google$auth$impersonated_credentials$$$function__17___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__17___init__);
    cache_frame_frame_google$auth$impersonated_credentials$$$function__17___init__ = NULL;
}

assertFrameObject(frame_frame_google$auth$impersonated_credentials$$$function__17___init__);

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
CHECK_OBJECT(par_target_credentials);
Py_DECREF(par_target_credentials);
CHECK_OBJECT(par_target_audience);
Py_DECREF(par_target_audience);
CHECK_OBJECT(par_include_email);
Py_DECREF(par_include_email);
CHECK_OBJECT(par_quota_project_id);
Py_DECREF(par_quota_project_id);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_target_credentials);
Py_DECREF(par_target_credentials);
CHECK_OBJECT(par_target_audience);
Py_DECREF(par_target_audience);
CHECK_OBJECT(par_include_email);
Py_DECREF(par_include_email);
CHECK_OBJECT(par_quota_project_id);
Py_DECREF(par_quota_project_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$impersonated_credentials$$$function__18_from_credentials(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_target_credentials = python_pars[1];
PyObject *par_target_audience = python_pars[2];
struct Nuitka_FrameObject *frame_frame_google$auth$impersonated_credentials$$$function__18_from_credentials;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$impersonated_credentials$$$function__18_from_credentials = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$impersonated_credentials$$$function__18_from_credentials)) {
    Py_XDECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__18_from_credentials);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$impersonated_credentials$$$function__18_from_credentials == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$impersonated_credentials$$$function__18_from_credentials = MAKE_FUNCTION_FRAME(tstate, code_objects_178f82f3d4e07b1ddf7a952997f4eabe, module_google$auth$impersonated_credentials, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$impersonated_credentials$$$function__18_from_credentials->m_type_description == NULL);
frame_frame_google$auth$impersonated_credentials$$$function__18_from_credentials = cache_frame_frame_google$auth$impersonated_credentials$$$function__18_from_credentials;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$impersonated_credentials$$$function__18_from_credentials);
assert(Py_REFCNT(frame_frame_google$auth$impersonated_credentials$$$function__18_from_credentials) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 573;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_target_credentials);
tmp_kw_call_value_0_1 = par_target_credentials;
CHECK_OBJECT(par_target_audience);
tmp_kw_call_value_1_1 = par_target_audience;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__include_email);
if (tmp_kw_call_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 576;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_kw_call_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__quota_project_id);
if (tmp_kw_call_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_2_1);

exception_lineno = 577;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$impersonated_credentials$$$function__18_from_credentials->m_frame.f_lineno = 573;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_411261abc4e78af5fb73b9c4dc77792e_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_2_1);
CHECK_OBJECT(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_3_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 573;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$impersonated_credentials$$$function__18_from_credentials, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$impersonated_credentials$$$function__18_from_credentials->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$impersonated_credentials$$$function__18_from_credentials, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$impersonated_credentials$$$function__18_from_credentials,
    type_description_1,
    par_self,
    par_target_credentials,
    par_target_audience
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$impersonated_credentials$$$function__18_from_credentials == cache_frame_frame_google$auth$impersonated_credentials$$$function__18_from_credentials) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__18_from_credentials);
    cache_frame_frame_google$auth$impersonated_credentials$$$function__18_from_credentials = NULL;
}

assertFrameObject(frame_frame_google$auth$impersonated_credentials$$$function__18_from_credentials);

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
CHECK_OBJECT(par_target_credentials);
Py_DECREF(par_target_credentials);
CHECK_OBJECT(par_target_audience);
Py_DECREF(par_target_audience);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_target_credentials);
Py_DECREF(par_target_credentials);
CHECK_OBJECT(par_target_audience);
Py_DECREF(par_target_audience);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$impersonated_credentials$$$function__19_with_target_audience(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_target_audience = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$auth$impersonated_credentials$$$function__19_with_target_audience;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$impersonated_credentials$$$function__19_with_target_audience = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$impersonated_credentials$$$function__19_with_target_audience)) {
    Py_XDECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__19_with_target_audience);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$impersonated_credentials$$$function__19_with_target_audience == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$impersonated_credentials$$$function__19_with_target_audience = MAKE_FUNCTION_FRAME(tstate, code_objects_8bec2c5db43526556c2215e4bc939ea8, module_google$auth$impersonated_credentials, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$impersonated_credentials$$$function__19_with_target_audience->m_type_description == NULL);
frame_frame_google$auth$impersonated_credentials$$$function__19_with_target_audience = cache_frame_frame_google$auth$impersonated_credentials$$$function__19_with_target_audience;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$impersonated_credentials$$$function__19_with_target_audience);
assert(Py_REFCNT(frame_frame_google$auth$impersonated_credentials$$$function__19_with_target_audience) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 581;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__target_credentials);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 582;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_target_audience);
tmp_kw_call_value_1_1 = par_target_audience;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__include_email);
if (tmp_kw_call_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 584;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_kw_call_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__quota_project_id);
if (tmp_kw_call_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_2_1);

exception_lineno = 585;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$impersonated_credentials$$$function__19_with_target_audience->m_frame.f_lineno = 581;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_411261abc4e78af5fb73b9c4dc77792e_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_2_1);
CHECK_OBJECT(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_3_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 581;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$impersonated_credentials$$$function__19_with_target_audience, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$impersonated_credentials$$$function__19_with_target_audience->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$impersonated_credentials$$$function__19_with_target_audience, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$impersonated_credentials$$$function__19_with_target_audience,
    type_description_1,
    par_self,
    par_target_audience
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$impersonated_credentials$$$function__19_with_target_audience == cache_frame_frame_google$auth$impersonated_credentials$$$function__19_with_target_audience) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__19_with_target_audience);
    cache_frame_frame_google$auth$impersonated_credentials$$$function__19_with_target_audience = NULL;
}

assertFrameObject(frame_frame_google$auth$impersonated_credentials$$$function__19_with_target_audience);

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
CHECK_OBJECT(par_target_audience);
Py_DECREF(par_target_audience);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_target_audience);
Py_DECREF(par_target_audience);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$impersonated_credentials$$$function__20_with_include_email(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_include_email = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$auth$impersonated_credentials$$$function__20_with_include_email;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$impersonated_credentials$$$function__20_with_include_email = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$impersonated_credentials$$$function__20_with_include_email)) {
    Py_XDECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__20_with_include_email);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$impersonated_credentials$$$function__20_with_include_email == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$impersonated_credentials$$$function__20_with_include_email = MAKE_FUNCTION_FRAME(tstate, code_objects_d066b05ebb54c5461f4a7a63d45d9d48, module_google$auth$impersonated_credentials, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$impersonated_credentials$$$function__20_with_include_email->m_type_description == NULL);
frame_frame_google$auth$impersonated_credentials$$$function__20_with_include_email = cache_frame_frame_google$auth$impersonated_credentials$$$function__20_with_include_email;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$impersonated_credentials$$$function__20_with_include_email);
assert(Py_REFCNT(frame_frame_google$auth$impersonated_credentials$$$function__20_with_include_email) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 589;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__target_credentials);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 590;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__target_audience);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 591;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_include_email);
tmp_kw_call_value_2_1 = par_include_email;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_kw_call_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__quota_project_id);
if (tmp_kw_call_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);

exception_lineno = 593;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$impersonated_credentials$$$function__20_with_include_email->m_frame.f_lineno = 589;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_411261abc4e78af5fb73b9c4dc77792e_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
CHECK_OBJECT(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_3_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 589;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$impersonated_credentials$$$function__20_with_include_email, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$impersonated_credentials$$$function__20_with_include_email->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$impersonated_credentials$$$function__20_with_include_email, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$impersonated_credentials$$$function__20_with_include_email,
    type_description_1,
    par_self,
    par_include_email
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$impersonated_credentials$$$function__20_with_include_email == cache_frame_frame_google$auth$impersonated_credentials$$$function__20_with_include_email) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__20_with_include_email);
    cache_frame_frame_google$auth$impersonated_credentials$$$function__20_with_include_email = NULL;
}

assertFrameObject(frame_frame_google$auth$impersonated_credentials$$$function__20_with_include_email);

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
CHECK_OBJECT(par_include_email);
Py_DECREF(par_include_email);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_include_email);
Py_DECREF(par_include_email);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$impersonated_credentials$$$function__21_with_quota_project(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_quota_project_id = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$auth$impersonated_credentials$$$function__21_with_quota_project;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$impersonated_credentials$$$function__21_with_quota_project = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$impersonated_credentials$$$function__21_with_quota_project)) {
    Py_XDECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__21_with_quota_project);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$impersonated_credentials$$$function__21_with_quota_project == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$impersonated_credentials$$$function__21_with_quota_project = MAKE_FUNCTION_FRAME(tstate, code_objects_9f737beeb5dcb9219a3d4983379fb8cb, module_google$auth$impersonated_credentials, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$impersonated_credentials$$$function__21_with_quota_project->m_type_description == NULL);
frame_frame_google$auth$impersonated_credentials$$$function__21_with_quota_project = cache_frame_frame_google$auth$impersonated_credentials$$$function__21_with_quota_project;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$impersonated_credentials$$$function__21_with_quota_project);
assert(Py_REFCNT(frame_frame_google$auth$impersonated_credentials$$$function__21_with_quota_project) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_value_3_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 598;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__target_credentials);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 599;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__target_audience);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 600;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__include_email);
if (tmp_kw_call_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);

exception_lineno = 601;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_quota_project_id);
tmp_kw_call_value_3_1 = par_quota_project_id;
frame_frame_google$auth$impersonated_credentials$$$function__21_with_quota_project->m_frame.f_lineno = 598;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_411261abc4e78af5fb73b9c4dc77792e_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
CHECK_OBJECT(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_2_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 598;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$impersonated_credentials$$$function__21_with_quota_project, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$impersonated_credentials$$$function__21_with_quota_project->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$impersonated_credentials$$$function__21_with_quota_project, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$impersonated_credentials$$$function__21_with_quota_project,
    type_description_1,
    par_self,
    par_quota_project_id
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$impersonated_credentials$$$function__21_with_quota_project == cache_frame_frame_google$auth$impersonated_credentials$$$function__21_with_quota_project) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__21_with_quota_project);
    cache_frame_frame_google$auth$impersonated_credentials$$$function__21_with_quota_project = NULL;
}

assertFrameObject(frame_frame_google$auth$impersonated_credentials$$$function__21_with_quota_project);

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
CHECK_OBJECT(par_quota_project_id);
Py_DECREF(par_quota_project_id);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_quota_project_id);
Py_DECREF(par_quota_project_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$impersonated_credentials$$$function__22_refresh(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_request = python_pars[1];
PyObject *var_AuthorizedSession = NULL;
PyObject *var_iam_sign_endpoint = NULL;
PyObject *var_body = NULL;
PyObject *var_headers = NULL;
PyObject *var_authed_session = NULL;
PyObject *var_response = NULL;
PyObject *var_id_token = NULL;
PyObject *var_caught_exc = NULL;
PyObject *var_new_exc = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$impersonated_credentials$$$function__22_refresh;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$impersonated_credentials$$$function__22_refresh = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$impersonated_credentials$$$function__22_refresh)) {
    Py_XDECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__22_refresh);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$impersonated_credentials$$$function__22_refresh == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$impersonated_credentials$$$function__22_refresh = MAKE_FUNCTION_FRAME(tstate, code_objects_0ed3cd336e8d5b0a914f2c3e47ad91c7, module_google$auth$impersonated_credentials, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$impersonated_credentials$$$function__22_refresh->m_type_description == NULL);
frame_frame_google$auth$impersonated_credentials$$$function__22_refresh = cache_frame_frame_google$auth$impersonated_credentials$$$function__22_refresh;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$impersonated_credentials$$$function__22_refresh);
assert(Py_REFCNT(frame_frame_google$auth$impersonated_credentials$$$function__22_refresh) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_eda478fe391780f02c579185f1943916;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$auth$impersonated_credentials;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_AuthorizedSession_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_google$auth$impersonated_credentials$$$function__22_refresh->m_frame.f_lineno = 607;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$auth$impersonated_credentials,
        mod_consts.const_str_plain_AuthorizedSession,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_AuthorizedSession);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_AuthorizedSession == NULL);
var_AuthorizedSession = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
tmp_expression_value_3 = module_var_accessor_google$auth$impersonated_credentials$iam(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_iam);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 609;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__IAM_IDTOKEN_ENDPOINT);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 609;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_replace);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 609;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = module_var_accessor_google$auth$impersonated_credentials$credentials(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_credentials);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 610;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_DEFAULT_UNIVERSE_DOMAIN);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 610;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__target_credentials);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 611;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_universe_domain);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 611;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$impersonated_credentials$$$function__22_refresh->m_frame.f_lineno = 609;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 609;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_format);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 609;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__target_credentials);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 612;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_signer_email);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 612;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$impersonated_credentials$$$function__22_refresh->m_frame.f_lineno = 609;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 609;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_iam_sign_endpoint == NULL);
var_iam_sign_endpoint = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_9;
tmp_dict_key_1 = mod_consts.const_str_plain_audience;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__target_audience);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 615;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_delegates;
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain__target_credentials);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 616;
type_description_1 = "ooooooooooo";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain__delegates);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 616;
type_description_1 = "ooooooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_includeEmail;
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain__include_email);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 617;
type_description_1 = "ooooooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_3);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
assert(var_body == NULL);
var_body = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
tmp_dict_key_2 = mod_consts.const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3;
tmp_dict_value_2 = mod_consts.const_str_digest_1781891970018ef9597f363946d7327b;
tmp_assign_source_4 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_13;
PyObject *tmp_called_instance_1;
tmp_res = PyDict_SetItem(tmp_assign_source_4, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_expression_value_13 = module_var_accessor_google$auth$impersonated_credentials$metrics(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_metrics);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 622;
type_description_1 = "ooooooooooo";
    goto dict_build_exception_2;
}
tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_API_CLIENT_HEADER);
if (tmp_dict_key_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 622;
type_description_1 = "ooooooooooo";
    goto dict_build_exception_2;
}
tmp_called_instance_1 = module_var_accessor_google$auth$impersonated_credentials$metrics(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_metrics);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_2);

exception_lineno = 622;
type_description_1 = "ooooooooooo";
    goto dict_build_exception_2;
}
frame_frame_google$auth$impersonated_credentials$$$function__22_refresh->m_frame.f_lineno = 622;
tmp_dict_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_token_request_id_token_impersonate);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_2);

exception_lineno = 622;
type_description_1 = "ooooooooooo";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_assign_source_4, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
Py_DECREF(tmp_dict_key_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 622;
type_description_1 = "ooooooooooo";
    goto dict_build_exception_2;
}
}
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_assign_source_4);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
assert(var_headers == NULL);
var_headers = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_kw_call_dict_value_0_1;
CHECK_OBJECT(var_AuthorizedSession);
tmp_called_value_3 = var_AuthorizedSession;
CHECK_OBJECT(par_self);
tmp_expression_value_15 = par_self;
tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain__target_credentials);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 626;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain__source_credentials);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 626;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_kw_call_dict_value_0_1 = par_request;
frame_frame_google$auth$impersonated_credentials$$$function__22_refresh->m_frame.f_lineno = 625;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_auth_request_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 625;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_authed_session == NULL);
var_authed_session = tmp_assign_source_5;
}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_16;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_17;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(var_authed_session);
tmp_expression_value_16 = var_authed_session;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_post);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 630;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_iam_sign_endpoint);
tmp_kw_call_value_0_1 = var_iam_sign_endpoint;
CHECK_OBJECT(var_headers);
tmp_kw_call_value_1_1 = var_headers;
tmp_called_instance_2 = module_var_accessor_google$auth$impersonated_credentials$json(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 633;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_body);
tmp_args_element_value_4 = var_body;
frame_frame_google$auth$impersonated_credentials$$$function__22_refresh->m_frame.f_lineno = 633;
tmp_expression_value_17 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_dumps, tmp_args_element_value_4);
if (tmp_expression_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 633;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_encode);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 633;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
frame_frame_google$auth$impersonated_credentials$$$function__22_refresh->m_frame.f_lineno = 633;
tmp_kw_call_value_2_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_kw_call_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 633;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
frame_frame_google$auth$impersonated_credentials$$$function__22_refresh->m_frame.f_lineno = 630;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

    tmp_assign_source_6 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, kw_values, mod_consts.const_tuple_str_plain_url_str_plain_headers_str_plain_data_tuple);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_2_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 630;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
assert(var_response == NULL);
var_response = tmp_assign_source_6;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$impersonated_credentials$$$function__22_refresh, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$impersonated_credentials$$$function__22_refresh, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_1;
CHECK_OBJECT(var_authed_session);
tmp_called_instance_3 = var_authed_session;
frame_frame_google$auth$impersonated_credentials$$$function__22_refresh->m_frame.f_lineno = 636;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, const_str_plain_close);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 636;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 629;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$impersonated_credentials$$$function__22_refresh->m_frame)) {
        frame_frame_google$auth$impersonated_credentials$$$function__22_refresh->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooo";
goto try_except_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_2;
CHECK_OBJECT(var_authed_session);
tmp_called_instance_4 = var_authed_session;
frame_frame_google$auth$impersonated_credentials$$$function__22_refresh->m_frame.f_lineno = 636;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, const_str_plain_close);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 636;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_18;
PyObject *tmp_expression_value_19;
CHECK_OBJECT(var_response);
tmp_expression_value_18 = var_response;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_status_code);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 638;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_19 = module_var_accessor_google$auth$impersonated_credentials$http_client(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_http_client);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 638;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_OK);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 638;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 638;
type_description_1 = "ooooooooooo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_20;
PyObject *tmp_args_element_value_5;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_called_instance_5;
tmp_expression_value_20 = module_var_accessor_google$auth$impersonated_credentials$exceptions(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 639;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_RefreshError);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 639;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_2 = mod_consts.const_str_digest_6d0ad32f0118a39a2d89436871ee39af;
CHECK_OBJECT(var_response);
tmp_called_instance_5 = var_response;
frame_frame_google$auth$impersonated_credentials$$$function__22_refresh->m_frame.f_lineno = 640;
tmp_kw_call_arg_value_1_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts.const_str_plain_json);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 640;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$impersonated_credentials$$$function__22_refresh->m_frame.f_lineno = 640;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_1};
    tmp_args_element_value_5 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 640;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$impersonated_credentials$$$function__22_refresh->m_frame.f_lineno = 639;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 639;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 639;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 639;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_21;
PyObject *tmp_called_instance_6;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_response);
tmp_called_instance_6 = var_response;
frame_frame_google$auth$impersonated_credentials$$$function__22_refresh->m_frame.f_lineno = 644;
tmp_expression_value_21 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts.const_str_plain_json);
if (tmp_expression_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 644;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_subscript_value_1 = mod_consts.const_str_plain_token;
tmp_assign_source_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 644;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
assert(var_id_token == NULL);
var_id_token = tmp_assign_source_7;
}
goto try_end_2;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$impersonated_credentials$$$function__22_refresh, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$impersonated_credentials$$$function__22_refresh, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = mod_consts.const_tuple_type_KeyError_type_ValueError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 645;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_8); 
assert(var_caught_exc == NULL);
Py_INCREF(tmp_assign_source_8);
var_caught_exc = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_22;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_called_instance_7;
tmp_expression_value_22 = module_var_accessor_google$auth$impersonated_credentials$exceptions(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 646;
type_description_1 = "ooooooooooo";
    goto try_except_handler_6;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_RefreshError);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 646;
type_description_1 = "ooooooooooo";
    goto try_except_handler_6;
}
tmp_args_element_value_6 = mod_consts.const_str_digest_0031e5d3a6c81cc90766d5ea441959e1;
CHECK_OBJECT(var_response);
tmp_called_instance_7 = var_response;
frame_frame_google$auth$impersonated_credentials$$$function__22_refresh->m_frame.f_lineno = 647;
tmp_args_element_value_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_7, mod_consts.const_str_plain_json);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 647;
type_description_1 = "ooooooooooo";
    goto try_except_handler_6;
}
frame_frame_google$auth$impersonated_credentials$$$function__22_refresh->m_frame.f_lineno = 646;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 646;
type_description_1 = "ooooooooooo";
    goto try_except_handler_6;
}
assert(var_new_exc == NULL);
var_new_exc = tmp_assign_source_9;
}
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_raise_cause_1;
CHECK_OBJECT(var_new_exc);
tmp_raise_type_input_2 = var_new_exc;
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 649;
type_description_1 = "ooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_caught_exc);
tmp_raise_cause_1 = var_caught_exc;
exception_state.exception_value = tmp_raise_type_2;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 649;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "ooooooooooo";
goto try_except_handler_6;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_caught_exc);
var_caught_exc = NULL;

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 643;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$impersonated_credentials$$$function__22_refresh->m_frame)) {
        frame_frame_google$auth$impersonated_credentials$$$function__22_refresh->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooo";
goto try_except_handler_5;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_2:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(var_id_token);
tmp_assattr_value_1 = var_id_token;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_token, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 651;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_23;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_24;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_25;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
PyObject *tmp_subscript_value_2;
PyObject *tmp_assattr_target_2;
tmp_expression_value_23 = module_var_accessor_google$auth$impersonated_credentials$_helpers(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 652;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_utcfromtimestamp);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 652;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_25 = module_var_accessor_google$auth$impersonated_credentials$jwt(tstate);
if (unlikely(tmp_expression_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_jwt);
}

if (tmp_expression_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_8);

exception_lineno = 653;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_decode);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 653;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_id_token);
tmp_tuple_element_1 = var_id_token;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_f3e8b111ded9225be3e397b0a4e57df6);
frame_frame_google$auth$impersonated_credentials$$$function__22_refresh->m_frame.f_lineno = 653;
tmp_expression_value_24 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_expression_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 653;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = mod_consts.const_str_plain_exp;
tmp_args_element_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 653;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$impersonated_credentials$$$function__22_refresh->m_frame.f_lineno = 652;
tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 652;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_expiry, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 652;
type_description_1 = "ooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$impersonated_credentials$$$function__22_refresh, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$impersonated_credentials$$$function__22_refresh->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$impersonated_credentials$$$function__22_refresh, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$impersonated_credentials$$$function__22_refresh,
    type_description_1,
    par_self,
    par_request,
    var_AuthorizedSession,
    var_iam_sign_endpoint,
    var_body,
    var_headers,
    var_authed_session,
    var_response,
    var_id_token,
    var_caught_exc,
    var_new_exc
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$impersonated_credentials$$$function__22_refresh == cache_frame_frame_google$auth$impersonated_credentials$$$function__22_refresh) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__22_refresh);
    cache_frame_frame_google$auth$impersonated_credentials$$$function__22_refresh = NULL;
}

assertFrameObject(frame_frame_google$auth$impersonated_credentials$$$function__22_refresh);

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
CHECK_OBJECT(var_AuthorizedSession);
CHECK_OBJECT(var_AuthorizedSession);
Py_DECREF(var_AuthorizedSession);
var_AuthorizedSession = NULL;
CHECK_OBJECT(var_iam_sign_endpoint);
CHECK_OBJECT(var_iam_sign_endpoint);
Py_DECREF(var_iam_sign_endpoint);
var_iam_sign_endpoint = NULL;
CHECK_OBJECT(var_body);
CHECK_OBJECT(var_body);
Py_DECREF(var_body);
var_body = NULL;
CHECK_OBJECT(var_headers);
CHECK_OBJECT(var_headers);
Py_DECREF(var_headers);
var_headers = NULL;
CHECK_OBJECT(var_authed_session);
CHECK_OBJECT(var_authed_session);
Py_DECREF(var_authed_session);
var_authed_session = NULL;
CHECK_OBJECT(var_response);
CHECK_OBJECT(var_response);
Py_DECREF(var_response);
var_response = NULL;
CHECK_OBJECT(var_id_token);
CHECK_OBJECT(var_id_token);
Py_DECREF(var_id_token);
var_id_token = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_AuthorizedSession);
var_AuthorizedSession = NULL;
Py_XDECREF(var_iam_sign_endpoint);
var_iam_sign_endpoint = NULL;
Py_XDECREF(var_body);
var_body = NULL;
Py_XDECREF(var_headers);
var_headers = NULL;
Py_XDECREF(var_authed_session);
var_authed_session = NULL;
Py_XDECREF(var_response);
var_response = NULL;
Py_XDECREF(var_id_token);
var_id_token = NULL;
Py_XDECREF(var_new_exc);
var_new_exc = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_request);
Py_DECREF(par_request);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$impersonated_credentials$$$function__23__sign_jwt_request(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_request = python_pars[0];
PyObject *par_principal = python_pars[1];
PyObject *par_headers = python_pars[2];
PyObject *par_payload = python_pars[3];
PyObject *par_delegates = python_pars[4];
PyObject *var_iam_endpoint = NULL;
PyObject *var_body = NULL;
PyObject *var_response = NULL;
PyObject *var_response_body = NULL;
PyObject *var_jwt_response = NULL;
PyObject *var_signed_jwt = NULL;
PyObject *var_caught_exc = NULL;
PyObject *var_new_exc = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$impersonated_credentials$$$function__23__sign_jwt_request;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$impersonated_credentials$$$function__23__sign_jwt_request = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$impersonated_credentials$$$function__23__sign_jwt_request)) {
    Py_XDECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__23__sign_jwt_request);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$impersonated_credentials$$$function__23__sign_jwt_request == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$impersonated_credentials$$$function__23__sign_jwt_request = MAKE_FUNCTION_FRAME(tstate, code_objects_a23d6920a8cd2800dbda8213e82b92be, module_google$auth$impersonated_credentials, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$impersonated_credentials$$$function__23__sign_jwt_request->m_type_description == NULL);
frame_frame_google$auth$impersonated_credentials$$$function__23__sign_jwt_request = cache_frame_frame_google$auth$impersonated_credentials$$$function__23__sign_jwt_request;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$impersonated_credentials$$$function__23__sign_jwt_request);
assert(Py_REFCNT(frame_frame_google$auth$impersonated_credentials$$$function__23__sign_jwt_request) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
tmp_expression_value_2 = module_var_accessor_google$auth$impersonated_credentials$iam(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_iam);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 686;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__IAM_SIGNJWT_ENDPOINT);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 686;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_format);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 686;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_principal);
tmp_args_element_value_1 = par_principal;
frame_frame_google$auth$impersonated_credentials$$$function__23__sign_jwt_request->m_frame.f_lineno = 686;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 686;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_iam_endpoint == NULL);
var_iam_endpoint = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_delegates;
CHECK_OBJECT(par_delegates);
tmp_dict_value_1 = par_delegates;
tmp_assign_source_2 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_payload;
tmp_called_instance_1 = module_var_accessor_google$auth$impersonated_credentials$json(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 688;
type_description_1 = "ooooooooooooo";
    goto dict_build_exception_1;
}
CHECK_OBJECT(par_payload);
tmp_args_element_value_2 = par_payload;
frame_frame_google$auth$impersonated_credentials$$$function__23__sign_jwt_request->m_frame.f_lineno = 688;
tmp_dict_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_dumps, tmp_args_element_value_2);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 688;
type_description_1 = "ooooooooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_2);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
assert(var_body == NULL);
var_body = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_3;
tmp_called_instance_2 = module_var_accessor_google$auth$impersonated_credentials$json(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 689;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_body);
tmp_args_element_value_3 = var_body;
frame_frame_google$auth$impersonated_credentials$$$function__23__sign_jwt_request->m_frame.f_lineno = 689;
tmp_expression_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_dumps, tmp_args_element_value_3);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 689;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_encode);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 689;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$impersonated_credentials$$$function__23__sign_jwt_request->m_frame.f_lineno = 689;
tmp_assign_source_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 689;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_body;
    assert(old != NULL);
    var_body = tmp_assign_source_3;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
CHECK_OBJECT(par_request);
tmp_called_value_3 = par_request;
CHECK_OBJECT(var_iam_endpoint);
tmp_kw_call_value_0_1 = var_iam_endpoint;
tmp_kw_call_value_1_1 = mod_consts.const_str_plain_POST;
CHECK_OBJECT(par_headers);
tmp_kw_call_value_2_1 = par_headers;
CHECK_OBJECT(var_body);
tmp_kw_call_value_3_1 = var_body;
frame_frame_google$auth$impersonated_credentials$$$function__23__sign_jwt_request->m_frame.f_lineno = 691;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_assign_source_4 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_4d2628c628983f920806be4976c06ae1_tuple);
}

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 691;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_response == NULL);
var_response = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
bool tmp_condition_result_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(var_response);
tmp_expression_value_5 = var_response;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_data);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 696;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 696;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(var_response);
tmp_expression_value_7 = var_response;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_data);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 695;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 695;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$impersonated_credentials$$$function__23__sign_jwt_request->m_frame.f_lineno = 695;
tmp_assign_source_5 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 695;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(var_response);
tmp_expression_value_8 = var_response;
tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_data);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 697;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
assert(var_response_body == NULL);
var_response_body = tmp_assign_source_5;
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(var_response);
tmp_expression_value_9 = var_response;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_status);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 700;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_10 = module_var_accessor_google$auth$impersonated_credentials$http_client(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_http_client);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 700;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_OK);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 700;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 700;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
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
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_expression_value_11 = module_var_accessor_google$auth$impersonated_credentials$exceptions(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 701;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_RefreshError);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 701;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = module_var_accessor_google$auth$impersonated_credentials$_REFRESH_ERROR(tstate);
if (unlikely(tmp_args_element_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__REFRESH_ERROR);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 701;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_response_body);
tmp_args_element_value_5 = var_response_body;
frame_frame_google$auth$impersonated_credentials$$$function__23__sign_jwt_request->m_frame.f_lineno = 701;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_raise_type_input_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 701;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 701;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 701;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_6;
tmp_called_instance_3 = module_var_accessor_google$auth$impersonated_credentials$json(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 704;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_response_body);
tmp_args_element_value_6 = var_response_body;
frame_frame_google$auth$impersonated_credentials$$$function__23__sign_jwt_request->m_frame.f_lineno = 704;
tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_loads, tmp_args_element_value_6);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 704;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
assert(var_jwt_response == NULL);
var_jwt_response = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_jwt_response);
tmp_expression_value_12 = var_jwt_response;
tmp_subscript_value_1 = mod_consts.const_str_plain_signedJwt;
tmp_assign_source_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 705;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
assert(var_signed_jwt == NULL);
var_signed_jwt = tmp_assign_source_7;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$impersonated_credentials$$$function__23__sign_jwt_request, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$impersonated_credentials$$$function__23__sign_jwt_request, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = mod_consts.const_tuple_type_KeyError_type_ValueError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 708;
type_description_1 = "ooooooooooooo";
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
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_8); 
assert(var_caught_exc == NULL);
Py_INCREF(tmp_assign_source_8);
var_caught_exc = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_7;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_args_element_value_8;
tmp_expression_value_13 = module_var_accessor_google$auth$impersonated_credentials$exceptions(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 709;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_RefreshError);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 709;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_de16208f0a323a6a4b0772d2903acfeb;
tmp_kw_call_arg_value_1_1 = module_var_accessor_google$auth$impersonated_credentials$_REFRESH_ERROR(tstate);
if (unlikely(tmp_kw_call_arg_value_1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__REFRESH_ERROR);
}

if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 710;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
frame_frame_google$auth$impersonated_credentials$$$function__23__sign_jwt_request->m_frame.f_lineno = 710;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_args_element_value_7 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 710;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_response_body);
tmp_args_element_value_8 = var_response_body;
frame_frame_google$auth$impersonated_credentials$$$function__23__sign_jwt_request->m_frame.f_lineno = 709;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 709;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
assert(var_new_exc == NULL);
var_new_exc = tmp_assign_source_9;
}
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_raise_cause_1;
CHECK_OBJECT(var_new_exc);
tmp_raise_type_input_2 = var_new_exc;
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 712;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_caught_exc);
tmp_raise_cause_1 = var_caught_exc;
exception_state.exception_value = tmp_raise_type_2;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 712;
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
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 703;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$impersonated_credentials$$$function__23__sign_jwt_request->m_frame)) {
        frame_frame_google$auth$impersonated_credentials$$$function__23__sign_jwt_request->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooo";
goto try_except_handler_3;
branch_end_2:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$impersonated_credentials$$$function__23__sign_jwt_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$impersonated_credentials$$$function__23__sign_jwt_request->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$impersonated_credentials$$$function__23__sign_jwt_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$impersonated_credentials$$$function__23__sign_jwt_request,
    type_description_1,
    par_request,
    par_principal,
    par_headers,
    par_payload,
    par_delegates,
    var_iam_endpoint,
    var_body,
    var_response,
    var_response_body,
    var_jwt_response,
    var_signed_jwt,
    var_caught_exc,
    var_new_exc
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$impersonated_credentials$$$function__23__sign_jwt_request == cache_frame_frame_google$auth$impersonated_credentials$$$function__23__sign_jwt_request) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$impersonated_credentials$$$function__23__sign_jwt_request);
    cache_frame_frame_google$auth$impersonated_credentials$$$function__23__sign_jwt_request = NULL;
}

assertFrameObject(frame_frame_google$auth$impersonated_credentials$$$function__23__sign_jwt_request);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_signed_jwt);
tmp_return_value = var_signed_jwt;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_iam_endpoint);
CHECK_OBJECT(var_iam_endpoint);
Py_DECREF(var_iam_endpoint);
var_iam_endpoint = NULL;
CHECK_OBJECT(var_body);
CHECK_OBJECT(var_body);
Py_DECREF(var_body);
var_body = NULL;
CHECK_OBJECT(var_response);
CHECK_OBJECT(var_response);
Py_DECREF(var_response);
var_response = NULL;
CHECK_OBJECT(var_response_body);
CHECK_OBJECT(var_response_body);
Py_DECREF(var_response_body);
var_response_body = NULL;
CHECK_OBJECT(var_jwt_response);
CHECK_OBJECT(var_jwt_response);
Py_DECREF(var_jwt_response);
var_jwt_response = NULL;
CHECK_OBJECT(var_signed_jwt);
CHECK_OBJECT(var_signed_jwt);
Py_DECREF(var_signed_jwt);
var_signed_jwt = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_iam_endpoint);
var_iam_endpoint = NULL;
Py_XDECREF(var_body);
var_body = NULL;
Py_XDECREF(var_response);
var_response = NULL;
Py_XDECREF(var_response_body);
var_response_body = NULL;
Py_XDECREF(var_jwt_response);
var_jwt_response = NULL;
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
CHECK_OBJECT(par_principal);
Py_DECREF(par_principal);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_payload);
Py_DECREF(par_payload);
CHECK_OBJECT(par_delegates);
Py_DECREF(par_delegates);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_principal);
Py_DECREF(par_principal);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_payload);
Py_DECREF(par_payload);
CHECK_OBJECT(par_delegates);
Py_DECREF(par_delegates);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__10_requires_scopes(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$impersonated_credentials$$$function__10_requires_scopes,
        mod_consts.const_str_plain_requires_scopes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c1f55ab516b4a48572f0044d037333d7,
#endif
        code_objects_b9b32b9a3f0ec84ab69e52132b1d65c0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$impersonated_credentials,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__11_get_cred_info(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$impersonated_credentials$$$function__11_get_cred_info,
        mod_consts.const_str_plain_get_cred_info,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2902b573691aef3e2e3d3564ca94d182,
#endif
        code_objects_48357de4beff08983e30d0fb7528c064,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$impersonated_credentials,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__12__make_copy(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$impersonated_credentials$$$function__12__make_copy,
        mod_consts.const_str_plain__make_copy,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c91c8525babaffcd4ed5a43632506f7c,
#endif
        code_objects_e07914f7902de8ea4893ce5b89cacc19,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$impersonated_credentials,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__13_with_trust_boundary(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$impersonated_credentials$$$function__13_with_trust_boundary,
        mod_consts.const_str_plain_with_trust_boundary,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2cc9bf5f8e7558a0c43ef2dd28c94ff5,
#endif
        code_objects_b83fdb24dcdfb564c0f48118e2bf75b6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$impersonated_credentials,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__14_with_quota_project(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$impersonated_credentials$$$function__14_with_quota_project,
        mod_consts.const_str_plain_with_quota_project,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_44f0a4aa7b0a627b3fbd4f24ab4ca513,
#endif
        code_objects_ceb512b8fcb07f8e8b4105897a2fb57b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$impersonated_credentials,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__15_with_scopes(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$impersonated_credentials$$$function__15_with_scopes,
        mod_consts.const_str_plain_with_scopes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_afc9d8104efc5e9725cb6028dda826d8,
#endif
        code_objects_fff02c2c0e008f33b8dfe54769385fbd,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$impersonated_credentials,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info,
        mod_consts.const_str_plain_from_impersonated_service_account_info,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_eb6b6d41ecfc97e0360447591888165b,
#endif
        code_objects_9d4df1383865e482969c702b8cbe15a5,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$impersonated_credentials,
        mod_consts.const_str_digest_c9984262229af101d6e2f3b105b0b35e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__17___init__(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$impersonated_credentials$$$function__17___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d8ead9bb88af8e4e9ac78ae3398d5b39,
#endif
        code_objects_5cb4c463de28fa95e144770737addecb,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$impersonated_credentials,
        mod_consts.const_str_digest_5df06c5d06671f6396371875636f30ce,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__18_from_credentials(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$impersonated_credentials$$$function__18_from_credentials,
        mod_consts.const_str_plain_from_credentials,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6ec7d5823ebc632bc038cc2a3e006b66,
#endif
        code_objects_178f82f3d4e07b1ddf7a952997f4eabe,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$impersonated_credentials,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__19_with_target_audience(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$impersonated_credentials$$$function__19_with_target_audience,
        mod_consts.const_str_plain_with_target_audience,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_276fb8f4d65093e22bcf767f2ca8a484,
#endif
        code_objects_8bec2c5db43526556c2215e4bc939ea8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$impersonated_credentials,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__1__make_iam_token_request(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$impersonated_credentials$$$function__1__make_iam_token_request,
        mod_consts.const_str_plain__make_iam_token_request,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b04652d33a655f80ea1fb2348d8c1f51,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$impersonated_credentials,
        mod_consts.const_str_digest_ce64ef113c310bcaca0ac1090d79d47f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__20_with_include_email(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$impersonated_credentials$$$function__20_with_include_email,
        mod_consts.const_str_plain_with_include_email,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_63e519a4dc387508ad3aaaac62c7fcb8,
#endif
        code_objects_d066b05ebb54c5461f4a7a63d45d9d48,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$impersonated_credentials,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__21_with_quota_project(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$impersonated_credentials$$$function__21_with_quota_project,
        mod_consts.const_str_plain_with_quota_project,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6af9d160c0b4bacec7710303a72b6d4e,
#endif
        code_objects_9f737beeb5dcb9219a3d4983379fb8cb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$impersonated_credentials,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__22_refresh(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$impersonated_credentials$$$function__22_refresh,
        mod_consts.const_str_plain_refresh,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9447c97e984c009b4679b69c423eea2b,
#endif
        code_objects_0ed3cd336e8d5b0a914f2c3e47ad91c7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$impersonated_credentials,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__23__sign_jwt_request(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$impersonated_credentials$$$function__23__sign_jwt_request,
        mod_consts.const_str_plain__sign_jwt_request,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a23d6920a8cd2800dbda8213e82b92be,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$impersonated_credentials,
        mod_consts.const_str_digest_13dea018a9a58375af7cfb96d9062cf3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__2___init__(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$impersonated_credentials$$$function__2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ece4c0f614049f51dbcf43eaafbb9cdd,
#endif
        code_objects_19487edaadb4b134b57aafafb4aaf16b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$impersonated_credentials,
        mod_consts.const_str_digest_35bf9f09d759db8274bd252476021855,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__3__metric_header_for_usage(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$impersonated_credentials$$$function__3__metric_header_for_usage,
        mod_consts.const_str_plain__metric_header_for_usage,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5f2d650ac5b0b9ed29e4eae93c0d1e1a,
#endif
        code_objects_1192080584ccb671359f8fa42a922ec4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$impersonated_credentials,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__4__perform_refresh_token(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$impersonated_credentials$$$function__4__perform_refresh_token,
        mod_consts.const_str_plain__perform_refresh_token,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_00eee5d168e3eb34147d15f840124f09,
#endif
        code_objects_01123010123c57fbd72416252bfa5f8e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$impersonated_credentials,
        mod_consts.const_str_digest_5f1b642f637a2e14a3f77e2d2351d02d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__5__build_trust_boundary_lookup_url(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$impersonated_credentials$$$function__5__build_trust_boundary_lookup_url,
        mod_consts.const_str_plain__build_trust_boundary_lookup_url,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_19eaf36f050b366ece91596f0ae2dc0b,
#endif
        code_objects_b2f51ccdc7a6b75b7d1b88eb441b2f2c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$impersonated_credentials,
        mod_consts.const_str_digest_ac2941dd6632b9f1ac2db738b0f4178a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__6_sign_bytes(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$impersonated_credentials$$$function__6_sign_bytes,
        mod_consts.const_str_plain_sign_bytes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_28c602ce6311178ae3445fd4d5291753,
#endif
        code_objects_cc5a194e992bbe5f345245c985a77d64,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$impersonated_credentials,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__7_signer_email(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$impersonated_credentials$$$function__7_signer_email,
        mod_consts.const_str_plain_signer_email,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9f6780cc9cc369f8216839829b6eed5b,
#endif
        code_objects_8ccaafac72f165ffa9f3732b58945dee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$impersonated_credentials,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__8_service_account_email(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$impersonated_credentials$$$function__8_service_account_email,
        mod_consts.const_str_plain_service_account_email,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_57ebbe66574bcb89e47410810eeb3c3c,
#endif
        code_objects_aebab1dc9cddab67b29df657c429bc24,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$impersonated_credentials,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__9_signer(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$impersonated_credentials$$$function__9_signer,
        mod_consts.const_str_plain_signer,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2d28140646409296c1a41f5f2f1c82dd,
#endif
        code_objects_170aef9e0454dec3ed675b0fbeadac50,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$impersonated_credentials,
        NULL,
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

static function_impl_code const function_table_google$auth$impersonated_credentials[] = {
impl_google$auth$impersonated_credentials$$$function__1__make_iam_token_request,
impl_google$auth$impersonated_credentials$$$function__2___init__,
impl_google$auth$impersonated_credentials$$$function__3__metric_header_for_usage,
impl_google$auth$impersonated_credentials$$$function__4__perform_refresh_token,
impl_google$auth$impersonated_credentials$$$function__5__build_trust_boundary_lookup_url,
impl_google$auth$impersonated_credentials$$$function__6_sign_bytes,
impl_google$auth$impersonated_credentials$$$function__7_signer_email,
impl_google$auth$impersonated_credentials$$$function__8_service_account_email,
impl_google$auth$impersonated_credentials$$$function__9_signer,
impl_google$auth$impersonated_credentials$$$function__10_requires_scopes,
impl_google$auth$impersonated_credentials$$$function__11_get_cred_info,
impl_google$auth$impersonated_credentials$$$function__12__make_copy,
impl_google$auth$impersonated_credentials$$$function__13_with_trust_boundary,
impl_google$auth$impersonated_credentials$$$function__14_with_quota_project,
impl_google$auth$impersonated_credentials$$$function__15_with_scopes,
impl_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info,
impl_google$auth$impersonated_credentials$$$function__17___init__,
impl_google$auth$impersonated_credentials$$$function__18_from_credentials,
impl_google$auth$impersonated_credentials$$$function__19_with_target_audience,
impl_google$auth$impersonated_credentials$$$function__20_with_include_email,
impl_google$auth$impersonated_credentials$$$function__21_with_quota_project,
impl_google$auth$impersonated_credentials$$$function__22_refresh,
impl_google$auth$impersonated_credentials$$$function__23__sign_jwt_request,
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

    return Nuitka_Function_GetFunctionState(function, function_table_google$auth$impersonated_credentials);
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
        module_google$auth$impersonated_credentials,
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
        function_table_google$auth$impersonated_credentials,
        sizeof(function_table_google$auth$impersonated_credentials) / sizeof(function_impl_code)
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
static char const *module_full_name = "google.auth.impersonated_credentials";
#endif

// Internal entry point for module code.
PyObject *module_code_google$auth$impersonated_credentials(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("google$auth$impersonated_credentials");

    // Store the module for future use.
    module_google$auth$impersonated_credentials = module;

    moduledict_google$auth$impersonated_credentials = MODULE_DICT(module_google$auth$impersonated_credentials);

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
        PRINT_STRING("google$auth$impersonated_credentials: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("google$auth$impersonated_credentials: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("google$auth$impersonated_credentials: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth.impersonated_credentials" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initgoogle$auth$impersonated_credentials\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_google$auth$impersonated_credentials,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_google$auth$impersonated_credentials,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_google$auth$impersonated_credentials,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$impersonated_credentials,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$impersonated_credentials,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_google$auth$impersonated_credentials);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_google$auth$impersonated_credentials);
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

        UPDATE_STRING_DICT1(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_CellObject *outline_0_var___class__ = NULL;
struct Nuitka_CellObject *outline_1_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__bases = NULL;
PyObject *tmp_class_container$class_creation_2__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__metaclass = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$impersonated_credentials;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_google$auth$impersonated_credentials$$$class__1_Credentials_126 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_google$auth$impersonated_credentials$$$class__1_Credentials_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *locals_google$auth$impersonated_credentials$$$class__2_IDTokenCredentials_542 = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$impersonated_credentials$$$class__2_IDTokenCredentials_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_e8bc2dac6795e3d685eac91fcf09c105;
UPDATE_STRING_DICT0(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_google$auth$impersonated_credentials = MAKE_MODULE_FRAME(code_objects_412233e31d639dff49a9453145e5e68d, module_google$auth$impersonated_credentials);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$impersonated_credentials);
assert(Py_REFCNT(frame_frame_google$auth$impersonated_credentials) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_google$auth$impersonated_credentials$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_google$auth$impersonated_credentials$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_base64;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$auth$impersonated_credentials;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_google$auth$impersonated_credentials->m_frame.f_lineno = 28;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_base64, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_copy;
tmp_globals_arg_value_2 = (PyObject *)moduledict_google$auth$impersonated_credentials;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_google$auth$impersonated_credentials->m_frame.f_lineno = 29;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_copy, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_datetime;
tmp_globals_arg_value_3 = (PyObject *)moduledict_google$auth$impersonated_credentials;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_datetime_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_google$auth$impersonated_credentials->m_frame.f_lineno = 30;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$auth$impersonated_credentials,
        mod_consts.const_str_plain_datetime,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_datetime);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_datetime, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_096ca139beaf8ac5201071e235ad66b6;
tmp_globals_arg_value_4 = (PyObject *)moduledict_google$auth$impersonated_credentials;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = Py_None;
tmp_level_value_4 = const_int_0;
frame_frame_google$auth$impersonated_credentials->m_frame.f_lineno = 31;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_google$auth$impersonated_credentials,
        mod_consts.const_str_plain_client,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_client);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_http_client, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_json;
tmp_globals_arg_value_5 = (PyObject *)moduledict_google$auth$impersonated_credentials;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = Py_None;
tmp_level_value_5 = const_int_0;
frame_frame_google$auth$impersonated_credentials->m_frame.f_lineno = 32;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_json, tmp_assign_source_8);
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
tmp_globals_arg_value_6 = (PyObject *)moduledict_google$auth$impersonated_credentials;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain__exponential_backoff_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_google$auth$impersonated_credentials->m_frame.f_lineno = 34;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_google$auth$impersonated_credentials,
        mod_consts.const_str_plain__exponential_backoff,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain__exponential_backoff);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__exponential_backoff, tmp_assign_source_9);
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
tmp_globals_arg_value_7 = (PyObject *)moduledict_google$auth$impersonated_credentials;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain__helpers_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_google$auth$impersonated_credentials->m_frame.f_lineno = 35;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_google$auth$impersonated_credentials,
        mod_consts.const_str_plain__helpers,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain__helpers);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers, tmp_assign_source_10);
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
tmp_globals_arg_value_8 = (PyObject *)moduledict_google$auth$impersonated_credentials;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_credentials_tuple;
tmp_level_value_8 = const_int_0;
frame_frame_google$auth$impersonated_credentials->m_frame.f_lineno = 36;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_google$auth$impersonated_credentials,
        mod_consts.const_str_plain_credentials,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_credentials);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_credentials, tmp_assign_source_11);
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
tmp_globals_arg_value_9 = (PyObject *)moduledict_google$auth$impersonated_credentials;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_exceptions_tuple;
tmp_level_value_9 = const_int_0;
frame_frame_google$auth$impersonated_credentials->m_frame.f_lineno = 37;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_google$auth$impersonated_credentials,
        mod_consts.const_str_plain_exceptions,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_exceptions);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions, tmp_assign_source_12);
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
tmp_globals_arg_value_10 = (PyObject *)moduledict_google$auth$impersonated_credentials;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_iam_tuple;
tmp_level_value_10 = const_int_0;
frame_frame_google$auth$impersonated_credentials->m_frame.f_lineno = 38;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_google$auth$impersonated_credentials,
        mod_consts.const_str_plain_iam,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_iam);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_iam, tmp_assign_source_13);
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
tmp_globals_arg_value_11 = (PyObject *)moduledict_google$auth$impersonated_credentials;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_jwt_tuple;
tmp_level_value_11 = const_int_0;
frame_frame_google$auth$impersonated_credentials->m_frame.f_lineno = 39;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_google$auth$impersonated_credentials,
        mod_consts.const_str_plain_jwt,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_jwt);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_jwt, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_12 = (PyObject *)moduledict_google$auth$impersonated_credentials;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_metrics_tuple;
tmp_level_value_12 = const_int_0;
frame_frame_google$auth$impersonated_credentials->m_frame.f_lineno = 40;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_google$auth$impersonated_credentials,
        mod_consts.const_str_plain_metrics,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_metrics);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_metrics, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_digest_31b40dbd93ddd4efa91cab6083c18890;
tmp_globals_arg_value_13 = (PyObject *)moduledict_google$auth$impersonated_credentials;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_str_plain__client_tuple;
tmp_level_value_13 = const_int_0;
frame_frame_google$auth$impersonated_credentials->m_frame.f_lineno = 41;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_google$auth$impersonated_credentials,
        mod_consts.const_str_plain__client,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain__client);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__client, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = mod_consts.const_str_digest_061c56fc1f36e3c8ef4df14092880d01;
UPDATE_STRING_DICT0(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__REFRESH_ERROR, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = mod_consts.const_int_pos_3600;
UPDATE_STRING_DICT0(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_TOKEN_LIFETIME_SECS, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = mod_consts.const_str_digest_569bac4d93375a3bb6dddf3fd713403e;
UPDATE_STRING_DICT0(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__GOOGLE_OAUTH2_TOKEN_ENDPOINT, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = mod_consts.const_str_digest_5b6e0e83f83855cea6cda0e01c12c935;
UPDATE_STRING_DICT0(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__TRUST_BOUNDARY_LOOKUP_ENDPOINT, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = mod_consts.const_str_plain_authorized_user;
UPDATE_STRING_DICT0(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__SOURCE_CREDENTIAL_AUTHORIZED_USER_TYPE, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = mod_consts.const_str_plain_service_account;
UPDATE_STRING_DICT0(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__SOURCE_CREDENTIAL_SERVICE_ACCOUNT_TYPE, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = mod_consts.const_str_plain_external_account_authorized_user;
UPDATE_STRING_DICT0(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_digest_9b6de995960e30c87da59da3358c3b6c, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_defaults_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_google$auth$impersonated_credentials$credentials(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_credentials);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 65;

    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_DEFAULT_UNIVERSE_DOMAIN);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto frame_exception_exit_1;
}
tmp_defaults_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_defaults_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_1, 1, tmp_tuple_element_1);

tmp_assign_source_24 = MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__1__make_iam_token_request(tstate, tmp_defaults_1);

UPDATE_STRING_DICT1(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__make_iam_token_request, tmp_assign_source_24);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_25;
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = module_var_accessor_google$auth$impersonated_credentials$credentials(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_credentials);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 123;

    goto try_except_handler_1;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_Scoped);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto try_except_handler_1;
}
tmp_assign_source_25 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyTuple_SET_ITEM(tmp_assign_source_25, 0, tmp_tuple_element_2);
tmp_expression_value_3 = module_var_accessor_google$auth$impersonated_credentials$credentials(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_credentials);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 124;

    goto tuple_build_exception_1;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_CredentialsWithQuotaProject);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_25, 1, tmp_tuple_element_2);
tmp_expression_value_4 = module_var_accessor_google$auth$impersonated_credentials$credentials(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_credentials);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 125;

    goto tuple_build_exception_1;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_Signing);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_25, 2, tmp_tuple_element_2);
tmp_expression_value_5 = module_var_accessor_google$auth$impersonated_credentials$credentials(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_credentials);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 126;

    goto tuple_build_exception_1;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_CredentialsWithTrustBoundary);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_25, 3, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_assign_source_25);
goto try_except_handler_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_25;
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_26 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_26;
}
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_27;
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

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
tmp_expression_value_6 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_1;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_28 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_28;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_7 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_7, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

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
PyObject *tmp_assign_source_29;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_8 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_1;
}
tmp_tuple_element_3 = mod_consts.const_str_plain_Credentials;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_3 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_google$auth$impersonated_credentials->m_frame.f_lineno = 126;
tmp_assign_source_29 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_29;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_9 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_9, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

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
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_10;
PyObject *tmp_name_value_14;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_10 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_14 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_4 = BUILTIN_GETATTR(tstate, tmp_expression_value_10, tmp_name_value_14, tmp_default_value_1);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_1;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_11;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_11 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_11 == NULL));
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_1;
}
frame_frame_google$auth$impersonated_credentials->m_frame.f_lineno = 126;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 126;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_30;
}
branch_end_1:;
{
PyObject *tmp_assign_source_31;
outline_0_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_google$auth$impersonated_credentials$$$class__1_Credentials_126 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_dc07402eb604b3efdc1fb10895354bdf;
tmp_res = PyObject_SetItem(locals_google$auth$impersonated_credentials$$$class__1_Credentials_126, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_digest_beba1a31d6414f1c8d269b026a1f781f;
tmp_res = PyObject_SetItem(locals_google$auth$impersonated_credentials$$$class__1_Credentials_126, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_plain_Credentials;
tmp_res = PyObject_SetItem(locals_google$auth$impersonated_credentials$$$class__1_Credentials_126, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_int_pos_122;
tmp_res = PyObject_SetItem(locals_google$auth$impersonated_credentials$$$class__1_Credentials_126, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_3;
}
frame_frame_google$auth$impersonated_credentials$$$class__1_Credentials_2 = MAKE_CLASS_FRAME(tstate, code_objects_dcc07c532c9dc80858232be69a0c7cb7, module_google$auth$impersonated_credentials, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$impersonated_credentials$$$class__1_Credentials_2);
assert(Py_REFCNT(frame_frame_google$auth$impersonated_credentials$$$class__1_Credentials_2) == 2);

// Framed code:
{
PyObject *tmp_defaults_2;
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = Py_None;
tmp_defaults_2 = MAKE_TUPLE_EMPTY(tstate, 6);
PyTuple_SET_ITEM0(tmp_defaults_2, 0, tmp_tuple_element_5);
tmp_tuple_element_5 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_2, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = PyObject_GetItem(locals_google$auth$impersonated_credentials$$$class__1_Credentials_126, mod_consts.const_str_plain__DEFAULT_TOKEN_LIFETIME_SECS);

if (tmp_tuple_element_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_5 = module_var_accessor_google$auth$impersonated_credentials$_DEFAULT_TOKEN_LIFETIME_SECS(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__DEFAULT_TOKEN_LIFETIME_SECS);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 204;
type_description_2 = "c";
    goto tuple_build_exception_3;
}
        Py_INCREF(tmp_tuple_element_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_3;
    }
}

PyTuple_SET_ITEM(tmp_defaults_2, 2, tmp_tuple_element_5);
tmp_tuple_element_5 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_2, 3, tmp_tuple_element_5);
tmp_tuple_element_5 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_2, 4, tmp_tuple_element_5);
tmp_tuple_element_5 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_2, 5, tmp_tuple_element_5);
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_defaults_2);
goto frame_exception_exit_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;

tmp_dictset_value = MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__2___init__(tstate, tmp_defaults_2);

tmp_res = PyObject_SetItem(locals_google$auth$impersonated_credentials$$$class__1_Credentials_126, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__3__metric_header_for_usage(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$impersonated_credentials$$$class__1_Credentials_126, mod_consts.const_str_plain__metric_header_for_usage, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__4__perform_refresh_token(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$impersonated_credentials$$$class__1_Credentials_126, mod_consts.const_str_plain__perform_refresh_token, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__5__build_trust_boundary_lookup_url(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$impersonated_credentials$$$class__1_Credentials_126, mod_consts.const_str_plain__build_trust_boundary_lookup_url, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__6_sign_bytes(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$impersonated_credentials$$$class__1_Credentials_126, mod_consts.const_str_plain_sign_bytes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
tmp_called_value_2 = PyObject_GetItem(locals_google$auth$impersonated_credentials$$$class__1_Credentials_126, mod_consts.const_str_plain_property);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_1 = MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__7_signer_email(tstate);

frame_frame_google$auth$impersonated_credentials$$$class__1_Credentials_2->m_frame.f_lineno = 403;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 403;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$auth$impersonated_credentials$$$class__1_Credentials_126, mod_consts.const_str_plain_signer_email, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 404;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
tmp_called_value_3 = PyObject_GetItem(locals_google$auth$impersonated_credentials$$$class__1_Credentials_126, mod_consts.const_str_plain_property);

if (tmp_called_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_3 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_2 = MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__8_service_account_email(tstate);

frame_frame_google$auth$impersonated_credentials$$$class__1_Credentials_2->m_frame.f_lineno = 407;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$auth$impersonated_credentials$$$class__1_Credentials_126, mod_consts.const_str_plain_service_account_email, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 408;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
tmp_called_value_4 = PyObject_GetItem(locals_google$auth$impersonated_credentials$$$class__1_Credentials_126, mod_consts.const_str_plain_property);

if (tmp_called_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_4 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_3 = MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__9_signer(tstate);

frame_frame_google$auth$impersonated_credentials$$$class__1_Credentials_2->m_frame.f_lineno = 411;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 411;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$auth$impersonated_credentials$$$class__1_Credentials_126, mod_consts.const_str_plain_signer, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_4;
tmp_called_value_5 = PyObject_GetItem(locals_google$auth$impersonated_credentials$$$class__1_Credentials_126, mod_consts.const_str_plain_property);

if (tmp_called_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_5 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_4 = MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__10_requires_scopes(tstate);

frame_frame_google$auth$impersonated_credentials$$$class__1_Credentials_2->m_frame.f_lineno = 415;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 415;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$auth$impersonated_credentials$$$class__1_Credentials_126, mod_consts.const_str_plain_requires_scopes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_6;
tmp_expression_value_12 = PyObject_GetItem(locals_google$auth$impersonated_credentials$$$class__1_Credentials_126, mod_consts.const_str_plain__helpers);

if (tmp_expression_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_12 = module_var_accessor_google$auth$impersonated_credentials$_helpers(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 419;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_copy_docstring);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_expression_value_13 = PyObject_GetItem(locals_google$auth$impersonated_credentials$$$class__1_Credentials_126, mod_consts.const_str_plain_credentials);

if (tmp_expression_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_13 = module_var_accessor_google$auth$impersonated_credentials$credentials(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_credentials);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_7);

exception_lineno = 419;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_Credentials);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 419;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
frame_frame_google$auth$impersonated_credentials$$$class__1_Credentials_2->m_frame.f_lineno = 419;
tmp_called_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

tmp_args_element_value_6 = MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__11_get_cred_info(tstate);

frame_frame_google$auth$impersonated_credentials$$$class__1_Credentials_2->m_frame.f_lineno = 419;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$auth$impersonated_credentials$$$class__1_Credentials_126, mod_consts.const_str_plain_get_cred_info, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__12__make_copy(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$impersonated_credentials$$$class__1_Credentials_126, mod_consts.const_str_plain__make_copy, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_element_value_8;
tmp_expression_value_14 = PyObject_GetItem(locals_google$auth$impersonated_credentials$$$class__1_Credentials_126, mod_consts.const_str_plain__helpers);

if (tmp_expression_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_14 = module_var_accessor_google$auth$impersonated_credentials$_helpers(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 443;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_copy_docstring);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_expression_value_15 = PyObject_GetItem(locals_google$auth$impersonated_credentials$$$class__1_Credentials_126, mod_consts.const_str_plain_credentials);

if (tmp_expression_value_15 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_15 = module_var_accessor_google$auth$impersonated_credentials$credentials(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_credentials);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_9);

exception_lineno = 443;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_15);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_CredentialsWithTrustBoundary);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 443;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
frame_frame_google$auth$impersonated_credentials$$$class__1_Credentials_2->m_frame.f_lineno = 443;
tmp_called_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

tmp_args_element_value_8 = MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__13_with_trust_boundary(tstate);

frame_frame_google$auth$impersonated_credentials$$$class__1_Credentials_2->m_frame.f_lineno = 443;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$auth$impersonated_credentials$$$class__1_Credentials_126, mod_consts.const_str_plain_with_trust_boundary, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_17;
PyObject *tmp_args_element_value_10;
tmp_expression_value_16 = PyObject_GetItem(locals_google$auth$impersonated_credentials$$$class__1_Credentials_126, mod_consts.const_str_plain__helpers);

if (tmp_expression_value_16 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_16 = module_var_accessor_google$auth$impersonated_credentials$_helpers(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 449;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_16);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_copy_docstring);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 449;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_expression_value_17 = PyObject_GetItem(locals_google$auth$impersonated_credentials$$$class__1_Credentials_126, mod_consts.const_str_plain_credentials);

if (tmp_expression_value_17 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_17 = module_var_accessor_google$auth$impersonated_credentials$credentials(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_credentials);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_11);

exception_lineno = 449;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_17);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_CredentialsWithQuotaProject);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);

exception_lineno = 449;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
frame_frame_google$auth$impersonated_credentials$$$class__1_Credentials_2->m_frame.f_lineno = 449;
tmp_called_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 449;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

tmp_args_element_value_10 = MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__14_with_quota_project(tstate);

frame_frame_google$auth$impersonated_credentials$$$class__1_Credentials_2->m_frame.f_lineno = 449;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 449;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$auth$impersonated_credentials$$$class__1_Credentials_126, mod_consts.const_str_plain_with_quota_project, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 450;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_12;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_18;
PyObject *tmp_args_element_value_11;
PyObject *tmp_expression_value_19;
PyObject *tmp_args_element_value_12;
PyObject *tmp_defaults_3;
tmp_expression_value_18 = PyObject_GetItem(locals_google$auth$impersonated_credentials$$$class__1_Credentials_126, mod_consts.const_str_plain__helpers);

if (tmp_expression_value_18 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_18 = module_var_accessor_google$auth$impersonated_credentials$_helpers(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 455;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_18);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_copy_docstring);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_expression_value_19 = PyObject_GetItem(locals_google$auth$impersonated_credentials$$$class__1_Credentials_126, mod_consts.const_str_plain_credentials);

if (tmp_expression_value_19 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_19 = module_var_accessor_google$auth$impersonated_credentials$credentials(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_credentials);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_13);

exception_lineno = 455;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_19);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_Scoped);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_13);

exception_lineno = 455;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
frame_frame_google$auth$impersonated_credentials$$$class__1_Credentials_2->m_frame.f_lineno = 455;
tmp_called_value_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_defaults_3 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_3);

tmp_args_element_value_12 = MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__15_with_scopes(tstate, tmp_defaults_3);

frame_frame_google$auth$impersonated_credentials$$$class__1_Credentials_2->m_frame.f_lineno = 455;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$auth$impersonated_credentials$$$class__1_Credentials_126, mod_consts.const_str_plain_with_scopes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 456;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_13;
PyObject *tmp_defaults_4;
tmp_called_value_14 = PyObject_GetItem(locals_google$auth$impersonated_credentials$$$class__1_Credentials_126, const_str_plain_classmethod);

if (tmp_called_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_14 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_defaults_4 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_4);

tmp_args_element_value_13 = MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__16_from_impersonated_service_account_info(tstate, tmp_defaults_4);

frame_frame_google$auth$impersonated_credentials$$$class__1_Credentials_2->m_frame.f_lineno = 461;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 461;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$auth$impersonated_credentials$$$class__1_Credentials_126, mod_consts.const_str_plain_from_impersonated_service_account_info, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 462;
type_description_2 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$impersonated_credentials$$$class__1_Credentials_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$impersonated_credentials$$$class__1_Credentials_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$impersonated_credentials$$$class__1_Credentials_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$impersonated_credentials$$$class__1_Credentials_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_google$auth$impersonated_credentials$$$class__1_Credentials_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_3;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_f580526e7135df046d7ada2bc66f3e2d_tuple;
tmp_res = PyObject_SetItem(locals_google$auth$impersonated_credentials$$$class__1_Credentials_126, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

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


exception_lineno = 126;

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
tmp_res = PyObject_SetItem(locals_google$auth$impersonated_credentials$$$class__1_Credentials_126, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_3;
}
branch_no_3:;
{
PyObject *tmp_assign_source_32;
PyObject *tmp_called_value_15;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_15 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_6 = mod_consts.const_str_plain_Credentials;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = locals_google$auth$impersonated_credentials$$$class__1_Credentials_126;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_google$auth$impersonated_credentials->m_frame.f_lineno = 126;
tmp_assign_source_32 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_3;
}
assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
Nuitka_Cell_SET(outline_0_var___class__, tmp_assign_source_32);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
tmp_assign_source_31 = Nuitka_Cell_GET(outline_0_var___class__);
Py_INCREF(tmp_assign_source_31);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_google$auth$impersonated_credentials$$$class__1_Credentials_126);
locals_google$auth$impersonated_credentials$$$class__1_Credentials_126 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$impersonated_credentials$$$class__1_Credentials_126);
locals_google$auth$impersonated_credentials$$$class__1_Credentials_126 = NULL;
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
exception_lineno = 126;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_Credentials, tmp_assign_source_31);
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
{
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_33;
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_20;
tmp_expression_value_20 = module_var_accessor_google$auth$impersonated_credentials$credentials(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_credentials);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 542;

    goto try_except_handler_4;
}
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_CredentialsWithQuotaProject);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;

    goto try_except_handler_4;
}
tmp_assign_source_33 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_33, 0, tmp_tuple_element_7);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_33;
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_34 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_34;
}
{
PyObject *tmp_assign_source_35;
tmp_assign_source_35 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_35;
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;

    goto try_except_handler_4;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_21 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_21, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;

    goto try_except_handler_4;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;

    goto try_except_handler_4;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_36 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_36;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_22 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_22, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;

    goto try_except_handler_4;
}
tmp_condition_result_6 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_37;
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_23;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_23 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;

    goto try_except_handler_4;
}
tmp_tuple_element_8 = mod_consts.const_str_plain_IDTokenCredentials;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_google$auth$impersonated_credentials->m_frame.f_lineno = 542;
tmp_assign_source_37 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_37;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_24;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_24 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_24, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;

    goto try_except_handler_4;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
assert(!(tmp_res == -1));
tmp_condition_result_7 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_9;
PyObject *tmp_expression_value_25;
PyObject *tmp_name_value_15;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_25 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_15 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_9 = BUILTIN_GETATTR(tstate, tmp_expression_value_25, tmp_name_value_15, tmp_default_value_2);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;

    goto try_except_handler_4;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_26;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_26 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_26 == NULL));
tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_26);
Py_DECREF(tmp_expression_value_26);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_9);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;

    goto try_except_handler_4;
}
frame_frame_google$auth$impersonated_credentials->m_frame.f_lineno = 542;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 542;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_4;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_38;
tmp_assign_source_38 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_38;
}
branch_end_4:;
{
PyObject *tmp_assign_source_39;
outline_1_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_google$auth$impersonated_credentials$$$class__2_IDTokenCredentials_542 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_dc07402eb604b3efdc1fb10895354bdf;
tmp_res = PyObject_SetItem(locals_google$auth$impersonated_credentials$$$class__2_IDTokenCredentials_542, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_digest_2b5ecd8f4c3a38a0b15d35cad1820333;
tmp_res = PyObject_SetItem(locals_google$auth$impersonated_credentials$$$class__2_IDTokenCredentials_542, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_plain_IDTokenCredentials;
tmp_res = PyObject_SetItem(locals_google$auth$impersonated_credentials$$$class__2_IDTokenCredentials_542, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_int_pos_542;
tmp_res = PyObject_SetItem(locals_google$auth$impersonated_credentials$$$class__2_IDTokenCredentials_542, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;

    goto try_except_handler_6;
}
frame_frame_google$auth$impersonated_credentials$$$class__2_IDTokenCredentials_3 = MAKE_CLASS_FRAME(tstate, code_objects_b7d2e4cff753c14e4a01d2d6244b2f0b, module_google$auth$impersonated_credentials, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$impersonated_credentials$$$class__2_IDTokenCredentials_3);
assert(Py_REFCNT(frame_frame_google$auth$impersonated_credentials$$$class__2_IDTokenCredentials_3) == 2);

// Framed code:
{
PyObject *tmp_defaults_5;
tmp_defaults_5 = mod_consts.const_tuple_none_false_none_tuple;
Py_INCREF(tmp_defaults_5);

tmp_dictset_value = MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__17___init__(tstate, tmp_defaults_5);

tmp_res = PyObject_SetItem(locals_google$auth$impersonated_credentials$$$class__2_IDTokenCredentials_542, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 545;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_defaults_6;
tmp_defaults_6 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_6);

tmp_dictset_value = MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__18_from_credentials(tstate, tmp_defaults_6);

tmp_res = PyObject_SetItem(locals_google$auth$impersonated_credentials$$$class__2_IDTokenCredentials_542, mod_consts.const_str_plain_from_credentials, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 572;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__19_with_target_audience(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$impersonated_credentials$$$class__2_IDTokenCredentials_542, mod_consts.const_str_plain_with_target_audience, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 580;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__20_with_include_email(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$impersonated_credentials$$$class__2_IDTokenCredentials_542, mod_consts.const_str_plain_with_include_email, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 588;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
{
PyObject *tmp_called_value_17;
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_27;
PyObject *tmp_args_element_value_14;
PyObject *tmp_expression_value_28;
PyObject *tmp_args_element_value_15;
tmp_expression_value_27 = PyObject_GetItem(locals_google$auth$impersonated_credentials$$$class__2_IDTokenCredentials_542, mod_consts.const_str_plain__helpers);

if (tmp_expression_value_27 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_27 = module_var_accessor_google$auth$impersonated_credentials$_helpers(tstate);
if (unlikely(tmp_expression_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 596;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_27);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_copy_docstring);
CHECK_OBJECT(tmp_expression_value_27);
Py_DECREF(tmp_expression_value_27);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 596;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_expression_value_28 = PyObject_GetItem(locals_google$auth$impersonated_credentials$$$class__2_IDTokenCredentials_542, mod_consts.const_str_plain_credentials);

if (tmp_expression_value_28 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_28 = module_var_accessor_google$auth$impersonated_credentials$credentials(tstate);
if (unlikely(tmp_expression_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_credentials);
}

if (tmp_expression_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_18);

exception_lineno = 596;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_28);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_CredentialsWithQuotaProject);
CHECK_OBJECT(tmp_expression_value_28);
Py_DECREF(tmp_expression_value_28);
if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_18);

exception_lineno = 596;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
frame_frame_google$auth$impersonated_credentials$$$class__2_IDTokenCredentials_3->m_frame.f_lineno = 596;
tmp_called_value_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 596;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

tmp_args_element_value_15 = MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__21_with_quota_project(tstate);

frame_frame_google$auth$impersonated_credentials$$$class__2_IDTokenCredentials_3->m_frame.f_lineno = 596;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_15);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 596;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_google$auth$impersonated_credentials$$$class__2_IDTokenCredentials_542, mod_consts.const_str_plain_with_quota_project, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 597;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_19;
PyObject *tmp_called_value_20;
PyObject *tmp_expression_value_29;
PyObject *tmp_args_element_value_16;
PyObject *tmp_expression_value_30;
PyObject *tmp_args_element_value_17;
tmp_expression_value_29 = PyObject_GetItem(locals_google$auth$impersonated_credentials$$$class__2_IDTokenCredentials_542, mod_consts.const_str_plain__helpers);

if (tmp_expression_value_29 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_29 = module_var_accessor_google$auth$impersonated_credentials$_helpers(tstate);
if (unlikely(tmp_expression_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 605;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_29);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_copy_docstring);
CHECK_OBJECT(tmp_expression_value_29);
Py_DECREF(tmp_expression_value_29);
if (tmp_called_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 605;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_expression_value_30 = PyObject_GetItem(locals_google$auth$impersonated_credentials$$$class__2_IDTokenCredentials_542, mod_consts.const_str_plain_credentials);

if (tmp_expression_value_30 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_30 = module_var_accessor_google$auth$impersonated_credentials$credentials(tstate);
if (unlikely(tmp_expression_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_credentials);
}

if (tmp_expression_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_20);

exception_lineno = 605;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_30);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_Credentials);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_args_element_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_20);

exception_lineno = 605;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
frame_frame_google$auth$impersonated_credentials$$$class__2_IDTokenCredentials_3->m_frame.f_lineno = 605;
tmp_called_value_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_16);
CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_called_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 605;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

tmp_args_element_value_17 = MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__22_refresh(tstate);

frame_frame_google$auth$impersonated_credentials$$$class__2_IDTokenCredentials_3->m_frame.f_lineno = 605;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_17);
CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 605;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_google$auth$impersonated_credentials$$$class__2_IDTokenCredentials_542, mod_consts.const_str_plain_refresh, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 606;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$impersonated_credentials$$$class__2_IDTokenCredentials_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$impersonated_credentials$$$class__2_IDTokenCredentials_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$impersonated_credentials$$$class__2_IDTokenCredentials_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$impersonated_credentials$$$class__2_IDTokenCredentials_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_google$auth$impersonated_credentials$$$class__2_IDTokenCredentials_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_6;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_9a8199771944c5a790b7280164c1fc7c_tuple;
tmp_res = PyObject_SetItem(locals_google$auth$impersonated_credentials$$$class__2_IDTokenCredentials_542, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;

    goto try_except_handler_6;
}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_2__bases_orig;
tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;

    goto try_except_handler_6;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_2__bases_orig;
tmp_res = PyObject_SetItem(locals_google$auth$impersonated_credentials$$$class__2_IDTokenCredentials_542, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;

    goto try_except_handler_6;
}
branch_no_6:;
{
PyObject *tmp_assign_source_40;
PyObject *tmp_called_value_21;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_21 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_10 = mod_consts.const_str_plain_IDTokenCredentials;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_10 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_10);
tmp_tuple_element_10 = locals_google$auth$impersonated_credentials$$$class__2_IDTokenCredentials_542;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_google$auth$impersonated_credentials->m_frame.f_lineno = 542;
tmp_assign_source_40 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;

    goto try_except_handler_6;
}
assert(Nuitka_Cell_GET(outline_1_var___class__) == NULL);
Nuitka_Cell_SET(outline_1_var___class__, tmp_assign_source_40);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_1_var___class__));
tmp_assign_source_39 = Nuitka_Cell_GET(outline_1_var___class__);
Py_INCREF(tmp_assign_source_39);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_google$auth$impersonated_credentials$$$class__2_IDTokenCredentials_542);
locals_google$auth$impersonated_credentials$$$class__2_IDTokenCredentials_542 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$impersonated_credentials$$$class__2_IDTokenCredentials_542);
locals_google$auth$impersonated_credentials$$$class__2_IDTokenCredentials_542 = NULL;
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
exception_lineno = 542;
goto try_except_handler_4;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain_IDTokenCredentials, tmp_assign_source_39);
}
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_2__bases_orig);
tmp_class_container$class_creation_2__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__bases);
tmp_class_container$class_creation_2__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__metaclass);
tmp_class_container$class_creation_2__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__prepared);
tmp_class_container$class_creation_2__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
Py_DECREF(tmp_class_container$class_creation_2__bases_orig);
tmp_class_container$class_creation_2__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
Py_DECREF(tmp_class_container$class_creation_2__bases);
tmp_class_container$class_creation_2__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
Py_DECREF(tmp_class_container$class_creation_2__metaclass);
tmp_class_container$class_creation_2__metaclass = NULL;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$impersonated_credentials, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$impersonated_credentials->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$impersonated_credentials, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_google$auth$impersonated_credentials);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_3:;
{
PyObject *tmp_assign_source_41;
PyObject *tmp_defaults_7;
PyObject *tmp_tuple_element_11;
tmp_tuple_element_11 = MAKE_LIST_EMPTY(tstate, 0);
tmp_defaults_7 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_defaults_7, 0, tmp_tuple_element_11);

tmp_assign_source_41 = MAKE_FUNCTION_google$auth$impersonated_credentials$$$function__23__sign_jwt_request(tstate, tmp_defaults_7);

UPDATE_STRING_DICT1(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)mod_consts.const_str_plain__sign_jwt_request, tmp_assign_source_41);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("google$auth$impersonated_credentials", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth.impersonated_credentials" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_google$auth$impersonated_credentials);
    return module_google$auth$impersonated_credentials;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$impersonated_credentials, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("google$auth$impersonated_credentials", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

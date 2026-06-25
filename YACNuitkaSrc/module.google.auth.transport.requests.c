/* Generated code for Python module 'google$auth$transport$requests'
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



/* The "module_google$auth$transport$requests" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_google$auth$transport$requests;
PyDictObject *moduledict_google$auth$transport$requests;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain__response;
PyObject *const_str_plain_status_code;
PyObject *const_str_plain_headers;
PyObject *const_str_plain_content;
PyObject *const_str_plain__timeout;
PyObject *const_str_plain_remaining_timeout;
PyObject *const_str_plain__timeout_error_type;
PyObject *const_str_plain_time;
PyObject *const_str_plain__start;
PyObject *const_str_plain_numbers;
PyObject *const_str_plain_Number;
PyObject *const_str_plain_min;
PyObject *const_str_plain_elapsed;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_fac5857ef3ce7c54e35276e851e63e89;
PyObject *const_str_plain_requests;
PyObject *const_str_plain_Session;
PyObject *const_str_plain_session;
PyObject *const_str_plain__helpers;
PyObject *const_str_plain_request_log;
PyObject *const_str_plain__LOGGER;
PyObject *const_str_plain_request;
PyObject *const_str_plain_data;
PyObject *const_str_plain_timeout;
PyObject *const_str_plain_response_log;
PyObject *const_str_plain__Response;
PyObject *const_str_plain_exceptions;
PyObject *const_str_plain_RequestException;
PyObject *const_str_plain_TransportError;
PyObject *const_str_digest_39fb1ed0af2daaa51753479677e1a20d;
PyObject *const_str_plain_certifi;
PyObject *const_str_plain_OpenSSL;
PyObject *const_tuple_str_plain_crypto_tuple;
PyObject *const_str_plain_crypto;
PyObject *const_str_digest_9b140d54e682de757186c632bf3beb69;
PyObject *const_str_plain_contrib;
PyObject *const_str_plain_pyopenssl;
PyObject *const_str_plain_inject_into_urllib3;
PyObject *const_str_plain_load_privatekey;
PyObject *const_str_plain_FILETYPE_PEM;
PyObject *const_str_plain_load_certificate;
PyObject *const_str_plain_create_urllib3_context;
PyObject *const_str_plain_load_verify_locations;
PyObject *const_str_plain_where;
PyObject *const_tuple_str_plain_cafile_tuple;
PyObject *const_str_plain__ctx;
PyObject *const_str_plain_use_certificate;
PyObject *const_str_plain_use_privatekey;
PyObject *const_str_plain__ctx_poolmanager;
PyObject *const_str_plain__ctx_proxymanager;
PyObject *const_str_plain__MutualTlsAdapter;
PyObject *const_str_plain_ssl_context;
PyObject *const_str_plain_init_poolmanager;
PyObject *const_str_plain_proxy_manager_for;
PyObject *const_str_digest_587455d82fd83f874416fce4cf44fc5a;
PyObject *const_tuple_str_plain__custom_tls_signer_tuple;
PyObject *const_str_plain__custom_tls_signer;
PyObject *const_str_plain_CustomTlsSigner;
PyObject *const_str_plain_signer;
PyObject *const_str_plain_load_libraries;
PyObject *const_str_plain_attach_to_ssl_context;
PyObject *const_str_plain__MutualTlsOffloadAdapter;
PyObject *const_str_plain_AuthorizedSession;
PyObject *const_str_plain_credentials;
PyObject *const_str_plain__refresh_status_codes;
PyObject *const_str_plain__max_refresh_attempts;
PyObject *const_str_plain__refresh_timeout;
PyObject *const_str_plain__is_mtls;
PyObject *const_str_plain__default_host;
PyObject *const_str_plain__auth_request_session;
PyObject *const_str_plain_adapters;
PyObject *const_str_plain_HTTPAdapter;
PyObject *const_tuple_int_pos_3_tuple;
PyObject *const_tuple_str_plain_max_retries_tuple;
PyObject *const_str_plain_mount;
PyObject *const_str_digest_504b77692b694460b8c25198a52c83ba;
PyObject *const_str_plain_Request;
PyObject *const_str_plain__auth_request;
PyObject *const_str_plain_service_account;
PyObject *const_str_plain_Credentials;
PyObject *const_str_plain__create_self_signed_jwt;
PyObject *const_str_digest_1604ede801f98aad5f78715432e3556f;
PyObject *const_str_plain_google;
PyObject *const_str_plain_auth;
PyObject *const_str_plain_transport;
PyObject *const_str_plain__mtls_helper;
PyObject *const_str_plain_check_use_client_cert;
PyObject *const_str_plain_MutualTLSChannelError;
PyObject *const_str_plain_get_client_cert_and_key;
PyObject *const_str_plain__cached_cert;
PyObject *const_str_plain_ClientCertError;
PyObject *const_str_plain_Error;
PyObject *const_str_digest_de049669be1242f7a1b8104d894d77d2;
PyObject *const_str_plain__credential_refresh_attempt;
PyObject *const_str_plain_copy;
PyObject *const_str_plain_partial;
PyObject *const_tuple_str_plain_timeout_tuple;
PyObject *const_str_plain_TimeoutGuard;
PyObject *const_str_plain_before_request;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_response;
PyObject *const_str_plain_http_client;
PyObject *const_str_plain_UNAUTHORIZED;
PyObject *const_str_plain_is_mtls;
PyObject *const_str_digest_9c6282b2dbf04df40c6c5a284a6ccbac;
PyObject *const_str_plain_info;
PyObject *const_tuple_str_digest_11b79211eb78aab604f32970bc12fdd8_tuple;
PyObject *const_str_plain_configure_mtls_channel;
PyObject *const_str_angle_lambda;
PyObject *const_str_digest_a2ee3501367ccdf631713a55afee2a07;
PyObject *const_str_plain_error;
PyObject *const_str_digest_a0b47a64c5473ddd47f1e4be7a79b5c9;
PyObject *const_tuple_str_digest_186c299e8be69d55a48248e8124f43dd_tuple;
PyObject *const_tuple_str_digest_03a12a27798cdd7cbf8dec2509a95d87_tuple;
PyObject *const_str_digest_d9e81f8c6298d7185f9559e289c32471;
PyObject *const_str_plain_refresh;
PyObject *const_str_plain_max_allowed_time;
PyObject *const_str_digest_f8784072d2c099b42e8d0b59da424eda;
PyObject *const_str_plain_call_cert_bytes;
PyObject *const_str_plain_call_key_bytes;
PyObject *const_str_digest_d27d9a89a8704f1a6327f4f14872ab0e;
PyObject *const_str_digest_1ad328c754f17066d36dd61d311e4502;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_absolute_import;
PyObject *const_str_plain_functools;
PyObject *const_str_digest_096ca139beaf8ac5201071e235ad66b6;
PyObject *const_str_plain_client;
PyObject *const_str_plain_logging;
PyObject *const_str_plain_Optional;
PyObject *const_str_plain_caught_exc;
PyObject *const_str_digest_6a3abff5aeb8725bc9b3fa019c4b4baf;
PyObject *const_str_digest_f564af29e8441da03b9e6bf26a88cc81;
PyObject *const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
PyObject *const_str_digest_3f9c79ac9778c20d3cb015a396023b31;
PyObject *const_tuple_str_plain_create_urllib3_context_tuple;
PyObject *const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
PyObject *const_tuple_str_plain__helpers_tuple;
PyObject *const_tuple_str_plain_exceptions_tuple;
PyObject *const_tuple_str_plain_transport_tuple;
PyObject *const_tuple_str_plain__mtls_helper_tuple;
PyObject *const_str_digest_76c4c07798963223889b12fc60a097b0;
PyObject *const_str_digest_31b40dbd93ddd4efa91cab6083c18890;
PyObject *const_tuple_str_plain_service_account_tuple;
PyObject *const_str_plain_getLogger;
PyObject *const_tuple_str_digest_eda478fe391780f02c579185f1943916_tuple;
PyObject *const_int_pos_120;
PyObject *const_str_plain__DEFAULT_TIMEOUT;
PyObject *const_str_plain_Response;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_eda478fe391780f02c579185f1943916;
PyObject *const_str_digest_5604f08d73ac817de9782c5440afc1a0;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_50;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_37f61de23a604569296c1ced849aa096;
PyObject *const_str_plain_property;
PyObject *const_str_plain_status;
PyObject *const_str_digest_f8919cf16f77680e5ef4d47172958126;
PyObject *const_str_digest_64ed33fe6cd71fb5787fb240b91400d4;
PyObject *const_str_digest_e493e5be5d6c09ef6e2abf61e5c54230;
PyObject *const_tuple_str_plain__response_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_tuple_type_object_tuple;
PyObject *const_str_digest_0c39fc4a7184aaab11f69cd2f1745135;
PyObject *const_int_pos_73;
PyObject *const_str_plain_Timeout;
PyObject *const_str_digest_f24d846e8f869d3ded65d6377d3cf237;
PyObject *const_str_digest_183d80e5aa489566b52b7f983ad28927;
PyObject *const_str_digest_1ad12366af63d0360d25b4d42b644e31;
PyObject *const_tuple_1580d080e18b5f84e1550f561725600a_tuple;
PyObject *const_str_digest_c9bcb9faf96994cc17d4f591b8af3c65;
PyObject *const_int_pos_117;
PyObject *const_tuple_none_tuple;
PyObject *const_str_plain_return;
PyObject *const_str_digest_45e22ae6dbd065d35ef185f04e7a930e;
PyObject *const_str_plain___del__;
PyObject *const_str_digest_a2d20d50127799e684d60fc6e83fbc4a;
PyObject *const_str_plain_GET;
PyObject *const_str_plain___call__;
PyObject *const_str_digest_1ee2d45b9395e8e5ddd9a4c4168a1109;
PyObject *const_tuple_str_plain_session_tuple;
PyObject *const_str_digest_5d86f98a082e24787eea10b0dd0570bf;
PyObject *const_int_pos_198;
PyObject *const_str_digest_ee8e294a8555e81d2151805220a70043;
PyObject *const_str_digest_5696e8f664fbc03ab59ce337063e5b63;
PyObject *const_str_digest_4f09b4e47b8164f0bc69aa9d6c89cdc9;
PyObject *const_tuple_str_plain__ctx_poolmanager_str_plain__ctx_proxymanager_tuple;
PyObject *const_str_digest_e28d3bf98c9697e113fc2920e7b4f432;
PyObject *const_int_pos_244;
PyObject *const_str_digest_57c664ad59e78e17ded1d9bf4db4ca0a;
PyObject *const_str_digest_b24c2e039d5ae677ea1d7395aa085f84;
PyObject *const_str_digest_0be807be6288f775f0a034ae454e78c3;
PyObject *const_tuple_a78fb14bdde6fae80af4ea8d2b59501e_tuple;
PyObject *const_str_digest_5f248caea50fd25bc0595cb39708b596;
PyObject *const_int_pos_298;
PyObject *const_str_plain_DEFAULT_REFRESH_STATUS_CODES;
PyObject *const_str_plain_DEFAULT_MAX_REFRESH_ATTEMPTS;
PyObject *const_str_digest_aab1754e68bd2e4376ed8a2b64feeb81;
PyObject *const_str_digest_5e62e54d96555aab19e1dbc0a82c53ba;
PyObject *const_str_digest_6c8908d3ccfd787a2d4c6acb893ef457;
PyObject *const_str_digest_3a87ff44375e54ca3d17fc0a54a01719;
PyObject *const_str_digest_e40eb6227725bab70cf3d008e19b95c3;
PyObject *const_tuple_1f9cbf0c238458c2c9dfaa53c8f9a6c2_tuple;
PyObject *const_str_digest_f5cce9187e5be05075ab852d1c0caa9d;
PyObject *const_tuple_2c9abf9da1397bff7d936689ecae9b01_tuple;
PyObject *const_tuple_str_plain_call_cert_bytes_str_plain_call_key_bytes_tuple;
PyObject *const_str_digest_6362c1ec7cd5f157715a41246aebfd90;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_f1c473c5a3d553a3d73d75a8dff3b6f2_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_21f746c9f8e0862127204033108387e6_tuple;
PyObject *const_tuple_7adacd8cf3f433a32d7f47e92edb1b8a_tuple;
PyObject *const_tuple_str_plain_self_str_plain_session_tuple;
PyObject *const_tuple_a587d42b6fda16d3ca3a174c4a1462d8_tuple;
PyObject *const_tuple_0cc295511f0ed441d3902a1f39fa7571_tuple;
PyObject *const_tuple_8be747722fbf81df31d71da543cabb6b_tuple;
PyObject *const_tuple_str_plain_self_str_plain_response_tuple;
PyObject *const_tuple_str_plain_self_str_plain___class___tuple;
PyObject *const_tuple_a20dcbd2ac4116f4f18ad90e93a0a679_tuple;
PyObject *const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple;
PyObject *const_tuple_d5487fd1f51c6cb477baead806735d7e_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[226];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("google.auth.transport.requests"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain__response);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_status_code);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_headers);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_content);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain__timeout);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_remaining_timeout);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain__timeout_error_type);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_time);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain__start);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_numbers);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_Number);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_min);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_elapsed);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_fac5857ef3ce7c54e35276e851e63e89);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_requests);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_Session);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_session);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain__helpers);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_request_log);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain__LOGGER);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_request);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_data);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_timeout);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_log);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain__Response);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_RequestException);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_TransportError);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_39fb1ed0af2daaa51753479677e1a20d);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_certifi);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_OpenSSL);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_crypto_tuple);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_crypto);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_9b140d54e682de757186c632bf3beb69);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_contrib);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_pyopenssl);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_inject_into_urllib3);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_privatekey);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_FILETYPE_PEM);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_certificate);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_urllib3_context);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_verify_locations);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_where);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cafile_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain__ctx);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_use_certificate);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_use_privatekey);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain__ctx_poolmanager);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain__ctx_proxymanager);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain__MutualTlsAdapter);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_ssl_context);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_init_poolmanager);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_proxy_manager_for);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_587455d82fd83f874416fce4cf44fc5a);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__custom_tls_signer_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain__custom_tls_signer);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_CustomTlsSigner);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_signer);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_libraries);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_attach_to_ssl_context);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain__MutualTlsOffloadAdapter);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_AuthorizedSession);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_credentials);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain__refresh_status_codes);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain__max_refresh_attempts);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain__refresh_timeout);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain__is_mtls);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain__default_host);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain__auth_request_session);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_adapters);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPAdapter);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_3_tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_max_retries_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_mount);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_504b77692b694460b8c25198a52c83ba);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_Request);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain__auth_request);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_service_account);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_Credentials);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain__create_self_signed_jwt);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_1604ede801f98aad5f78715432e3556f);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_google);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_auth);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_transport);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain__mtls_helper);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_check_use_client_cert);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_MutualTLSChannelError);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_client_cert_and_key);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain__cached_cert);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_ClientCertError);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_Error);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_de049669be1242f7a1b8104d894d77d2);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain__credential_refresh_attempt);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_partial);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_timeout_tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_TimeoutGuard);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_before_request);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_response);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_http_client);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_UNAUTHORIZED);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_mtls);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_digest_9c6282b2dbf04df40c6c5a284a6ccbac);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_info);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_11b79211eb78aab604f32970bc12fdd8_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_configure_mtls_channel);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_angle_lambda);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_a2ee3501367ccdf631713a55afee2a07);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_error);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_digest_a0b47a64c5473ddd47f1e4be7a79b5c9);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_186c299e8be69d55a48248e8124f43dd_tuple);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_03a12a27798cdd7cbf8dec2509a95d87_tuple);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_d9e81f8c6298d7185f9559e289c32471);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_refresh);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_allowed_time);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_f8784072d2c099b42e8d0b59da424eda);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_call_cert_bytes);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_call_key_bytes);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_digest_d27d9a89a8704f1a6327f4f14872ab0e);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_digest_1ad328c754f17066d36dd61d311e4502);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_absolute_import);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_functools);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_digest_096ca139beaf8ac5201071e235ad66b6);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_client);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_logging);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_Optional);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_caught_exc);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_6a3abff5aeb8725bc9b3fa019c4b4baf);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_digest_f564af29e8441da03b9e6bf26a88cc81);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_digest_3f9c79ac9778c20d3cb015a396023b31);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_create_urllib3_context_tuple);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__helpers_tuple);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_transport_tuple);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__mtls_helper_tuple);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_digest_76c4c07798963223889b12fc60a097b0);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_digest_31b40dbd93ddd4efa91cab6083c18890);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_service_account_tuple);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_eda478fe391780f02c579185f1943916_tuple);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_int_pos_120);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain__DEFAULT_TIMEOUT);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_Response);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_digest_eda478fe391780f02c579185f1943916);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_digest_5604f08d73ac817de9782c5440afc1a0);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_int_pos_50);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_digest_37f61de23a604569296c1ced849aa096);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain_status);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_digest_f8919cf16f77680e5ef4d47172958126);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_digest_64ed33fe6cd71fb5787fb240b91400d4);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_digest_e493e5be5d6c09ef6e2abf61e5c54230);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__response_tuple);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_tuple_type_object_tuple);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_digest_0c39fc4a7184aaab11f69cd2f1745135);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_int_pos_73);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain_Timeout);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_digest_f24d846e8f869d3ded65d6377d3cf237);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_digest_183d80e5aa489566b52b7f983ad28927);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_digest_1ad12366af63d0360d25b4d42b644e31);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_tuple_1580d080e18b5f84e1550f561725600a_tuple);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_digest_c9bcb9faf96994cc17d4f591b8af3c65);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_int_pos_117);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_digest_45e22ae6dbd065d35ef185f04e7a930e);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_plain___del__);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_digest_a2d20d50127799e684d60fc6e83fbc4a);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_plain_GET);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_plain___call__);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_digest_1ee2d45b9395e8e5ddd9a4c4168a1109);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_session_tuple);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_digest_5d86f98a082e24787eea10b0dd0570bf);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_int_pos_198);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_digest_ee8e294a8555e81d2151805220a70043);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_digest_5696e8f664fbc03ab59ce337063e5b63);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_digest_4f09b4e47b8164f0bc69aa9d6c89cdc9);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__ctx_poolmanager_str_plain__ctx_proxymanager_tuple);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_digest_e28d3bf98c9697e113fc2920e7b4f432);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_int_pos_244);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_digest_57c664ad59e78e17ded1d9bf4db4ca0a);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_digest_b24c2e039d5ae677ea1d7395aa085f84);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_digest_0be807be6288f775f0a034ae454e78c3);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_tuple_a78fb14bdde6fae80af4ea8d2b59501e_tuple);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_digest_5f248caea50fd25bc0595cb39708b596);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_int_pos_298);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_REFRESH_STATUS_CODES);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_MAX_REFRESH_ATTEMPTS);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_digest_aab1754e68bd2e4376ed8a2b64feeb81);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_str_digest_5e62e54d96555aab19e1dbc0a82c53ba);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_digest_6c8908d3ccfd787a2d4c6acb893ef457);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_digest_3a87ff44375e54ca3d17fc0a54a01719);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_str_digest_e40eb6227725bab70cf3d008e19b95c3);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_tuple_1f9cbf0c238458c2c9dfaa53c8f9a6c2_tuple);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_str_digest_f5cce9187e5be05075ab852d1c0caa9d);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_tuple_2c9abf9da1397bff7d936689ecae9b01_tuple);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_call_cert_bytes_str_plain_call_key_bytes_tuple);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_str_digest_6362c1ec7cd5f157715a41246aebfd90);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_tuple_f1c473c5a3d553a3d73d75a8dff3b6f2_tuple);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_tuple_21f746c9f8e0862127204033108387e6_tuple);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_tuple_7adacd8cf3f433a32d7f47e92edb1b8a_tuple);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_session_tuple);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_tuple_a587d42b6fda16d3ca3a174c4a1462d8_tuple);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_tuple_0cc295511f0ed441d3902a1f39fa7571_tuple);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_tuple_8be747722fbf81df31d71da543cabb6b_tuple);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_response_tuple);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_tuple_a20dcbd2ac4116f4f18ad90e93a0a679_tuple);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_tuple_d5487fd1f51c6cb477baead806735d7e_tuple);
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
void checkModuleConstants_google$auth$transport$requests(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain__response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__response);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_status_code));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_status_code);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_headers);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_content));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_content);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain__timeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__timeout);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_remaining_timeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_remaining_timeout);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain__timeout_error_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__timeout_error_type);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_time));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_time);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain__start));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__start);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_numbers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_numbers);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_Number));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Number);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_min));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_min);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_elapsed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_elapsed);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_fac5857ef3ce7c54e35276e851e63e89));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fac5857ef3ce7c54e35276e851e63e89);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_requests));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_requests);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_Session));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Session);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_session));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_session);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain__helpers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__helpers);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_request_log));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_request_log);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain__LOGGER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__LOGGER);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_request);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_data);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_timeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_timeout);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_log));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_log);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain__Response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__Response);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_RequestException));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RequestException);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_TransportError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TransportError);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_39fb1ed0af2daaa51753479677e1a20d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_39fb1ed0af2daaa51753479677e1a20d);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_certifi));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_certifi);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_OpenSSL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OpenSSL);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_crypto_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_crypto_tuple);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_crypto));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_crypto);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_9b140d54e682de757186c632bf3beb69));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9b140d54e682de757186c632bf3beb69);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_contrib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contrib);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_pyopenssl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pyopenssl);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_inject_into_urllib3));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_inject_into_urllib3);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_privatekey));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_load_privatekey);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_FILETYPE_PEM));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FILETYPE_PEM);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_certificate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_load_certificate);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_urllib3_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_urllib3_context);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_verify_locations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_load_verify_locations);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_where));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_where);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cafile_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cafile_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain__ctx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ctx);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_use_certificate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_use_certificate);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_use_privatekey));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_use_privatekey);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain__ctx_poolmanager));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ctx_poolmanager);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain__ctx_proxymanager));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ctx_proxymanager);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain__MutualTlsAdapter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__MutualTlsAdapter);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_ssl_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ssl_context);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_init_poolmanager));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_init_poolmanager);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_proxy_manager_for));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_proxy_manager_for);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_587455d82fd83f874416fce4cf44fc5a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_587455d82fd83f874416fce4cf44fc5a);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__custom_tls_signer_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__custom_tls_signer_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain__custom_tls_signer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__custom_tls_signer);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_CustomTlsSigner));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CustomTlsSigner);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_signer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_signer);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_libraries));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_load_libraries);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_attach_to_ssl_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_attach_to_ssl_context);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain__MutualTlsOffloadAdapter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__MutualTlsOffloadAdapter);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_AuthorizedSession));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AuthorizedSession);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_credentials));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_credentials);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain__refresh_status_codes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__refresh_status_codes);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain__max_refresh_attempts));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__max_refresh_attempts);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain__refresh_timeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__refresh_timeout);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain__is_mtls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__is_mtls);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain__default_host));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__default_host);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain__auth_request_session));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__auth_request_session);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_adapters));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_adapters);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPAdapter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HTTPAdapter);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_3_tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_max_retries_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_max_retries_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_mount));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mount);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_504b77692b694460b8c25198a52c83ba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_504b77692b694460b8c25198a52c83ba);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_Request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Request);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain__auth_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__auth_request);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_service_account));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_service_account);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_Credentials));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Credentials);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain__create_self_signed_jwt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__create_self_signed_jwt);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_1604ede801f98aad5f78715432e3556f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1604ede801f98aad5f78715432e3556f);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_google));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_google);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_auth));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_auth);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_transport));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_transport);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain__mtls_helper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__mtls_helper);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_check_use_client_cert));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_check_use_client_cert);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_MutualTLSChannelError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MutualTLSChannelError);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_client_cert_and_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_client_cert_and_key);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain__cached_cert));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__cached_cert);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_ClientCertError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ClientCertError);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_Error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Error);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_de049669be1242f7a1b8104d894d77d2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_de049669be1242f7a1b8104d894d77d2);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain__credential_refresh_attempt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__credential_refresh_attempt);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copy);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_partial));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_partial);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_timeout_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_timeout_tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_TimeoutGuard));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TimeoutGuard);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_before_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_before_request);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_http_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_http_client);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_UNAUTHORIZED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UNAUTHORIZED);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_mtls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_mtls);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_digest_9c6282b2dbf04df40c6c5a284a6ccbac));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9c6282b2dbf04df40c6c5a284a6ccbac);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_info);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_11b79211eb78aab604f32970bc12fdd8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_11b79211eb78aab604f32970bc12fdd8_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_configure_mtls_channel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_configure_mtls_channel);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_angle_lambda));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_lambda);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_a2ee3501367ccdf631713a55afee2a07));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a2ee3501367ccdf631713a55afee2a07);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_error);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_digest_a0b47a64c5473ddd47f1e4be7a79b5c9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a0b47a64c5473ddd47f1e4be7a79b5c9);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_186c299e8be69d55a48248e8124f43dd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_186c299e8be69d55a48248e8124f43dd_tuple);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_03a12a27798cdd7cbf8dec2509a95d87_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_03a12a27798cdd7cbf8dec2509a95d87_tuple);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_d9e81f8c6298d7185f9559e289c32471));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d9e81f8c6298d7185f9559e289c32471);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_refresh));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_refresh);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_allowed_time));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_allowed_time);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_f8784072d2c099b42e8d0b59da424eda));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f8784072d2c099b42e8d0b59da424eda);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_call_cert_bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_call_cert_bytes);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_call_key_bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_call_key_bytes);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_digest_d27d9a89a8704f1a6327f4f14872ab0e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d27d9a89a8704f1a6327f4f14872ab0e);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_digest_1ad328c754f17066d36dd61d311e4502));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1ad328c754f17066d36dd61d311e4502);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_absolute_import));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_absolute_import);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_functools));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_functools);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_digest_096ca139beaf8ac5201071e235ad66b6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_096ca139beaf8ac5201071e235ad66b6);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_client);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_logging));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logging);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_Optional));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Optional);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_caught_exc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_caught_exc);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_6a3abff5aeb8725bc9b3fa019c4b4baf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6a3abff5aeb8725bc9b3fa019c4b4baf);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_digest_f564af29e8441da03b9e6bf26a88cc81));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f564af29e8441da03b9e6bf26a88cc81);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_digest_3f9c79ac9778c20d3cb015a396023b31));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3f9c79ac9778c20d3cb015a396023b31);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_create_urllib3_context_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_create_urllib3_context_tuple);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__helpers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__helpers_tuple);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_exceptions_tuple);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_transport_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_transport_tuple);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__mtls_helper_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__mtls_helper_tuple);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_digest_76c4c07798963223889b12fc60a097b0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_76c4c07798963223889b12fc60a097b0);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_digest_31b40dbd93ddd4efa91cab6083c18890));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_31b40dbd93ddd4efa91cab6083c18890);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_service_account_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_service_account_tuple);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getLogger);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_eda478fe391780f02c579185f1943916_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_eda478fe391780f02c579185f1943916_tuple);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_int_pos_120));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_120);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain__DEFAULT_TIMEOUT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__DEFAULT_TIMEOUT);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_Response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Response);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_digest_eda478fe391780f02c579185f1943916));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eda478fe391780f02c579185f1943916);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_digest_5604f08d73ac817de9782c5440afc1a0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5604f08d73ac817de9782c5440afc1a0);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_int_pos_50));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_50);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_digest_37f61de23a604569296c1ced849aa096));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_37f61de23a604569296c1ced849aa096);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain_status));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_status);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_digest_f8919cf16f77680e5ef4d47172958126));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f8919cf16f77680e5ef4d47172958126);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_digest_64ed33fe6cd71fb5787fb240b91400d4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_64ed33fe6cd71fb5787fb240b91400d4);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_digest_e493e5be5d6c09ef6e2abf61e5c54230));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e493e5be5d6c09ef6e2abf61e5c54230);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__response_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__response_tuple);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_tuple_type_object_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_object_tuple);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_digest_0c39fc4a7184aaab11f69cd2f1745135));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0c39fc4a7184aaab11f69cd2f1745135);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_int_pos_73));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_73);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain_Timeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Timeout);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_digest_f24d846e8f869d3ded65d6377d3cf237));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f24d846e8f869d3ded65d6377d3cf237);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_digest_183d80e5aa489566b52b7f983ad28927));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_183d80e5aa489566b52b7f983ad28927);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_digest_1ad12366af63d0360d25b4d42b644e31));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1ad12366af63d0360d25b4d42b644e31);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_tuple_1580d080e18b5f84e1550f561725600a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1580d080e18b5f84e1550f561725600a_tuple);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_digest_c9bcb9faf96994cc17d4f591b8af3c65));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c9bcb9faf96994cc17d4f591b8af3c65);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_int_pos_117));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_117);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_digest_45e22ae6dbd065d35ef185f04e7a930e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_45e22ae6dbd065d35ef185f04e7a930e);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_plain___del__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___del__);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_digest_a2d20d50127799e684d60fc6e83fbc4a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a2d20d50127799e684d60fc6e83fbc4a);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_plain_GET));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GET);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_plain___call__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___call__);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_digest_1ee2d45b9395e8e5ddd9a4c4168a1109));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1ee2d45b9395e8e5ddd9a4c4168a1109);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_session_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_session_tuple);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_digest_5d86f98a082e24787eea10b0dd0570bf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5d86f98a082e24787eea10b0dd0570bf);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_int_pos_198));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_198);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_digest_ee8e294a8555e81d2151805220a70043));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ee8e294a8555e81d2151805220a70043);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_digest_5696e8f664fbc03ab59ce337063e5b63));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5696e8f664fbc03ab59ce337063e5b63);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_digest_4f09b4e47b8164f0bc69aa9d6c89cdc9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4f09b4e47b8164f0bc69aa9d6c89cdc9);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__ctx_poolmanager_str_plain__ctx_proxymanager_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__ctx_poolmanager_str_plain__ctx_proxymanager_tuple);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_digest_e28d3bf98c9697e113fc2920e7b4f432));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e28d3bf98c9697e113fc2920e7b4f432);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_int_pos_244));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_244);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_digest_57c664ad59e78e17ded1d9bf4db4ca0a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_57c664ad59e78e17ded1d9bf4db4ca0a);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_digest_b24c2e039d5ae677ea1d7395aa085f84));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b24c2e039d5ae677ea1d7395aa085f84);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_digest_0be807be6288f775f0a034ae454e78c3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0be807be6288f775f0a034ae454e78c3);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_tuple_a78fb14bdde6fae80af4ea8d2b59501e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a78fb14bdde6fae80af4ea8d2b59501e_tuple);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_digest_5f248caea50fd25bc0595cb39708b596));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5f248caea50fd25bc0595cb39708b596);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_int_pos_298));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_298);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_REFRESH_STATUS_CODES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_REFRESH_STATUS_CODES);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_MAX_REFRESH_ATTEMPTS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_MAX_REFRESH_ATTEMPTS);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_digest_aab1754e68bd2e4376ed8a2b64feeb81));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aab1754e68bd2e4376ed8a2b64feeb81);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_str_digest_5e62e54d96555aab19e1dbc0a82c53ba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5e62e54d96555aab19e1dbc0a82c53ba);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_digest_6c8908d3ccfd787a2d4c6acb893ef457));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6c8908d3ccfd787a2d4c6acb893ef457);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_digest_3a87ff44375e54ca3d17fc0a54a01719));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3a87ff44375e54ca3d17fc0a54a01719);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_str_digest_e40eb6227725bab70cf3d008e19b95c3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e40eb6227725bab70cf3d008e19b95c3);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_tuple_1f9cbf0c238458c2c9dfaa53c8f9a6c2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1f9cbf0c238458c2c9dfaa53c8f9a6c2_tuple);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_str_digest_f5cce9187e5be05075ab852d1c0caa9d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f5cce9187e5be05075ab852d1c0caa9d);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_tuple_2c9abf9da1397bff7d936689ecae9b01_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2c9abf9da1397bff7d936689ecae9b01_tuple);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_call_cert_bytes_str_plain_call_key_bytes_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_call_cert_bytes_str_plain_call_key_bytes_tuple);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_str_digest_6362c1ec7cd5f157715a41246aebfd90));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6362c1ec7cd5f157715a41246aebfd90);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_tuple_f1c473c5a3d553a3d73d75a8dff3b6f2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f1c473c5a3d553a3d73d75a8dff3b6f2_tuple);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_tuple_21f746c9f8e0862127204033108387e6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_21f746c9f8e0862127204033108387e6_tuple);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_tuple_7adacd8cf3f433a32d7f47e92edb1b8a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_7adacd8cf3f433a32d7f47e92edb1b8a_tuple);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_session_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_session_tuple);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_tuple_a587d42b6fda16d3ca3a174c4a1462d8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a587d42b6fda16d3ca3a174c4a1462d8_tuple);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_tuple_0cc295511f0ed441d3902a1f39fa7571_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0cc295511f0ed441d3902a1f39fa7571_tuple);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_tuple_8be747722fbf81df31d71da543cabb6b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8be747722fbf81df31d71da543cabb6b_tuple);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_response_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_response_tuple);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_tuple_a20dcbd2ac4116f4f18ad90e93a0a679_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a20dcbd2ac4116f4f18ad90e93a0a679_tuple);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_tuple_d5487fd1f51c6cb477baead806735d7e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d5487fd1f51c6cb477baead806735d7e_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 23
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
static PyObject *module_var_accessor_google$auth$transport$requests$AuthorizedSession(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$requests->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$requests->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_AuthorizedSession);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$requests->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AuthorizedSession);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AuthorizedSession, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AuthorizedSession);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AuthorizedSession, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_AuthorizedSession);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_AuthorizedSession);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AuthorizedSession);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$requests$Optional(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$requests->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$requests->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$requests->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Optional);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Optional, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Optional);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Optional, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$requests$Request(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$requests->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$requests->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_Request);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$requests->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Request);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Request, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Request);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Request, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_Request);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_Request);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Request);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$requests$TimeoutGuard(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$requests->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$requests->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_TimeoutGuard);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$requests->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TimeoutGuard);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TimeoutGuard, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TimeoutGuard);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TimeoutGuard, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_TimeoutGuard);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_TimeoutGuard);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TimeoutGuard);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$requests$_DEFAULT_TIMEOUT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$requests->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$requests->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_TIMEOUT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$requests->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__DEFAULT_TIMEOUT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__DEFAULT_TIMEOUT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__DEFAULT_TIMEOUT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__DEFAULT_TIMEOUT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_TIMEOUT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_TIMEOUT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_TIMEOUT);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$requests$_LOGGER(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$requests->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$requests->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$requests->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__LOGGER);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__LOGGER, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__LOGGER);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__LOGGER, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$requests$_MutualTlsAdapter(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$requests->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$requests->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain__MutualTlsAdapter);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$requests->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__MutualTlsAdapter);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__MutualTlsAdapter, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__MutualTlsAdapter);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__MutualTlsAdapter, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain__MutualTlsAdapter);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain__MutualTlsAdapter);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__MutualTlsAdapter);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$requests$_MutualTlsOffloadAdapter(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$requests->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$requests->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain__MutualTlsOffloadAdapter);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$requests->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__MutualTlsOffloadAdapter);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__MutualTlsOffloadAdapter, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__MutualTlsOffloadAdapter);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__MutualTlsOffloadAdapter, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain__MutualTlsOffloadAdapter);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain__MutualTlsOffloadAdapter);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__MutualTlsOffloadAdapter);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$requests$_Response(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$requests->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$requests->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain__Response);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$requests->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__Response);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__Response, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__Response);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__Response, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain__Response);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain__Response);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__Response);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$requests$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$requests->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$requests->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$requests->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$requests$_helpers(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$requests->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$requests->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$requests->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$requests$_mtls_helper(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$requests->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$requests->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain__mtls_helper);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$requests->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__mtls_helper);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__mtls_helper, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__mtls_helper);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__mtls_helper, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain__mtls_helper);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain__mtls_helper);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__mtls_helper);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$requests$caught_exc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$requests->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$requests->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_caught_exc);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$requests->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_caught_exc);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_caught_exc, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_caught_exc);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_caught_exc, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_caught_exc);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_caught_exc);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_caught_exc);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$requests$create_urllib3_context(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$requests->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$requests->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_create_urllib3_context);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$requests->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_create_urllib3_context);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_create_urllib3_context, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_create_urllib3_context);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_create_urllib3_context, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_create_urllib3_context);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_create_urllib3_context);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_create_urllib3_context);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$requests$exceptions(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$requests->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$requests->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$requests->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$requests$google(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$requests->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$requests->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_google);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$requests->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_google);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_google, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_google);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_google, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_google);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_google);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_google);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$requests$http_client(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$requests->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$requests->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_http_client);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$requests->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_http_client);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_http_client);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_http_client);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$requests$logging(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$requests->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$requests->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$requests->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_logging);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_logging, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_logging);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_logging, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$requests$numbers(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$requests->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$requests->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_numbers);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$requests->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_numbers);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_numbers, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_numbers);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_numbers, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_numbers);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_numbers);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_numbers);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$requests$requests(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$requests->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$requests->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_requests);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$requests->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_requests);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_requests, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_requests);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_requests, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_requests);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_requests);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_requests);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$requests$service_account(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$requests->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$requests->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_service_account);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$requests->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_service_account);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_service_account, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_service_account);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_service_account, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_service_account);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_service_account);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_service_account);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$requests$time(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$requests->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$requests->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$requests->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_time);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_time, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_time);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_time, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$transport$requests$transport(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$transport$requests->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$transport$requests->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_transport);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$transport$requests->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_transport);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_transport);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_transport);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_166596c94250944b619045bf0c088866;
static PyCodeObject *code_objects_8d2b1fca2f3bc9f911ced808cc05bc34;
static PyCodeObject *code_objects_3960f90fa4c885b4c4ad0069a857e772;
static PyCodeObject *code_objects_181f8774bada9738b9356afb9700771f;
static PyCodeObject *code_objects_f4d0d24ce33de01543e12e7e6507459d;
static PyCodeObject *code_objects_d9e4caa79d1af907dd821525093f5bec;
static PyCodeObject *code_objects_7783c64bf6726a787e6ea275bc6dabd9;
static PyCodeObject *code_objects_dc13ba77953ad5bc73d76364222bbd87;
static PyCodeObject *code_objects_7767dc84d8e9b433275e765aea23c726;
static PyCodeObject *code_objects_6eda5865ccdf4bd373de53b8dbdf5da2;
static PyCodeObject *code_objects_f6238ed53761edea936104ff0b281290;
static PyCodeObject *code_objects_a7642290974ac5057d91b30f6a37497b;
static PyCodeObject *code_objects_9d46905d3b2e11d97bd49810e4c0dee7;
static PyCodeObject *code_objects_d883a92f0a0b0304aab85833e470dd87;
static PyCodeObject *code_objects_df0bfa6d873fbb6cec0cbd3e1a15df28;
static PyCodeObject *code_objects_3f12f64645587ed179a71dc51af80837;
static PyCodeObject *code_objects_af647dbda252d4e261b023364bd9c0ef;
static PyCodeObject *code_objects_0fe1ed15fcedc8460e7893abfb23fd95;
static PyCodeObject *code_objects_a114acff144b3958d088e70117622def;
static PyCodeObject *code_objects_8fd42b8fb4443f9a7c2bde06551b9148;
static PyCodeObject *code_objects_0c23d762394c7e5f9134867016113d69;
static PyCodeObject *code_objects_b7099aaf9c7a29902bb859551ae83de0;
static PyCodeObject *code_objects_a458e109ff3750615ae0bc9c07e96de1;
static PyCodeObject *code_objects_1535cbaee09dfa1b632f8d3eba31fdd0;
static PyCodeObject *code_objects_3ec09e2844cb06c89f739db8395b528b;
static PyCodeObject *code_objects_1a7dfeb195048214722daaa6e7ed0c68;
static PyCodeObject *code_objects_0285cee89f75b66948665455200a27a3;
static PyCodeObject *code_objects_db60d04d661129a36fffbab99ea3f818;
static PyCodeObject *code_objects_808bd59ef2c49bed20d58728db921e6a;
static PyCodeObject *code_objects_75d66c906dce24b7af37009502d164be;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_f5cce9187e5be05075ab852d1c0caa9d); CHECK_OBJECT(module_filename_obj);
code_objects_166596c94250944b619045bf0c088866 = MAKE_CODE_OBJECT(module_filename_obj, 110, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_fac5857ef3ce7c54e35276e851e63e89, mod_consts.const_tuple_2c9abf9da1397bff7d936689ecae9b01_tuple, NULL, 1, 0, 0);
code_objects_8d2b1fca2f3bc9f911ced808cc05bc34 = MAKE_CODE_OBJECT(module_filename_obj, 580, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_lambda, mod_consts.const_str_digest_a2ee3501367ccdf631713a55afee2a07, mod_consts.const_tuple_str_plain_call_cert_bytes_str_plain_call_key_bytes_tuple, mod_consts.const_tuple_str_plain_call_cert_bytes_str_plain_call_key_bytes_tuple, 0, 0, 0);
code_objects_3960f90fa4c885b4c4ad0069a857e772 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_6362c1ec7cd5f157715a41246aebfd90, mod_consts.const_str_digest_6362c1ec7cd5f157715a41246aebfd90, NULL, NULL, 0, 0, 0);
code_objects_181f8774bada9738b9356afb9700771f = MAKE_CODE_OBJECT(module_filename_obj, 298, 0, mod_consts.const_str_plain_AuthorizedSession, mod_consts.const_str_plain_AuthorizedSession, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_f4d0d24ce33de01543e12e7e6507459d = MAKE_CODE_OBJECT(module_filename_obj, 117, 0, mod_consts.const_str_plain_Request, mod_consts.const_str_plain_Request, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_d9e4caa79d1af907dd821525093f5bec = MAKE_CODE_OBJECT(module_filename_obj, 73, 0, mod_consts.const_str_plain_TimeoutGuard, mod_consts.const_str_plain_TimeoutGuard, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_7783c64bf6726a787e6ea275bc6dabd9 = MAKE_CODE_OBJECT(module_filename_obj, 198, 0, mod_consts.const_str_plain__MutualTlsAdapter, mod_consts.const_str_plain__MutualTlsAdapter, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_dc13ba77953ad5bc73d76364222bbd87 = MAKE_CODE_OBJECT(module_filename_obj, 244, 0, mod_consts.const_str_plain__MutualTlsOffloadAdapter, mod_consts.const_str_plain__MutualTlsOffloadAdapter, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_7767dc84d8e9b433275e765aea23c726 = MAKE_CODE_OBJECT(module_filename_obj, 50, 0, mod_consts.const_str_plain__Response, mod_consts.const_str_plain__Response, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_6eda5865ccdf4bd373de53b8dbdf5da2 = MAKE_CODE_OBJECT(module_filename_obj, 157, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_1ee2d45b9395e8e5ddd9a4c4168a1109, mod_consts.const_tuple_f1c473c5a3d553a3d73d75a8dff3b6f2_tuple, NULL, 6, 0, 0);
code_objects_f6238ed53761edea936104ff0b281290 = MAKE_CODE_OBJECT(module_filename_obj, 147, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___del__, mod_consts.const_str_digest_a2d20d50127799e684d60fc6e83fbc4a, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_a7642290974ac5057d91b30f6a37497b = MAKE_CODE_OBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___enter__, mod_consts.const_str_digest_183d80e5aa489566b52b7f983ad28927, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_9d46905d3b2e11d97bd49810e4c0dee7 = MAKE_CODE_OBJECT(module_filename_obj, 96, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___exit__, mod_consts.const_str_digest_1ad12366af63d0360d25b4d42b644e31, mod_consts.const_tuple_21f746c9f8e0862127204033108387e6_tuple, NULL, 4, 0, 0);
code_objects_d883a92f0a0b0304aab85833e470dd87 = MAKE_CODE_OBJECT(module_filename_obj, 385, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_aab1754e68bd2e4376ed8a2b64feeb81, mod_consts.const_tuple_7adacd8cf3f433a32d7f47e92edb1b8a_tuple, NULL, 7, 0, 0);
code_objects_df0bfa6d873fbb6cec0cbd3e1a15df28 = MAKE_CODE_OBJECT(module_filename_obj, 141, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_45e22ae6dbd065d35ef185f04e7a930e, mod_consts.const_tuple_str_plain_self_str_plain_session_tuple, NULL, 2, 0, 0);
code_objects_3f12f64645587ed179a71dc51af80837 = MAKE_CODE_OBJECT(module_filename_obj, 87, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_f24d846e8f869d3ded65d6377d3cf237, mod_consts.const_tuple_a587d42b6fda16d3ca3a174c4a1462d8_tuple, NULL, 3, 0, 0);
code_objects_af647dbda252d4e261b023364bd9c0ef = MAKE_CODE_OBJECT(module_filename_obj, 211, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_ee8e294a8555e81d2151805220a70043, mod_consts.const_tuple_0cc295511f0ed441d3902a1f39fa7571_tuple, NULL, 3, 0, 0);
code_objects_0fe1ed15fcedc8460e7893abfb23fd95 = MAKE_CODE_OBJECT(module_filename_obj, 266, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_57c664ad59e78e17ded1d9bf4db4ca0a, mod_consts.const_tuple_8be747722fbf81df31d71da543cabb6b_tuple, NULL, 2, 0, 0);
code_objects_a114acff144b3958d088e70117622def = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_37f61de23a604569296c1ced849aa096, mod_consts.const_tuple_str_plain_self_str_plain_response_tuple, NULL, 2, 0, 0);
code_objects_8fd42b8fb4443f9a7c2bde06551b9148 = MAKE_CODE_OBJECT(module_filename_obj, 631, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_close, mod_consts.const_str_digest_e40eb6227725bab70cf3d008e19b95c3, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple, NULL, 1, 0, 0);
code_objects_0c23d762394c7e5f9134867016113d69 = MAKE_CODE_OBJECT(module_filename_obj, 428, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_configure_mtls_channel, mod_consts.const_str_digest_5e62e54d96555aab19e1dbc0a82c53ba, mod_consts.const_tuple_a20dcbd2ac4116f4f18ad90e93a0a679_tuple, NULL, 2, 0, 0);
code_objects_b7099aaf9c7a29902bb859551ae83de0 = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_data, mod_consts.const_str_digest_e493e5be5d6c09ef6e2abf61e5c54230, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_a458e109ff3750615ae0bc9c07e96de1 = MAKE_CODE_OBJECT(module_filename_obj, 65, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_headers, mod_consts.const_str_digest_64ed33fe6cd71fb5787fb240b91400d4, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_1535cbaee09dfa1b632f8d3eba31fdd0 = MAKE_CODE_OBJECT(module_filename_obj, 235, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, mod_consts.const_str_plain_init_poolmanager, mod_consts.const_str_digest_5696e8f664fbc03ab59ce337063e5b63, mod_consts.const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple, NULL, 1, 0, 0);
code_objects_3ec09e2844cb06c89f739db8395b528b = MAKE_CODE_OBJECT(module_filename_obj, 289, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, mod_consts.const_str_plain_init_poolmanager, mod_consts.const_str_digest_b24c2e039d5ae677ea1d7395aa085f84, mod_consts.const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple, NULL, 1, 0, 0);
code_objects_1a7dfeb195048214722daaa6e7ed0c68 = MAKE_CODE_OBJECT(module_filename_obj, 627, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_is_mtls, mod_consts.const_str_digest_3a87ff44375e54ca3d17fc0a54a01719, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_0285cee89f75b66948665455200a27a3 = MAKE_CODE_OBJECT(module_filename_obj, 239, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, mod_consts.const_str_plain_proxy_manager_for, mod_consts.const_str_digest_4f09b4e47b8164f0bc69aa9d6c89cdc9, mod_consts.const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple, NULL, 1, 0, 0);
code_objects_db60d04d661129a36fffbab99ea3f818 = MAKE_CODE_OBJECT(module_filename_obj, 293, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, mod_consts.const_str_plain_proxy_manager_for, mod_consts.const_str_digest_0be807be6288f775f0a034ae454e78c3, mod_consts.const_tuple_9bbb27efefa4198d1be1f991852f8d74_tuple, NULL, 1, 0, 0);
code_objects_808bd59ef2c49bed20d58728db921e6a = MAKE_CODE_OBJECT(module_filename_obj, 479, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_request, mod_consts.const_str_digest_6c8908d3ccfd787a2d4c6acb893ef457, mod_consts.const_tuple_d5487fd1f51c6cb477baead806735d7e_tuple, NULL, 7, 0, 0);
code_objects_75d66c906dce24b7af37009502d164be = MAKE_CODE_OBJECT(module_filename_obj, 61, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_status, mod_consts.const_str_digest_f8919cf16f77680e5ef4d47172958126, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_google$auth$transport$requests$$$function__7___exit__$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__10___call__(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__11___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__12_init_poolmanager(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__13_proxy_manager_for(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__14___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__15_init_poolmanager(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__16_proxy_manager_for(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__17___init__(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__18_configure_mtls_channel(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__19_request(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__19_request$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__1___init__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__20_is_mtls(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__21_close(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__2_status(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__3_headers(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__4_data(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__5___init__(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__6___enter__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__7___exit__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__8___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__9___del__(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_google$auth$transport$requests$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_response = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$auth$transport$requests$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$requests$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$transport$requests$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$requests$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$requests$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$requests$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_a114acff144b3958d088e70117622def, module_google$auth$transport$requests, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$requests$$$function__1___init__->m_type_description == NULL);
frame_frame_google$auth$transport$requests$$$function__1___init__ = cache_frame_frame_google$auth$transport$requests$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$requests$$$function__1___init__);
assert(Py_REFCNT(frame_frame_google$auth$transport$requests$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_response);
tmp_assattr_value_1 = par_response;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__response, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$requests$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$requests$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$requests$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$requests$$$function__1___init__,
    type_description_1,
    par_self,
    par_response
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$requests$$$function__1___init__ == cache_frame_frame_google$auth$transport$requests$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$requests$$$function__1___init__);
    cache_frame_frame_google$auth$transport$requests$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$requests$$$function__1___init__);

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
CHECK_OBJECT(par_response);
Py_DECREF(par_response);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_response);
Py_DECREF(par_response);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$transport$requests$$$function__2_status(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$transport$requests$$$function__2_status;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$requests$$$function__2_status = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$transport$requests$$$function__2_status)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$requests$$$function__2_status);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$requests$$$function__2_status == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$requests$$$function__2_status = MAKE_FUNCTION_FRAME(tstate, code_objects_75d66c906dce24b7af37009502d164be, module_google$auth$transport$requests, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$requests$$$function__2_status->m_type_description == NULL);
frame_frame_google$auth$transport$requests$$$function__2_status = cache_frame_frame_google$auth$transport$requests$$$function__2_status;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$requests$$$function__2_status);
assert(Py_REFCNT(frame_frame_google$auth$transport$requests$$$function__2_status) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__response);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_status_code);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$requests$$$function__2_status, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$requests$$$function__2_status->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$requests$$$function__2_status, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$requests$$$function__2_status,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$requests$$$function__2_status == cache_frame_frame_google$auth$transport$requests$$$function__2_status) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$requests$$$function__2_status);
    cache_frame_frame_google$auth$transport$requests$$$function__2_status = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$requests$$$function__2_status);

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


static PyObject *impl_google$auth$transport$requests$$$function__3_headers(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$transport$requests$$$function__3_headers;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$requests$$$function__3_headers = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$transport$requests$$$function__3_headers)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$requests$$$function__3_headers);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$requests$$$function__3_headers == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$requests$$$function__3_headers = MAKE_FUNCTION_FRAME(tstate, code_objects_a458e109ff3750615ae0bc9c07e96de1, module_google$auth$transport$requests, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$requests$$$function__3_headers->m_type_description == NULL);
frame_frame_google$auth$transport$requests$$$function__3_headers = cache_frame_frame_google$auth$transport$requests$$$function__3_headers;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$requests$$$function__3_headers);
assert(Py_REFCNT(frame_frame_google$auth$transport$requests$$$function__3_headers) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__response);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_headers);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$requests$$$function__3_headers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$requests$$$function__3_headers->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$requests$$$function__3_headers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$requests$$$function__3_headers,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$requests$$$function__3_headers == cache_frame_frame_google$auth$transport$requests$$$function__3_headers) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$requests$$$function__3_headers);
    cache_frame_frame_google$auth$transport$requests$$$function__3_headers = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$requests$$$function__3_headers);

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


static PyObject *impl_google$auth$transport$requests$$$function__4_data(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$transport$requests$$$function__4_data;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$requests$$$function__4_data = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$transport$requests$$$function__4_data)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$requests$$$function__4_data);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$requests$$$function__4_data == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$requests$$$function__4_data = MAKE_FUNCTION_FRAME(tstate, code_objects_b7099aaf9c7a29902bb859551ae83de0, module_google$auth$transport$requests, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$requests$$$function__4_data->m_type_description == NULL);
frame_frame_google$auth$transport$requests$$$function__4_data = cache_frame_frame_google$auth$transport$requests$$$function__4_data;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$requests$$$function__4_data);
assert(Py_REFCNT(frame_frame_google$auth$transport$requests$$$function__4_data) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__response);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_content);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$requests$$$function__4_data, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$requests$$$function__4_data->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$requests$$$function__4_data, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$requests$$$function__4_data,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$requests$$$function__4_data == cache_frame_frame_google$auth$transport$requests$$$function__4_data) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$requests$$$function__4_data);
    cache_frame_frame_google$auth$transport$requests$$$function__4_data = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$requests$$$function__4_data);

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


static PyObject *impl_google$auth$transport$requests$$$function__5___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_timeout = python_pars[1];
PyObject *par_timeout_error_type = python_pars[2];
struct Nuitka_FrameObject *frame_frame_google$auth$transport$requests$$$function__5___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$requests$$$function__5___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$transport$requests$$$function__5___init__)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$requests$$$function__5___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$requests$$$function__5___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$requests$$$function__5___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_3f12f64645587ed179a71dc51af80837, module_google$auth$transport$requests, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$requests$$$function__5___init__->m_type_description == NULL);
frame_frame_google$auth$transport$requests$$$function__5___init__ = cache_frame_frame_google$auth$transport$requests$$$function__5___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$requests$$$function__5___init__);
assert(Py_REFCNT(frame_frame_google$auth$transport$requests$$$function__5___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_timeout);
tmp_assattr_value_1 = par_timeout;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__timeout, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_timeout);
tmp_assattr_value_2 = par_timeout;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_remaining_timeout, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_timeout_error_type);
tmp_assattr_value_3 = par_timeout_error_type;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__timeout_error_type, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$requests$$$function__5___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$requests$$$function__5___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$requests$$$function__5___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$requests$$$function__5___init__,
    type_description_1,
    par_self,
    par_timeout,
    par_timeout_error_type
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$requests$$$function__5___init__ == cache_frame_frame_google$auth$transport$requests$$$function__5___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$requests$$$function__5___init__);
    cache_frame_frame_google$auth$transport$requests$$$function__5___init__ = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$requests$$$function__5___init__);

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
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_timeout_error_type);
Py_DECREF(par_timeout_error_type);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_timeout_error_type);
Py_DECREF(par_timeout_error_type);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$transport$requests$$$function__6___enter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$transport$requests$$$function__6___enter__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$requests$$$function__6___enter__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$transport$requests$$$function__6___enter__)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$requests$$$function__6___enter__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$requests$$$function__6___enter__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$requests$$$function__6___enter__ = MAKE_FUNCTION_FRAME(tstate, code_objects_a7642290974ac5057d91b30f6a37497b, module_google$auth$transport$requests, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$requests$$$function__6___enter__->m_type_description == NULL);
frame_frame_google$auth$transport$requests$$$function__6___enter__ = cache_frame_frame_google$auth$transport$requests$$$function__6___enter__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$requests$$$function__6___enter__);
assert(Py_REFCNT(frame_frame_google$auth$transport$requests$$$function__6___enter__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_assattr_target_1;
tmp_called_instance_1 = module_var_accessor_google$auth$transport$requests$time(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_time);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 93;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$requests$$$function__6___enter__->m_frame.f_lineno = 93;
tmp_assattr_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_time);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__start, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$requests$$$function__6___enter__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$requests$$$function__6___enter__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$requests$$$function__6___enter__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$requests$$$function__6___enter__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$requests$$$function__6___enter__ == cache_frame_frame_google$auth$transport$requests$$$function__6___enter__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$requests$$$function__6___enter__);
    cache_frame_frame_google$auth$transport$requests$$$function__6___enter__ = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$requests$$$function__6___enter__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(par_self);
tmp_return_value = par_self;
Py_INCREF(tmp_return_value);
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


static PyObject *impl_google$auth$transport$requests$$$function__7___exit__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_exc_type = python_pars[1];
PyObject *par_exc_value = python_pars[2];
PyObject *par_traceback = python_pars[3];
struct Nuitka_CellObject *var_elapsed = Nuitka_Cell_NewEmpty();
PyObject *var_deadline_hit = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$transport$requests$$$function__7___exit__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$requests$$$function__7___exit__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$transport$requests$$$function__7___exit__)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$requests$$$function__7___exit__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$requests$$$function__7___exit__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$requests$$$function__7___exit__ = MAKE_FUNCTION_FRAME(tstate, code_objects_9d46905d3b2e11d97bd49810e4c0dee7, module_google$auth$transport$requests, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$requests$$$function__7___exit__->m_type_description == NULL);
frame_frame_google$auth$transport$requests$$$function__7___exit__ = cache_frame_frame_google$auth$transport$requests$$$function__7___exit__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$requests$$$function__7___exit__);
assert(Py_REFCNT(frame_frame_google$auth$transport$requests$$$function__7___exit__) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_exc_value);
tmp_truth_name_1 = CHECK_IF_TRUE(par_exc_value);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "ooooco";
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__timeout);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooco";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_2;
tmp_called_instance_1 = module_var_accessor_google$auth$transport$requests$time(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_time);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 103;
type_description_1 = "ooooco";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$requests$$$function__7___exit__->m_frame.f_lineno = 103;
tmp_sub_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_time);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooooco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__start);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 103;
type_description_1 = "ooooco";
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


exception_lineno = 103;
type_description_1 = "ooooco";
    goto frame_exception_exit_1;
}
assert(Nuitka_Cell_GET(var_elapsed) == NULL);
Nuitka_Cell_SET(var_elapsed, tmp_assign_source_1);

}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__timeout);
if (tmp_isinstance_inst_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "ooooco";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = module_var_accessor_google$auth$transport$requests$numbers(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_numbers);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_isinstance_inst_1);

exception_lineno = 106;
type_description_1 = "ooooco";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_Number);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_isinstance_inst_1);

exception_lineno = 106;
type_description_1 = "ooooco";
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


exception_lineno = 106;
type_description_1 = "ooooco";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_sub_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__timeout);
if (tmp_sub_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "ooooco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(var_elapsed));
tmp_sub_expr_right_2 = Nuitka_Cell_GET(var_elapsed);
tmp_assattr_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
CHECK_OBJECT(tmp_sub_expr_left_2);
Py_DECREF(tmp_sub_expr_left_2);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "ooooco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_remaining_timeout, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "ooooco";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_remaining_timeout);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooooco";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = const_int_0;
tmp_assign_source_2 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooooco";
    goto frame_exception_exit_1;
}
assert(var_deadline_hit == NULL);
var_deadline_hit = tmp_assign_source_2;
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_tuple_arg_1;
PyObject *tmp_assattr_target_2;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__timeout);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "ooooco";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "ooooco";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_3;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = var_elapsed;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_tuple_arg_1 = MAKE_GENERATOR_google$auth$transport$requests$$$function__7___exit__$$$genexpr__1_genexpr(tstate, tmp_closure_1);

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
tmp_assattr_value_2 = PySequence_Tuple(tmp_tuple_arg_1);
CHECK_OBJECT(tmp_tuple_arg_1);
Py_DECREF(tmp_tuple_arg_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "ooooco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_remaining_timeout, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "ooooco";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_8;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_1 != NULL);
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_remaining_timeout);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooco";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$requests$$$function__7___exit__->m_frame.f_lineno = 111;
tmp_cmp_expr_left_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooco";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = const_int_0;
tmp_assign_source_4 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooco";
    goto frame_exception_exit_1;
}
assert(var_deadline_hit == NULL);
var_deadline_hit = tmp_assign_source_4;
}
branch_end_3:;
{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_2;
CHECK_OBJECT(var_deadline_hit);
tmp_truth_name_2 = CHECK_IF_TRUE(var_deadline_hit);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "ooooco";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_google$auth$transport$requests$$$function__7___exit__->m_frame.f_lineno = 114;
tmp_raise_type_input_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain__timeout_error_type);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooooco";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooooco";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 114;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooco";
goto frame_exception_exit_1;
}
branch_no_4:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$requests$$$function__7___exit__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$requests$$$function__7___exit__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$requests$$$function__7___exit__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$requests$$$function__7___exit__,
    type_description_1,
    par_self,
    par_exc_type,
    par_exc_value,
    par_traceback,
    var_elapsed,
    var_deadline_hit
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$requests$$$function__7___exit__ == cache_frame_frame_google$auth$transport$requests$$$function__7___exit__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$requests$$$function__7___exit__);
    cache_frame_frame_google$auth$transport$requests$$$function__7___exit__ = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$requests$$$function__7___exit__);

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
CHECK_OBJECT(var_elapsed);
CHECK_OBJECT(var_elapsed);
Py_DECREF(var_elapsed);
var_elapsed = NULL;
Py_XDECREF(var_deadline_hit);
var_deadline_hit = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_elapsed);
CHECK_OBJECT(var_elapsed);
Py_DECREF(var_elapsed);
var_elapsed = NULL;
Py_XDECREF(var_deadline_hit);
var_deadline_hit = NULL;
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
CHECK_OBJECT(par_exc_type);
Py_DECREF(par_exc_type);
CHECK_OBJECT(par_exc_value);
Py_DECREF(par_exc_value);
CHECK_OBJECT(par_traceback);
Py_DECREF(par_traceback);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_exc_type);
Py_DECREF(par_exc_type);
CHECK_OBJECT(par_exc_value);
Py_DECREF(par_exc_value);
CHECK_OBJECT(par_traceback);
Py_DECREF(par_traceback);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct google$auth$transport$requests$$$function__7___exit__$$$genexpr__1_genexpr_locals {
PyObject *var_x;
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

static PyObject *google$auth$transport$requests$$$function__7___exit__$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$auth$transport$requests$$$function__7___exit__$$$genexpr__1_genexpr_locals *generator_heap = (struct google$auth$transport$requests$$$function__7___exit__$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_x = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_166596c94250944b619045bf0c088866, module_google$auth$transport$requests, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[1]));
tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_1 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "Noc";
generator_heap->exception_lineno = 110;
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
    PyObject *old = generator_heap->var_x;
    generator_heap->var_x = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_x);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_x);
tmp_sub_expr_left_1 = generator_heap->var_x;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_elapsed);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 110;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}

tmp_sub_expr_right_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_expression_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 110;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_sub_expr_left_1, sizeof(PyObject *), &tmp_sub_expr_right_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_sub_expr_left_1, sizeof(PyObject *), &tmp_sub_expr_right_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 110;
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


generator_heap->exception_lineno = 110;
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
    generator_heap->var_x,
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
goto try_except_handler_1;
frame_no_exception_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_x);
generator_heap->var_x = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_x);
generator_heap->var_x = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_google$auth$transport$requests$$$function__7___exit__$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        google$auth$transport$requests$$$function__7___exit__$$$genexpr__1_genexpr_context,
        module_google$auth$transport$requests,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_fac5857ef3ce7c54e35276e851e63e89,
#endif
        code_objects_166596c94250944b619045bf0c088866,
        closure,
        2,
#if 1
        sizeof(struct google$auth$transport$requests$$$function__7___exit__$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_google$auth$transport$requests$$$function__8___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_session = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$auth$transport$requests$$$function__8___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$requests$$$function__8___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$transport$requests$$$function__8___init__)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$requests$$$function__8___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$requests$$$function__8___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$requests$$$function__8___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_df0bfa6d873fbb6cec0cbd3e1a15df28, module_google$auth$transport$requests, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$requests$$$function__8___init__->m_type_description == NULL);
frame_frame_google$auth$transport$requests$$$function__8___init__ = cache_frame_frame_google$auth$transport$requests$$$function__8___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$requests$$$function__8___init__);
assert(Py_REFCNT(frame_frame_google$auth$transport$requests$$$function__8___init__) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_session);
tmp_operand_value_1 = par_session;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "oo";
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$auth$transport$requests$requests(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_requests);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 143;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$requests$$$function__8___init__->m_frame.f_lineno = 143;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_Session);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_session;
    assert(old != NULL);
    par_session = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_session);
tmp_assattr_value_1 = par_session;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_session, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$requests$$$function__8___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$requests$$$function__8___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$requests$$$function__8___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$requests$$$function__8___init__,
    type_description_1,
    par_self,
    par_session
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$requests$$$function__8___init__ == cache_frame_frame_google$auth$transport$requests$$$function__8___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$requests$$$function__8___init__);
    cache_frame_frame_google$auth$transport$requests$$$function__8___init__ = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$requests$$$function__8___init__);

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
CHECK_OBJECT(par_session);
CHECK_OBJECT(par_session);
Py_DECREF(par_session);
par_session = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_session);
par_session = NULL;
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


static PyObject *impl_google$auth$transport$requests$$$function__9___del__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$transport$requests$$$function__9___del__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$requests$$$function__9___del__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$transport$requests$$$function__9___del__)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$requests$$$function__9___del__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$requests$$$function__9___del__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$requests$$$function__9___del__ = MAKE_FUNCTION_FRAME(tstate, code_objects_f6238ed53761edea936104ff0b281290, module_google$auth$transport$requests, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$requests$$$function__9___del__->m_type_description == NULL);
frame_frame_google$auth$transport$requests$$$function__9___del__ = cache_frame_frame_google$auth$transport$requests$$$function__9___del__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$requests$$$function__9___del__);
assert(Py_REFCNT(frame_frame_google$auth$transport$requests$$$function__9___del__) == 2);

// Framed code:
// Tried code:
{
bool tmp_condition_result_1;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts.const_str_plain_session);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "o";
    goto try_except_handler_1;
}
tmp_and_left_value_1 = (tmp_res != 0) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_session);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "o";
    goto try_except_handler_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_and_right_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
tmp_condition_result_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_1 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_session);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "o";
    goto try_except_handler_1;
}
frame_frame_google$auth$transport$requests$$$function__9___del__->m_frame.f_lineno = 150;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_close);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "o";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$requests$$$function__9___del__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$requests$$$function__9___del__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_TypeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(tmp_res == -1));
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
    exception_lineno = 148;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$transport$requests$$$function__9___del__->m_frame)) {
        frame_frame_google$auth$transport$requests$$$function__9___del__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "o";
goto try_except_handler_2;
branch_no_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$requests$$$function__9___del__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$requests$$$function__9___del__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$requests$$$function__9___del__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$requests$$$function__9___del__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$requests$$$function__9___del__ == cache_frame_frame_google$auth$transport$requests$$$function__9___del__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$requests$$$function__9___del__);
    cache_frame_frame_google$auth$transport$requests$$$function__9___del__ = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$requests$$$function__9___del__);

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


static PyObject *impl_google$auth$transport$requests$$$function__10___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_url = python_pars[1];
PyObject *par_method = python_pars[2];
PyObject *par_body = python_pars[3];
PyObject *par_headers = python_pars[4];
PyObject *par_timeout = python_pars[5];
PyObject *par_kwargs = python_pars[6];
PyObject *var_response = NULL;
PyObject *var_caught_exc = NULL;
PyObject *var_new_exc = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$transport$requests$$$function__10___call__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$requests$$$function__10___call__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$transport$requests$$$function__10___call__)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$requests$$$function__10___call__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$requests$$$function__10___call__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$requests$$$function__10___call__ = MAKE_FUNCTION_FRAME(tstate, code_objects_6eda5865ccdf4bd373de53b8dbdf5da2, module_google$auth$transport$requests, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$requests$$$function__10___call__->m_type_description == NULL);
frame_frame_google$auth$transport$requests$$$function__10___call__ = cache_frame_frame_google$auth$transport$requests$$$function__10___call__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$requests$$$function__10___call__);
assert(Py_REFCNT(frame_frame_google$auth$transport$requests$$$function__10___call__) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_expression_value_1 = module_var_accessor_google$auth$transport$requests$_helpers(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 187;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_request_log);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_1 = module_var_accessor_google$auth$transport$requests$_LOGGER(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__LOGGER);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 187;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_method);
tmp_args_element_value_2 = par_method;
CHECK_OBJECT(par_url);
tmp_args_element_value_3 = par_url;
CHECK_OBJECT(par_body);
tmp_args_element_value_4 = par_body;
CHECK_OBJECT(par_headers);
tmp_args_element_value_5 = par_headers;
frame_frame_google$auth$transport$requests$$$function__10___call__->m_frame.f_lineno = 187;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_direct_call_arg4_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_session);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_request);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_method);
tmp_tuple_element_1 = par_method;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_url);
tmp_tuple_element_1 = par_url;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_1);
tmp_dict_key_1 = mod_consts.const_str_plain_data;
CHECK_OBJECT(par_body);
tmp_dict_value_1 = par_body;
tmp_direct_call_arg3_1 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_headers;
CHECK_OBJECT(par_headers);
tmp_dict_value_1 = par_headers;
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_timeout;
CHECK_OBJECT(par_timeout);
tmp_dict_value_1 = par_timeout;
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg4_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg4_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
    tmp_assign_source_1 = impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
assert(var_response == NULL);
var_response = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_expression_value_4 = module_var_accessor_google$auth$transport$requests$_helpers(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 191;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_response_log);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_6 = module_var_accessor_google$auth$transport$requests$_LOGGER(tstate);
if (unlikely(tmp_args_element_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__LOGGER);
}

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 191;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_response);
tmp_args_element_value_7 = var_response;
frame_frame_google$auth$transport$requests$$$function__10___call__->m_frame.f_lineno = 191;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_8;
tmp_called_value_3 = module_var_accessor_google$auth$transport$requests$_Response(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__Response);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 192;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_response);
tmp_args_element_value_8 = var_response;
frame_frame_google$auth$transport$requests$$$function__10___call__->m_frame.f_lineno = 192;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_8);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$requests$$$function__10___call__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$requests$$$function__10___call__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_expression_value_6 = module_var_accessor_google$auth$transport$requests$requests(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_requests);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 193;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_exceptions);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_RequestException);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
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
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_9;
tmp_called_instance_1 = module_var_accessor_google$auth$transport$requests$exceptions(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 194;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_caught_exc);
tmp_args_element_value_9 = var_caught_exc;
frame_frame_google$auth$transport$requests$$$function__10___call__->m_frame.f_lineno = 194;
tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_TransportError, tmp_args_element_value_9);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oooooooooo";
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


exception_lineno = 195;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_caught_exc);
tmp_raise_cause_1 = var_caught_exc;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 195;
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
    exception_lineno = 186;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$transport$requests$$$function__10___call__->m_frame)) {
        frame_frame_google$auth$transport$requests$$$function__10___call__->m_frame.f_lineno = exception_tb->tb_lineno;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$requests$$$function__10___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$requests$$$function__10___call__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$requests$$$function__10___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$requests$$$function__10___call__,
    type_description_1,
    par_self,
    par_url,
    par_method,
    par_body,
    par_headers,
    par_timeout,
    par_kwargs,
    var_response,
    var_caught_exc,
    var_new_exc
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$requests$$$function__10___call__ == cache_frame_frame_google$auth$transport$requests$$$function__10___call__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$requests$$$function__10___call__);
    cache_frame_frame_google$auth$transport$requests$$$function__10___call__ = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$requests$$$function__10___call__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
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

Py_XDECREF(var_response);
var_response = NULL;
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
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_body);
Py_DECREF(par_body);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_body);
Py_DECREF(par_body);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$transport$requests$$$function__11___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_cert = python_pars[1];
PyObject *par_key = python_pars[2];
PyObject *var_certifi = NULL;
PyObject *var_crypto = NULL;
PyObject *var_urllib3 = NULL;
PyObject *var_pkey = NULL;
PyObject *var_x509 = NULL;
PyObject *var_ctx_poolmanager = NULL;
PyObject *var_ctx_proxymanager = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$transport$requests$$$function__11___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$requests$$$function__11___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$transport$requests$$$function__11___init__)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$requests$$$function__11___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$requests$$$function__11___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$requests$$$function__11___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_af647dbda252d4e261b023364bd9c0ef, module_google$auth$transport$requests, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$requests$$$function__11___init__->m_type_description == NULL);
frame_frame_google$auth$transport$requests$$$function__11___init__ = cache_frame_frame_google$auth$transport$requests$$$function__11___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$requests$$$function__11___init__);
assert(Py_REFCNT(frame_frame_google$auth$transport$requests$$$function__11___init__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_certifi;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$auth$transport$requests;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_google$auth$transport$requests$$$function__11___init__->m_frame.f_lineno = 212;
tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
assert(var_certifi == NULL);
var_certifi = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_OpenSSL;
tmp_globals_arg_value_2 = (PyObject *)moduledict_google$auth$transport$requests;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_crypto_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_google$auth$transport$requests$$$function__11___init__->m_frame.f_lineno = 213;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$auth$transport$requests,
        mod_consts.const_str_plain_crypto,
        const_int_0
    );
} else {
    tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_crypto);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
assert(var_crypto == NULL);
var_crypto = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_9b140d54e682de757186c632bf3beb69;
tmp_globals_arg_value_3 = (PyObject *)moduledict_google$auth$transport$requests;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_google$auth$transport$requests$$$function__11___init__->m_frame.f_lineno = 214;
tmp_assign_source_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
assert(var_urllib3 == NULL);
var_urllib3 = tmp_assign_source_3;
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
CHECK_OBJECT(var_urllib3);
tmp_expression_value_2 = var_urllib3;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_contrib);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_pyopenssl);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$requests$$$function__11___init__->m_frame.f_lineno = 216;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_inject_into_urllib3);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var_crypto);
tmp_expression_value_3 = var_crypto;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_load_privatekey);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_crypto);
tmp_expression_value_4 = var_crypto;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_FILETYPE_PEM);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 218;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_key);
tmp_args_element_value_2 = par_key;
frame_frame_google$auth$transport$requests$$$function__11___init__->m_frame.f_lineno = 218;
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


exception_lineno = 218;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
assert(var_pkey == NULL);
var_pkey = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(var_crypto);
tmp_expression_value_5 = var_crypto;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_load_certificate);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_crypto);
tmp_expression_value_6 = var_crypto;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_FILETYPE_PEM);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 219;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cert);
tmp_args_element_value_4 = par_cert;
frame_frame_google$auth$transport$requests$$$function__11___init__->m_frame.f_lineno = 219;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
assert(var_x509 == NULL);
var_x509 = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor_google$auth$transport$requests$create_urllib3_context(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_create_urllib3_context);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 221;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$requests$$$function__11___init__->m_frame.f_lineno = 221;
tmp_assign_source_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
assert(var_ctx_poolmanager == NULL);
var_ctx_poolmanager = tmp_assign_source_6;
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_2;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(var_ctx_poolmanager);
tmp_expression_value_7 = var_ctx_poolmanager;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_load_verify_locations);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_certifi);
tmp_called_instance_2 = var_certifi;
frame_frame_google$auth$transport$requests$$$function__11___init__->m_frame.f_lineno = 222;
tmp_kw_call_value_0_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_where);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 222;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$requests$$$function__11___init__->m_frame.f_lineno = 222;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_call_result_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, kw_values, mod_consts.const_tuple_str_plain_cafile_tuple);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(var_ctx_poolmanager);
tmp_expression_value_8 = var_ctx_poolmanager;
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__ctx);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_x509);
tmp_args_element_value_5 = var_x509;
frame_frame_google$auth$transport$requests$$$function__11___init__->m_frame.f_lineno = 223;
tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_use_certificate, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_called_instance_4;
PyObject *tmp_expression_value_9;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(var_ctx_poolmanager);
tmp_expression_value_9 = var_ctx_poolmanager;
tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__ctx);
if (tmp_called_instance_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_pkey);
tmp_args_element_value_6 = var_pkey;
frame_frame_google$auth$transport$requests$$$function__11___init__->m_frame.f_lineno = 224;
tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_use_privatekey, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(var_ctx_poolmanager);
tmp_assattr_value_1 = var_ctx_poolmanager;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__ctx_poolmanager, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_5;
tmp_called_value_5 = module_var_accessor_google$auth$transport$requests$create_urllib3_context(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_create_urllib3_context);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 227;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$requests$$$function__11___init__->m_frame.f_lineno = 227;
tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
assert(var_ctx_proxymanager == NULL);
var_ctx_proxymanager = tmp_assign_source_7;
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_10;
PyObject *tmp_call_result_5;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_called_instance_5;
CHECK_OBJECT(var_ctx_proxymanager);
tmp_expression_value_10 = var_ctx_proxymanager;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_load_verify_locations);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_certifi);
tmp_called_instance_5 = var_certifi;
frame_frame_google$auth$transport$requests$$$function__11___init__->m_frame.f_lineno = 228;
tmp_kw_call_value_0_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts.const_str_plain_where);
if (tmp_kw_call_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 228;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$requests$$$function__11___init__->m_frame.f_lineno = 228;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

    tmp_call_result_5 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_6, kw_values, mod_consts.const_tuple_str_plain_cafile_tuple);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_0_2);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
{
PyObject *tmp_called_instance_6;
PyObject *tmp_expression_value_11;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_7;
CHECK_OBJECT(var_ctx_proxymanager);
tmp_expression_value_11 = var_ctx_proxymanager;
tmp_called_instance_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain__ctx);
if (tmp_called_instance_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_x509);
tmp_args_element_value_7 = var_x509;
frame_frame_google$auth$transport$requests$$$function__11___init__->m_frame.f_lineno = 229;
tmp_call_result_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts.const_str_plain_use_certificate, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_instance_6);
Py_DECREF(tmp_called_instance_6);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
{
PyObject *tmp_called_instance_7;
PyObject *tmp_expression_value_12;
PyObject *tmp_call_result_7;
PyObject *tmp_args_element_value_8;
CHECK_OBJECT(var_ctx_proxymanager);
tmp_expression_value_12 = var_ctx_proxymanager;
tmp_called_instance_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain__ctx);
if (tmp_called_instance_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_pkey);
tmp_args_element_value_8 = var_pkey;
frame_frame_google$auth$transport$requests$$$function__11___init__->m_frame.f_lineno = 230;
tmp_call_result_7 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts.const_str_plain_use_privatekey, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_instance_7);
Py_DECREF(tmp_called_instance_7);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(var_ctx_proxymanager);
tmp_assattr_value_2 = var_ctx_proxymanager;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__ctx_proxymanager, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_instance_8;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_8;
tmp_type_arg_value_1 = module_var_accessor_google$auth$transport$requests$_MutualTlsAdapter(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__MutualTlsAdapter);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 233;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_8 = BUILTIN_SUPER2(tstate, moduledict_google$auth$transport$requests, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$requests$$$function__11___init__->m_frame.f_lineno = 233;
tmp_call_result_8 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_8, const_str_plain___init__);
CHECK_OBJECT(tmp_called_instance_8);
Py_DECREF(tmp_called_instance_8);
if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "ooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$requests$$$function__11___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$requests$$$function__11___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$requests$$$function__11___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$requests$$$function__11___init__,
    type_description_1,
    par_self,
    par_cert,
    par_key,
    var_certifi,
    var_crypto,
    var_urllib3,
    var_pkey,
    var_x509,
    var_ctx_poolmanager,
    var_ctx_proxymanager,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$requests$$$function__11___init__ == cache_frame_frame_google$auth$transport$requests$$$function__11___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$requests$$$function__11___init__);
    cache_frame_frame_google$auth$transport$requests$$$function__11___init__ = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$requests$$$function__11___init__);

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
CHECK_OBJECT(var_certifi);
CHECK_OBJECT(var_certifi);
Py_DECREF(var_certifi);
var_certifi = NULL;
CHECK_OBJECT(var_crypto);
CHECK_OBJECT(var_crypto);
Py_DECREF(var_crypto);
var_crypto = NULL;
CHECK_OBJECT(var_urllib3);
CHECK_OBJECT(var_urllib3);
Py_DECREF(var_urllib3);
var_urllib3 = NULL;
CHECK_OBJECT(var_pkey);
CHECK_OBJECT(var_pkey);
Py_DECREF(var_pkey);
var_pkey = NULL;
CHECK_OBJECT(var_x509);
CHECK_OBJECT(var_x509);
Py_DECREF(var_x509);
var_x509 = NULL;
CHECK_OBJECT(var_ctx_poolmanager);
CHECK_OBJECT(var_ctx_poolmanager);
Py_DECREF(var_ctx_poolmanager);
var_ctx_poolmanager = NULL;
CHECK_OBJECT(var_ctx_proxymanager);
CHECK_OBJECT(var_ctx_proxymanager);
Py_DECREF(var_ctx_proxymanager);
var_ctx_proxymanager = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_certifi);
var_certifi = NULL;
Py_XDECREF(var_crypto);
var_crypto = NULL;
Py_XDECREF(var_urllib3);
var_urllib3 = NULL;
Py_XDECREF(var_pkey);
var_pkey = NULL;
Py_XDECREF(var_x509);
var_x509 = NULL;
Py_XDECREF(var_ctx_poolmanager);
var_ctx_poolmanager = NULL;
Py_XDECREF(var_ctx_proxymanager);
var_ctx_proxymanager = NULL;
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
CHECK_OBJECT(par_cert);
Py_DECREF(par_cert);
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_cert);
Py_DECREF(par_cert);
CHECK_OBJECT(par_key);
Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$transport$requests$$$function__12_init_poolmanager(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_args = python_pars[1];
PyObject *par_kwargs = python_pars[2];
struct Nuitka_FrameObject *frame_frame_google$auth$transport$requests$$$function__12_init_poolmanager;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$requests$$$function__12_init_poolmanager = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$transport$requests$$$function__12_init_poolmanager)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$requests$$$function__12_init_poolmanager);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$requests$$$function__12_init_poolmanager == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$requests$$$function__12_init_poolmanager = MAKE_FUNCTION_FRAME(tstate, code_objects_1535cbaee09dfa1b632f8d3eba31fdd0, module_google$auth$transport$requests, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$requests$$$function__12_init_poolmanager->m_type_description == NULL);
frame_frame_google$auth$transport$requests$$$function__12_init_poolmanager = cache_frame_frame_google$auth$transport$requests$$$function__12_init_poolmanager;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$requests$$$function__12_init_poolmanager);
assert(Py_REFCNT(frame_frame_google$auth$transport$requests$$$function__12_init_poolmanager) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__ctx_poolmanager);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_kwargs);
tmp_dictset_dict = par_kwargs;
tmp_dictset_key = mod_consts.const_str_plain_ssl_context;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_call_result_1;
tmp_type_arg_value_1 = module_var_accessor_google$auth$transport$requests$_MutualTlsAdapter(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__MutualTlsAdapter);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 237;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_2 = BUILTIN_SUPER2(tstate, moduledict_google$auth$transport$requests, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_init_poolmanager);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_args);
tmp_direct_call_arg2_1 = par_args;
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg3_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg2_1);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_call_result_1 = impl___main__$$$helper_function_complex_call_helper_star_list_star_dict(tstate, dir_call_args);
}
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "oooN";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$requests$$$function__12_init_poolmanager, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$requests$$$function__12_init_poolmanager->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$requests$$$function__12_init_poolmanager, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$requests$$$function__12_init_poolmanager,
    type_description_1,
    par_self,
    par_args,
    par_kwargs,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$requests$$$function__12_init_poolmanager == cache_frame_frame_google$auth$transport$requests$$$function__12_init_poolmanager) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$requests$$$function__12_init_poolmanager);
    cache_frame_frame_google$auth$transport$requests$$$function__12_init_poolmanager = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$requests$$$function__12_init_poolmanager);

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
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$transport$requests$$$function__13_proxy_manager_for(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_args = python_pars[1];
PyObject *par_kwargs = python_pars[2];
struct Nuitka_FrameObject *frame_frame_google$auth$transport$requests$$$function__13_proxy_manager_for;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$requests$$$function__13_proxy_manager_for = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$transport$requests$$$function__13_proxy_manager_for)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$requests$$$function__13_proxy_manager_for);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$requests$$$function__13_proxy_manager_for == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$requests$$$function__13_proxy_manager_for = MAKE_FUNCTION_FRAME(tstate, code_objects_0285cee89f75b66948665455200a27a3, module_google$auth$transport$requests, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$requests$$$function__13_proxy_manager_for->m_type_description == NULL);
frame_frame_google$auth$transport$requests$$$function__13_proxy_manager_for = cache_frame_frame_google$auth$transport$requests$$$function__13_proxy_manager_for;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$requests$$$function__13_proxy_manager_for);
assert(Py_REFCNT(frame_frame_google$auth$transport$requests$$$function__13_proxy_manager_for) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__ctx_proxymanager);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_kwargs);
tmp_dictset_dict = par_kwargs;
tmp_dictset_key = mod_consts.const_str_plain_ssl_context;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_direct_call_arg3_1;
tmp_type_arg_value_1 = module_var_accessor_google$auth$transport$requests$_MutualTlsAdapter(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__MutualTlsAdapter);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 241;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_2 = BUILTIN_SUPER2(tstate, moduledict_google$auth$transport$requests, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_proxy_manager_for);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_args);
tmp_direct_call_arg2_1 = par_args;
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg3_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg2_1);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_star_list_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "oooN";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$requests$$$function__13_proxy_manager_for, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$requests$$$function__13_proxy_manager_for->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$requests$$$function__13_proxy_manager_for, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$requests$$$function__13_proxy_manager_for,
    type_description_1,
    par_self,
    par_args,
    par_kwargs,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$requests$$$function__13_proxy_manager_for == cache_frame_frame_google$auth$transport$requests$$$function__13_proxy_manager_for) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$requests$$$function__13_proxy_manager_for);
    cache_frame_frame_google$auth$transport$requests$$$function__13_proxy_manager_for = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$requests$$$function__13_proxy_manager_for);

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
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$transport$requests$$$function__14___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_enterprise_cert_file_path = python_pars[1];
PyObject *var_certifi = NULL;
PyObject *var__custom_tls_signer = NULL;
PyObject *var_urllib3 = NULL;
PyObject *var_poolmanager = NULL;
PyObject *var_proxymanager = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$transport$requests$$$function__14___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$requests$$$function__14___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$transport$requests$$$function__14___init__)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$requests$$$function__14___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$requests$$$function__14___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$requests$$$function__14___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_0fe1ed15fcedc8460e7893abfb23fd95, module_google$auth$transport$requests, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$requests$$$function__14___init__->m_type_description == NULL);
frame_frame_google$auth$transport$requests$$$function__14___init__ = cache_frame_frame_google$auth$transport$requests$$$function__14___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$requests$$$function__14___init__);
assert(Py_REFCNT(frame_frame_google$auth$transport$requests$$$function__14___init__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_certifi;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$auth$transport$requests;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_google$auth$transport$requests$$$function__14___init__->m_frame.f_lineno = 267;
tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "oooooooN";
    goto frame_exception_exit_1;
}
assert(var_certifi == NULL);
var_certifi = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_587455d82fd83f874416fce4cf44fc5a;
tmp_globals_arg_value_2 = (PyObject *)moduledict_google$auth$transport$requests;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain__custom_tls_signer_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_google$auth$transport$requests$$$function__14___init__->m_frame.f_lineno = 268;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "oooooooN";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$auth$transport$requests,
        mod_consts.const_str_plain__custom_tls_signer,
        const_int_0
    );
} else {
    tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain__custom_tls_signer);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "oooooooN";
    goto frame_exception_exit_1;
}
assert(var__custom_tls_signer == NULL);
var__custom_tls_signer = tmp_assign_source_2;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(var__custom_tls_signer);
tmp_called_instance_1 = var__custom_tls_signer;
CHECK_OBJECT(par_enterprise_cert_file_path);
tmp_args_element_value_1 = par_enterprise_cert_file_path;
frame_frame_google$auth$transport$requests$$$function__14___init__->m_frame.f_lineno = 270;
tmp_assattr_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_CustomTlsSigner, tmp_args_element_value_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "oooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_signer, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "oooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_signer);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "oooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$requests$$$function__14___init__->m_frame.f_lineno = 271;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_load_libraries);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "oooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_9b140d54e682de757186c632bf3beb69;
tmp_globals_arg_value_3 = (PyObject *)moduledict_google$auth$transport$requests;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_google$auth$transport$requests$$$function__14___init__->m_frame.f_lineno = 273;
tmp_assign_source_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "oooooooN";
    goto frame_exception_exit_1;
}
assert(var_urllib3 == NULL);
var_urllib3 = tmp_assign_source_3;
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_2;
CHECK_OBJECT(var_urllib3);
tmp_expression_value_3 = var_urllib3;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_contrib);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "oooooooN";
    goto frame_exception_exit_1;
}
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_pyopenssl);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "oooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$requests$$$function__14___init__->m_frame.f_lineno = 275;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_inject_into_urllib3);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "oooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_google$auth$transport$requests$create_urllib3_context(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_create_urllib3_context);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 277;
type_description_1 = "oooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$requests$$$function__14___init__->m_frame.f_lineno = 277;
tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "oooooooN";
    goto frame_exception_exit_1;
}
assert(var_poolmanager == NULL);
var_poolmanager = tmp_assign_source_4;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_3;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_called_instance_4;
CHECK_OBJECT(var_poolmanager);
tmp_expression_value_4 = var_poolmanager;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_load_verify_locations);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "oooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_certifi);
tmp_called_instance_4 = var_certifi;
frame_frame_google$auth$transport$requests$$$function__14___init__->m_frame.f_lineno = 278;
tmp_kw_call_value_0_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_where);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 278;
type_description_1 = "oooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$requests$$$function__14___init__->m_frame.f_lineno = 278;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_call_result_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_str_plain_cafile_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "oooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_called_instance_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_signer);
if (tmp_called_instance_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "oooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_poolmanager);
tmp_args_element_value_2 = var_poolmanager;
frame_frame_google$auth$transport$requests$$$function__14___init__->m_frame.f_lineno = 279;
tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_attach_to_ssl_context, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_instance_5);
Py_DECREF(tmp_called_instance_5);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "oooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(var_poolmanager);
tmp_assattr_value_2 = var_poolmanager;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__ctx_poolmanager, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "oooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor_google$auth$transport$requests$create_urllib3_context(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_create_urllib3_context);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 282;
type_description_1 = "oooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$requests$$$function__14___init__->m_frame.f_lineno = 282;
tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "oooooooN";
    goto frame_exception_exit_1;
}
assert(var_proxymanager == NULL);
var_proxymanager = tmp_assign_source_5;
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_5;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_called_instance_6;
CHECK_OBJECT(var_proxymanager);
tmp_expression_value_6 = var_proxymanager;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_load_verify_locations);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "oooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_certifi);
tmp_called_instance_6 = var_certifi;
frame_frame_google$auth$transport$requests$$$function__14___init__->m_frame.f_lineno = 283;
tmp_kw_call_value_0_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts.const_str_plain_where);
if (tmp_kw_call_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 283;
type_description_1 = "oooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$requests$$$function__14___init__->m_frame.f_lineno = 283;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

    tmp_call_result_5 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, kw_values, mod_consts.const_tuple_str_plain_cafile_tuple);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_0_2);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "oooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
{
PyObject *tmp_called_instance_7;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_called_instance_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_signer);
if (tmp_called_instance_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "oooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_proxymanager);
tmp_args_element_value_3 = var_proxymanager;
frame_frame_google$auth$transport$requests$$$function__14___init__->m_frame.f_lineno = 284;
tmp_call_result_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts.const_str_plain_attach_to_ssl_context, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_instance_7);
Py_DECREF(tmp_called_instance_7);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "oooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(var_proxymanager);
tmp_assattr_value_3 = var_proxymanager;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__ctx_proxymanager, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "oooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_instance_8;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_7;
tmp_type_arg_value_1 = module_var_accessor_google$auth$transport$requests$_MutualTlsOffloadAdapter(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__MutualTlsOffloadAdapter);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 287;
type_description_1 = "oooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_8 = BUILTIN_SUPER2(tstate, moduledict_google$auth$transport$requests, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "oooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$requests$$$function__14___init__->m_frame.f_lineno = 287;
tmp_call_result_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_8, const_str_plain___init__);
CHECK_OBJECT(tmp_called_instance_8);
Py_DECREF(tmp_called_instance_8);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "oooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$requests$$$function__14___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$requests$$$function__14___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$requests$$$function__14___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$requests$$$function__14___init__,
    type_description_1,
    par_self,
    par_enterprise_cert_file_path,
    var_certifi,
    var__custom_tls_signer,
    var_urllib3,
    var_poolmanager,
    var_proxymanager,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$requests$$$function__14___init__ == cache_frame_frame_google$auth$transport$requests$$$function__14___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$requests$$$function__14___init__);
    cache_frame_frame_google$auth$transport$requests$$$function__14___init__ = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$requests$$$function__14___init__);

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
CHECK_OBJECT(var_certifi);
CHECK_OBJECT(var_certifi);
Py_DECREF(var_certifi);
var_certifi = NULL;
CHECK_OBJECT(var__custom_tls_signer);
CHECK_OBJECT(var__custom_tls_signer);
Py_DECREF(var__custom_tls_signer);
var__custom_tls_signer = NULL;
CHECK_OBJECT(var_urllib3);
CHECK_OBJECT(var_urllib3);
Py_DECREF(var_urllib3);
var_urllib3 = NULL;
CHECK_OBJECT(var_poolmanager);
CHECK_OBJECT(var_poolmanager);
Py_DECREF(var_poolmanager);
var_poolmanager = NULL;
CHECK_OBJECT(var_proxymanager);
CHECK_OBJECT(var_proxymanager);
Py_DECREF(var_proxymanager);
var_proxymanager = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_certifi);
var_certifi = NULL;
Py_XDECREF(var__custom_tls_signer);
var__custom_tls_signer = NULL;
Py_XDECREF(var_urllib3);
var_urllib3 = NULL;
Py_XDECREF(var_poolmanager);
var_poolmanager = NULL;
Py_XDECREF(var_proxymanager);
var_proxymanager = NULL;
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
CHECK_OBJECT(par_enterprise_cert_file_path);
Py_DECREF(par_enterprise_cert_file_path);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_enterprise_cert_file_path);
Py_DECREF(par_enterprise_cert_file_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$transport$requests$$$function__15_init_poolmanager(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_args = python_pars[1];
PyObject *par_kwargs = python_pars[2];
struct Nuitka_FrameObject *frame_frame_google$auth$transport$requests$$$function__15_init_poolmanager;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$requests$$$function__15_init_poolmanager = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$transport$requests$$$function__15_init_poolmanager)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$requests$$$function__15_init_poolmanager);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$requests$$$function__15_init_poolmanager == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$requests$$$function__15_init_poolmanager = MAKE_FUNCTION_FRAME(tstate, code_objects_3ec09e2844cb06c89f739db8395b528b, module_google$auth$transport$requests, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$requests$$$function__15_init_poolmanager->m_type_description == NULL);
frame_frame_google$auth$transport$requests$$$function__15_init_poolmanager = cache_frame_frame_google$auth$transport$requests$$$function__15_init_poolmanager;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$requests$$$function__15_init_poolmanager);
assert(Py_REFCNT(frame_frame_google$auth$transport$requests$$$function__15_init_poolmanager) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__ctx_poolmanager);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_kwargs);
tmp_dictset_dict = par_kwargs;
tmp_dictset_key = mod_consts.const_str_plain_ssl_context;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_call_result_1;
tmp_type_arg_value_1 = module_var_accessor_google$auth$transport$requests$_MutualTlsOffloadAdapter(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__MutualTlsOffloadAdapter);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 291;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_2 = BUILTIN_SUPER2(tstate, moduledict_google$auth$transport$requests, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_init_poolmanager);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_args);
tmp_direct_call_arg2_1 = par_args;
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg3_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg2_1);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_call_result_1 = impl___main__$$$helper_function_complex_call_helper_star_list_star_dict(tstate, dir_call_args);
}
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "oooN";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$requests$$$function__15_init_poolmanager, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$requests$$$function__15_init_poolmanager->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$requests$$$function__15_init_poolmanager, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$requests$$$function__15_init_poolmanager,
    type_description_1,
    par_self,
    par_args,
    par_kwargs,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$requests$$$function__15_init_poolmanager == cache_frame_frame_google$auth$transport$requests$$$function__15_init_poolmanager) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$requests$$$function__15_init_poolmanager);
    cache_frame_frame_google$auth$transport$requests$$$function__15_init_poolmanager = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$requests$$$function__15_init_poolmanager);

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
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$transport$requests$$$function__16_proxy_manager_for(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_args = python_pars[1];
PyObject *par_kwargs = python_pars[2];
struct Nuitka_FrameObject *frame_frame_google$auth$transport$requests$$$function__16_proxy_manager_for;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$requests$$$function__16_proxy_manager_for = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$transport$requests$$$function__16_proxy_manager_for)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$requests$$$function__16_proxy_manager_for);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$requests$$$function__16_proxy_manager_for == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$requests$$$function__16_proxy_manager_for = MAKE_FUNCTION_FRAME(tstate, code_objects_db60d04d661129a36fffbab99ea3f818, module_google$auth$transport$requests, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$requests$$$function__16_proxy_manager_for->m_type_description == NULL);
frame_frame_google$auth$transport$requests$$$function__16_proxy_manager_for = cache_frame_frame_google$auth$transport$requests$$$function__16_proxy_manager_for;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$requests$$$function__16_proxy_manager_for);
assert(Py_REFCNT(frame_frame_google$auth$transport$requests$$$function__16_proxy_manager_for) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__ctx_proxymanager);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_kwargs);
tmp_dictset_dict = par_kwargs;
tmp_dictset_key = mod_consts.const_str_plain_ssl_context;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_direct_call_arg3_1;
tmp_type_arg_value_1 = module_var_accessor_google$auth$transport$requests$_MutualTlsOffloadAdapter(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__MutualTlsOffloadAdapter);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 295;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_2 = BUILTIN_SUPER2(tstate, moduledict_google$auth$transport$requests, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_proxy_manager_for);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_args);
tmp_direct_call_arg2_1 = par_args;
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg3_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg2_1);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_star_list_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "oooN";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$requests$$$function__16_proxy_manager_for, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$requests$$$function__16_proxy_manager_for->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$requests$$$function__16_proxy_manager_for, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$requests$$$function__16_proxy_manager_for,
    type_description_1,
    par_self,
    par_args,
    par_kwargs,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$requests$$$function__16_proxy_manager_for == cache_frame_frame_google$auth$transport$requests$$$function__16_proxy_manager_for) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$requests$$$function__16_proxy_manager_for);
    cache_frame_frame_google$auth$transport$requests$$$function__16_proxy_manager_for = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$requests$$$function__16_proxy_manager_for);

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
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$transport$requests$$$function__17___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_credentials = python_pars[1];
PyObject *par_refresh_status_codes = python_pars[2];
PyObject *par_max_refresh_attempts = python_pars[3];
PyObject *par_refresh_timeout = python_pars[4];
PyObject *par_auth_request = python_pars[5];
PyObject *par_default_host = python_pars[6];
PyObject *var_retry_adapter = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$transport$requests$$$function__17___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$requests$$$function__17___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$transport$requests$$$function__17___init__)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$requests$$$function__17___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$requests$$$function__17___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$requests$$$function__17___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_d883a92f0a0b0304aab85833e470dd87, module_google$auth$transport$requests, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$requests$$$function__17___init__->m_type_description == NULL);
frame_frame_google$auth$transport$requests$$$function__17___init__ = cache_frame_frame_google$auth$transport$requests$$$function__17___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$requests$$$function__17___init__);
assert(Py_REFCNT(frame_frame_google$auth$transport$requests$$$function__17___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
tmp_type_arg_value_1 = module_var_accessor_google$auth$transport$requests$AuthorizedSession(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AuthorizedSession);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 394;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER2(tstate, moduledict_google$auth$transport$requests, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 394;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$requests$$$function__17___init__->m_frame.f_lineno = 394;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain___init__);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 394;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_credentials);
tmp_assattr_value_1 = par_credentials;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_credentials, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 395;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_refresh_status_codes);
tmp_assattr_value_2 = par_refresh_status_codes;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__refresh_status_codes, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 396;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_max_refresh_attempts);
tmp_assattr_value_3 = par_max_refresh_attempts;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__max_refresh_attempts, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_refresh_timeout);
tmp_assattr_value_4 = par_refresh_timeout;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__refresh_timeout, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 398;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
tmp_assattr_value_5 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__is_mtls, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 399;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
CHECK_OBJECT(par_default_host);
tmp_assattr_value_6 = par_default_host;
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain__default_host, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_auth_request);
tmp_cmp_expr_left_1 = par_auth_request;
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
PyObject *tmp_assattr_value_7;
PyObject *tmp_called_instance_2;
PyObject *tmp_assattr_target_7;
tmp_called_instance_2 = module_var_accessor_google$auth$transport$requests$requests(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_requests);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 403;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$requests$$$function__17___init__->m_frame.f_lineno = 403;
tmp_assattr_value_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_Session);
if (tmp_assattr_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 403;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain__auth_request_session, tmp_assattr_value_7);
CHECK_OBJECT(tmp_assattr_value_7);
Py_DECREF(tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 403;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = module_var_accessor_google$auth$transport$requests$requests(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_requests);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 408;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_adapters);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 408;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_HTTPAdapter);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 408;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$requests$$$function__17___init__->m_frame.f_lineno = 408;
tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_3_tuple, 0), mod_consts.const_tuple_str_plain_max_retries_tuple);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 408;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
assert(var_retry_adapter == NULL);
var_retry_adapter = tmp_assign_source_1;
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__auth_request_session);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_504b77692b694460b8c25198a52c83ba;
CHECK_OBJECT(var_retry_adapter);
tmp_args_element_value_2 = var_retry_adapter;
frame_frame_google$auth$transport$requests$$$function__17___init__->m_frame.f_lineno = 409;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain_mount,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_4;
tmp_called_value_2 = module_var_accessor_google$auth$transport$requests$Request(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Request);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 413;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__auth_request_session);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 413;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$requests$$$function__17___init__->m_frame.f_lineno = 413;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 413;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_auth_request;
    assert(old != NULL);
    par_auth_request = tmp_assign_source_2;
    Py_DECREF(old);
}

}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_assattr_target_8;
tmp_assattr_value_8 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_8 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain__auth_request_session, tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 415;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
}
branch_end_1:;
{
PyObject *tmp_assattr_value_9;
PyObject *tmp_assattr_target_9;
CHECK_OBJECT(par_auth_request);
tmp_assattr_value_9 = par_auth_request;
CHECK_OBJECT(par_self);
tmp_assattr_target_9 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts.const_str_plain__auth_request, tmp_assattr_value_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_credentials);
if (tmp_isinstance_inst_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = module_var_accessor_google$auth$transport$requests$service_account(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_service_account);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_isinstance_inst_1);

exception_lineno = 423;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_Credentials);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_isinstance_inst_1);

exception_lineno = 423;
type_description_1 = "ooooooooN";
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


exception_lineno = 423;
type_description_1 = "ooooooooN";
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
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_4;
nuitka_bool tmp_condition_result_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_credentials);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__create_self_signed_jwt);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__default_host);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 425;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 425;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_1604ede801f98aad5f78715432e3556f;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain__default_host);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 425;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$requests$$$function__17___init__->m_frame.f_lineno = 425;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 425;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_args_element_value_4 = Py_None;
Py_INCREF(tmp_args_element_value_4);
condexpr_end_1:;
frame_frame_google$auth$transport$requests$$$function__17___init__->m_frame.f_lineno = 424;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;
type_description_1 = "ooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$requests$$$function__17___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$requests$$$function__17___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$requests$$$function__17___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$requests$$$function__17___init__,
    type_description_1,
    par_self,
    par_credentials,
    par_refresh_status_codes,
    par_max_refresh_attempts,
    par_refresh_timeout,
    par_auth_request,
    par_default_host,
    var_retry_adapter,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$requests$$$function__17___init__ == cache_frame_frame_google$auth$transport$requests$$$function__17___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$requests$$$function__17___init__);
    cache_frame_frame_google$auth$transport$requests$$$function__17___init__ = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$requests$$$function__17___init__);

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
CHECK_OBJECT(par_auth_request);
CHECK_OBJECT(par_auth_request);
Py_DECREF(par_auth_request);
par_auth_request = NULL;
Py_XDECREF(var_retry_adapter);
var_retry_adapter = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_auth_request);
par_auth_request = NULL;
Py_XDECREF(var_retry_adapter);
var_retry_adapter = NULL;
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
CHECK_OBJECT(par_credentials);
Py_DECREF(par_credentials);
CHECK_OBJECT(par_refresh_status_codes);
Py_DECREF(par_refresh_status_codes);
CHECK_OBJECT(par_max_refresh_attempts);
Py_DECREF(par_max_refresh_attempts);
CHECK_OBJECT(par_refresh_timeout);
Py_DECREF(par_refresh_timeout);
CHECK_OBJECT(par_default_host);
Py_DECREF(par_default_host);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_credentials);
Py_DECREF(par_credentials);
CHECK_OBJECT(par_refresh_status_codes);
Py_DECREF(par_refresh_status_codes);
CHECK_OBJECT(par_max_refresh_attempts);
Py_DECREF(par_max_refresh_attempts);
CHECK_OBJECT(par_refresh_timeout);
Py_DECREF(par_refresh_timeout);
CHECK_OBJECT(par_default_host);
Py_DECREF(par_default_host);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$transport$requests$$$function__18_configure_mtls_channel(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_client_cert_callback = python_pars[1];
PyObject *var_use_client_cert = NULL;
PyObject *var_OpenSSL = NULL;
PyObject *var_caught_exc = NULL;
PyObject *var_new_exc = NULL;
PyObject *var_cert = NULL;
PyObject *var_key = NULL;
PyObject *var_mtls_adapter = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$transport$requests$$$function__18_configure_mtls_channel;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$requests$$$function__18_configure_mtls_channel = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$transport$requests$$$function__18_configure_mtls_channel)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$requests$$$function__18_configure_mtls_channel);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$requests$$$function__18_configure_mtls_channel == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$requests$$$function__18_configure_mtls_channel = MAKE_FUNCTION_FRAME(tstate, code_objects_0c23d762394c7e5f9134867016113d69, module_google$auth$transport$requests, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$requests$$$function__18_configure_mtls_channel->m_type_description == NULL);
frame_frame_google$auth$transport$requests$$$function__18_configure_mtls_channel = cache_frame_frame_google$auth$transport$requests$$$function__18_configure_mtls_channel;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$requests$$$function__18_configure_mtls_channel);
assert(Py_REFCNT(frame_frame_google$auth$transport$requests$$$function__18_configure_mtls_channel) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
tmp_expression_value_3 = module_var_accessor_google$auth$transport$requests$google(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_google);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 448;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_auth);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_transport);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__mtls_helper);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$requests$$$function__18_configure_mtls_channel->m_frame.f_lineno = 448;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_check_use_client_cert);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_use_client_cert == NULL);
var_use_client_cert = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_use_client_cert);
tmp_operand_value_1 = var_use_client_cert;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 449;
type_description_1 = "ooooooooo";
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
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__is_mtls, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 450;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
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
tmp_name_value_1 = mod_consts.const_str_plain_OpenSSL;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$auth$transport$requests;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_google$auth$transport$requests$$$function__18_configure_mtls_channel->m_frame.f_lineno = 453;
tmp_assign_source_2 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 453;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
assert(var_OpenSSL == NULL);
var_OpenSSL = tmp_assign_source_2;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$requests$$$function__18_configure_mtls_channel, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$requests$$$function__18_configure_mtls_channel, exception_keeper_lineno_1);
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
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_3); 
assert(var_caught_exc == NULL);
Py_INCREF(tmp_assign_source_3);
var_caught_exc = tmp_assign_source_3;
}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_1;
tmp_called_instance_2 = module_var_accessor_google$auth$transport$requests$exceptions(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 455;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_caught_exc);
tmp_args_element_value_1 = var_caught_exc;
frame_frame_google$auth$transport$requests$$$function__18_configure_mtls_channel->m_frame.f_lineno = 455;
tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_MutualTLSChannelError, tmp_args_element_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
assert(var_new_exc == NULL);
var_new_exc = tmp_assign_source_4;
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


exception_lineno = 456;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_caught_exc);
tmp_raise_cause_1 = var_caught_exc;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 456;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "ooooooooo";
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
    exception_lineno = 452;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$transport$requests$$$function__18_configure_mtls_channel->m_frame)) {
        frame_frame_google$auth$transport$requests$$$function__18_configure_mtls_channel->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooo";
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
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_2;
tmp_expression_value_6 = module_var_accessor_google$auth$transport$requests$google(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_google);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 463;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_auth);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 463;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_transport);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 463;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__mtls_helper);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 463;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(par_client_cert_callback);
tmp_args_element_value_2 = par_client_cert_callback;
frame_frame_google$auth$transport$requests$$$function__18_configure_mtls_channel->m_frame.f_lineno = 463;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_get_client_cert_and_key, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 463;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 459;
type_description_1 = "ooooooooo";
    goto try_except_handler_7;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 459;
type_description_1 = "ooooooooo";
    goto try_except_handler_7;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 459;
type_description_1 = "ooooooooo";
    goto try_except_handler_7;
}
assert(tmp_tuple_unpack_1__element_3 == NULL);
tmp_tuple_unpack_1__element_3 = tmp_assign_source_8;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 459;
type_description_1 = "ooooooooo";
    goto try_except_handler_7;
}
}
goto try_end_2;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_6;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assattr_value_2 = tmp_tuple_unpack_1__element_1;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__is_mtls, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_5;
// End of try:
try_end_3:;
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
assert(var_cert == NULL);
Py_INCREF(tmp_assign_source_9);
var_cert = tmp_assign_source_9;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_10 = tmp_tuple_unpack_1__element_3;
assert(var_key == NULL);
Py_INCREF(tmp_assign_source_10);
var_key = tmp_assign_source_10;
}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__is_mtls);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 467;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 467;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_1 = module_var_accessor_google$auth$transport$requests$_MutualTlsAdapter(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__MutualTlsAdapter);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 468;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_cert);
tmp_args_element_value_3 = var_cert;
CHECK_OBJECT(var_key);
tmp_args_element_value_4 = var_key;
frame_frame_google$auth$transport$requests$$$function__18_configure_mtls_channel->m_frame.f_lineno = 468;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 468;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
assert(var_mtls_adapter == NULL);
var_mtls_adapter = tmp_assign_source_11;
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(var_cert);
tmp_assattr_value_3 = var_cert;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__cached_cert, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 469;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
}
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(par_self);
tmp_called_instance_4 = par_self;
tmp_args_element_value_5 = mod_consts.const_str_digest_504b77692b694460b8c25198a52c83ba;
CHECK_OBJECT(var_mtls_adapter);
tmp_args_element_value_6 = var_mtls_adapter;
frame_frame_google$auth$transport$requests$$$function__18_configure_mtls_channel->m_frame.f_lineno = 470;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_4,
        mod_consts.const_str_plain_mount,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 470;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_6);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$requests$$$function__18_configure_mtls_channel, exception_keeper_lineno_6);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_6, exception_tb);
    } else if (exception_keeper_lineno_6 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$requests$$$function__18_configure_mtls_channel, exception_keeper_lineno_6);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_6, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_6);
// Tried code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_8;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_expression_value_8 = module_var_accessor_google$auth$transport$requests$exceptions(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 472;
type_description_1 = "ooooooooo";
    goto try_except_handler_8;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_ClientCertError);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 472;
type_description_1 = "ooooooooo";
    goto try_except_handler_8;
}
tmp_cmp_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyTuple_SET_ITEM(tmp_cmp_expr_right_2, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = PyExc_ImportError;
PyTuple_SET_ITEM0(tmp_cmp_expr_right_2, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_OpenSSL);
tmp_expression_value_10 = var_OpenSSL;
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_crypto);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 474;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_Error);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 474;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_cmp_expr_right_2, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_cmp_expr_right_2);
goto try_except_handler_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 471;
type_description_1 = "ooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_4 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_12); 
assert(var_caught_exc == NULL);
Py_INCREF(tmp_assign_source_12);
var_caught_exc = tmp_assign_source_12;
}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_7;
tmp_called_instance_5 = module_var_accessor_google$auth$transport$requests$exceptions(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 476;
type_description_1 = "ooooooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(var_caught_exc);
tmp_args_element_value_7 = var_caught_exc;
frame_frame_google$auth$transport$requests$$$function__18_configure_mtls_channel->m_frame.f_lineno = 476;
tmp_assign_source_13 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_MutualTLSChannelError, tmp_args_element_value_7);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 476;
type_description_1 = "ooooooooo";
    goto try_except_handler_9;
}
assert(var_new_exc == NULL);
var_new_exc = tmp_assign_source_13;
}
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_raise_cause_2;
CHECK_OBJECT(var_new_exc);
tmp_raise_type_input_2 = var_new_exc;
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;
type_description_1 = "ooooooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(var_caught_exc);
tmp_raise_cause_2 = var_caught_exc;
exception_state.exception_value = tmp_raise_type_2;
Py_INCREF(tmp_raise_cause_2);
exception_lineno = 477;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_2);
type_description_1 = "ooooooooo";
goto try_except_handler_9;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_caught_exc);
var_caught_exc = NULL;

// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_8;
// End of try:
goto branch_end_4;
branch_no_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 458;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$transport$requests$$$function__18_configure_mtls_channel->m_frame)) {
        frame_frame_google$auth$transport$requests$$$function__18_configure_mtls_channel->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooo";
goto try_except_handler_8;
branch_end_4:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$requests$$$function__18_configure_mtls_channel, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$requests$$$function__18_configure_mtls_channel->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$requests$$$function__18_configure_mtls_channel, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$requests$$$function__18_configure_mtls_channel,
    type_description_1,
    par_self,
    par_client_cert_callback,
    var_use_client_cert,
    var_OpenSSL,
    var_caught_exc,
    var_new_exc,
    var_cert,
    var_key,
    var_mtls_adapter
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$requests$$$function__18_configure_mtls_channel == cache_frame_frame_google$auth$transport$requests$$$function__18_configure_mtls_channel) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$requests$$$function__18_configure_mtls_channel);
    cache_frame_frame_google$auth$transport$requests$$$function__18_configure_mtls_channel = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$requests$$$function__18_configure_mtls_channel);

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
CHECK_OBJECT(var_use_client_cert);
CHECK_OBJECT(var_use_client_cert);
Py_DECREF(var_use_client_cert);
var_use_client_cert = NULL;
Py_XDECREF(var_OpenSSL);
var_OpenSSL = NULL;
Py_XDECREF(var_cert);
var_cert = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_mtls_adapter);
var_mtls_adapter = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_use_client_cert);
var_use_client_cert = NULL;
Py_XDECREF(var_OpenSSL);
var_OpenSSL = NULL;
Py_XDECREF(var_new_exc);
var_new_exc = NULL;
Py_XDECREF(var_cert);
var_cert = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_mtls_adapter);
var_mtls_adapter = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_client_cert_callback);
Py_DECREF(par_client_cert_callback);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_client_cert_callback);
Py_DECREF(par_client_cert_callback);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$transport$requests$$$function__19_request(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_method = python_pars[1];
PyObject *par_url = python_pars[2];
PyObject *par_data = python_pars[3];
PyObject *par_headers = python_pars[4];
PyObject *par_max_allowed_time = python_pars[5];
PyObject *par_timeout = python_pars[6];
PyObject *par_kwargs = python_pars[7];
PyObject *var__credential_refresh_attempt = NULL;
PyObject *var_request_headers = NULL;
PyObject *var_auth_request = NULL;
PyObject *var_remaining_time = NULL;
PyObject *var_guard = NULL;
PyObject *var_response = NULL;
struct Nuitka_CellObject *var_call_cert_bytes = Nuitka_Cell_NewEmpty();
struct Nuitka_CellObject *var_call_key_bytes = Nuitka_Cell_NewEmpty();
PyObject *var_cached_fingerprint = NULL;
PyObject *var_current_cert_fingerprint = NULL;
PyObject *var_e = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__element_4 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
PyObject *tmp_with_2__enter = NULL;
PyObject *tmp_with_2__exit = NULL;
nuitka_bool tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_2__source = NULL;
PyObject *tmp_with_3__enter = NULL;
PyObject *tmp_with_3__exit = NULL;
nuitka_bool tmp_with_3__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_3__source = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$transport$requests$$$function__19_request;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_2;
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
struct Nuitka_ExceptionStackItem exception_preserved_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionStackItem exception_preserved_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$requests$$$function__19_request = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(par_kwargs);
tmp_dict_arg_value_1 = par_kwargs;
tmp_key_value_1 = mod_consts.const_str_plain__credential_refresh_attempt;
tmp_default_value_1 = const_int_0;
tmp_assign_source_1 = DICT_POP3(tstate, tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
assert(!(tmp_assign_source_1 == NULL));
assert(var__credential_refresh_attempt == NULL);
var__credential_refresh_attempt = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$transport$requests$$$function__19_request)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$requests$$$function__19_request);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$requests$$$function__19_request == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$requests$$$function__19_request = MAKE_FUNCTION_FRAME(tstate, code_objects_808bd59ef2c49bed20d58728db921e6a, module_google$auth$transport$requests, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$requests$$$function__19_request->m_type_description == NULL);
frame_frame_google$auth$transport$requests$$$function__19_request = cache_frame_frame_google$auth$transport$requests$$$function__19_request;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$requests$$$function__19_request);
assert(Py_REFCNT(frame_frame_google$auth$transport$requests$$$function__19_request) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_headers);
tmp_cmp_expr_left_1 = par_headers;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_headers);
tmp_expression_value_1 = par_headers;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_copy);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 525;
type_description_1 = "ooooooooooooooccoooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$requests$$$function__19_request->m_frame.f_lineno = 525;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 525;
type_description_1 = "ooooooooooooooccoooN";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_2 = MAKE_DICT_EMPTY(tstate);
condexpr_end_1:;
assert(var_request_headers == NULL);
var_request_headers = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_dict_value_0_1;
CHECK_OBJECT(par_timeout);
tmp_cmp_expr_left_2 = par_timeout;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__auth_request);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 530;
type_description_1 = "ooooooooooooooccoooN";
    goto frame_exception_exit_1;
}
goto condexpr_end_2;
condexpr_false_2:;
{
    PyObject *hard_module = IMPORT_HARD_FUNCTOOLS();
    tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_partial);
}
assert(!(tmp_called_value_2 == NULL));
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__auth_request);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 532;
type_description_1 = "ooooooooooooooccoooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_timeout);
tmp_kw_call_dict_value_0_1 = par_timeout;
frame_frame_google$auth$transport$requests$$$function__19_request->m_frame.f_lineno = 532;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_timeout_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;
type_description_1 = "ooooooooooooooccoooN";
    goto frame_exception_exit_1;
}
condexpr_end_2:;
assert(var_auth_request == NULL);
var_auth_request = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(par_max_allowed_time);
tmp_assign_source_4 = par_max_allowed_time;
assert(var_remaining_time == NULL);
Py_INCREF(tmp_assign_source_4);
var_remaining_time = tmp_assign_source_4;
}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
tmp_called_value_3 = module_var_accessor_google$auth$transport$requests$TimeoutGuard(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TimeoutGuard);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 537;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_remaining_time);
tmp_args_element_value_1 = var_remaining_time;
frame_frame_google$auth$transport$requests$$$function__19_request->m_frame.f_lineno = 537;
tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 537;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_2;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_4 = tmp_with_1__source;
tmp_called_value_4 = LOOKUP_SPECIAL(tstate, tmp_expression_value_4, const_str_plain___enter__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 537;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_2;
}
frame_frame_google$auth$transport$requests$$$function__19_request->m_frame.f_lineno = 537;
tmp_assign_source_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 537;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_2;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_5 = tmp_with_1__source;
tmp_assign_source_7 = LOOKUP_SPECIAL(tstate, tmp_expression_value_5, const_str_plain___exit__);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 537;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_2;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_7;
}
{
nuitka_bool tmp_assign_source_8;
tmp_assign_source_8 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_9 = tmp_with_1__enter;
assert(var_guard == NULL);
Py_INCREF(tmp_assign_source_9);
var_guard = tmp_assign_source_9;
}
// Tried code:
// Tried code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_credentials);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 538;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_auth_request);
tmp_args_element_value_2 = var_auth_request;
CHECK_OBJECT(par_method);
tmp_args_element_value_3 = par_method;
CHECK_OBJECT(par_url);
tmp_args_element_value_4 = par_url;
CHECK_OBJECT(var_request_headers);
tmp_args_element_value_5 = var_request_headers;
frame_frame_google$auth$transport$requests$$$function__19_request->m_frame.f_lineno = 538;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS4(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_before_request,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 538;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_end_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$requests$$$function__19_request, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$requests$$$function__19_request, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
assert(!(tmp_res == -1));
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
nuitka_bool tmp_assign_source_10;
tmp_assign_source_10 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_10;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
tmp_args_element_value_6 = EXC_TYPE(tstate);
tmp_args_element_value_7 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_7); 
tmp_args_element_value_8 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_8 == NULL) {
    tmp_args_element_value_8 = Py_None;
}
frame_frame_google$auth$transport$requests$$$function__19_request->m_frame.f_lineno = 537;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 537;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_5;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 537;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_5;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 537;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$transport$requests$$$function__19_request->m_frame)) {
        frame_frame_google$auth$transport$requests$$$function__19_request->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooooccoooN";
goto try_except_handler_5;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 537;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$transport$requests$$$function__19_request->m_frame)) {
        frame_frame_google$auth$transport$requests$$$function__19_request->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooooccoooN";
goto try_except_handler_5;
branch_end_1:;
goto try_end_2;
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
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_4;
nuitka_bool tmp_cmp_expr_right_4;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_4 = tmp_with_1__indicator;
tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_5 != false) {
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
frame_frame_google$auth$transport$requests$$$function__19_request->m_frame.f_lineno = 537;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 537;
type_description_1 = "ooooooooooooooccoooN";
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
{
bool tmp_condition_result_6;
nuitka_bool tmp_cmp_expr_left_5;
nuitka_bool tmp_cmp_expr_right_5;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_5 = tmp_with_1__indicator;
tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
tmp_condition_result_6 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_7 = tmp_with_1__exit;
frame_frame_google$auth$transport$requests$$$function__19_request->m_frame.f_lineno = 537;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_7, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 537;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_4:;
goto try_end_4;
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
{
PyObject *tmp_assign_source_11;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var_guard);
tmp_expression_value_7 = var_guard;
tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_remaining_timeout);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 539;
type_description_1 = "ooooooooooooooccoooN";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_remaining_time;
    assert(old != NULL);
    var_remaining_time = tmp_assign_source_11;
    Py_DECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_9;
tmp_called_value_8 = module_var_accessor_google$auth$transport$requests$TimeoutGuard(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TimeoutGuard);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 541;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_remaining_time);
tmp_args_element_value_9 = var_remaining_time;
frame_frame_google$auth$transport$requests$$$function__19_request->m_frame.f_lineno = 541;
tmp_assign_source_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_9);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 541;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_6;
}
assert(tmp_with_2__source == NULL);
tmp_with_2__source = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(tmp_with_2__source);
tmp_expression_value_8 = tmp_with_2__source;
tmp_called_value_9 = LOOKUP_SPECIAL(tstate, tmp_expression_value_8, const_str_plain___enter__);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 541;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_6;
}
frame_frame_google$auth$transport$requests$$$function__19_request->m_frame.f_lineno = 541;
tmp_assign_source_13 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_9);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 541;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_6;
}
assert(tmp_with_2__enter == NULL);
tmp_with_2__enter = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(tmp_with_2__source);
tmp_expression_value_9 = tmp_with_2__source;
tmp_assign_source_14 = LOOKUP_SPECIAL(tstate, tmp_expression_value_9, const_str_plain___exit__);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 541;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_6;
}
assert(tmp_with_2__exit == NULL);
tmp_with_2__exit = tmp_assign_source_14;
}
{
nuitka_bool tmp_assign_source_15;
tmp_assign_source_15 = NUITKA_BOOL_TRUE;
tmp_with_2__indicator = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_with_2__enter);
tmp_assign_source_16 = tmp_with_2__enter;
{
    PyObject *old = var_guard;
    assert(old != NULL);
    var_guard = tmp_assign_source_16;
    Py_INCREF(var_guard);
    Py_DECREF(old);
}

}
// Tried code:
// Tried code:
{
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_10;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
tmp_expression_value_10 = module_var_accessor_google$auth$transport$requests$_helpers(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 542;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_8;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_request_log);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_8;
}
tmp_args_element_value_10 = module_var_accessor_google$auth$transport$requests$_LOGGER(tstate);
if (unlikely(tmp_args_element_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__LOGGER);
}

if (tmp_args_element_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_10);

exception_lineno = 542;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_8;
}
CHECK_OBJECT(par_method);
tmp_args_element_value_11 = par_method;
CHECK_OBJECT(par_url);
tmp_args_element_value_12 = par_url;
CHECK_OBJECT(par_data);
tmp_args_element_value_13 = par_data;
CHECK_OBJECT(par_headers);
tmp_args_element_value_14 = par_headers;
frame_frame_google$auth$transport$requests$$$function__19_request->m_frame.f_lineno = 542;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_10, call_args);
}

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_direct_call_arg4_1;
tmp_type_arg_value_1 = module_var_accessor_google$auth$transport$requests$AuthorizedSession(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AuthorizedSession);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 543;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_8;
}
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_11 = BUILTIN_SUPER2(tstate, moduledict_google$auth$transport$requests, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 543;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_8;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_request);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 543;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_8;
}
CHECK_OBJECT(par_method);
tmp_tuple_element_1 = par_method;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_url);
tmp_tuple_element_1 = par_url;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_1);
tmp_dict_key_1 = mod_consts.const_str_plain_data;
CHECK_OBJECT(par_data);
tmp_dict_value_1 = par_data;
tmp_direct_call_arg3_1 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_headers;
CHECK_OBJECT(var_request_headers);
tmp_dict_value_1 = var_request_headers;
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_timeout;
CHECK_OBJECT(par_timeout);
tmp_dict_value_1 = par_timeout;
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg4_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg4_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
    tmp_assign_source_17 = impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 543;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_8;
}
assert(var_response == NULL);
var_response = tmp_assign_source_17;
}
goto try_end_5;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$requests$$$function__19_request, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$requests$$$function__19_request, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
tmp_cmp_expr_left_6 = EXC_TYPE(tstate);
tmp_cmp_expr_right_6 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
assert(!(tmp_res == -1));
tmp_condition_result_7 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
nuitka_bool tmp_assign_source_18;
tmp_assign_source_18 = NUITKA_BOOL_FALSE;
tmp_with_2__indicator = tmp_assign_source_18;
}
{
bool tmp_condition_result_8;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
PyObject *tmp_args_element_value_17;
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_11 = tmp_with_2__exit;
tmp_args_element_value_15 = EXC_TYPE(tstate);
tmp_args_element_value_16 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_16); 
tmp_args_element_value_17 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_17 == NULL) {
    tmp_args_element_value_17 = Py_None;
}
frame_frame_google$auth$transport$requests$$$function__19_request->m_frame.f_lineno = 541;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_11, call_args);
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 541;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_9;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 541;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_9;
}
tmp_condition_result_8 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 541;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$transport$requests$$$function__19_request->m_frame)) {
        frame_frame_google$auth$transport$requests$$$function__19_request->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooooccoooN";
goto try_except_handler_9;
branch_no_6:;
goto branch_end_5;
branch_no_5:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 541;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$transport$requests$$$function__19_request->m_frame)) {
        frame_frame_google$auth$transport$requests$$$function__19_request->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooooccoooN";
goto try_except_handler_9;
branch_end_5:;
goto try_end_6;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_7;
// End of try:
try_end_6:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_5;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_5:;
goto try_end_7;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_9;
nuitka_bool tmp_cmp_expr_left_7;
nuitka_bool tmp_cmp_expr_right_7;
assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_7 = tmp_with_2__indicator;
tmp_cmp_expr_right_7 = NUITKA_BOOL_TRUE;
tmp_condition_result_9 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_value_12;
PyObject *tmp_call_result_5;
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_12 = tmp_with_2__exit;
frame_frame_google$auth$transport$requests$$$function__19_request->m_frame.f_lineno = 541;
tmp_call_result_5 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_12, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_7);

exception_lineno = 541;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_6;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_no_7:;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_6;
// End of try:
try_end_7:;
{
bool tmp_condition_result_10;
nuitka_bool tmp_cmp_expr_left_8;
nuitka_bool tmp_cmp_expr_right_8;
assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_8 = tmp_with_2__indicator;
tmp_cmp_expr_right_8 = NUITKA_BOOL_TRUE;
tmp_condition_result_10 = (tmp_cmp_expr_left_8 == tmp_cmp_expr_right_8) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_called_value_13;
PyObject *tmp_call_result_6;
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_13 = tmp_with_2__exit;
frame_frame_google$auth$transport$requests$$$function__19_request->m_frame.f_lineno = 541;
tmp_call_result_6 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_13, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 541;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_6;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
branch_no_8:;
goto try_end_8;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_2__source);
tmp_with_2__source = NULL;
Py_XDECREF(tmp_with_2__enter);
tmp_with_2__enter = NULL;
Py_XDECREF(tmp_with_2__exit);
tmp_with_2__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
CHECK_OBJECT(tmp_with_2__source);
CHECK_OBJECT(tmp_with_2__source);
Py_DECREF(tmp_with_2__source);
tmp_with_2__source = NULL;
CHECK_OBJECT(tmp_with_2__enter);
CHECK_OBJECT(tmp_with_2__enter);
Py_DECREF(tmp_with_2__enter);
tmp_with_2__enter = NULL;
CHECK_OBJECT(tmp_with_2__exit);
CHECK_OBJECT(tmp_with_2__exit);
Py_DECREF(tmp_with_2__exit);
tmp_with_2__exit = NULL;
{
PyObject *tmp_assign_source_19;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(var_guard);
tmp_expression_value_12 = var_guard;
tmp_assign_source_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_remaining_timeout);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 551;
type_description_1 = "ooooooooooooooccoooN";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_remaining_time;
    assert(old != NULL);
    var_remaining_time = tmp_assign_source_19;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_11;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
PyObject *tmp_expression_value_15;
if (var_response == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_response);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 559;
type_description_1 = "ooooooooooooooccoooN";
    goto frame_exception_exit_1;
}

tmp_expression_value_13 = var_response;
tmp_cmp_expr_left_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_status_code);
if (tmp_cmp_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 559;
type_description_1 = "ooooooooooooooccoooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_14 = par_self;
tmp_cmp_expr_right_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain__refresh_status_codes);
if (tmp_cmp_expr_right_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_9);

exception_lineno = 559;
type_description_1 = "ooooooooooooooccoooN";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_9, tmp_cmp_expr_left_9);
CHECK_OBJECT(tmp_cmp_expr_left_9);
Py_DECREF(tmp_cmp_expr_left_9);
CHECK_OBJECT(tmp_cmp_expr_right_9);
Py_DECREF(tmp_cmp_expr_right_9);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 559;
type_description_1 = "ooooooooooooooccoooN";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var__credential_refresh_attempt);
tmp_cmp_expr_left_10 = var__credential_refresh_attempt;
CHECK_OBJECT(par_self);
tmp_expression_value_15 = par_self;
tmp_cmp_expr_right_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain__max_refresh_attempts);
if (tmp_cmp_expr_right_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 560;
type_description_1 = "ooooooooooooooccoooN";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
CHECK_OBJECT(tmp_cmp_expr_right_10);
Py_DECREF(tmp_cmp_expr_right_10);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 560;
type_description_1 = "ooooooooooooooccoooN";
    goto frame_exception_exit_1;
}
tmp_condition_result_11 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_11 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
if (var_response == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_response);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 563;
type_description_1 = "ooooooooooooooccoooN";
    goto frame_exception_exit_1;
}

tmp_expression_value_16 = var_response;
tmp_cmp_expr_left_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_status_code);
if (tmp_cmp_expr_left_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 563;
type_description_1 = "ooooooooooooooccoooN";
    goto frame_exception_exit_1;
}
tmp_expression_value_17 = module_var_accessor_google$auth$transport$requests$http_client(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_http_client);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_11);

exception_lineno = 563;
type_description_1 = "ooooooooooooooccoooN";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_UNAUTHORIZED);
if (tmp_cmp_expr_right_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_11);

exception_lineno = 563;
type_description_1 = "ooooooooooooooccoooN";
    goto frame_exception_exit_1;
}
tmp_condition_result_12 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
CHECK_OBJECT(tmp_cmp_expr_left_11);
Py_DECREF(tmp_cmp_expr_left_11);
CHECK_OBJECT(tmp_cmp_expr_right_11);
Py_DECREF(tmp_cmp_expr_right_11);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 563;
type_description_1 = "ooooooooooooooccoooN";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
nuitka_bool tmp_condition_result_13;
PyObject *tmp_expression_value_18;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_18 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_is_mtls);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 564;
type_description_1 = "ooooooooooooooccoooN";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 564;
type_description_1 = "ooooooooooooooccoooN";
    goto frame_exception_exit_1;
}
tmp_condition_result_13 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
// Tried code:
{
PyObject *tmp_assign_source_20;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_19;
PyObject *tmp_args_element_value_18;
PyObject *tmp_expression_value_20;
tmp_expression_value_19 = module_var_accessor_google$auth$transport$requests$_mtls_helper(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__mtls_helper);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 570;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_10;
}
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_digest_9c6282b2dbf04df40c6c5a284a6ccbac);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 570;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_10;
}
CHECK_OBJECT(par_self);
tmp_expression_value_20 = par_self;
tmp_args_element_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain__cached_cert);
if (tmp_args_element_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_14);

exception_lineno = 571;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_10;
}
frame_frame_google$auth$transport$requests$$$function__19_request->m_frame.f_lineno = 570;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_18);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 570;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_10;
}
tmp_assign_source_20 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 565;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_10;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_20;
}
// Tried code:
{
PyObject *tmp_assign_source_21;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_21 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 4);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 565;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_11;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_22 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 4);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 565;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_11;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_23 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 4);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 565;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_11;
}
assert(tmp_tuple_unpack_1__element_3 == NULL);
tmp_tuple_unpack_1__element_3 = tmp_assign_source_23;
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_24 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 3, 4);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 565;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_11;
}
assert(tmp_tuple_unpack_1__element_4 == NULL);
tmp_tuple_unpack_1__element_4 = tmp_assign_source_24;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 4);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 565;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_11;
}
}
goto try_end_9;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_10;
// End of try:
try_end_9:;
goto try_end_10;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
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
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_25;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_25 = tmp_tuple_unpack_1__element_1;
assert(Nuitka_Cell_GET(var_call_cert_bytes) == NULL);
Py_INCREF(tmp_assign_source_25);
Nuitka_Cell_SET(var_call_cert_bytes, tmp_assign_source_25);

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_26;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_26 = tmp_tuple_unpack_1__element_2;
assert(Nuitka_Cell_GET(var_call_key_bytes) == NULL);
Py_INCREF(tmp_assign_source_26);
Nuitka_Cell_SET(var_call_key_bytes, tmp_assign_source_26);

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_27;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_27 = tmp_tuple_unpack_1__element_3;
assert(var_cached_fingerprint == NULL);
Py_INCREF(tmp_assign_source_27);
var_cached_fingerprint = tmp_assign_source_27;
}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_assign_source_28;
CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
tmp_assign_source_28 = tmp_tuple_unpack_1__element_4;
assert(var_current_cert_fingerprint == NULL);
Py_INCREF(tmp_assign_source_28);
var_current_cert_fingerprint = tmp_assign_source_28;
}
Py_XDECREF(tmp_tuple_unpack_1__element_4);
tmp_tuple_unpack_1__element_4 = NULL;

{
nuitka_bool tmp_condition_result_14;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
CHECK_OBJECT(var_cached_fingerprint);
tmp_cmp_expr_left_12 = var_cached_fingerprint;
CHECK_OBJECT(var_current_cert_fingerprint);
tmp_cmp_expr_right_12 = var_current_cert_fingerprint;
tmp_condition_result_14 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 573;
type_description_1 = "ooooooooooooooccoooN";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
// Tried code:
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_7;
tmp_called_instance_2 = module_var_accessor_google$auth$transport$requests$_LOGGER(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__LOGGER);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 575;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_12;
}
frame_frame_google$auth$transport$requests$$$function__19_request->m_frame.f_lineno = 575;
tmp_call_result_7 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_info,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_11b79211eb78aab604f32970bc12fdd8_tuple, 0)
);

if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 575;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_12;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_8;
PyObject *tmp_args_element_value_19;
struct Nuitka_CellObject *tmp_closure_1[2];
CHECK_OBJECT(par_self);
tmp_called_instance_3 = par_self;
tmp_closure_1[0] = var_call_cert_bytes;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = var_call_key_bytes;
Py_INCREF(tmp_closure_1[1]);
tmp_args_element_value_19 = MAKE_FUNCTION_google$auth$transport$requests$$$function__19_request$$$function__1_lambda(tstate, tmp_closure_1);

frame_frame_google$auth$transport$requests$$$function__19_request->m_frame.f_lineno = 579;
tmp_call_result_8 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_configure_mtls_channel, tmp_args_element_value_19);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 579;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_12;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}
goto try_end_11;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 3.
exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_11);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$requests$$$function__19_request, exception_keeper_lineno_11);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_11, exception_tb);
    } else if (exception_keeper_lineno_11 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$requests$$$function__19_request, exception_keeper_lineno_11);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_11, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_11);
// Tried code:
{
bool tmp_condition_result_15;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
tmp_cmp_expr_left_13 = EXC_TYPE(tstate);
tmp_cmp_expr_right_13 = PyExc_Exception;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
assert(!(tmp_res == -1));
tmp_condition_result_15 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_15 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_29); 
assert(var_e == NULL);
Py_INCREF(tmp_assign_source_29);
var_e = tmp_assign_source_29;
}
// Tried code:
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_9;
PyObject *tmp_args_element_value_20;
PyObject *tmp_args_element_value_21;
tmp_called_instance_4 = module_var_accessor_google$auth$transport$requests$_LOGGER(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__LOGGER);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 583;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_14;
}
tmp_args_element_value_20 = mod_consts.const_str_digest_a0b47a64c5473ddd47f1e4be7a79b5c9;
CHECK_OBJECT(var_e);
tmp_args_element_value_21 = var_e;
frame_frame_google$auth$transport$requests$$$function__19_request->m_frame.f_lineno = 583;
{
    PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21};
    tmp_call_result_9 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_4,
        mod_consts.const_str_plain_error,
        call_args
    );
}

if (tmp_call_result_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 583;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_14;
}
CHECK_OBJECT(tmp_call_result_9);
Py_DECREF(tmp_call_result_9);
}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_5;
PyObject *tmp_raise_cause_1;
tmp_called_instance_5 = module_var_accessor_google$auth$transport$requests$exceptions(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 584;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_14;
}
frame_frame_google$auth$transport$requests$$$function__19_request->m_frame.f_lineno = 584;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_5,
    mod_consts.const_str_plain_MutualTLSChannelError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_186c299e8be69d55a48248e8124f43dd_tuple, 0)
);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 584;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_14;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 584;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_14;
}
CHECK_OBJECT(var_e);
tmp_raise_cause_1 = var_e;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 586;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "ooooooooooooooccoooN";
goto try_except_handler_14;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto try_except_handler_13;
// End of try:
goto branch_end_13;
branch_no_13:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 574;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$transport$requests$$$function__19_request->m_frame)) {
        frame_frame_google$auth$transport$requests$$$function__19_request->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooooccoooN";
goto try_except_handler_13;
branch_end_13:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_11:;
goto branch_end_12;
branch_no_12:;
{
PyObject *tmp_called_instance_6;
PyObject *tmp_call_result_10;
tmp_called_instance_6 = module_var_accessor_google$auth$transport$requests$_LOGGER(tstate);
if (unlikely(tmp_called_instance_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__LOGGER);
}

if (tmp_called_instance_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 588;
type_description_1 = "ooooooooooooooccoooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$requests$$$function__19_request->m_frame.f_lineno = 588;
tmp_call_result_10 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_6,
    mod_consts.const_str_plain_info,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_03a12a27798cdd7cbf8dec2509a95d87_tuple, 0)
);

if (tmp_call_result_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 588;
type_description_1 = "ooooooooooooooccoooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_10);
Py_DECREF(tmp_call_result_10);
}
branch_end_12:;
branch_no_11:;
branch_no_10:;
{
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_21;
PyObject *tmp_call_result_11;
PyObject *tmp_args_element_value_22;
PyObject *tmp_args_element_value_23;
PyObject *tmp_expression_value_22;
PyObject *tmp_args_element_value_24;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_args_element_value_25;
PyObject *tmp_expression_value_23;
tmp_expression_value_21 = module_var_accessor_google$auth$transport$requests$_LOGGER(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__LOGGER);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 592;
type_description_1 = "ooooooooooooooccoooN";
    goto frame_exception_exit_1;
}
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_info);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 592;
type_description_1 = "ooooooooooooooccoooN";
    goto frame_exception_exit_1;
}
tmp_args_element_value_22 = mod_consts.const_str_digest_d9e81f8c6298d7185f9559e289c32471;
if (var_response == NULL) {
Py_DECREF(tmp_called_value_15);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_response);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 594;
type_description_1 = "ooooooooooooooccoooN";
    goto frame_exception_exit_1;
}

tmp_expression_value_22 = var_response;
tmp_args_element_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_status_code);
if (tmp_args_element_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_15);

exception_lineno = 594;
type_description_1 = "ooooooooooooooccoooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var__credential_refresh_attempt);
tmp_add_expr_left_1 = var__credential_refresh_attempt;
tmp_add_expr_right_1 = const_int_pos_1;
tmp_args_element_value_24 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_args_element_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_15);
Py_DECREF(tmp_args_element_value_23);

exception_lineno = 595;
type_description_1 = "ooooooooooooooccoooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_23 = par_self;
tmp_args_element_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain__max_refresh_attempts);
if (tmp_args_element_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_15);
Py_DECREF(tmp_args_element_value_23);
Py_DECREF(tmp_args_element_value_24);

exception_lineno = 596;
type_description_1 = "ooooooooooooooccoooN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$requests$$$function__19_request->m_frame.f_lineno = 592;
{
    PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25};
    tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_15, call_args);
}

CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_element_value_23);
Py_DECREF(tmp_args_element_value_23);
CHECK_OBJECT(tmp_args_element_value_24);
Py_DECREF(tmp_args_element_value_24);
CHECK_OBJECT(tmp_args_element_value_25);
Py_DECREF(tmp_args_element_value_25);
if (tmp_call_result_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 592;
type_description_1 = "ooooooooooooooccoooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_11);
Py_DECREF(tmp_call_result_11);
}
{
PyObject *tmp_assign_source_30;
bool tmp_condition_result_16;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
PyObject *tmp_expression_value_24;
PyObject *tmp_called_value_16;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_expression_value_25;
PyObject *tmp_kw_call_dict_value_0_2;
CHECK_OBJECT(par_timeout);
tmp_cmp_expr_left_14 = par_timeout;
tmp_cmp_expr_right_14 = Py_None;
tmp_condition_result_16 = (tmp_cmp_expr_left_14 == tmp_cmp_expr_right_14) ? true : false;
if (tmp_condition_result_16 != false) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(par_self);
tmp_expression_value_24 = par_self;
tmp_assign_source_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain__auth_request);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 602;
type_description_1 = "ooooooooooooooccoooN";
    goto frame_exception_exit_1;
}
goto condexpr_end_3;
condexpr_false_3:;
{
    PyObject *hard_module = IMPORT_HARD_FUNCTOOLS();
    tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_partial);
}
assert(!(tmp_called_value_16 == NULL));
CHECK_OBJECT(par_self);
tmp_expression_value_25 = par_self;
tmp_kw_call_arg_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain__auth_request);
if (tmp_kw_call_arg_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_16);

exception_lineno = 604;
type_description_1 = "ooooooooooooooccoooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_timeout);
tmp_kw_call_dict_value_0_2 = par_timeout;
frame_frame_google$auth$transport$requests$$$function__19_request->m_frame.f_lineno = 604;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_16, args, kw_values, mod_consts.const_tuple_str_plain_timeout_tuple);
}

CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_arg_value_0_2);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 604;
type_description_1 = "ooooooooooooooccoooN";
    goto frame_exception_exit_1;
}
condexpr_end_3:;
{
    PyObject *old = var_auth_request;
    assert(old != NULL);
    var_auth_request = tmp_assign_source_30;
    Py_DECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_31;
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_26;
tmp_called_value_17 = module_var_accessor_google$auth$transport$requests$TimeoutGuard(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TimeoutGuard);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 607;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_15;
}
CHECK_OBJECT(var_remaining_time);
tmp_args_element_value_26 = var_remaining_time;
frame_frame_google$auth$transport$requests$$$function__19_request->m_frame.f_lineno = 607;
tmp_assign_source_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_26);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_15;
}
assert(tmp_with_3__source == NULL);
tmp_with_3__source = tmp_assign_source_31;
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_26;
CHECK_OBJECT(tmp_with_3__source);
tmp_expression_value_26 = tmp_with_3__source;
tmp_called_value_18 = LOOKUP_SPECIAL(tstate, tmp_expression_value_26, const_str_plain___enter__);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_15;
}
frame_frame_google$auth$transport$requests$$$function__19_request->m_frame.f_lineno = 607;
tmp_assign_source_32 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_18);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_15;
}
assert(tmp_with_3__enter == NULL);
tmp_with_3__enter = tmp_assign_source_32;
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_expression_value_27;
CHECK_OBJECT(tmp_with_3__source);
tmp_expression_value_27 = tmp_with_3__source;
tmp_assign_source_33 = LOOKUP_SPECIAL(tstate, tmp_expression_value_27, const_str_plain___exit__);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_15;
}
assert(tmp_with_3__exit == NULL);
tmp_with_3__exit = tmp_assign_source_33;
}
{
nuitka_bool tmp_assign_source_34;
tmp_assign_source_34 = NUITKA_BOOL_TRUE;
tmp_with_3__indicator = tmp_assign_source_34;
}
{
PyObject *tmp_assign_source_35;
CHECK_OBJECT(tmp_with_3__enter);
tmp_assign_source_35 = tmp_with_3__enter;
{
    PyObject *old = var_guard;
    assert(old != NULL);
    var_guard = tmp_assign_source_35;
    Py_INCREF(var_guard);
    Py_DECREF(old);
}

}
// Tried code:
// Tried code:
{
PyObject *tmp_called_instance_7;
PyObject *tmp_expression_value_28;
PyObject *tmp_call_result_12;
PyObject *tmp_args_element_value_27;
CHECK_OBJECT(par_self);
tmp_expression_value_28 = par_self;
tmp_called_instance_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_credentials);
if (tmp_called_instance_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 608;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_17;
}
CHECK_OBJECT(var_auth_request);
tmp_args_element_value_27 = var_auth_request;
frame_frame_google$auth$transport$requests$$$function__19_request->m_frame.f_lineno = 608;
tmp_call_result_12 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts.const_str_plain_refresh, tmp_args_element_value_27);
CHECK_OBJECT(tmp_called_instance_7);
Py_DECREF(tmp_called_instance_7);
if (tmp_call_result_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 608;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_17;
}
CHECK_OBJECT(tmp_call_result_12);
Py_DECREF(tmp_call_result_12);
}
goto try_end_12;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 4.
exception_preserved_4 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_14);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$requests$$$function__19_request, exception_keeper_lineno_14);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_14, exception_tb);
    } else if (exception_keeper_lineno_14 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$requests$$$function__19_request, exception_keeper_lineno_14);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_14, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_14);
// Tried code:
{
bool tmp_condition_result_17;
PyObject *tmp_cmp_expr_left_15;
PyObject *tmp_cmp_expr_right_15;
tmp_cmp_expr_left_15 = EXC_TYPE(tstate);
tmp_cmp_expr_right_15 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
assert(!(tmp_res == -1));
tmp_condition_result_17 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_17 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
nuitka_bool tmp_assign_source_36;
tmp_assign_source_36 = NUITKA_BOOL_FALSE;
tmp_with_3__indicator = tmp_assign_source_36;
}
{
bool tmp_condition_result_18;
PyObject *tmp_operand_value_3;
PyObject *tmp_called_value_19;
PyObject *tmp_args_element_value_28;
PyObject *tmp_args_element_value_29;
PyObject *tmp_args_element_value_30;
CHECK_OBJECT(tmp_with_3__exit);
tmp_called_value_19 = tmp_with_3__exit;
tmp_args_element_value_28 = EXC_TYPE(tstate);
tmp_args_element_value_29 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_29); 
tmp_args_element_value_30 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_30 == NULL) {
    tmp_args_element_value_30 = Py_None;
}
frame_frame_google$auth$transport$requests$$$function__19_request->m_frame.f_lineno = 607;
{
    PyObject *call_args[] = {tmp_args_element_value_28, tmp_args_element_value_29, tmp_args_element_value_30};
    tmp_operand_value_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_19, call_args);
}

if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_18;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_18;
}
tmp_condition_result_18 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_18 != false) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 607;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$transport$requests$$$function__19_request->m_frame)) {
        frame_frame_google$auth$transport$requests$$$function__19_request->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooooccoooN";
goto try_except_handler_18;
branch_no_15:;
goto branch_end_14;
branch_no_14:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 607;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$transport$requests$$$function__19_request->m_frame)) {
        frame_frame_google$auth$transport$requests$$$function__19_request->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooooccoooN";
goto try_except_handler_18;
branch_end_14:;
goto try_end_13;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 4.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_4);

// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto try_except_handler_16;
// End of try:
try_end_13:;
// Restore previous exception id 4.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_4);

goto try_end_12;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_12:;
goto try_end_14;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_19;
nuitka_bool tmp_cmp_expr_left_16;
nuitka_bool tmp_cmp_expr_right_16;
assert(tmp_with_3__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_16 = tmp_with_3__indicator;
tmp_cmp_expr_right_16 = NUITKA_BOOL_TRUE;
tmp_condition_result_19 = (tmp_cmp_expr_left_16 == tmp_cmp_expr_right_16) ? true : false;
if (tmp_condition_result_19 != false) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_called_value_20;
PyObject *tmp_call_result_13;
CHECK_OBJECT(tmp_with_3__exit);
tmp_called_value_20 = tmp_with_3__exit;
frame_frame_google$auth$transport$requests$$$function__19_request->m_frame.f_lineno = 607;
tmp_call_result_13 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_20, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_16);

exception_lineno = 607;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_15;
}
CHECK_OBJECT(tmp_call_result_13);
Py_DECREF(tmp_call_result_13);
}
branch_no_16:;
// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto try_except_handler_15;
// End of try:
try_end_14:;
{
bool tmp_condition_result_20;
nuitka_bool tmp_cmp_expr_left_17;
nuitka_bool tmp_cmp_expr_right_17;
assert(tmp_with_3__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_17 = tmp_with_3__indicator;
tmp_cmp_expr_right_17 = NUITKA_BOOL_TRUE;
tmp_condition_result_20 = (tmp_cmp_expr_left_17 == tmp_cmp_expr_right_17) ? true : false;
if (tmp_condition_result_20 != false) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
{
PyObject *tmp_called_value_21;
PyObject *tmp_call_result_14;
CHECK_OBJECT(tmp_with_3__exit);
tmp_called_value_21 = tmp_with_3__exit;
frame_frame_google$auth$transport$requests$$$function__19_request->m_frame.f_lineno = 607;
tmp_call_result_14 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_21, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;
type_description_1 = "ooooooooooooooccoooN";
    goto try_except_handler_15;
}
CHECK_OBJECT(tmp_call_result_14);
Py_DECREF(tmp_call_result_14);
}
branch_no_17:;
goto try_end_15;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_3__source);
tmp_with_3__source = NULL;
Py_XDECREF(tmp_with_3__enter);
tmp_with_3__enter = NULL;
Py_XDECREF(tmp_with_3__exit);
tmp_with_3__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto frame_exception_exit_1;
// End of try:
try_end_15:;
CHECK_OBJECT(tmp_with_3__source);
CHECK_OBJECT(tmp_with_3__source);
Py_DECREF(tmp_with_3__source);
tmp_with_3__source = NULL;
CHECK_OBJECT(tmp_with_3__enter);
CHECK_OBJECT(tmp_with_3__enter);
Py_DECREF(tmp_with_3__enter);
tmp_with_3__enter = NULL;
CHECK_OBJECT(tmp_with_3__exit);
CHECK_OBJECT(tmp_with_3__exit);
Py_DECREF(tmp_with_3__exit);
tmp_with_3__exit = NULL;
{
PyObject *tmp_assign_source_37;
PyObject *tmp_expression_value_29;
CHECK_OBJECT(var_guard);
tmp_expression_value_29 = var_guard;
tmp_assign_source_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_remaining_timeout);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 609;
type_description_1 = "ooooooooooooooccoooN";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_remaining_time;
    assert(old != NULL);
    var_remaining_time = tmp_assign_source_37;
    Py_DECREF(old);
}

}
{
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_expression_value_30;
PyObject *tmp_direct_call_arg2_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_direct_call_arg3_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_direct_call_arg4_2;
CHECK_OBJECT(par_self);
tmp_expression_value_30 = par_self;
tmp_direct_call_arg1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_request);
if (tmp_direct_call_arg1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 613;
type_description_1 = "ooooooooooooooccoooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_method);
tmp_tuple_element_2 = par_method;
tmp_direct_call_arg2_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_url);
tmp_tuple_element_2 = par_url;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_2, 1, tmp_tuple_element_2);
tmp_dict_key_2 = mod_consts.const_str_plain_data;
CHECK_OBJECT(par_data);
tmp_dict_value_2 = par_data;
tmp_direct_call_arg3_2 = _PyDict_NewPresized( 5 );
{
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_headers;
CHECK_OBJECT(par_headers);
tmp_dict_value_2 = par_headers;
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_max_allowed_time;
CHECK_OBJECT(var_remaining_time);
tmp_dict_value_2 = var_remaining_time;
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_timeout;
CHECK_OBJECT(par_timeout);
tmp_dict_value_2 = par_timeout;
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain__credential_refresh_attempt;
CHECK_OBJECT(var__credential_refresh_attempt);
tmp_add_expr_left_2 = var__credential_refresh_attempt;
tmp_add_expr_right_2 = const_int_pos_1;
tmp_dict_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 620;
type_description_1 = "ooooooooooooooccoooN";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_direct_call_arg1_2);
Py_DECREF(tmp_direct_call_arg2_2);
Py_DECREF(tmp_direct_call_arg3_2);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg4_2 = par_kwargs;
Py_INCREF(tmp_direct_call_arg4_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2, tmp_direct_call_arg2_2, tmp_direct_call_arg3_2, tmp_direct_call_arg4_2};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 613;
type_description_1 = "ooooooooooooooccoooN";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_9:;
if (var_response == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_response);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 624;
type_description_1 = "ooooooooooooooccoooN";
    goto frame_exception_exit_1;
}

tmp_return_value = var_response;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$requests$$$function__19_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$requests$$$function__19_request->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$requests$$$function__19_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$requests$$$function__19_request,
    type_description_1,
    par_self,
    par_method,
    par_url,
    par_data,
    par_headers,
    par_max_allowed_time,
    par_timeout,
    par_kwargs,
    var__credential_refresh_attempt,
    var_request_headers,
    var_auth_request,
    var_remaining_time,
    var_guard,
    var_response,
    var_call_cert_bytes,
    var_call_key_bytes,
    var_cached_fingerprint,
    var_current_cert_fingerprint,
    var_e,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$requests$$$function__19_request == cache_frame_frame_google$auth$transport$requests$$$function__19_request) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$requests$$$function__19_request);
    cache_frame_frame_google$auth$transport$requests$$$function__19_request = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$requests$$$function__19_request);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var__credential_refresh_attempt);
CHECK_OBJECT(var__credential_refresh_attempt);
Py_DECREF(var__credential_refresh_attempt);
var__credential_refresh_attempt = NULL;
CHECK_OBJECT(var_request_headers);
CHECK_OBJECT(var_request_headers);
Py_DECREF(var_request_headers);
var_request_headers = NULL;
Py_XDECREF(var_auth_request);
var_auth_request = NULL;
Py_XDECREF(var_remaining_time);
var_remaining_time = NULL;
Py_XDECREF(var_guard);
var_guard = NULL;
Py_XDECREF(var_response);
var_response = NULL;
CHECK_OBJECT(var_call_cert_bytes);
CHECK_OBJECT(var_call_cert_bytes);
Py_DECREF(var_call_cert_bytes);
var_call_cert_bytes = NULL;
CHECK_OBJECT(var_call_key_bytes);
CHECK_OBJECT(var_call_key_bytes);
Py_DECREF(var_call_key_bytes);
var_call_key_bytes = NULL;
Py_XDECREF(var_cached_fingerprint);
var_cached_fingerprint = NULL;
Py_XDECREF(var_current_cert_fingerprint);
var_current_cert_fingerprint = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var__credential_refresh_attempt);
CHECK_OBJECT(var__credential_refresh_attempt);
Py_DECREF(var__credential_refresh_attempt);
var__credential_refresh_attempt = NULL;
Py_XDECREF(var_request_headers);
var_request_headers = NULL;
Py_XDECREF(var_auth_request);
var_auth_request = NULL;
Py_XDECREF(var_remaining_time);
var_remaining_time = NULL;
Py_XDECREF(var_guard);
var_guard = NULL;
Py_XDECREF(var_response);
var_response = NULL;
CHECK_OBJECT(var_call_cert_bytes);
CHECK_OBJECT(var_call_cert_bytes);
Py_DECREF(var_call_cert_bytes);
var_call_cert_bytes = NULL;
CHECK_OBJECT(var_call_key_bytes);
CHECK_OBJECT(var_call_key_bytes);
Py_DECREF(var_call_key_bytes);
var_call_key_bytes = NULL;
Py_XDECREF(var_cached_fingerprint);
var_cached_fingerprint = NULL;
Py_XDECREF(var_current_cert_fingerprint);
var_current_cert_fingerprint = NULL;
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
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_max_allowed_time);
Py_DECREF(par_max_allowed_time);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_max_allowed_time);
Py_DECREF(par_max_allowed_time);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$transport$requests$$$function__19_request$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_google$auth$transport$requests$$$function__19_request$$$function__1_lambda;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$requests$$$function__19_request$$$function__1_lambda = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$transport$requests$$$function__19_request$$$function__1_lambda)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$requests$$$function__19_request$$$function__1_lambda);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$requests$$$function__19_request$$$function__1_lambda == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$requests$$$function__19_request$$$function__1_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_8d2b1fca2f3bc9f911ced808cc05bc34, module_google$auth$transport$requests, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$requests$$$function__19_request$$$function__1_lambda->m_type_description == NULL);
frame_frame_google$auth$transport$requests$$$function__19_request$$$function__1_lambda = cache_frame_frame_google$auth$transport$requests$$$function__19_request$$$function__1_lambda;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$requests$$$function__19_request$$$function__1_lambda);
assert(Py_REFCNT(frame_frame_google$auth$transport$requests$$$function__19_request$$$function__1_lambda) == 2);

// Framed code:
{
PyObject *tmp_tuple_element_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_call_cert_bytes);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 580;
type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_call_key_bytes);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 580;
type_description_1 = "cc";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[1]);
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$requests$$$function__19_request$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$requests$$$function__19_request$$$function__1_lambda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$requests$$$function__19_request$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$requests$$$function__19_request$$$function__1_lambda,
    type_description_1,
    self->m_closure[0],
    self->m_closure[1]
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$requests$$$function__19_request$$$function__1_lambda == cache_frame_frame_google$auth$transport$requests$$$function__19_request$$$function__1_lambda) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$requests$$$function__19_request$$$function__1_lambda);
    cache_frame_frame_google$auth$transport$requests$$$function__19_request$$$function__1_lambda = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$requests$$$function__19_request$$$function__1_lambda);

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


static PyObject *impl_google$auth$transport$requests$$$function__20_is_mtls(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$transport$requests$$$function__20_is_mtls;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$requests$$$function__20_is_mtls = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$transport$requests$$$function__20_is_mtls)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$requests$$$function__20_is_mtls);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$requests$$$function__20_is_mtls == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$requests$$$function__20_is_mtls = MAKE_FUNCTION_FRAME(tstate, code_objects_1a7dfeb195048214722daaa6e7ed0c68, module_google$auth$transport$requests, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$requests$$$function__20_is_mtls->m_type_description == NULL);
frame_frame_google$auth$transport$requests$$$function__20_is_mtls = cache_frame_frame_google$auth$transport$requests$$$function__20_is_mtls;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$requests$$$function__20_is_mtls);
assert(Py_REFCNT(frame_frame_google$auth$transport$requests$$$function__20_is_mtls) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__is_mtls);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 629;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$requests$$$function__20_is_mtls, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$requests$$$function__20_is_mtls->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$requests$$$function__20_is_mtls, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$requests$$$function__20_is_mtls,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$requests$$$function__20_is_mtls == cache_frame_frame_google$auth$transport$requests$$$function__20_is_mtls) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$requests$$$function__20_is_mtls);
    cache_frame_frame_google$auth$transport$requests$$$function__20_is_mtls = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$requests$$$function__20_is_mtls);

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


static PyObject *impl_google$auth$transport$requests$$$function__21_close(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$transport$requests$$$function__21_close;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$transport$requests$$$function__21_close = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$transport$requests$$$function__21_close)) {
    Py_XDECREF(cache_frame_frame_google$auth$transport$requests$$$function__21_close);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$transport$requests$$$function__21_close == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$transport$requests$$$function__21_close = MAKE_FUNCTION_FRAME(tstate, code_objects_8fd42b8fb4443f9a7c2bde06551b9148, module_google$auth$transport$requests, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$transport$requests$$$function__21_close->m_type_description == NULL);
frame_frame_google$auth$transport$requests$$$function__21_close = cache_frame_frame_google$auth$transport$requests$$$function__21_close;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$requests$$$function__21_close);
assert(Py_REFCNT(frame_frame_google$auth$transport$requests$$$function__21_close) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__auth_request_session);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 632;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__auth_request_session);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 633;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$requests$$$function__21_close->m_frame.f_lineno = 633;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_close);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 633;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_2;
tmp_type_arg_value_1 = module_var_accessor_google$auth$transport$requests$AuthorizedSession(tstate);
if (unlikely(tmp_type_arg_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AuthorizedSession);
}

if (tmp_type_arg_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 634;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_2 = BUILTIN_SUPER2(tstate, moduledict_google$auth$transport$requests, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 634;
type_description_1 = "oN";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$requests$$$function__21_close->m_frame.f_lineno = 634;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, const_str_plain_close);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 634;
type_description_1 = "oN";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$requests$$$function__21_close, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$requests$$$function__21_close->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$requests$$$function__21_close, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$requests$$$function__21_close,
    type_description_1,
    par_self,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$transport$requests$$$function__21_close == cache_frame_frame_google$auth$transport$requests$$$function__21_close) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$transport$requests$$$function__21_close);
    cache_frame_frame_google$auth$transport$requests$$$function__21_close = NULL;
}

assertFrameObject(frame_frame_google$auth$transport$requests$$$function__21_close);

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



static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__10___call__(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$requests$$$function__10___call__,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1ee2d45b9395e8e5ddd9a4c4168a1109,
#endif
        code_objects_6eda5865ccdf4bd373de53b8dbdf5da2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$requests,
        mod_consts.const_str_digest_39fb1ed0af2daaa51753479677e1a20d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__11___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$requests$$$function__11___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ee8e294a8555e81d2151805220a70043,
#endif
        code_objects_af647dbda252d4e261b023364bd9c0ef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$requests,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__12_init_poolmanager(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$requests$$$function__12_init_poolmanager,
        mod_consts.const_str_plain_init_poolmanager,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5696e8f664fbc03ab59ce337063e5b63,
#endif
        code_objects_1535cbaee09dfa1b632f8d3eba31fdd0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$requests,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__13_proxy_manager_for(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$requests$$$function__13_proxy_manager_for,
        mod_consts.const_str_plain_proxy_manager_for,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4f09b4e47b8164f0bc69aa9d6c89cdc9,
#endif
        code_objects_0285cee89f75b66948665455200a27a3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$requests,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__14___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$requests$$$function__14___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_57c664ad59e78e17ded1d9bf4db4ca0a,
#endif
        code_objects_0fe1ed15fcedc8460e7893abfb23fd95,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$requests,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__15_init_poolmanager(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$requests$$$function__15_init_poolmanager,
        mod_consts.const_str_plain_init_poolmanager,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b24c2e039d5ae677ea1d7395aa085f84,
#endif
        code_objects_3ec09e2844cb06c89f739db8395b528b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$requests,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__16_proxy_manager_for(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$requests$$$function__16_proxy_manager_for,
        mod_consts.const_str_plain_proxy_manager_for,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0be807be6288f775f0a034ae454e78c3,
#endif
        code_objects_db60d04d661129a36fffbab99ea3f818,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$requests,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__17___init__(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$requests$$$function__17___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_aab1754e68bd2e4376ed8a2b64feeb81,
#endif
        code_objects_d883a92f0a0b0304aab85833e470dd87,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$requests,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__18_configure_mtls_channel(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$requests$$$function__18_configure_mtls_channel,
        mod_consts.const_str_plain_configure_mtls_channel,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5e62e54d96555aab19e1dbc0a82c53ba,
#endif
        code_objects_0c23d762394c7e5f9134867016113d69,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$requests,
        mod_consts.const_str_digest_de049669be1242f7a1b8104d894d77d2,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__19_request(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$requests$$$function__19_request,
        mod_consts.const_str_plain_request,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6c8908d3ccfd787a2d4c6acb893ef457,
#endif
        code_objects_808bd59ef2c49bed20d58728db921e6a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$requests,
        mod_consts.const_str_digest_f8784072d2c099b42e8d0b59da424eda,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__19_request$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$requests$$$function__19_request$$$function__1_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a2ee3501367ccdf631713a55afee2a07,
#endif
        code_objects_8d2b1fca2f3bc9f911ced808cc05bc34,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$requests,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__1___init__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$requests$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_37f61de23a604569296c1ced849aa096,
#endif
        code_objects_a114acff144b3958d088e70117622def,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$requests,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__20_is_mtls(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$requests$$$function__20_is_mtls,
        mod_consts.const_str_plain_is_mtls,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3a87ff44375e54ca3d17fc0a54a01719,
#endif
        code_objects_1a7dfeb195048214722daaa6e7ed0c68,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$requests,
        mod_consts.const_str_digest_d27d9a89a8704f1a6327f4f14872ab0e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__21_close(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$requests$$$function__21_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e40eb6227725bab70cf3d008e19b95c3,
#endif
        code_objects_8fd42b8fb4443f9a7c2bde06551b9148,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$requests,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__2_status(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$requests$$$function__2_status,
        mod_consts.const_str_plain_status,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f8919cf16f77680e5ef4d47172958126,
#endif
        code_objects_75d66c906dce24b7af37009502d164be,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$requests,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__3_headers(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$requests$$$function__3_headers,
        mod_consts.const_str_plain_headers,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_64ed33fe6cd71fb5787fb240b91400d4,
#endif
        code_objects_a458e109ff3750615ae0bc9c07e96de1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$requests,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__4_data(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$requests$$$function__4_data,
        mod_consts.const_str_plain_data,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e493e5be5d6c09ef6e2abf61e5c54230,
#endif
        code_objects_b7099aaf9c7a29902bb859551ae83de0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$requests,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__5___init__(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$requests$$$function__5___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f24d846e8f869d3ded65d6377d3cf237,
#endif
        code_objects_3f12f64645587ed179a71dc51af80837,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$requests,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__6___enter__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$requests$$$function__6___enter__,
        const_str_plain___enter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_183d80e5aa489566b52b7f983ad28927,
#endif
        code_objects_a7642290974ac5057d91b30f6a37497b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$requests,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__7___exit__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$requests$$$function__7___exit__,
        const_str_plain___exit__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1ad12366af63d0360d25b4d42b644e31,
#endif
        code_objects_9d46905d3b2e11d97bd49810e4c0dee7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$requests,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__8___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$requests$$$function__8___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_45e22ae6dbd065d35ef185f04e7a930e,
#endif
        code_objects_df0bfa6d873fbb6cec0cbd3e1a15df28,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$auth$transport$requests,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$transport$requests$$$function__9___del__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$transport$requests$$$function__9___del__,
        mod_consts.const_str_plain___del__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a2d20d50127799e684d60fc6e83fbc4a,
#endif
        code_objects_f6238ed53761edea936104ff0b281290,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$transport$requests,
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

static function_impl_code const function_table_google$auth$transport$requests[] = {
impl_google$auth$transport$requests$$$function__19_request$$$function__1_lambda,
impl_google$auth$transport$requests$$$function__1___init__,
impl_google$auth$transport$requests$$$function__2_status,
impl_google$auth$transport$requests$$$function__3_headers,
impl_google$auth$transport$requests$$$function__4_data,
impl_google$auth$transport$requests$$$function__5___init__,
impl_google$auth$transport$requests$$$function__6___enter__,
impl_google$auth$transport$requests$$$function__7___exit__,
impl_google$auth$transport$requests$$$function__8___init__,
impl_google$auth$transport$requests$$$function__9___del__,
impl_google$auth$transport$requests$$$function__10___call__,
impl_google$auth$transport$requests$$$function__11___init__,
impl_google$auth$transport$requests$$$function__12_init_poolmanager,
impl_google$auth$transport$requests$$$function__13_proxy_manager_for,
impl_google$auth$transport$requests$$$function__14___init__,
impl_google$auth$transport$requests$$$function__15_init_poolmanager,
impl_google$auth$transport$requests$$$function__16_proxy_manager_for,
impl_google$auth$transport$requests$$$function__17___init__,
impl_google$auth$transport$requests$$$function__18_configure_mtls_channel,
impl_google$auth$transport$requests$$$function__19_request,
impl_google$auth$transport$requests$$$function__20_is_mtls,
impl_google$auth$transport$requests$$$function__21_close,
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

    return Nuitka_Function_GetFunctionState(function, function_table_google$auth$transport$requests);
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
        module_google$auth$transport$requests,
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
        function_table_google$auth$transport$requests,
        sizeof(function_table_google$auth$transport$requests) / sizeof(function_impl_code)
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
static char const *module_full_name = "google.auth.transport.requests";
#endif

// Internal entry point for module code.
PyObject *module_code_google$auth$transport$requests(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("google$auth$transport$requests");

    // Store the module for future use.
    module_google$auth$transport$requests = module;

    moduledict_google$auth$transport$requests = MODULE_DICT(module_google$auth$transport$requests);

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
        PRINT_STRING("google$auth$transport$requests: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("google$auth$transport$requests: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("google$auth$transport$requests: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth.transport.requests" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initgoogle$auth$transport$requests\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_google$auth$transport$requests,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_google$auth$transport$requests,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_google$auth$transport$requests,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$transport$requests,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$transport$requests,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_google$auth$transport$requests);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_google$auth$transport$requests);
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

        UPDATE_STRING_DICT1(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
struct Nuitka_CellObject *outline_3_var___class__ = NULL;
struct Nuitka_CellObject *outline_4_var___class__ = NULL;
struct Nuitka_CellObject *outline_5_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__bases = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__metaclass = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_class_container$class_creation_3__bases = NULL;
PyObject *tmp_class_container$class_creation_3__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_3__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_3__metaclass = NULL;
PyObject *tmp_class_container$class_creation_3__prepared = NULL;
PyObject *tmp_class_container$class_creation_4__bases = NULL;
PyObject *tmp_class_container$class_creation_4__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_4__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_4__metaclass = NULL;
PyObject *tmp_class_container$class_creation_4__prepared = NULL;
PyObject *tmp_class_container$class_creation_5__bases = NULL;
PyObject *tmp_class_container$class_creation_5__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_5__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_5__metaclass = NULL;
PyObject *tmp_class_container$class_creation_5__prepared = NULL;
PyObject *tmp_class_container$class_creation_6__bases = NULL;
PyObject *tmp_class_container$class_creation_6__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_6__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_6__metaclass = NULL;
PyObject *tmp_class_container$class_creation_6__prepared = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$transport$requests;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_google$auth$transport$requests$$$class__1__Response_50 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_google$auth$transport$requests$$$class__1__Response_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
PyObject *locals_google$auth$transport$requests$$$class__2_TimeoutGuard_73 = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$transport$requests$$$class__2_TimeoutGuard_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
PyObject *locals_google$auth$transport$requests$$$class__3_Request_117 = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$transport$requests$$$class__3_Request_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
PyObject *locals_google$auth$transport$requests$$$class__4__MutualTlsAdapter_198 = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$transport$requests$$$class__4__MutualTlsAdapter_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
PyObject *locals_google$auth$transport$requests$$$class__5__MutualTlsOffloadAdapter_244 = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$transport$requests$$$class__5__MutualTlsOffloadAdapter_6;
NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
PyObject *locals_google$auth$transport$requests$$$class__6_AuthorizedSession_298 = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$transport$requests$$$class__6_AuthorizedSession_7;
NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_1ad328c754f17066d36dd61d311e4502;
UPDATE_STRING_DICT0(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_google$auth$transport$requests = MAKE_MODULE_FRAME(code_objects_3960f90fa4c885b4c4ad0069a857e772, module_google$auth$transport$requests);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$requests);
assert(Py_REFCNT(frame_frame_google$auth$transport$requests) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_google$auth$transport$requests$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_google$auth$transport$requests$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_absolute_import);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_absolute_import, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_functools, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_096ca139beaf8ac5201071e235ad66b6;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$auth$transport$requests;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_google$auth$transport$requests->m_frame.f_lineno = 20;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$auth$transport$requests,
        mod_consts.const_str_plain_client,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_client);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_http_client, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_2 = (PyObject *)moduledict_google$auth$transport$requests;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_google$auth$transport$requests->m_frame.f_lineno = 21;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_logging, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_numbers;
tmp_globals_arg_value_3 = (PyObject *)moduledict_google$auth$transport$requests;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_google$auth$transport$requests->m_frame.f_lineno = 22;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_numbers, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_time;
tmp_globals_arg_value_4 = (PyObject *)moduledict_google$auth$transport$requests;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = Py_None;
tmp_level_value_4 = const_int_0;
frame_frame_google$auth$transport$requests->m_frame.f_lineno = 23;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_time, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_2;
tmp_import_name_from_2 = IMPORT_HARD_TYPING();
assert(!(tmp_import_name_from_2 == NULL));
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_google$auth$transport$requests,
        mod_consts.const_str_plain_Optional,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Optional);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional, tmp_assign_source_10);
}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_requests;
tmp_globals_arg_value_5 = (PyObject *)moduledict_google$auth$transport$requests;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = Py_None;
tmp_level_value_5 = const_int_0;
frame_frame_google$auth$transport$requests->m_frame.f_lineno = 27;
tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_requests, tmp_assign_source_11);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$requests, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$requests, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_ImportError;
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
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_12); 
UPDATE_STRING_DICT0(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_caught_exc, tmp_assign_source_12);
}
// Tried code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_raise_cause_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_6a3abff5aeb8725bc9b3fa019c4b4baf;
frame_frame_google$auth$transport$requests->m_frame.f_lineno = 29;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ImportError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_input_1 == NULL));
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto try_except_handler_3;
}
tmp_raise_cause_1 = module_var_accessor_google$auth$transport$requests$caught_exc(tstate);
assert(!(tmp_raise_cause_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 31;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);

goto try_except_handler_3;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

if (DICT_REMOVE_ITEM((PyObject *)moduledict_google$auth$transport$requests, mod_consts.const_str_plain_caught_exc) == false) {
    CLEAR_ERROR_OCCURRED(tstate);
}

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 26;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$transport$requests->m_frame)) {
        frame_frame_google$auth$transport$requests->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_2;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_2:;
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
PyObject *tmp_assign_source_13;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_f564af29e8441da03b9e6bf26a88cc81;
tmp_globals_arg_value_6 = (PyObject *)moduledict_google$auth$transport$requests;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = Py_None;
tmp_level_value_6 = const_int_0;
frame_frame_google$auth$transport$requests->m_frame.f_lineno = 32;
tmp_assign_source_13 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_requests, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
tmp_globals_arg_value_7 = (PyObject *)moduledict_google$auth$transport$requests;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = Py_None;
tmp_level_value_7 = const_int_0;
frame_frame_google$auth$transport$requests->m_frame.f_lineno = 33;
tmp_assign_source_14 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_requests, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_digest_3f9c79ac9778c20d3cb015a396023b31;
tmp_globals_arg_value_8 = (PyObject *)moduledict_google$auth$transport$requests;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_create_urllib3_context_tuple;
tmp_level_value_8 = const_int_0;
frame_frame_google$auth$transport$requests->m_frame.f_lineno = 34;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_google$auth$transport$requests,
        mod_consts.const_str_plain_create_urllib3_context,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_create_urllib3_context);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_create_urllib3_context, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_9 = (PyObject *)moduledict_google$auth$transport$requests;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain__helpers_tuple;
tmp_level_value_9 = const_int_0;
frame_frame_google$auth$transport$requests->m_frame.f_lineno = 38;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_google$auth$transport$requests,
        mod_consts.const_str_plain__helpers,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain__helpers);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_10 = (PyObject *)moduledict_google$auth$transport$requests;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_exceptions_tuple;
tmp_level_value_10 = const_int_0;
frame_frame_google$auth$transport$requests->m_frame.f_lineno = 39;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_google$auth$transport$requests,
        mod_consts.const_str_plain_exceptions,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_exceptions);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_11 = (PyObject *)moduledict_google$auth$transport$requests;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_transport_tuple;
tmp_level_value_11 = const_int_0;
frame_frame_google$auth$transport$requests->m_frame.f_lineno = 40;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_google$auth$transport$requests,
        mod_consts.const_str_plain_transport,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_transport);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_transport, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_digest_587455d82fd83f874416fce4cf44fc5a;
tmp_globals_arg_value_12 = (PyObject *)moduledict_google$auth$transport$requests;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain__mtls_helper_tuple;
tmp_level_value_12 = const_int_0;
frame_frame_google$auth$transport$requests->m_frame.f_lineno = 41;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_google$auth$transport$requests,
        mod_consts.const_str_plain__mtls_helper,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain__mtls_helper);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain__mtls_helper, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_digest_76c4c07798963223889b12fc60a097b0;
tmp_globals_arg_value_13 = (PyObject *)moduledict_google$auth$transport$requests;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = Py_None;
tmp_level_value_13 = const_int_0;
frame_frame_google$auth$transport$requests->m_frame.f_lineno = 42;
tmp_assign_source_20 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_google, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_14;
PyObject *tmp_globals_arg_value_14;
PyObject *tmp_locals_arg_value_14;
PyObject *tmp_fromlist_value_14;
PyObject *tmp_level_value_14;
tmp_name_value_14 = mod_consts.const_str_digest_31b40dbd93ddd4efa91cab6083c18890;
tmp_globals_arg_value_14 = (PyObject *)moduledict_google$auth$transport$requests;
tmp_locals_arg_value_14 = Py_None;
tmp_fromlist_value_14 = mod_consts.const_tuple_str_plain_service_account_tuple;
tmp_level_value_14 = const_int_0;
frame_frame_google$auth$transport$requests->m_frame.f_lineno = 43;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_google$auth$transport$requests,
        mod_consts.const_str_plain_service_account,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_service_account);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_service_account, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$auth$transport$requests$logging(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 45;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$transport$requests->m_frame.f_lineno = 45;
tmp_assign_source_22 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getLogger,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_eda478fe391780f02c579185f1943916_tuple, 0)
);

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = mod_consts.const_int_pos_120;
UPDATE_STRING_DICT0(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain__DEFAULT_TIMEOUT, tmp_assign_source_23);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_24;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_google$auth$transport$requests$transport(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 50;

    goto try_except_handler_4;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_Response);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_4;
}
tmp_assign_source_24 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_24, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_24;
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_25 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_25;
}
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_26;
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_2;
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


exception_lineno = 50;

    goto try_except_handler_4;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
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


exception_lineno = 50;

    goto try_except_handler_4;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_4;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_27 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_27;
}
{
bool tmp_condition_result_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_4;
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
PyObject *tmp_assign_source_28;
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


exception_lineno = 50;

    goto try_except_handler_4;
}
tmp_tuple_element_2 = mod_consts.const_str_plain__Response;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_google$auth$transport$requests->m_frame.f_lineno = 50;
tmp_assign_source_28 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_28;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_5 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_4;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_name_value_15;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_15 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_15, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_4;
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


exception_lineno = 50;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_4;
}
frame_frame_google$auth$transport$requests->m_frame.f_lineno = 50;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 50;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_4;
}
branch_no_3:;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_29;
}
branch_end_2:;
{
PyObject *tmp_assign_source_30;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_google$auth$transport$requests$$$class__1__Response_50 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_eda478fe391780f02c579185f1943916;
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__1__Response_50, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_digest_5604f08d73ac817de9782c5440afc1a0;
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__1__Response_50, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_plain__Response;
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__1__Response_50, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_int_pos_50;
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__1__Response_50, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_6;
}
frame_frame_google$auth$transport$requests$$$class__1__Response_2 = MAKE_CLASS_FRAME(tstate, code_objects_7767dc84d8e9b433275e765aea23c726, module_google$auth$transport$requests, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$requests$$$class__1__Response_2);
assert(Py_REFCNT(frame_frame_google$auth$transport$requests$$$class__1__Response_2) == 2);

// Framed code:

tmp_dictset_value = MAKE_FUNCTION_google$auth$transport$requests$$$function__1___init__(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__1__Response_50, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
tmp_called_value_2 = PyObject_GetItem(locals_google$auth$transport$requests$$$class__1__Response_50, mod_consts.const_str_plain_property);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_1 = MAKE_FUNCTION_google$auth$transport$requests$$$function__2_status(tstate);

frame_frame_google$auth$transport$requests$$$class__1__Response_2->m_frame.f_lineno = 60;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__1__Response_50, mod_consts.const_str_plain_status, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
tmp_called_value_3 = PyObject_GetItem(locals_google$auth$transport$requests$$$class__1__Response_50, mod_consts.const_str_plain_property);

if (tmp_called_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_3 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_2 = MAKE_FUNCTION_google$auth$transport$requests$$$function__3_headers(tstate);

frame_frame_google$auth$transport$requests$$$class__1__Response_2->m_frame.f_lineno = 64;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__1__Response_50, mod_consts.const_str_plain_headers, tmp_dictset_value);
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
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
tmp_called_value_4 = PyObject_GetItem(locals_google$auth$transport$requests$$$class__1__Response_50, mod_consts.const_str_plain_property);

if (tmp_called_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_4 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}


tmp_args_element_value_3 = MAKE_FUNCTION_google$auth$transport$requests$$$function__4_data(tstate);

frame_frame_google$auth$transport$requests$$$class__1__Response_2->m_frame.f_lineno = 68;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__1__Response_50, mod_consts.const_str_plain_data, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$requests$$$class__1__Response_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$requests$$$class__1__Response_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$requests$$$class__1__Response_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$requests$$$class__1__Response_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_google$auth$transport$requests$$$class__1__Response_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_6;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__response_tuple;
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__1__Response_50, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_6;
}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_1__bases_orig;
tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_6;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__1__Response_50, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_6;
}
branch_no_4:;
{
PyObject *tmp_assign_source_31;
PyObject *tmp_called_value_5;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain__Response;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_google$auth$transport$requests$$$class__1__Response_50;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_google$auth$transport$requests->m_frame.f_lineno = 50;
tmp_assign_source_31 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_6;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_31;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_30 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_30);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_google$auth$transport$requests$$$class__1__Response_50);
locals_google$auth$transport$requests$$$class__1__Response_50 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$transport$requests$$$class__1__Response_50);
locals_google$auth$transport$requests$$$class__1__Response_50 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_5:;
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
exception_lineno = 50;
goto try_except_handler_4;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain__Response, tmp_assign_source_30);
}
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
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
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

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
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_32;
PyObject *tmp_direct_call_arg1_2;
tmp_direct_call_arg1_2 = mod_consts.const_tuple_type_object_tuple;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_32 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_32;
}
{
PyObject *tmp_assign_source_33;
tmp_assign_source_33 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_33;
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_6;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_7;
}
tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_8 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_7;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_7;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_34 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_34;
}
{
bool tmp_condition_result_7;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_7;
}
tmp_condition_result_7 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_35;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_10 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_7;
}
tmp_tuple_element_5 = mod_consts.const_str_plain_TimeoutGuard;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_5 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_google$auth$transport$requests->m_frame.f_lineno = 73;
tmp_assign_source_35 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_35;
}
{
bool tmp_condition_result_8;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_11 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_11, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_7;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
assert(!(tmp_res == -1));
tmp_condition_result_8 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_6;
PyObject *tmp_expression_value_12;
PyObject *tmp_name_value_16;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_12 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_16 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_6 = BUILTIN_GETATTR(tstate, tmp_expression_value_12, tmp_name_value_16, tmp_default_value_2);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_7;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_13;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_13 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_13 == NULL));
tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_6);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_7;
}
frame_frame_google$auth$transport$requests->m_frame.f_lineno = 73;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 73;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_7;
}
branch_no_6:;
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_assign_source_36;
tmp_assign_source_36 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_36;
}
branch_end_5:;
{
PyObject *tmp_assign_source_37;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_google$auth$transport$requests$$$class__2_TimeoutGuard_73 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_eda478fe391780f02c579185f1943916;
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__2_TimeoutGuard_73, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_digest_0c39fc4a7184aaab11f69cd2f1745135;
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__2_TimeoutGuard_73, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_plain_TimeoutGuard;
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__2_TimeoutGuard_73, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_int_pos_73;
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__2_TimeoutGuard_73, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_9;
}
frame_frame_google$auth$transport$requests$$$class__2_TimeoutGuard_3 = MAKE_CLASS_FRAME(tstate, code_objects_d9e4caa79d1af907dd821525093f5bec, module_google$auth$transport$requests, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$requests$$$class__2_TimeoutGuard_3);
assert(Py_REFCNT(frame_frame_google$auth$transport$requests$$$class__2_TimeoutGuard_3) == 2);

// Framed code:
{
PyObject *tmp_defaults_1;
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
tmp_expression_value_15 = PyObject_GetItem(locals_google$auth$transport$requests$$$class__2_TimeoutGuard_73, mod_consts.const_str_plain_requests);

if (tmp_expression_value_15 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_15 = module_var_accessor_google$auth$transport$requests$requests(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_requests);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_15);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_exceptions);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_Timeout);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_defaults_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_defaults_1, 0, tmp_tuple_element_7);

tmp_dictset_value = MAKE_FUNCTION_google$auth$transport$requests$$$function__5___init__(tstate, tmp_defaults_1);

tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__2_TimeoutGuard_73, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$transport$requests$$$function__6___enter__(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__2_TimeoutGuard_73, const_str_plain___enter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$transport$requests$$$function__7___exit__(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__2_TimeoutGuard_73, const_str_plain___exit__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_2 = "o";
    goto frame_exception_exit_3;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$requests$$$class__2_TimeoutGuard_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$requests$$$class__2_TimeoutGuard_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$requests$$$class__2_TimeoutGuard_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$requests$$$class__2_TimeoutGuard_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_google$auth$transport$requests$$$class__2_TimeoutGuard_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_9;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_1580d080e18b5f84e1550f561725600a_tuple;
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__2_TimeoutGuard_73, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_9;
}
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_2__bases;
tmp_cmp_expr_right_3 = mod_consts.const_tuple_type_object_tuple;
tmp_condition_result_9 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_9;
}
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
tmp_dictset_value = mod_consts.const_tuple_type_object_tuple;
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__2_TimeoutGuard_73, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_9;
}
branch_no_7:;
{
PyObject *tmp_assign_source_38;
PyObject *tmp_called_value_7;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_7 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_8 = mod_consts.const_str_plain_TimeoutGuard;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_google$auth$transport$requests$$$class__2_TimeoutGuard_73;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_google$auth$transport$requests->m_frame.f_lineno = 73;
tmp_assign_source_38 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_9;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_38;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_37 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_37);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_DECREF(locals_google$auth$transport$requests$$$class__2_TimeoutGuard_73);
locals_google$auth$transport$requests$$$class__2_TimeoutGuard_73 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$transport$requests$$$class__2_TimeoutGuard_73);
locals_google$auth$transport$requests$$$class__2_TimeoutGuard_73 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_8;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 73;
goto try_except_handler_7;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_TimeoutGuard, tmp_assign_source_37);
}
goto try_end_3;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_2__bases);
tmp_class_container$class_creation_2__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__metaclass);
tmp_class_container$class_creation_2__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__prepared);
tmp_class_container$class_creation_2__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
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
{
PyObject *tmp_outline_return_value_3;
// Tried code:
{
PyObject *tmp_assign_source_39;
PyObject *tmp_tuple_element_9;
PyObject *tmp_expression_value_16;
tmp_expression_value_16 = module_var_accessor_google$auth$transport$requests$transport(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 117;

    goto try_except_handler_10;
}
tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_Request);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto try_except_handler_10;
}
tmp_assign_source_39 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_39, 0, tmp_tuple_element_9);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_39;
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_40 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_40;
}
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_41;
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_10;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto try_except_handler_10;
}
tmp_condition_result_10 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_17 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_17, tmp_subscript_value_3, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto try_except_handler_10;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto try_except_handler_10;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_42 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_42;
}
{
bool tmp_condition_result_11;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_18 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_18, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto try_except_handler_10;
}
tmp_condition_result_11 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_43;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_19;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_19 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto try_except_handler_10;
}
tmp_tuple_element_10 = mod_consts.const_str_plain_Request;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_10 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_google$auth$transport$requests->m_frame.f_lineno = 117;
tmp_assign_source_43 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_43;
}
{
bool tmp_condition_result_12;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_20 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_20, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto try_except_handler_10;
}
tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
assert(!(tmp_res == -1));
tmp_condition_result_12 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_4;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
PyObject *tmp_tuple_element_11;
PyObject *tmp_expression_value_21;
PyObject *tmp_name_value_17;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_21 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_17 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_11 = BUILTIN_GETATTR(tstate, tmp_expression_value_21, tmp_name_value_17, tmp_default_value_3);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto try_except_handler_10;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_22;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_22 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_22 == NULL));
tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_22);
Py_DECREF(tmp_expression_value_22);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_11);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_10;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto try_except_handler_10;
}
frame_frame_google$auth$transport$requests->m_frame.f_lineno = 117;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 117;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_10;
}
branch_no_9:;
goto branch_end_8;
branch_no_8:;
{
PyObject *tmp_assign_source_44;
tmp_assign_source_44 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_44;
}
branch_end_8:;
{
PyObject *tmp_assign_source_45;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_google$auth$transport$requests$$$class__3_Request_117 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_eda478fe391780f02c579185f1943916;
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__3_Request_117, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_digest_c9bcb9faf96994cc17d4f591b8af3c65;
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__3_Request_117, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_plain_Request;
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__3_Request_117, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_int_pos_117;
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__3_Request_117, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto try_except_handler_12;
}
frame_frame_google$auth$transport$requests$$$class__3_Request_4 = MAKE_CLASS_FRAME(tstate, code_objects_f4d0d24ce33de01543e12e7e6507459d, module_google$auth$transport$requests, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$requests$$$class__3_Request_4);
assert(Py_REFCNT(frame_frame_google$auth$transport$requests$$$class__3_Request_4) == 2);

// Framed code:
{
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_23;
PyObject *tmp_subscript_value_4;
PyObject *tmp_expression_value_24;
tmp_defaults_2 = mod_consts.const_tuple_none_tuple;
tmp_dict_key_1 = mod_consts.const_str_plain_session;
tmp_expression_value_23 = PyObject_GetItem(locals_google$auth$transport$requests$$$class__3_Request_117, mod_consts.const_str_plain_Optional);

if (tmp_expression_value_23 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_23 = module_var_accessor_google$auth$transport$requests$Optional(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 141;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_expression_value_23);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_expression_value_24 = PyObject_GetItem(locals_google$auth$transport$requests$$$class__3_Request_117, mod_consts.const_str_plain_requests);

if (tmp_expression_value_24 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_24 = module_var_accessor_google$auth$transport$requests$requests(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_requests);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_23);

exception_lineno = 141;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_expression_value_24);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_subscript_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_Session);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_subscript_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_23);

exception_lineno = 141;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_4);
CHECK_OBJECT(tmp_expression_value_23);
Py_DECREF(tmp_expression_value_23);
CHECK_OBJECT(tmp_subscript_value_4);
Py_DECREF(tmp_subscript_value_4);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_annotations_1 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_return;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_google$auth$transport$requests$$$function__8___init__(tstate, tmp_defaults_2, tmp_annotations_1);

tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__3_Request_117, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$transport$requests$$$function__9___del__(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__3_Request_117, mod_consts.const_str_plain___del__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
{
PyObject *tmp_defaults_3;
PyObject *tmp_tuple_element_12;
tmp_tuple_element_12 = mod_consts.const_str_plain_GET;
tmp_defaults_3 = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_defaults_3, 0, tmp_tuple_element_12);
tmp_tuple_element_12 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_3, 1, tmp_tuple_element_12);
tmp_tuple_element_12 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_3, 2, tmp_tuple_element_12);
tmp_tuple_element_12 = PyObject_GetItem(locals_google$auth$transport$requests$$$class__3_Request_117, mod_consts.const_str_plain__DEFAULT_TIMEOUT);

if (tmp_tuple_element_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_12 = module_var_accessor_google$auth$transport$requests$_DEFAULT_TIMEOUT(tstate);
if (unlikely(tmp_tuple_element_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__DEFAULT_TIMEOUT);
}

if (tmp_tuple_element_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 163;
type_description_2 = "o";
    goto tuple_build_exception_4;
}
        Py_INCREF(tmp_tuple_element_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_4;
    }
}

PyTuple_SET_ITEM(tmp_defaults_3, 3, tmp_tuple_element_12);
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_defaults_3);
goto frame_exception_exit_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;

tmp_dictset_value = MAKE_FUNCTION_google$auth$transport$requests$$$function__10___call__(tstate, tmp_defaults_3);

tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__3_Request_117, mod_consts.const_str_plain___call__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$requests$$$class__3_Request_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$requests$$$class__3_Request_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$requests$$$class__3_Request_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$requests$$$class__3_Request_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_google$auth$transport$requests$$$class__3_Request_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_12;
skip_nested_handling_3:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_session_tuple;
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__3_Request_117, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto try_except_handler_12;
}
{
nuitka_bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_4 = tmp_class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_4 = tmp_class_container$class_creation_3__bases_orig;
tmp_condition_result_13 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto try_except_handler_12;
}
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_3__bases_orig;
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__3_Request_117, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto try_except_handler_12;
}
branch_no_10:;
{
PyObject *tmp_assign_source_46;
PyObject *tmp_called_value_9;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_13;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_9 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_13 = mod_consts.const_str_plain_Request;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_13 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_13);
tmp_tuple_element_13 = locals_google$auth$transport$requests$$$class__3_Request_117;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_google$auth$transport$requests->m_frame.f_lineno = 117;
tmp_assign_source_46 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;

    goto try_except_handler_12;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_46;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_45 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_45);
goto try_return_handler_12;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
Py_DECREF(locals_google$auth$transport$requests$$$class__3_Request_117);
locals_google$auth$transport$requests$$$class__3_Request_117 = NULL;
goto try_return_handler_11;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$transport$requests$$$class__3_Request_117);
locals_google$auth$transport$requests$$$class__3_Request_117 = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_11;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 117;
goto try_except_handler_10;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_Request, tmp_assign_source_45);
}
goto try_end_4;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_3__bases_orig);
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
// Tried code:
{
PyObject *tmp_assign_source_47;
PyObject *tmp_tuple_element_14;
PyObject *tmp_expression_value_25;
PyObject *tmp_expression_value_26;
tmp_expression_value_26 = module_var_accessor_google$auth$transport$requests$requests(tstate);
if (unlikely(tmp_expression_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_requests);
}

if (tmp_expression_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 198;

    goto try_except_handler_13;
}
tmp_expression_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_adapters);
if (tmp_expression_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;

    goto try_except_handler_13;
}
tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_HTTPAdapter);
CHECK_OBJECT(tmp_expression_value_25);
Py_DECREF(tmp_expression_value_25);
if (tmp_tuple_element_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;

    goto try_except_handler_13;
}
tmp_assign_source_47 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_47, 0, tmp_tuple_element_14);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_47;
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_48 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_48;
}
{
PyObject *tmp_assign_source_49;
tmp_assign_source_49 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_49;
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_metaclass_value_4;
nuitka_bool tmp_condition_result_14;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_27;
PyObject *tmp_subscript_value_5;
PyObject *tmp_bases_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;

    goto try_except_handler_13;
}
tmp_condition_result_14 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_27 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_5 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_27, tmp_subscript_value_5, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;

    goto try_except_handler_13;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;

    goto try_except_handler_13;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_4);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_50 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
CHECK_OBJECT(tmp_metaclass_value_4);
Py_DECREF(tmp_metaclass_value_4);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_50;
}
{
bool tmp_condition_result_15;
PyObject *tmp_expression_value_28;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_28 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_28, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;

    goto try_except_handler_13;
}
tmp_condition_result_15 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_15 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_assign_source_51;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_29;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_15;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_29 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;

    goto try_except_handler_13;
}
tmp_tuple_element_15 = mod_consts.const_str_plain__MutualTlsAdapter;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_15 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_google$auth$transport$requests->m_frame.f_lineno = 198;
tmp_assign_source_51 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_51;
}
{
bool tmp_condition_result_16;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_30;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_30 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_30, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;

    goto try_except_handler_13;
}
tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
assert(!(tmp_res == -1));
tmp_condition_result_16 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_16 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_raise_type_5;
PyObject *tmp_make_exception_arg_5;
PyObject *tmp_mod_expr_left_4;
PyObject *tmp_mod_expr_right_4;
PyObject *tmp_tuple_element_16;
PyObject *tmp_expression_value_31;
PyObject *tmp_name_value_18;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_31 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_18 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_16 = BUILTIN_GETATTR(tstate, tmp_expression_value_31, tmp_name_value_18, tmp_default_value_4);
if (tmp_tuple_element_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;

    goto try_except_handler_13;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_32;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_32 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_32 == NULL));
tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_32);
Py_DECREF(tmp_expression_value_32);
if (tmp_tuple_element_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_16);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_13;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_make_exception_arg_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;

    goto try_except_handler_13;
}
frame_frame_google$auth$transport$requests->m_frame.f_lineno = 198;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_5);
CHECK_OBJECT(tmp_make_exception_arg_5);
Py_DECREF(tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 198;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_13;
}
branch_no_12:;
goto branch_end_11;
branch_no_11:;
{
PyObject *tmp_assign_source_52;
tmp_assign_source_52 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_52;
}
branch_end_11:;
{
PyObject *tmp_assign_source_53;
outline_3_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_google$auth$transport$requests$$$class__4__MutualTlsAdapter_198 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_eda478fe391780f02c579185f1943916;
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__4__MutualTlsAdapter_198, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_str_digest_5d86f98a082e24787eea10b0dd0570bf;
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__4__MutualTlsAdapter_198, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_str_plain__MutualTlsAdapter;
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__4__MutualTlsAdapter_198, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_int_pos_198;
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__4__MutualTlsAdapter_198, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;

    goto try_except_handler_15;
}
frame_frame_google$auth$transport$requests$$$class__4__MutualTlsAdapter_5 = MAKE_CLASS_FRAME(tstate, code_objects_7783c64bf6726a787e6ea275bc6dabd9, module_google$auth$transport$requests, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$requests$$$class__4__MutualTlsAdapter_5);
assert(Py_REFCNT(frame_frame_google$auth$transport$requests$$$class__4__MutualTlsAdapter_5) == 2);

// Framed code:

tmp_dictset_value = MAKE_FUNCTION_google$auth$transport$requests$$$function__11___init__(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__4__MutualTlsAdapter_198, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_2 = "c";
    goto frame_exception_exit_5;
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$transport$requests$$$function__12_init_poolmanager(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__4__MutualTlsAdapter_198, mod_consts.const_str_plain_init_poolmanager, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_2 = "c";
    goto frame_exception_exit_5;
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$transport$requests$$$function__13_proxy_manager_for(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__4__MutualTlsAdapter_198, mod_consts.const_str_plain_proxy_manager_for, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_2 = "c";
    goto frame_exception_exit_5;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_4;
frame_exception_exit_5:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$requests$$$class__4__MutualTlsAdapter_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$requests$$$class__4__MutualTlsAdapter_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$requests$$$class__4__MutualTlsAdapter_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$requests$$$class__4__MutualTlsAdapter_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_google$auth$transport$requests$$$class__4__MutualTlsAdapter_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_15;
skip_nested_handling_4:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__ctx_poolmanager_str_plain__ctx_proxymanager_tuple;
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__4__MutualTlsAdapter_198, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;

    goto try_except_handler_15;
}
{
nuitka_bool tmp_condition_result_17;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_cmp_expr_left_5 = tmp_class_container$class_creation_4__bases;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_cmp_expr_right_5 = tmp_class_container$class_creation_4__bases_orig;
tmp_condition_result_17 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_17 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;

    goto try_except_handler_15;
}
if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_4__bases_orig;
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__4__MutualTlsAdapter_198, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;

    goto try_except_handler_15;
}
branch_no_13:;
{
PyObject *tmp_assign_source_54;
PyObject *tmp_called_value_11;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_17;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_11 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_17 = mod_consts.const_str_plain__MutualTlsAdapter;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_17 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_17);
tmp_tuple_element_17 = locals_google$auth$transport$requests$$$class__4__MutualTlsAdapter_198;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_google$auth$transport$requests->m_frame.f_lineno = 198;
tmp_assign_source_54 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;

    goto try_except_handler_15;
}
assert(Nuitka_Cell_GET(outline_3_var___class__) == NULL);
Nuitka_Cell_SET(outline_3_var___class__, tmp_assign_source_54);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_3_var___class__));
tmp_assign_source_53 = Nuitka_Cell_GET(outline_3_var___class__);
Py_INCREF(tmp_assign_source_53);
goto try_return_handler_15;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
Py_DECREF(locals_google$auth$transport$requests$$$class__4__MutualTlsAdapter_198);
locals_google$auth$transport$requests$$$class__4__MutualTlsAdapter_198 = NULL;
goto try_return_handler_14;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$transport$requests$$$class__4__MutualTlsAdapter_198);
locals_google$auth$transport$requests$$$class__4__MutualTlsAdapter_198 = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto try_except_handler_14;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 198;
goto try_except_handler_13;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain__MutualTlsAdapter, tmp_assign_source_53);
}
goto try_end_5;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_4__bases_orig);
tmp_class_container$class_creation_4__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__bases);
tmp_class_container$class_creation_4__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_container$class_creation_4__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__metaclass);
tmp_class_container$class_creation_4__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__prepared);
tmp_class_container$class_creation_4__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
Py_DECREF(tmp_class_container$class_creation_4__bases_orig);
tmp_class_container$class_creation_4__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
Py_DECREF(tmp_class_container$class_creation_4__bases);
tmp_class_container$class_creation_4__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_container$class_creation_4__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
Py_DECREF(tmp_class_container$class_creation_4__metaclass);
tmp_class_container$class_creation_4__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
Py_DECREF(tmp_class_container$class_creation_4__prepared);
tmp_class_container$class_creation_4__prepared = NULL;
tmp_outline_return_value_4 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_4);
goto outline_result_7;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_7:;
CHECK_OBJECT(tmp_outline_return_value_4);
Py_DECREF(tmp_outline_return_value_4);
}
{
PyObject *tmp_outline_return_value_5;
// Tried code:
{
PyObject *tmp_assign_source_55;
PyObject *tmp_tuple_element_18;
PyObject *tmp_expression_value_33;
PyObject *tmp_expression_value_34;
tmp_expression_value_34 = module_var_accessor_google$auth$transport$requests$requests(tstate);
if (unlikely(tmp_expression_value_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_requests);
}

if (tmp_expression_value_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 244;

    goto try_except_handler_16;
}
tmp_expression_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_adapters);
if (tmp_expression_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_16;
}
tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_HTTPAdapter);
CHECK_OBJECT(tmp_expression_value_33);
Py_DECREF(tmp_expression_value_33);
if (tmp_tuple_element_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_16;
}
tmp_assign_source_55 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_55, 0, tmp_tuple_element_18);
assert(tmp_class_container$class_creation_5__bases_orig == NULL);
tmp_class_container$class_creation_5__bases_orig = tmp_assign_source_55;
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_direct_call_arg1_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_direct_call_arg1_5 = tmp_class_container$class_creation_5__bases_orig;
Py_INCREF(tmp_direct_call_arg1_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_5};
    tmp_assign_source_56 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_16;
}
assert(tmp_class_container$class_creation_5__bases == NULL);
tmp_class_container$class_creation_5__bases = tmp_assign_source_56;
}
{
PyObject *tmp_assign_source_57;
tmp_assign_source_57 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_57;
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_metaclass_value_5;
nuitka_bool tmp_condition_result_18;
int tmp_truth_name_5;
PyObject *tmp_type_arg_9;
PyObject *tmp_expression_value_35;
PyObject *tmp_subscript_value_6;
PyObject *tmp_bases_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_container$class_creation_5__bases);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_16;
}
tmp_condition_result_18 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_5;
} else {
    goto condexpr_false_5;
}
condexpr_true_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_expression_value_35 = tmp_class_container$class_creation_5__bases;
tmp_subscript_value_6 = const_int_0;
tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_35, tmp_subscript_value_6, 0);
if (tmp_type_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_16;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
CHECK_OBJECT(tmp_type_arg_9);
Py_DECREF(tmp_type_arg_9);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_16;
}
goto condexpr_end_5;
condexpr_false_5:;
tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_5);
condexpr_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_bases_value_5 = tmp_class_container$class_creation_5__bases;
tmp_assign_source_58 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
CHECK_OBJECT(tmp_metaclass_value_5);
Py_DECREF(tmp_metaclass_value_5);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_16;
}
assert(tmp_class_container$class_creation_5__metaclass == NULL);
tmp_class_container$class_creation_5__metaclass = tmp_assign_source_58;
}
{
bool tmp_condition_result_19;
PyObject *tmp_expression_value_36;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_36 = tmp_class_container$class_creation_5__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_36, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_16;
}
tmp_condition_result_19 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_19 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_assign_source_59;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_37;
PyObject *tmp_args_value_9;
PyObject *tmp_tuple_element_19;
PyObject *tmp_kwargs_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_37 = tmp_class_container$class_creation_5__metaclass;
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_16;
}
tmp_tuple_element_19 = mod_consts.const_str_plain__MutualTlsOffloadAdapter;
tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_19 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_9 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_google$auth$transport$requests->m_frame.f_lineno = 244;
tmp_assign_source_59 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_9, tmp_kwargs_value_9);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_value_9);
Py_DECREF(tmp_args_value_9);
if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_16;
}
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_59;
}
{
bool tmp_condition_result_20;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_38;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_expression_value_38 = tmp_class_container$class_creation_5__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_38, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_16;
}
tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
assert(!(tmp_res == -1));
tmp_condition_result_20 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_20 != false) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
{
PyObject *tmp_raise_type_6;
PyObject *tmp_make_exception_arg_6;
PyObject *tmp_mod_expr_left_5;
PyObject *tmp_mod_expr_right_5;
PyObject *tmp_tuple_element_20;
PyObject *tmp_expression_value_39;
PyObject *tmp_name_value_19;
PyObject *tmp_default_value_5;
tmp_mod_expr_left_5 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_39 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_19 = const_str_plain___name__;
tmp_default_value_5 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_20 = BUILTIN_GETATTR(tstate, tmp_expression_value_39, tmp_name_value_19, tmp_default_value_5);
if (tmp_tuple_element_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_16;
}
tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_40;
PyObject *tmp_type_arg_10;
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_type_arg_10 = tmp_class_container$class_creation_5__prepared;
tmp_expression_value_40 = BUILTIN_TYPE1(tmp_type_arg_10);
assert(!(tmp_expression_value_40 == NULL));
tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_40);
Py_DECREF(tmp_expression_value_40);
if (tmp_tuple_element_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_20);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_mod_expr_right_5);
goto try_except_handler_16;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_make_exception_arg_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
CHECK_OBJECT(tmp_mod_expr_right_5);
Py_DECREF(tmp_mod_expr_right_5);
if (tmp_make_exception_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_16;
}
frame_frame_google$auth$transport$requests->m_frame.f_lineno = 244;
tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_6);
CHECK_OBJECT(tmp_make_exception_arg_6);
Py_DECREF(tmp_make_exception_arg_6);
assert(!(tmp_raise_type_6 == NULL));
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 244;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_16;
}
branch_no_15:;
goto branch_end_14;
branch_no_14:;
{
PyObject *tmp_assign_source_60;
tmp_assign_source_60 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_60;
}
branch_end_14:;
{
PyObject *tmp_assign_source_61;
outline_4_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_google$auth$transport$requests$$$class__5__MutualTlsOffloadAdapter_244 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_eda478fe391780f02c579185f1943916;
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__5__MutualTlsOffloadAdapter_244, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_str_digest_e28d3bf98c9697e113fc2920e7b4f432;
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__5__MutualTlsOffloadAdapter_244, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_str_plain__MutualTlsOffloadAdapter;
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__5__MutualTlsOffloadAdapter_244, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_int_pos_244;
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__5__MutualTlsOffloadAdapter_244, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_18;
}
frame_frame_google$auth$transport$requests$$$class__5__MutualTlsOffloadAdapter_6 = MAKE_CLASS_FRAME(tstate, code_objects_dc13ba77953ad5bc73d76364222bbd87, module_google$auth$transport$requests, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$requests$$$class__5__MutualTlsOffloadAdapter_6);
assert(Py_REFCNT(frame_frame_google$auth$transport$requests$$$class__5__MutualTlsOffloadAdapter_6) == 2);

// Framed code:

tmp_dictset_value = MAKE_FUNCTION_google$auth$transport$requests$$$function__14___init__(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__5__MutualTlsOffloadAdapter_244, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_2 = "c";
    goto frame_exception_exit_6;
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$transport$requests$$$function__15_init_poolmanager(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__5__MutualTlsOffloadAdapter_244, mod_consts.const_str_plain_init_poolmanager, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_2 = "c";
    goto frame_exception_exit_6;
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$transport$requests$$$function__16_proxy_manager_for(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__5__MutualTlsOffloadAdapter_244, mod_consts.const_str_plain_proxy_manager_for, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_2 = "c";
    goto frame_exception_exit_6;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_5;
frame_exception_exit_6:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$requests$$$class__5__MutualTlsOffloadAdapter_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$requests$$$class__5__MutualTlsOffloadAdapter_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$requests$$$class__5__MutualTlsOffloadAdapter_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$requests$$$class__5__MutualTlsOffloadAdapter_6,
    type_description_2,
    outline_4_var___class__
);



assertFrameObject(frame_frame_google$auth$transport$requests$$$class__5__MutualTlsOffloadAdapter_6);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_5;
frame_no_exception_5:;
goto skip_nested_handling_5;
nested_frame_exit_5:;

goto try_except_handler_18;
skip_nested_handling_5:;
tmp_dictset_value = mod_consts.const_tuple_a78fb14bdde6fae80af4ea8d2b59501e_tuple;
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__5__MutualTlsOffloadAdapter_244, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_18;
}
{
nuitka_bool tmp_condition_result_21;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_cmp_expr_left_6 = tmp_class_container$class_creation_5__bases;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_cmp_expr_right_6 = tmp_class_container$class_creation_5__bases_orig;
tmp_condition_result_21 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_21 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_18;
}
if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_5__bases_orig;
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__5__MutualTlsOffloadAdapter_244, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_18;
}
branch_no_16:;
{
PyObject *tmp_assign_source_62;
PyObject *tmp_called_value_13;
PyObject *tmp_args_value_10;
PyObject *tmp_tuple_element_21;
PyObject *tmp_kwargs_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_called_value_13 = tmp_class_container$class_creation_5__metaclass;
tmp_tuple_element_21 = mod_consts.const_str_plain__MutualTlsOffloadAdapter;
tmp_args_value_10 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_21);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_21 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_21);
tmp_tuple_element_21 = locals_google$auth$transport$requests$$$class__5__MutualTlsOffloadAdapter_244;
PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_21);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_10 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_google$auth$transport$requests->m_frame.f_lineno = 244;
tmp_assign_source_62 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_10, tmp_kwargs_value_10);
CHECK_OBJECT(tmp_args_value_10);
Py_DECREF(tmp_args_value_10);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;

    goto try_except_handler_18;
}
assert(Nuitka_Cell_GET(outline_4_var___class__) == NULL);
Nuitka_Cell_SET(outline_4_var___class__, tmp_assign_source_62);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_4_var___class__));
tmp_assign_source_61 = Nuitka_Cell_GET(outline_4_var___class__);
Py_INCREF(tmp_assign_source_61);
goto try_return_handler_18;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_18:;
Py_DECREF(locals_google$auth$transport$requests$$$class__5__MutualTlsOffloadAdapter_244);
locals_google$auth$transport$requests$$$class__5__MutualTlsOffloadAdapter_244 = NULL;
goto try_return_handler_17;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$transport$requests$$$class__5__MutualTlsOffloadAdapter_244);
locals_google$auth$transport$requests$$$class__5__MutualTlsOffloadAdapter_244 = NULL;
// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto try_except_handler_17;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_17:;
CHECK_OBJECT(outline_4_var___class__);
CHECK_OBJECT(outline_4_var___class__);
Py_DECREF(outline_4_var___class__);
outline_4_var___class__ = NULL;
goto outline_result_10;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto outline_exception_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_5:;
exception_lineno = 244;
goto try_except_handler_16;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain__MutualTlsOffloadAdapter, tmp_assign_source_61);
}
goto try_end_6;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_5__bases_orig);
tmp_class_container$class_creation_5__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__bases);
tmp_class_container$class_creation_5__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__metaclass);
tmp_class_container$class_creation_5__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__prepared);
tmp_class_container$class_creation_5__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
Py_DECREF(tmp_class_container$class_creation_5__bases_orig);
tmp_class_container$class_creation_5__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
Py_DECREF(tmp_class_container$class_creation_5__bases);
tmp_class_container$class_creation_5__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
Py_DECREF(tmp_class_container$class_creation_5__metaclass);
tmp_class_container$class_creation_5__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
Py_DECREF(tmp_class_container$class_creation_5__prepared);
tmp_class_container$class_creation_5__prepared = NULL;
tmp_outline_return_value_5 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_5);
goto outline_result_9;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_9:;
CHECK_OBJECT(tmp_outline_return_value_5);
Py_DECREF(tmp_outline_return_value_5);
}
{
PyObject *tmp_outline_return_value_6;
// Tried code:
{
PyObject *tmp_assign_source_63;
PyObject *tmp_tuple_element_22;
PyObject *tmp_expression_value_41;
tmp_expression_value_41 = module_var_accessor_google$auth$transport$requests$requests(tstate);
if (unlikely(tmp_expression_value_41 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_requests);
}

if (tmp_expression_value_41 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 298;

    goto try_except_handler_19;
}
tmp_tuple_element_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts.const_str_plain_Session);
if (tmp_tuple_element_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;

    goto try_except_handler_19;
}
tmp_assign_source_63 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_63, 0, tmp_tuple_element_22);
assert(tmp_class_container$class_creation_6__bases_orig == NULL);
tmp_class_container$class_creation_6__bases_orig = tmp_assign_source_63;
}
{
PyObject *tmp_assign_source_64;
PyObject *tmp_direct_call_arg1_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_direct_call_arg1_6 = tmp_class_container$class_creation_6__bases_orig;
Py_INCREF(tmp_direct_call_arg1_6);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_6};
    tmp_assign_source_64 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;

    goto try_except_handler_19;
}
assert(tmp_class_container$class_creation_6__bases == NULL);
tmp_class_container$class_creation_6__bases = tmp_assign_source_64;
}
{
PyObject *tmp_assign_source_65;
tmp_assign_source_65 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__class_decl_dict == NULL);
tmp_class_container$class_creation_6__class_decl_dict = tmp_assign_source_65;
}
{
PyObject *tmp_assign_source_66;
PyObject *tmp_metaclass_value_6;
nuitka_bool tmp_condition_result_22;
int tmp_truth_name_6;
PyObject *tmp_type_arg_11;
PyObject *tmp_expression_value_42;
PyObject *tmp_subscript_value_7;
PyObject *tmp_bases_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_container$class_creation_6__bases);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;

    goto try_except_handler_19;
}
tmp_condition_result_22 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_6;
} else {
    goto condexpr_false_6;
}
condexpr_true_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_expression_value_42 = tmp_class_container$class_creation_6__bases;
tmp_subscript_value_7 = const_int_0;
tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_42, tmp_subscript_value_7, 0);
if (tmp_type_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;

    goto try_except_handler_19;
}
tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
CHECK_OBJECT(tmp_type_arg_11);
Py_DECREF(tmp_type_arg_11);
if (tmp_metaclass_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;

    goto try_except_handler_19;
}
goto condexpr_end_6;
condexpr_false_6:;
tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_6);
condexpr_end_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_bases_value_6 = tmp_class_container$class_creation_6__bases;
tmp_assign_source_66 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
CHECK_OBJECT(tmp_metaclass_value_6);
Py_DECREF(tmp_metaclass_value_6);
if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;

    goto try_except_handler_19;
}
assert(tmp_class_container$class_creation_6__metaclass == NULL);
tmp_class_container$class_creation_6__metaclass = tmp_assign_source_66;
}
{
bool tmp_condition_result_23;
PyObject *tmp_expression_value_43;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_43 = tmp_class_container$class_creation_6__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_43, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;

    goto try_except_handler_19;
}
tmp_condition_result_23 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_23 != false) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
{
PyObject *tmp_assign_source_67;
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_44;
PyObject *tmp_args_value_11;
PyObject *tmp_tuple_element_23;
PyObject *tmp_kwargs_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_44 = tmp_class_container$class_creation_6__metaclass;
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;

    goto try_except_handler_19;
}
tmp_tuple_element_23 = mod_consts.const_str_plain_AuthorizedSession;
tmp_args_value_11 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_23);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_23 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_23);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_11 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_google$auth$transport$requests->m_frame.f_lineno = 298;
tmp_assign_source_67 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_11, tmp_kwargs_value_11);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_value_11);
Py_DECREF(tmp_args_value_11);
if (tmp_assign_source_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;

    goto try_except_handler_19;
}
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_67;
}
{
bool tmp_condition_result_24;
PyObject *tmp_operand_value_6;
PyObject *tmp_expression_value_45;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_expression_value_45 = tmp_class_container$class_creation_6__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_45, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;

    goto try_except_handler_19;
}
tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
assert(!(tmp_res == -1));
tmp_condition_result_24 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_24 != false) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
{
PyObject *tmp_raise_type_7;
PyObject *tmp_make_exception_arg_7;
PyObject *tmp_mod_expr_left_6;
PyObject *tmp_mod_expr_right_6;
PyObject *tmp_tuple_element_24;
PyObject *tmp_expression_value_46;
PyObject *tmp_name_value_20;
PyObject *tmp_default_value_6;
tmp_mod_expr_left_6 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_46 = tmp_class_container$class_creation_6__metaclass;
tmp_name_value_20 = const_str_plain___name__;
tmp_default_value_6 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_24 = BUILTIN_GETATTR(tstate, tmp_expression_value_46, tmp_name_value_20, tmp_default_value_6);
if (tmp_tuple_element_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;

    goto try_except_handler_19;
}
tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_47;
PyObject *tmp_type_arg_12;
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_24);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_type_arg_12 = tmp_class_container$class_creation_6__prepared;
tmp_expression_value_47 = BUILTIN_TYPE1(tmp_type_arg_12);
assert(!(tmp_expression_value_47 == NULL));
tmp_tuple_element_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_47);
Py_DECREF(tmp_expression_value_47);
if (tmp_tuple_element_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_24);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_mod_expr_right_6);
goto try_except_handler_19;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_make_exception_arg_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
CHECK_OBJECT(tmp_mod_expr_right_6);
Py_DECREF(tmp_mod_expr_right_6);
if (tmp_make_exception_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;

    goto try_except_handler_19;
}
frame_frame_google$auth$transport$requests->m_frame.f_lineno = 298;
tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_7);
CHECK_OBJECT(tmp_make_exception_arg_7);
Py_DECREF(tmp_make_exception_arg_7);
assert(!(tmp_raise_type_7 == NULL));
exception_state.exception_value = tmp_raise_type_7;
exception_lineno = 298;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_19;
}
branch_no_18:;
goto branch_end_17;
branch_no_17:;
{
PyObject *tmp_assign_source_68;
tmp_assign_source_68 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_68;
}
branch_end_17:;
{
PyObject *tmp_assign_source_69;
outline_5_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_set_locals_6 = tmp_class_container$class_creation_6__prepared;
locals_google$auth$transport$requests$$$class__6_AuthorizedSession_298 = tmp_set_locals_6;
Py_INCREF(tmp_set_locals_6);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_eda478fe391780f02c579185f1943916;
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__6_AuthorizedSession_298, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;

    goto try_except_handler_21;
}
tmp_dictset_value = mod_consts.const_str_digest_5f248caea50fd25bc0595cb39708b596;
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__6_AuthorizedSession_298, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;

    goto try_except_handler_21;
}
tmp_dictset_value = mod_consts.const_str_plain_AuthorizedSession;
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__6_AuthorizedSession_298, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;

    goto try_except_handler_21;
}
tmp_dictset_value = mod_consts.const_int_pos_298;
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__6_AuthorizedSession_298, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;

    goto try_except_handler_21;
}
frame_frame_google$auth$transport$requests$$$class__6_AuthorizedSession_7 = MAKE_CLASS_FRAME(tstate, code_objects_181f8774bada9738b9356afb9700771f, module_google$auth$transport$requests, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$transport$requests$$$class__6_AuthorizedSession_7);
assert(Py_REFCNT(frame_frame_google$auth$transport$requests$$$class__6_AuthorizedSession_7) == 2);

// Framed code:
{
PyObject *tmp_defaults_4;
PyObject *tmp_tuple_element_25;
PyObject *tmp_expression_value_48;
tmp_expression_value_48 = PyObject_GetItem(locals_google$auth$transport$requests$$$class__6_AuthorizedSession_298, mod_consts.const_str_plain_transport);

if (tmp_expression_value_48 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_48 = module_var_accessor_google$auth$transport$requests$transport(tstate);
if (unlikely(tmp_expression_value_48 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_48 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 388;
type_description_2 = "c";
    goto frame_exception_exit_7;
}
        Py_INCREF(tmp_expression_value_48);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_7;
    }
}

tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts.const_str_plain_DEFAULT_REFRESH_STATUS_CODES);
CHECK_OBJECT(tmp_expression_value_48);
Py_DECREF(tmp_expression_value_48);
if (tmp_tuple_element_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;
type_description_2 = "c";
    goto frame_exception_exit_7;
}
tmp_defaults_4 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_expression_value_49;
PyTuple_SET_ITEM(tmp_defaults_4, 0, tmp_tuple_element_25);
tmp_expression_value_49 = PyObject_GetItem(locals_google$auth$transport$requests$$$class__6_AuthorizedSession_298, mod_consts.const_str_plain_transport);

if (tmp_expression_value_49 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_49 = module_var_accessor_google$auth$transport$requests$transport(tstate);
if (unlikely(tmp_expression_value_49 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_49 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 389;
type_description_2 = "c";
    goto tuple_build_exception_8;
}
        Py_INCREF(tmp_expression_value_49);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_8;
    }
}

tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts.const_str_plain_DEFAULT_MAX_REFRESH_ATTEMPTS);
CHECK_OBJECT(tmp_expression_value_49);
Py_DECREF(tmp_expression_value_49);
if (tmp_tuple_element_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 389;
type_description_2 = "c";
    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_defaults_4, 1, tmp_tuple_element_25);
tmp_tuple_element_25 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_4, 2, tmp_tuple_element_25);
tmp_tuple_element_25 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_4, 3, tmp_tuple_element_25);
tmp_tuple_element_25 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_4, 4, tmp_tuple_element_25);
}
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_defaults_4);
goto frame_exception_exit_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;

tmp_dictset_value = MAKE_FUNCTION_google$auth$transport$requests$$$function__17___init__(tstate, tmp_defaults_4);

tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__6_AuthorizedSession_298, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 385;
type_description_2 = "c";
    goto frame_exception_exit_7;
}
}
{
PyObject *tmp_defaults_5;
tmp_defaults_5 = mod_consts.const_tuple_none_tuple;
Py_INCREF(tmp_defaults_5);

tmp_dictset_value = MAKE_FUNCTION_google$auth$transport$requests$$$function__18_configure_mtls_channel(tstate, tmp_defaults_5);

tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__6_AuthorizedSession_298, mod_consts.const_str_plain_configure_mtls_channel, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 428;
type_description_2 = "c";
    goto frame_exception_exit_7;
}
}
{
PyObject *tmp_defaults_6;
PyObject *tmp_tuple_element_26;
tmp_tuple_element_26 = Py_None;
tmp_defaults_6 = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_defaults_6, 0, tmp_tuple_element_26);
tmp_tuple_element_26 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_6, 1, tmp_tuple_element_26);
tmp_tuple_element_26 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_6, 2, tmp_tuple_element_26);
tmp_tuple_element_26 = PyObject_GetItem(locals_google$auth$transport$requests$$$class__6_AuthorizedSession_298, mod_consts.const_str_plain__DEFAULT_TIMEOUT);

if (tmp_tuple_element_26 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_26 = module_var_accessor_google$auth$transport$requests$_DEFAULT_TIMEOUT(tstate);
if (unlikely(tmp_tuple_element_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__DEFAULT_TIMEOUT);
}

if (tmp_tuple_element_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 486;
type_description_2 = "c";
    goto tuple_build_exception_9;
}
        Py_INCREF(tmp_tuple_element_26);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_9;
    }
}

PyTuple_SET_ITEM(tmp_defaults_6, 3, tmp_tuple_element_26);
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_defaults_6);
goto frame_exception_exit_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;

tmp_dictset_value = MAKE_FUNCTION_google$auth$transport$requests$$$function__19_request(tstate, tmp_defaults_6);

tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__6_AuthorizedSession_298, mod_consts.const_str_plain_request, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 479;
type_description_2 = "c";
    goto frame_exception_exit_7;
}
}
{
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_4;
tmp_called_value_15 = PyObject_GetItem(locals_google$auth$transport$requests$$$class__6_AuthorizedSession_298, mod_consts.const_str_plain_property);

if (tmp_called_value_15 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_15 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_15);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_7;
    }
}


tmp_args_element_value_4 = MAKE_FUNCTION_google$auth$transport$requests$$$function__20_is_mtls(tstate);

frame_frame_google$auth$transport$requests$$$class__6_AuthorizedSession_7->m_frame.f_lineno = 626;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 626;
type_description_2 = "c";
    goto frame_exception_exit_7;
}
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__6_AuthorizedSession_298, mod_consts.const_str_plain_is_mtls, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 627;
type_description_2 = "c";
    goto frame_exception_exit_7;
}
}

tmp_dictset_value = MAKE_FUNCTION_google$auth$transport$requests$$$function__21_close(tstate);

tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__6_AuthorizedSession_298, const_str_plain_close, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 631;
type_description_2 = "c";
    goto frame_exception_exit_7;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_6;
frame_exception_exit_7:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$requests$$$class__6_AuthorizedSession_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$requests$$$class__6_AuthorizedSession_7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$requests$$$class__6_AuthorizedSession_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$transport$requests$$$class__6_AuthorizedSession_7,
    type_description_2,
    outline_5_var___class__
);



assertFrameObject(frame_frame_google$auth$transport$requests$$$class__6_AuthorizedSession_7);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_6;
frame_no_exception_6:;
goto skip_nested_handling_6;
nested_frame_exit_6:;

goto try_except_handler_21;
skip_nested_handling_6:;
tmp_dictset_value = mod_consts.const_tuple_1f9cbf0c238458c2c9dfaa53c8f9a6c2_tuple;
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__6_AuthorizedSession_298, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;

    goto try_except_handler_21;
}
{
nuitka_bool tmp_condition_result_25;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_cmp_expr_left_7 = tmp_class_container$class_creation_6__bases;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_cmp_expr_right_7 = tmp_class_container$class_creation_6__bases_orig;
tmp_condition_result_25 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_condition_result_25 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;

    goto try_except_handler_21;
}
if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_6__bases_orig;
tmp_res = PyObject_SetItem(locals_google$auth$transport$requests$$$class__6_AuthorizedSession_298, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;

    goto try_except_handler_21;
}
branch_no_19:;
{
PyObject *tmp_assign_source_70;
PyObject *tmp_called_value_16;
PyObject *tmp_args_value_12;
PyObject *tmp_tuple_element_27;
PyObject *tmp_kwargs_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_called_value_16 = tmp_class_container$class_creation_6__metaclass;
tmp_tuple_element_27 = mod_consts.const_str_plain_AuthorizedSession;
tmp_args_value_12 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_27);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_27 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_27);
tmp_tuple_element_27 = locals_google$auth$transport$requests$$$class__6_AuthorizedSession_298;
PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_27);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_12 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_google$auth$transport$requests->m_frame.f_lineno = 298;
tmp_assign_source_70 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_12, tmp_kwargs_value_12);
CHECK_OBJECT(tmp_args_value_12);
Py_DECREF(tmp_args_value_12);
if (tmp_assign_source_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;

    goto try_except_handler_21;
}
assert(Nuitka_Cell_GET(outline_5_var___class__) == NULL);
Nuitka_Cell_SET(outline_5_var___class__, tmp_assign_source_70);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_5_var___class__));
tmp_assign_source_69 = Nuitka_Cell_GET(outline_5_var___class__);
Py_INCREF(tmp_assign_source_69);
goto try_return_handler_21;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_21:;
Py_DECREF(locals_google$auth$transport$requests$$$class__6_AuthorizedSession_298);
locals_google$auth$transport$requests$$$class__6_AuthorizedSession_298 = NULL;
goto try_return_handler_20;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$auth$transport$requests$$$class__6_AuthorizedSession_298);
locals_google$auth$transport$requests$$$class__6_AuthorizedSession_298 = NULL;
// Re-raise.
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto try_except_handler_20;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_20:;
CHECK_OBJECT(outline_5_var___class__);
CHECK_OBJECT(outline_5_var___class__);
Py_DECREF(outline_5_var___class__);
outline_5_var___class__ = NULL;
goto outline_result_12;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_20 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_20 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_20;
exception_lineno = exception_keeper_lineno_20;

goto outline_exception_6;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_6:;
exception_lineno = 298;
goto try_except_handler_19;
outline_result_12:;
UPDATE_STRING_DICT1(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)mod_consts.const_str_plain_AuthorizedSession, tmp_assign_source_69);
}
goto try_end_7;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_21 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_21 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_6__bases_orig);
tmp_class_container$class_creation_6__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__bases);
tmp_class_container$class_creation_6__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__class_decl_dict);
tmp_class_container$class_creation_6__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__metaclass);
tmp_class_container$class_creation_6__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__prepared);
tmp_class_container$class_creation_6__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_21;
exception_lineno = exception_keeper_lineno_21;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
Py_DECREF(tmp_class_container$class_creation_6__bases_orig);
tmp_class_container$class_creation_6__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
Py_DECREF(tmp_class_container$class_creation_6__bases);
tmp_class_container$class_creation_6__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_6__class_decl_dict);
tmp_class_container$class_creation_6__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
Py_DECREF(tmp_class_container$class_creation_6__metaclass);
tmp_class_container$class_creation_6__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
Py_DECREF(tmp_class_container$class_creation_6__prepared);
tmp_class_container$class_creation_6__prepared = NULL;
tmp_outline_return_value_6 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_6);
goto outline_result_11;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_11:;
CHECK_OBJECT(tmp_outline_return_value_6);
Py_DECREF(tmp_outline_return_value_6);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_7;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$transport$requests, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$transport$requests->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$transport$requests, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_google$auth$transport$requests);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_7:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("google$auth$transport$requests", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth.transport.requests" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_google$auth$transport$requests);
    return module_google$auth$transport$requests;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$transport$requests, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("google$auth$transport$requests", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

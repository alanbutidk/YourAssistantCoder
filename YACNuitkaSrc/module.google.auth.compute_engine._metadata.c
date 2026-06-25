/* Generated code for Python module 'google$auth$compute_engine$_metadata'
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



/* The "module_google$auth$compute_engine$_metadata" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_google$auth$compute_engine$_metadata;
PyDictObject *moduledict_google$auth$compute_engine$_metadata;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain__mtls;
PyObject *const_str_plain__parse_mds_mode;
PyObject *const_str_plain_MdsMtlsMode;
PyObject *const_str_plain_STRICT;
PyObject *const_str_plain__GCE_METADATA_HOST;
PyObject *const_str_plain__GCE_DEFAULT_MDS_HOSTS;
PyObject *const_str_plain_exceptions;
PyObject *const_str_plain_MutualTLSChannelError;
PyObject *const_tuple_str_digest_51c9e1b1903a0aa5d414d1183efb8c78_tuple;
PyObject *const_str_digest_1cb2709bc94a9846c81cf858e409a2a5;
PyObject *const_str_plain_https;
PyObject *const_str_plain_http;
PyObject *const_str_digest_5bd1f064c383b3cfe643a6b92600e961;
PyObject *const_str_digest_ce1b7432f502bc4baefef6ea3e007c73;
PyObject *const_str_digest_c41b568679d71dcc0a878e8cf5c0ad51;
PyObject *const_str_plain_getenv;
PyObject *const_str_plain_environment_vars;
PyObject *const_str_plain_GCE_METADATA_IP;
PyObject *const_str_plain__GCE_DEFAULT_MDS_IP;
PyObject *const_str_digest_5370ce1620b1a21c30045d2cfab97cd9;
PyObject *const_str_plain__NO_GCE_CHECK;
PyObject *const_str_plain_ping;
PyObject *const_str_digest_4235c29f2cedfaa90da8b62d5b97ff4d;
PyObject *const_str_plain__GCE_PRODUCT_NAME_FILE;
PyObject *const_str_plain_strip;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_content;
PyObject *const_str_plain_startswith;
PyObject *const_str_plain__GOOGLE;
PyObject *const_str_digest_1f4628297dff324ec96690ab4de461c5;
PyObject *const_str_plain_session;
PyObject *const_str_plain_requests;
PyObject *const_str_plain_Session;
PyObject *const_str_plain_MdsMtlsAdapter;
PyObject *const_str_plain_request;
PyObject *const_str_plain_mount;
PyObject *const_str_digest_504b77692b694460b8c25198a52c83ba;
PyObject *const_str_plain_adapter;
PyObject *const_str_digest_243b2e200618233fd837e8d36c63308f;
PyObject *const_str_plain_should_use_mds_mtls;
PyObject *const_str_plain__prepare_request_for_mds;
PyObject *const_tuple_str_plain_use_mtls_tuple;
PyObject *const_str_plain__METADATA_HEADERS;
PyObject *const_str_plain_copy;
PyObject *const_str_plain_metrics;
PyObject *const_str_plain_mds_ping;
PyObject *const_str_plain_API_CLIENT_HEADER;
PyObject *const_str_plain_ExponentialBackoff;
PyObject *const_tuple_str_plain_total_attempts_tuple;
PyObject *const_str_plain__get_metadata_ip_root;
PyObject *const_str_plain_use_mtls;
PyObject *const_str_plain_GET;
PyObject *const_str_plain_headers;
PyObject *const_str_plain_timeout;
PyObject *const_tuple_4e4ded47b31573b4d33f424c29e47006_tuple;
PyObject *const_str_plain__METADATA_FLAVOR_HEADER;
PyObject *const_str_plain_status;
PyObject *const_str_plain_http_client;
PyObject *const_str_plain_OK;
PyObject *const_str_plain__METADATA_FLAVOR_VALUE;
PyObject *const_str_plain_TransportError;
PyObject *const_str_plain__LOGGER;
PyObject *const_str_plain_warning;
PyObject *const_str_digest_e11cb07dfd93d1c50b2b1f2293fbbc8b;
PyObject *const_str_plain_retry_count;
PyObject *const_str_digest_001f99b58cffebc0e3cceb838662cc73;
PyObject *const_str_plain__get_metadata_root;
PyObject *const_str_plain__validate_gce_mds_configured_environment;
PyObject *const_str_plain_urljoin;
PyObject *const_str_plain_update;
PyObject *const_str_plain_true;
PyObject *const_str_plain_recursive;
PyObject *const_str_plain__helpers;
PyObject *const_str_plain_update_query;
PyObject *const_str_plain_url;
PyObject *const_str_plain_headers_to_use;
PyObject *const_str_plain_transport;
PyObject *const_str_plain_DEFAULT_RETRYABLE_STATUS_CODES;
PyObject *const_str_digest_c481445c58951a31f6bd345060b13fc2;
PyObject *const_str_plain_last_exception;
PyObject *const_str_digest_dd3618287874236b3e28a583d7bc6106;
PyObject *const_str_plain_response;
PyObject *const_str_plain_data;
PyObject *const_str_plain_decode;
PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
PyObject *const_str_digest_e3204237a5f708ae2d0492ac580ebae8;
PyObject *const_str_plain_from_bytes;
PyObject *const_str_plain_NOT_FOUND;
PyObject *const_str_plain_parse_content_type;
PyObject *const_str_digest_d1c9bee04bd0a9c88e6c11d7c3b4ffd8;
PyObject *const_str_digest_1781891970018ef9597f363946d7327b;
PyObject *const_str_plain_json;
PyObject *const_str_plain_loads;
PyObject *const_str_digest_a8248aae37cae04d28f4f048b4b1a824;
PyObject *const_str_digest_f66a5b747b12ecbf268c424ea99da3c0;
PyObject *const_str_digest_e5fb7b6fe15904aec82c96d17074e7df;
PyObject *const_str_digest_8dd12a70f79301856e399502301eaf27;
PyObject *const_str_digest_8931ccec0478d59b563bf41ed3ba28c5;
PyObject *const_str_digest_a2fd72b0299acadb47aa68627ca0022f;
PyObject *const_dict_4fd378f782b3f748411112a39b7a85b1;
PyObject *const_str_digest_3aefddac426ef180a4b7d7808d36479c;
PyObject *const_str_digest_2272e9c85078bee94aaf6d666c998e33;
PyObject *const_str_digest_a6cd6e5ec187082a157e21a376c6abbf;
PyObject *const_dict_4581e39d79ff248937a99b528b550868;
PyObject *const_str_digest_f9cef753f63e8424258f0e4b6119c92d;
PyObject *const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
PyObject *const_tuple_str_plain__agent_identity_utils_tuple;
PyObject *const_str_plain__agent_identity_utils;
PyObject *const_str_chr_44;
PyObject *const_str_plain_scopes;
PyObject *const_str_plain_get_and_parse_agent_identity_certificate;
PyObject *const_str_plain_should_request_bound_token;
PyObject *const_str_plain_calculate_certificate_fingerprint;
PyObject *const_str_plain_bindCertificateFingerprint;
PyObject *const_str_plain_token_request_access_token_mds;
PyObject *const_str_digest_ccb589ff01ba810f3aa8b4f643f3a5e9;
PyObject *const_tuple_str_plain_params_str_plain_headers_tuple;
PyObject *const_str_plain_utcnow;
PyObject *const_str_plain_datetime;
PyObject *const_str_plain_timedelta;
PyObject *const_str_plain_expires_in;
PyObject *const_tuple_str_plain_seconds_tuple;
PyObject *const_str_plain_access_token;
PyObject *const_str_digest_7e4ba0edd8abfc973ed97f4f5555660c;
PyObject *const_str_digest_dfe5a10204efca079cd4b73145aa1ef1;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_digest_096ca139beaf8ac5201071e235ad66b6;
PyObject *const_str_plain_client;
PyObject *const_str_plain_logging;
PyObject *const_str_plain_os;
PyObject *const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
PyObject *const_tuple_str_plain_urljoin_tuple;
PyObject *const_tuple_str_plain__helpers_tuple;
PyObject *const_tuple_str_plain_environment_vars_tuple;
PyObject *const_tuple_str_plain_exceptions_tuple;
PyObject *const_tuple_str_plain_metrics_tuple;
PyObject *const_tuple_str_plain_transport_tuple;
PyObject *const_str_digest_3115e6748a7e8614dbfefe5da643c9fb;
PyObject *const_tuple_str_plain_ExponentialBackoff_tuple;
PyObject *const_str_digest_570834cc86e35a3d09c0821b53119f1c;
PyObject *const_tuple_str_plain__mtls_tuple;
PyObject *const_str_plain_getLogger;
PyObject *const_tuple_str_digest_1541e27291e0d85174e1a5a4d4f45c1b_tuple;
PyObject *const_str_digest_37b7b8fc0d57c24d5466039757bfc393;
PyObject *const_str_digest_eaafe74924b27c6160d9e6511da269e3;
PyObject *const_str_plain__GCE_DEFAULT_HOST;
PyObject *const_str_plain_GCE_METADATA_HOST;
PyObject *const_str_plain_GCE_METADATA_ROOT;
PyObject *const_dict_98af96efb7efb29155f04c150c9d2a76;
PyObject *const_str_digest_09b1e306a8d05fdf58c0cbff6f0aa4fb;
PyObject *const_str_plain_Google;
PyObject *const_str_plain_GCE_METADATA_TIMEOUT;
PyObject *const_int_pos_3;
PyObject *const_str_plain__METADATA_DEFAULT_TIMEOUT;
PyObject *const_str_plain_GCE_METADATA_DETECT_RETRIES;
PyObject *const_str_plain__METADATA_DETECT_RETRIES;
PyObject *const_str_plain_NO_GCE_CHECK;
PyObject *const_str_digest_55984eddd4fb864b963a86014639ebe1;
PyObject *const_str_plain_is_on_gce;
PyObject *const_str_plain_detect_gce_residency_linux;
PyObject *const_tuple_false_tuple;
PyObject *const_dict_056a293e2058d56276328e53ff09a8b9;
PyObject *const_int_pos_5;
PyObject *const_str_plain_get_project_id;
PyObject *const_str_plain_get_universe_domain;
PyObject *const_tuple_str_plain_default_tuple;
PyObject *const_str_plain_get_service_account_info;
PyObject *const_tuple_str_plain_default_none_tuple;
PyObject *const_str_plain_get_service_account_token;
PyObject *const_str_digest_b2e07843140c70ff1948c61ccddad295;
PyObject *const_str_digest_eb108085057649470a4f20d78c8aaa37;
PyObject *const_tuple_str_plain_use_mtls_str_plain_scheme_tuple;
PyObject *const_tuple_6a2c7991d078ef903b6e96e7cae0d12a_tuple;
PyObject *const_tuple_str_plain_mode_tuple;
PyObject *const_tuple_str_plain_file_obj_str_plain_content_tuple;
PyObject *const_tuple_8cf7cf64b941db4148b086bb90daf4de_tuple;
PyObject *const_tuple_str_plain_request_tuple;
PyObject *const_tuple_str_plain_request_str_plain_service_account_str_plain_path_tuple;
PyObject *const_tuple_df42b1f37b0d44101a6c1ffe7be177ed_tuple;
PyObject *const_tuple_str_plain_request_str_plain_universe_domain_tuple;
PyObject *const_tuple_380b03d3be09155f95b2356a83ef3bdd_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[182];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("google.auth.compute_engine._metadata"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain__mtls);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__parse_mds_mode);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_MdsMtlsMode);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_STRICT);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain__GCE_METADATA_HOST);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain__GCE_DEFAULT_MDS_HOSTS);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_MutualTLSChannelError);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_51c9e1b1903a0aa5d414d1183efb8c78_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_1cb2709bc94a9846c81cf858e409a2a5);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_https);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_http);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_5bd1f064c383b3cfe643a6b92600e961);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_ce1b7432f502bc4baefef6ea3e007c73);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_c41b568679d71dcc0a878e8cf5c0ad51);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_getenv);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_environment_vars);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_GCE_METADATA_IP);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain__GCE_DEFAULT_MDS_IP);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_5370ce1620b1a21c30045d2cfab97cd9);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain__NO_GCE_CHECK);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_ping);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_4235c29f2cedfaa90da8b62d5b97ff4d);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain__GCE_PRODUCT_NAME_FILE);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_strip);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_content);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_startswith);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain__GOOGLE);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_1f4628297dff324ec96690ab4de461c5);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_session);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_requests);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_Session);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_MdsMtlsAdapter);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_request);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_mount);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_504b77692b694460b8c25198a52c83ba);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_adapter);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_243b2e200618233fd837e8d36c63308f);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_should_use_mds_mtls);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain__prepare_request_for_mds);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_use_mtls_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain__METADATA_HEADERS);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_metrics);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_mds_ping);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_API_CLIENT_HEADER);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_ExponentialBackoff);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_total_attempts_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_metadata_ip_root);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_use_mtls);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_GET);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_headers);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_timeout);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_4e4ded47b31573b4d33f424c29e47006_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain__METADATA_FLAVOR_HEADER);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_status);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_http_client);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_OK);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain__METADATA_FLAVOR_VALUE);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_TransportError);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain__LOGGER);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_warning);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_e11cb07dfd93d1c50b2b1f2293fbbc8b);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_retry_count);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_001f99b58cffebc0e3cceb838662cc73);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_metadata_root);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain__validate_gce_mds_configured_environment);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_urljoin);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_update);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_true);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_recursive);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain__helpers);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_update_query);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_url);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_headers_to_use);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_transport);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_RETRYABLE_STATUS_CODES);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_c481445c58951a31f6bd345060b13fc2);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_last_exception);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_dd3618287874236b3e28a583d7bc6106);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_response);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_data);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_e3204237a5f708ae2d0492ac580ebae8);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_bytes);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_NOT_FOUND);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse_content_type);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_d1c9bee04bd0a9c88e6c11d7c3b4ffd8);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_1781891970018ef9597f363946d7327b);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_json);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_loads);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_a8248aae37cae04d28f4f048b4b1a824);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_digest_f66a5b747b12ecbf268c424ea99da3c0);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_digest_e5fb7b6fe15904aec82c96d17074e7df);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_8dd12a70f79301856e399502301eaf27);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_8931ccec0478d59b563bf41ed3ba28c5);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_digest_a2fd72b0299acadb47aa68627ca0022f);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_dict_4fd378f782b3f748411112a39b7a85b1);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_digest_3aefddac426ef180a4b7d7808d36479c);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_digest_2272e9c85078bee94aaf6d666c998e33);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_a6cd6e5ec187082a157e21a376c6abbf);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_dict_4581e39d79ff248937a99b528b550868);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_digest_f9cef753f63e8424258f0e4b6119c92d);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__agent_identity_utils_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain__agent_identity_utils);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_chr_44);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_scopes);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_and_parse_agent_identity_certificate);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_should_request_bound_token);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_calculate_certificate_fingerprint);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_bindCertificateFingerprint);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_token_request_access_token_mds);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_ccb589ff01ba810f3aa8b4f643f3a5e9);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_params_str_plain_headers_tuple);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_utcnow);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_datetime);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_timedelta);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_expires_in);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_seconds_tuple);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_access_token);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_digest_7e4ba0edd8abfc973ed97f4f5555660c);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_digest_dfe5a10204efca079cd4b73145aa1ef1);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_096ca139beaf8ac5201071e235ad66b6);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_client);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_logging);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_urljoin_tuple);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__helpers_tuple);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_environment_vars_tuple);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_metrics_tuple);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_transport_tuple);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_digest_3115e6748a7e8614dbfefe5da643c9fb);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ExponentialBackoff_tuple);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_digest_570834cc86e35a3d09c0821b53119f1c);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__mtls_tuple);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_1541e27291e0d85174e1a5a4d4f45c1b_tuple);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_digest_37b7b8fc0d57c24d5466039757bfc393);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_digest_eaafe74924b27c6160d9e6511da269e3);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain__GCE_DEFAULT_HOST);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_GCE_METADATA_HOST);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_GCE_METADATA_ROOT);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_dict_98af96efb7efb29155f04c150c9d2a76);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_digest_09b1e306a8d05fdf58c0cbff6f0aa4fb);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_Google);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_GCE_METADATA_TIMEOUT);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain__METADATA_DEFAULT_TIMEOUT);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_GCE_METADATA_DETECT_RETRIES);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain__METADATA_DETECT_RETRIES);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_NO_GCE_CHECK);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_digest_55984eddd4fb864b963a86014639ebe1);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_on_gce);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain_detect_gce_residency_linux);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_int_pos_5);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_project_id);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_universe_domain);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_default_tuple);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_service_account_info);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_default_none_tuple);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_service_account_token);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_digest_b2e07843140c70ff1948c61ccddad295);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_digest_eb108085057649470a4f20d78c8aaa37);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_use_mtls_str_plain_scheme_tuple);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_tuple_6a2c7991d078ef903b6e96e7cae0d12a_tuple);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_mode_tuple);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_file_obj_str_plain_content_tuple);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_tuple_8cf7cf64b941db4148b086bb90daf4de_tuple);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_request_tuple);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_request_str_plain_service_account_str_plain_path_tuple);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_tuple_df42b1f37b0d44101a6c1ffe7be177ed_tuple);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_request_str_plain_universe_domain_tuple);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_tuple_380b03d3be09155f95b2356a83ef3bdd_tuple);
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
void checkModuleConstants_google$auth$compute_engine$_metadata(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain__mtls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__mtls);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__parse_mds_mode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__parse_mds_mode);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_MdsMtlsMode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MdsMtlsMode);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_STRICT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_STRICT);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain__GCE_METADATA_HOST));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__GCE_METADATA_HOST);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain__GCE_DEFAULT_MDS_HOSTS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__GCE_DEFAULT_MDS_HOSTS);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_MutualTLSChannelError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MutualTLSChannelError);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_51c9e1b1903a0aa5d414d1183efb8c78_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_51c9e1b1903a0aa5d414d1183efb8c78_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_1cb2709bc94a9846c81cf858e409a2a5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1cb2709bc94a9846c81cf858e409a2a5);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_https));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_https);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_http));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_http);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_5bd1f064c383b3cfe643a6b92600e961));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5bd1f064c383b3cfe643a6b92600e961);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_ce1b7432f502bc4baefef6ea3e007c73));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ce1b7432f502bc4baefef6ea3e007c73);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_c41b568679d71dcc0a878e8cf5c0ad51));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c41b568679d71dcc0a878e8cf5c0ad51);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_getenv));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getenv);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_environment_vars));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environment_vars);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_GCE_METADATA_IP));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GCE_METADATA_IP);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain__GCE_DEFAULT_MDS_IP));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__GCE_DEFAULT_MDS_IP);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_5370ce1620b1a21c30045d2cfab97cd9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5370ce1620b1a21c30045d2cfab97cd9);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain__NO_GCE_CHECK));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__NO_GCE_CHECK);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_ping));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ping);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_4235c29f2cedfaa90da8b62d5b97ff4d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4235c29f2cedfaa90da8b62d5b97ff4d);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain__GCE_PRODUCT_NAME_FILE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__GCE_PRODUCT_NAME_FILE);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_strip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strip);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_content));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_content);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_startswith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_startswith);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain__GOOGLE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__GOOGLE);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_1f4628297dff324ec96690ab4de461c5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1f4628297dff324ec96690ab4de461c5);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_session));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_session);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_requests));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_requests);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_Session));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Session);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_MdsMtlsAdapter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MdsMtlsAdapter);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_request);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_mount));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mount);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_504b77692b694460b8c25198a52c83ba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_504b77692b694460b8c25198a52c83ba);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_adapter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_adapter);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_243b2e200618233fd837e8d36c63308f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_243b2e200618233fd837e8d36c63308f);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_should_use_mds_mtls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_should_use_mds_mtls);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain__prepare_request_for_mds));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__prepare_request_for_mds);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_use_mtls_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_use_mtls_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain__METADATA_HEADERS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__METADATA_HEADERS);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copy);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_metrics));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_metrics);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_mds_ping));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mds_ping);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_API_CLIENT_HEADER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_API_CLIENT_HEADER);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_ExponentialBackoff));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ExponentialBackoff);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_total_attempts_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_total_attempts_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_metadata_ip_root));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_metadata_ip_root);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_use_mtls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_use_mtls);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_GET));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GET);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_headers);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_timeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_timeout);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_4e4ded47b31573b4d33f424c29e47006_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4e4ded47b31573b4d33f424c29e47006_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain__METADATA_FLAVOR_HEADER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__METADATA_FLAVOR_HEADER);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_status));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_status);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_http_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_http_client);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_OK));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OK);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain__METADATA_FLAVOR_VALUE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__METADATA_FLAVOR_VALUE);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_TransportError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TransportError);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain__LOGGER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__LOGGER);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_warning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warning);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_e11cb07dfd93d1c50b2b1f2293fbbc8b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e11cb07dfd93d1c50b2b1f2293fbbc8b);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_retry_count));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_retry_count);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_001f99b58cffebc0e3cceb838662cc73));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_001f99b58cffebc0e3cceb838662cc73);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_metadata_root));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_metadata_root);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain__validate_gce_mds_configured_environment));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__validate_gce_mds_configured_environment);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_urljoin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_urljoin);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_update));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_update);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_true));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_true);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_recursive));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_recursive);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain__helpers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__helpers);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_update_query));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_update_query);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_url);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_headers_to_use));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_headers_to_use);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_transport));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_transport);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_RETRYABLE_STATUS_CODES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_RETRYABLE_STATUS_CODES);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_c481445c58951a31f6bd345060b13fc2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c481445c58951a31f6bd345060b13fc2);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_last_exception));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_last_exception);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_dd3618287874236b3e28a583d7bc6106));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dd3618287874236b3e28a583d7bc6106);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_data);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decode);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_e3204237a5f708ae2d0492ac580ebae8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e3204237a5f708ae2d0492ac580ebae8);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_bytes);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_NOT_FOUND));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NOT_FOUND);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse_content_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse_content_type);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_d1c9bee04bd0a9c88e6c11d7c3b4ffd8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d1c9bee04bd0a9c88e6c11d7c3b4ffd8);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_1781891970018ef9597f363946d7327b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1781891970018ef9597f363946d7327b);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_json);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_loads));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_loads);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_a8248aae37cae04d28f4f048b4b1a824));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a8248aae37cae04d28f4f048b4b1a824);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_digest_f66a5b747b12ecbf268c424ea99da3c0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f66a5b747b12ecbf268c424ea99da3c0);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_digest_e5fb7b6fe15904aec82c96d17074e7df));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e5fb7b6fe15904aec82c96d17074e7df);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_8dd12a70f79301856e399502301eaf27));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8dd12a70f79301856e399502301eaf27);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_8931ccec0478d59b563bf41ed3ba28c5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8931ccec0478d59b563bf41ed3ba28c5);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_digest_a2fd72b0299acadb47aa68627ca0022f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a2fd72b0299acadb47aa68627ca0022f);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_dict_4fd378f782b3f748411112a39b7a85b1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4fd378f782b3f748411112a39b7a85b1);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_digest_3aefddac426ef180a4b7d7808d36479c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3aefddac426ef180a4b7d7808d36479c);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_digest_2272e9c85078bee94aaf6d666c998e33));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2272e9c85078bee94aaf6d666c998e33);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_a6cd6e5ec187082a157e21a376c6abbf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a6cd6e5ec187082a157e21a376c6abbf);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_dict_4581e39d79ff248937a99b528b550868));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4581e39d79ff248937a99b528b550868);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_digest_f9cef753f63e8424258f0e4b6119c92d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f9cef753f63e8424258f0e4b6119c92d);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__agent_identity_utils_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__agent_identity_utils_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain__agent_identity_utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__agent_identity_utils);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_chr_44));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_44);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_scopes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_scopes);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_and_parse_agent_identity_certificate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_and_parse_agent_identity_certificate);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_should_request_bound_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_should_request_bound_token);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_calculate_certificate_fingerprint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_calculate_certificate_fingerprint);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_bindCertificateFingerprint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bindCertificateFingerprint);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_token_request_access_token_mds));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token_request_access_token_mds);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_ccb589ff01ba810f3aa8b4f643f3a5e9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ccb589ff01ba810f3aa8b4f643f3a5e9);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_params_str_plain_headers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_params_str_plain_headers_tuple);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_utcnow));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_utcnow);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_datetime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_datetime);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_timedelta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_timedelta);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_expires_in));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_expires_in);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_seconds_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_seconds_tuple);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_access_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_access_token);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_digest_7e4ba0edd8abfc973ed97f4f5555660c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7e4ba0edd8abfc973ed97f4f5555660c);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_digest_dfe5a10204efca079cd4b73145aa1ef1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dfe5a10204efca079cd4b73145aa1ef1);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_096ca139beaf8ac5201071e235ad66b6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_096ca139beaf8ac5201071e235ad66b6);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_client);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_logging));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logging);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_urljoin_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_urljoin_tuple);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__helpers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__helpers_tuple);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_environment_vars_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_environment_vars_tuple);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exceptions_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_exceptions_tuple);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_metrics_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_metrics_tuple);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_transport_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_transport_tuple);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_digest_3115e6748a7e8614dbfefe5da643c9fb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3115e6748a7e8614dbfefe5da643c9fb);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ExponentialBackoff_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ExponentialBackoff_tuple);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_digest_570834cc86e35a3d09c0821b53119f1c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_570834cc86e35a3d09c0821b53119f1c);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__mtls_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__mtls_tuple);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getLogger);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_1541e27291e0d85174e1a5a4d4f45c1b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_1541e27291e0d85174e1a5a4d4f45c1b_tuple);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_digest_37b7b8fc0d57c24d5466039757bfc393));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_37b7b8fc0d57c24d5466039757bfc393);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_digest_eaafe74924b27c6160d9e6511da269e3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eaafe74924b27c6160d9e6511da269e3);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain__GCE_DEFAULT_HOST));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__GCE_DEFAULT_HOST);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_GCE_METADATA_HOST));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GCE_METADATA_HOST);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_GCE_METADATA_ROOT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GCE_METADATA_ROOT);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_dict_98af96efb7efb29155f04c150c9d2a76));
CHECK_OBJECT_DEEP(mod_consts.const_dict_98af96efb7efb29155f04c150c9d2a76);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_digest_09b1e306a8d05fdf58c0cbff6f0aa4fb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_09b1e306a8d05fdf58c0cbff6f0aa4fb);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_Google));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Google);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_GCE_METADATA_TIMEOUT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GCE_METADATA_TIMEOUT);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain__METADATA_DEFAULT_TIMEOUT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__METADATA_DEFAULT_TIMEOUT);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_GCE_METADATA_DETECT_RETRIES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GCE_METADATA_DETECT_RETRIES);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain__METADATA_DETECT_RETRIES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__METADATA_DETECT_RETRIES);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_NO_GCE_CHECK));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NO_GCE_CHECK);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_digest_55984eddd4fb864b963a86014639ebe1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_55984eddd4fb864b963a86014639ebe1);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_on_gce));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_on_gce);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain_detect_gce_residency_linux));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_detect_gce_residency_linux);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_tuple);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_int_pos_5));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_5);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_project_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_project_id);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_universe_domain));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_universe_domain);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_default_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_default_tuple);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_service_account_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_service_account_info);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_default_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_default_none_tuple);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_service_account_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_service_account_token);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_digest_b2e07843140c70ff1948c61ccddad295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b2e07843140c70ff1948c61ccddad295);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_digest_eb108085057649470a4f20d78c8aaa37));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eb108085057649470a4f20d78c8aaa37);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_use_mtls_str_plain_scheme_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_use_mtls_str_plain_scheme_tuple);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_tuple_6a2c7991d078ef903b6e96e7cae0d12a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6a2c7991d078ef903b6e96e7cae0d12a_tuple);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_mode_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_mode_tuple);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_file_obj_str_plain_content_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_file_obj_str_plain_content_tuple);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_tuple_8cf7cf64b941db4148b086bb90daf4de_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8cf7cf64b941db4148b086bb90daf4de_tuple);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_request_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_request_tuple);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_request_str_plain_service_account_str_plain_path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_request_str_plain_service_account_str_plain_path_tuple);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_tuple_df42b1f37b0d44101a6c1ffe7be177ed_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_df42b1f37b0d44101a6c1ffe7be177ed_tuple);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_request_str_plain_universe_domain_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_request_str_plain_universe_domain_tuple);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_tuple_380b03d3be09155f95b2356a83ef3bdd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_380b03d3be09155f95b2356a83ef3bdd_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 33
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
static PyObject *module_var_accessor_google$auth$compute_engine$_metadata$ExponentialBackoff(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$compute_engine$_metadata->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$compute_engine$_metadata->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_ExponentialBackoff);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$compute_engine$_metadata->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ExponentialBackoff);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ExponentialBackoff, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ExponentialBackoff);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ExponentialBackoff, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_ExponentialBackoff);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_ExponentialBackoff);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ExponentialBackoff);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$compute_engine$_metadata$_GCE_DEFAULT_HOST(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$compute_engine$_metadata->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$compute_engine$_metadata->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__GCE_DEFAULT_HOST);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$compute_engine$_metadata->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__GCE_DEFAULT_HOST);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__GCE_DEFAULT_HOST, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__GCE_DEFAULT_HOST);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__GCE_DEFAULT_HOST, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__GCE_DEFAULT_HOST);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__GCE_DEFAULT_HOST);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__GCE_DEFAULT_HOST);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$compute_engine$_metadata$_GCE_DEFAULT_MDS_HOSTS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$compute_engine$_metadata->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$compute_engine$_metadata->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__GCE_DEFAULT_MDS_HOSTS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$compute_engine$_metadata->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__GCE_DEFAULT_MDS_HOSTS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__GCE_DEFAULT_MDS_HOSTS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__GCE_DEFAULT_MDS_HOSTS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__GCE_DEFAULT_MDS_HOSTS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__GCE_DEFAULT_MDS_HOSTS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__GCE_DEFAULT_MDS_HOSTS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__GCE_DEFAULT_MDS_HOSTS);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$compute_engine$_metadata$_GCE_DEFAULT_MDS_IP(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$compute_engine$_metadata->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$compute_engine$_metadata->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__GCE_DEFAULT_MDS_IP);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$compute_engine$_metadata->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__GCE_DEFAULT_MDS_IP);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__GCE_DEFAULT_MDS_IP, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__GCE_DEFAULT_MDS_IP);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__GCE_DEFAULT_MDS_IP, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__GCE_DEFAULT_MDS_IP);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__GCE_DEFAULT_MDS_IP);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__GCE_DEFAULT_MDS_IP);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$compute_engine$_metadata$_GCE_METADATA_HOST(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$compute_engine$_metadata->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$compute_engine$_metadata->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__GCE_METADATA_HOST);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$compute_engine$_metadata->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__GCE_METADATA_HOST);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__GCE_METADATA_HOST, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__GCE_METADATA_HOST);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__GCE_METADATA_HOST, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__GCE_METADATA_HOST);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__GCE_METADATA_HOST);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__GCE_METADATA_HOST);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$compute_engine$_metadata$_GCE_PRODUCT_NAME_FILE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$compute_engine$_metadata->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$compute_engine$_metadata->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__GCE_PRODUCT_NAME_FILE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$compute_engine$_metadata->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__GCE_PRODUCT_NAME_FILE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__GCE_PRODUCT_NAME_FILE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__GCE_PRODUCT_NAME_FILE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__GCE_PRODUCT_NAME_FILE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__GCE_PRODUCT_NAME_FILE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__GCE_PRODUCT_NAME_FILE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__GCE_PRODUCT_NAME_FILE);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$compute_engine$_metadata$_GOOGLE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$compute_engine$_metadata->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$compute_engine$_metadata->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__GOOGLE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$compute_engine$_metadata->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__GOOGLE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__GOOGLE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__GOOGLE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__GOOGLE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__GOOGLE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__GOOGLE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__GOOGLE);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$compute_engine$_metadata$_LOGGER(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$compute_engine$_metadata->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$compute_engine$_metadata->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$compute_engine$_metadata->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$compute_engine$_metadata$_METADATA_DEFAULT_TIMEOUT(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$compute_engine$_metadata->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$compute_engine$_metadata->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__METADATA_DEFAULT_TIMEOUT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$compute_engine$_metadata->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__METADATA_DEFAULT_TIMEOUT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__METADATA_DEFAULT_TIMEOUT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__METADATA_DEFAULT_TIMEOUT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__METADATA_DEFAULT_TIMEOUT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__METADATA_DEFAULT_TIMEOUT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__METADATA_DEFAULT_TIMEOUT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__METADATA_DEFAULT_TIMEOUT);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$compute_engine$_metadata$_METADATA_DETECT_RETRIES(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$compute_engine$_metadata->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$compute_engine$_metadata->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__METADATA_DETECT_RETRIES);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$compute_engine$_metadata->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__METADATA_DETECT_RETRIES);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__METADATA_DETECT_RETRIES, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__METADATA_DETECT_RETRIES);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__METADATA_DETECT_RETRIES, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__METADATA_DETECT_RETRIES);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__METADATA_DETECT_RETRIES);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__METADATA_DETECT_RETRIES);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$compute_engine$_metadata$_METADATA_FLAVOR_HEADER(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$compute_engine$_metadata->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$compute_engine$_metadata->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__METADATA_FLAVOR_HEADER);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$compute_engine$_metadata->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__METADATA_FLAVOR_HEADER);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__METADATA_FLAVOR_HEADER, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__METADATA_FLAVOR_HEADER);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__METADATA_FLAVOR_HEADER, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__METADATA_FLAVOR_HEADER);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__METADATA_FLAVOR_HEADER);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__METADATA_FLAVOR_HEADER);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$compute_engine$_metadata$_METADATA_FLAVOR_VALUE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$compute_engine$_metadata->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$compute_engine$_metadata->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__METADATA_FLAVOR_VALUE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$compute_engine$_metadata->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__METADATA_FLAVOR_VALUE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__METADATA_FLAVOR_VALUE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__METADATA_FLAVOR_VALUE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__METADATA_FLAVOR_VALUE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__METADATA_FLAVOR_VALUE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__METADATA_FLAVOR_VALUE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__METADATA_FLAVOR_VALUE);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$compute_engine$_metadata$_METADATA_HEADERS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$compute_engine$_metadata->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$compute_engine$_metadata->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__METADATA_HEADERS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$compute_engine$_metadata->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__METADATA_HEADERS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__METADATA_HEADERS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__METADATA_HEADERS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__METADATA_HEADERS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__METADATA_HEADERS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__METADATA_HEADERS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__METADATA_HEADERS);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$compute_engine$_metadata$_NO_GCE_CHECK(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$compute_engine$_metadata->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$compute_engine$_metadata->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__NO_GCE_CHECK);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$compute_engine$_metadata->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__NO_GCE_CHECK);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__NO_GCE_CHECK, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__NO_GCE_CHECK);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__NO_GCE_CHECK, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__NO_GCE_CHECK);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__NO_GCE_CHECK);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__NO_GCE_CHECK);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$compute_engine$_metadata$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$compute_engine$_metadata->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$compute_engine$_metadata->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$compute_engine$_metadata->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$compute_engine$_metadata$_get_metadata_ip_root(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$compute_engine$_metadata->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$compute_engine$_metadata->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__get_metadata_ip_root);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$compute_engine$_metadata->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_metadata_ip_root);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_metadata_ip_root, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_metadata_ip_root);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_metadata_ip_root, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__get_metadata_ip_root);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__get_metadata_ip_root);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__get_metadata_ip_root);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$compute_engine$_metadata$_get_metadata_root(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$compute_engine$_metadata->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$compute_engine$_metadata->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__get_metadata_root);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$compute_engine$_metadata->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_metadata_root);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_metadata_root, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_metadata_root);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_metadata_root, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__get_metadata_root);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__get_metadata_root);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__get_metadata_root);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$compute_engine$_metadata$_helpers(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$compute_engine$_metadata->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$compute_engine$_metadata->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$compute_engine$_metadata->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$compute_engine$_metadata$_mtls(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$compute_engine$_metadata->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$compute_engine$_metadata->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__mtls);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$compute_engine$_metadata->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__mtls);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__mtls, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__mtls);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__mtls, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__mtls);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__mtls);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__mtls);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$compute_engine$_metadata$_prepare_request_for_mds(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$compute_engine$_metadata->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$compute_engine$_metadata->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__prepare_request_for_mds);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$compute_engine$_metadata->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__prepare_request_for_mds);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__prepare_request_for_mds, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__prepare_request_for_mds);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__prepare_request_for_mds, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__prepare_request_for_mds);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__prepare_request_for_mds);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__prepare_request_for_mds);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$compute_engine$_metadata$_validate_gce_mds_configured_environment(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$compute_engine$_metadata->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$compute_engine$_metadata->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__validate_gce_mds_configured_environment);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$compute_engine$_metadata->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__validate_gce_mds_configured_environment);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__validate_gce_mds_configured_environment, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__validate_gce_mds_configured_environment);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__validate_gce_mds_configured_environment, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__validate_gce_mds_configured_environment);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__validate_gce_mds_configured_environment);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__validate_gce_mds_configured_environment);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$compute_engine$_metadata$datetime(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$compute_engine$_metadata->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$compute_engine$_metadata->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_datetime);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$compute_engine$_metadata->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_datetime);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_datetime);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_datetime);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$compute_engine$_metadata$environment_vars(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$compute_engine$_metadata->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$compute_engine$_metadata->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_environment_vars);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$compute_engine$_metadata->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_environment_vars);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_environment_vars, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_environment_vars);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_environment_vars, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_environment_vars);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_environment_vars);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_environment_vars);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$compute_engine$_metadata$exceptions(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$compute_engine$_metadata->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$compute_engine$_metadata->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$compute_engine$_metadata->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$compute_engine$_metadata$get(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$compute_engine$_metadata->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$compute_engine$_metadata->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)const_str_plain_get);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$compute_engine$_metadata->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_get);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_get, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_get);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_get, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)const_str_plain_get);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)const_str_plain_get);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_get);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$compute_engine$_metadata$http_client(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$compute_engine$_metadata->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$compute_engine$_metadata->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_http_client);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$compute_engine$_metadata->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_http_client);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_http_client);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_http_client);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$compute_engine$_metadata$json(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$compute_engine$_metadata->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$compute_engine$_metadata->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$compute_engine$_metadata->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$compute_engine$_metadata$logging(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$compute_engine$_metadata->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$compute_engine$_metadata->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$compute_engine$_metadata->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$compute_engine$_metadata$metrics(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$compute_engine$_metadata->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$compute_engine$_metadata->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_metrics);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$compute_engine$_metadata->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_metrics);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_metrics);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_metrics);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$compute_engine$_metadata$ping(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$compute_engine$_metadata->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$compute_engine$_metadata->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_ping);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$compute_engine$_metadata->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ping);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ping, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ping);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ping, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_ping);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_ping);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ping);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$compute_engine$_metadata$requests(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$compute_engine$_metadata->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$compute_engine$_metadata->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_requests);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$compute_engine$_metadata->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_requests);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_requests);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_requests);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$compute_engine$_metadata$transport(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$compute_engine$_metadata->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$compute_engine$_metadata->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_transport);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$compute_engine$_metadata->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_transport);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_transport);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_transport);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$compute_engine$_metadata$urljoin(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$compute_engine$_metadata->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$compute_engine$_metadata->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_urljoin);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$compute_engine$_metadata->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urljoin);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urljoin, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urljoin);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urljoin, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_urljoin);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_urljoin);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_urljoin);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_6c25752e41c6f105fd62e31e728bd94a;
static PyCodeObject *code_objects_878fbacdc1ea3c4ce015338c77778fd8;
static PyCodeObject *code_objects_f30b46bbdd48f34276d00a7fcf51d224;
static PyCodeObject *code_objects_2d2932fa61c724c2ffa549f7af0ca4ba;
static PyCodeObject *code_objects_397b39e4ad2ebefb81601fdc06878714;
static PyCodeObject *code_objects_a7bff50e019d29449783f7c9ef534571;
static PyCodeObject *code_objects_fc47682947470edd08868a0fb5623460;
static PyCodeObject *code_objects_ab0bd78ade250d42cbb2aae09f34c2ba;
static PyCodeObject *code_objects_14ca485b7dd4e6064db507eb61c0c5f8;
static PyCodeObject *code_objects_503dc6828ec63e502169e60ced9c50f2;
static PyCodeObject *code_objects_c94f7f97cb6354f4fa5a7d65fd15a5e3;
static PyCodeObject *code_objects_034c64477ae683062cd98acc8a8ea4b9;
static PyCodeObject *code_objects_c112d36d970d363b01af1e634de9ad68;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_b2e07843140c70ff1948c61ccddad295); CHECK_OBJECT(module_filename_obj);
code_objects_6c25752e41c6f105fd62e31e728bd94a = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_eb108085057649470a4f20d78c8aaa37, mod_consts.const_str_digest_eb108085057649470a4f20d78c8aaa37, NULL, NULL, 0, 0, 0);
code_objects_878fbacdc1ea3c4ce015338c77778fd8 = MAKE_CODE_OBJECT(module_filename_obj, 85, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__get_metadata_ip_root, mod_consts.const_str_plain__get_metadata_ip_root, mod_consts.const_tuple_str_plain_use_mtls_str_plain_scheme_tuple, NULL, 1, 0, 0);
code_objects_f30b46bbdd48f34276d00a7fcf51d224 = MAKE_CODE_OBJECT(module_filename_obj, 78, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__get_metadata_root, mod_consts.const_str_plain__get_metadata_root, mod_consts.const_tuple_str_plain_use_mtls_str_plain_scheme_tuple, NULL, 1, 0, 0);
code_objects_2d2932fa61c724c2ffa549f7af0ca4ba = MAKE_CODE_OBJECT(module_filename_obj, 162, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__prepare_request_for_mds, mod_consts.const_str_plain__prepare_request_for_mds, mod_consts.const_tuple_6a2c7991d078ef903b6e96e7cae0d12a_tuple, NULL, 2, 0, 0);
code_objects_397b39e4ad2ebefb81601fdc06878714 = MAKE_CODE_OBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__validate_gce_mds_configured_environment, mod_consts.const_str_plain__validate_gce_mds_configured_environment, mod_consts.const_tuple_str_plain_mode_tuple, NULL, 0, 0, 0);
code_objects_a7bff50e019d29449783f7c9ef534571 = MAKE_CODE_OBJECT(module_filename_obj, 146, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_detect_gce_residency_linux, mod_consts.const_str_plain_detect_gce_residency_linux, mod_consts.const_tuple_str_plain_file_obj_str_plain_content_tuple, NULL, 0, 0, 0);
code_objects_fc47682947470edd08868a0fb5623460 = MAKE_CODE_OBJECT(module_filename_obj, 243, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_get, const_str_plain_get, mod_consts.const_tuple_8cf7cf64b941db4148b086bb90daf4de_tuple, NULL, 9, 0, 0);
code_objects_ab0bd78ade250d42cbb2aae09f34c2ba = MAKE_CODE_OBJECT(module_filename_obj, 394, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_project_id, mod_consts.const_str_plain_get_project_id, mod_consts.const_tuple_str_plain_request_tuple, NULL, 1, 0, 0);
code_objects_14ca485b7dd4e6064db507eb61c0c5f8 = MAKE_CODE_OBJECT(module_filename_obj, 434, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_service_account_info, mod_consts.const_str_plain_get_service_account_info, mod_consts.const_tuple_str_plain_request_str_plain_service_account_str_plain_path_tuple, NULL, 2, 0, 0);
code_objects_503dc6828ec63e502169e60ced9c50f2 = MAKE_CODE_OBJECT(module_filename_obj, 463, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_service_account_token, mod_consts.const_str_plain_get_service_account_token, mod_consts.const_tuple_df42b1f37b0d44101a6c1ffe7be177ed_tuple, NULL, 3, 0, 0);
code_objects_c94f7f97cb6354f4fa5a7d65fd15a5e3 = MAKE_CODE_OBJECT(module_filename_obj, 411, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_universe_domain, mod_consts.const_str_plain_get_universe_domain, mod_consts.const_tuple_str_plain_request_str_plain_universe_domain_tuple, NULL, 1, 0, 0);
code_objects_034c64477ae683062cd98acc8a8ea4b9 = MAKE_CODE_OBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_is_on_gce, mod_consts.const_str_plain_is_on_gce, mod_consts.const_tuple_str_plain_request_tuple, NULL, 1, 0, 0);
code_objects_c112d36d970d363b01af1e634de9ad68 = MAKE_CODE_OBJECT(module_filename_obj, 188, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_ping, mod_consts.const_str_plain_ping, mod_consts.const_tuple_380b03d3be09155f95b2356a83ef3bdd_tuple, NULL, 3, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_google$auth$compute_engine$_metadata$$$function__10_get_universe_domain(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$compute_engine$_metadata$$$function__11_get_service_account_info(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$compute_engine$_metadata$$$function__12_get_service_account_token(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$compute_engine$_metadata$$$function__1__validate_gce_mds_configured_environment(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$compute_engine$_metadata$$$function__2__get_metadata_root(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$auth$compute_engine$_metadata$$$function__3__get_metadata_ip_root(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$auth$compute_engine$_metadata$$$function__4_is_on_gce(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_google$auth$compute_engine$_metadata$$$function__6__prepare_request_for_mds(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$auth$compute_engine$_metadata$$$function__7_ping(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$compute_engine$_metadata$$$function__8_get(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_google$auth$compute_engine$_metadata$$$function__9_get_project_id(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_google$auth$compute_engine$_metadata$$$function__1__validate_gce_mds_configured_environment(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_mode = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$compute_engine$_metadata$$$function__1__validate_gce_mds_configured_environment;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$compute_engine$_metadata$$$function__1__validate_gce_mds_configured_environment = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__1__validate_gce_mds_configured_environment)) {
    Py_XDECREF(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__1__validate_gce_mds_configured_environment);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$compute_engine$_metadata$$$function__1__validate_gce_mds_configured_environment == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$compute_engine$_metadata$$$function__1__validate_gce_mds_configured_environment = MAKE_FUNCTION_FRAME(tstate, code_objects_397b39e4ad2ebefb81601fdc06878714, module_google$auth$compute_engine$_metadata, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__1__validate_gce_mds_configured_environment->m_type_description == NULL);
frame_frame_google$auth$compute_engine$_metadata$$$function__1__validate_gce_mds_configured_environment = cache_frame_frame_google$auth$compute_engine$_metadata$$$function__1__validate_gce_mds_configured_environment;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$compute_engine$_metadata$$$function__1__validate_gce_mds_configured_environment);
assert(Py_REFCNT(frame_frame_google$auth$compute_engine$_metadata$$$function__1__validate_gce_mds_configured_environment) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$auth$compute_engine$_metadata$_mtls(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__mtls);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 66;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$compute_engine$_metadata$$$function__1__validate_gce_mds_configured_environment->m_frame.f_lineno = 66;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__parse_mds_mode);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
assert(var_mode == NULL);
var_mode = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_mode);
tmp_cmp_expr_left_1 = var_mode;
tmp_expression_value_2 = module_var_accessor_google$auth$compute_engine$_metadata$_mtls(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__mtls);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_MdsMtlsMode);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_STRICT);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
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
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = module_var_accessor_google$auth$compute_engine$_metadata$_GCE_METADATA_HOST(tstate);
if (unlikely(tmp_cmp_expr_left_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__GCE_METADATA_HOST);
}

if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 71;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = module_var_accessor_google$auth$compute_engine$_metadata$_GCE_DEFAULT_MDS_HOSTS(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__GCE_DEFAULT_MDS_HOSTS);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 71;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "o";
    goto frame_exception_exit_1;
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
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = module_var_accessor_google$auth$compute_engine$_metadata$exceptions(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$compute_engine$_metadata$$$function__1__validate_gce_mds_configured_environment->m_frame.f_lineno = 72;
tmp_raise_type_input_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_MutualTLSChannelError,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_51c9e1b1903a0aa5d414d1183efb8c78_tuple, 0)
);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 72;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
branch_no_2:;
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$compute_engine$_metadata$$$function__1__validate_gce_mds_configured_environment, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$compute_engine$_metadata$$$function__1__validate_gce_mds_configured_environment->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$compute_engine$_metadata$$$function__1__validate_gce_mds_configured_environment, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$compute_engine$_metadata$$$function__1__validate_gce_mds_configured_environment,
    type_description_1,
    var_mode
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$compute_engine$_metadata$$$function__1__validate_gce_mds_configured_environment == cache_frame_frame_google$auth$compute_engine$_metadata$$$function__1__validate_gce_mds_configured_environment) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__1__validate_gce_mds_configured_environment);
    cache_frame_frame_google$auth$compute_engine$_metadata$$$function__1__validate_gce_mds_configured_environment = NULL;
}

assertFrameObject(frame_frame_google$auth$compute_engine$_metadata$$$function__1__validate_gce_mds_configured_environment);

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
CHECK_OBJECT(var_mode);
CHECK_OBJECT(var_mode);
Py_DECREF(var_mode);
var_mode = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_mode);
var_mode = NULL;
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


static PyObject *impl_google$auth$compute_engine$_metadata$$$function__2__get_metadata_root(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_use_mtls = python_pars[0];
PyObject *var_scheme = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$compute_engine$_metadata$$$function__2__get_metadata_root;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$compute_engine$_metadata$$$function__2__get_metadata_root = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__2__get_metadata_root)) {
    Py_XDECREF(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__2__get_metadata_root);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$compute_engine$_metadata$$$function__2__get_metadata_root == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$compute_engine$_metadata$$$function__2__get_metadata_root = MAKE_FUNCTION_FRAME(tstate, code_objects_f30b46bbdd48f34276d00a7fcf51d224, module_google$auth$compute_engine$_metadata, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__2__get_metadata_root->m_type_description == NULL);
frame_frame_google$auth$compute_engine$_metadata$$$function__2__get_metadata_root = cache_frame_frame_google$auth$compute_engine$_metadata$$$function__2__get_metadata_root;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$compute_engine$_metadata$$$function__2__get_metadata_root);
assert(Py_REFCNT(frame_frame_google$auth$compute_engine$_metadata$$$function__2__get_metadata_root) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_use_mtls);
tmp_truth_name_1 = CHECK_IF_TRUE(par_use_mtls);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_assign_source_1 = mod_consts.const_str_plain_https;
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_1 = mod_consts.const_str_plain_http;
condexpr_end_1:;
assert(var_scheme == NULL);
Py_INCREF(tmp_assign_source_1);
var_scheme = tmp_assign_source_1;
}
{
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_5bd1f064c383b3cfe643a6b92600e961;
CHECK_OBJECT(var_scheme);
tmp_kw_call_arg_value_1_1 = var_scheme;
tmp_kw_call_arg_value_2_1 = module_var_accessor_google$auth$compute_engine$_metadata$_GCE_METADATA_HOST(tstate);
if (unlikely(tmp_kw_call_arg_value_2_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__GCE_METADATA_HOST);
}

if (tmp_kw_call_arg_value_2_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 82;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$compute_engine$_metadata$$$function__2__get_metadata_root->m_frame.f_lineno = 82;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
}

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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$compute_engine$_metadata$$$function__2__get_metadata_root, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$compute_engine$_metadata$$$function__2__get_metadata_root->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$compute_engine$_metadata$$$function__2__get_metadata_root, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$compute_engine$_metadata$$$function__2__get_metadata_root,
    type_description_1,
    par_use_mtls,
    var_scheme
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$compute_engine$_metadata$$$function__2__get_metadata_root == cache_frame_frame_google$auth$compute_engine$_metadata$$$function__2__get_metadata_root) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__2__get_metadata_root);
    cache_frame_frame_google$auth$compute_engine$_metadata$$$function__2__get_metadata_root = NULL;
}

assertFrameObject(frame_frame_google$auth$compute_engine$_metadata$$$function__2__get_metadata_root);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_scheme);
CHECK_OBJECT(var_scheme);
Py_DECREF(var_scheme);
var_scheme = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_scheme);
var_scheme = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_use_mtls);
Py_DECREF(par_use_mtls);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_use_mtls);
Py_DECREF(par_use_mtls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$compute_engine$_metadata$$$function__3__get_metadata_ip_root(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_use_mtls = python_pars[0];
PyObject *var_scheme = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$compute_engine$_metadata$$$function__3__get_metadata_ip_root;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$compute_engine$_metadata$$$function__3__get_metadata_ip_root = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__3__get_metadata_ip_root)) {
    Py_XDECREF(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__3__get_metadata_ip_root);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$compute_engine$_metadata$$$function__3__get_metadata_ip_root == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$compute_engine$_metadata$$$function__3__get_metadata_ip_root = MAKE_FUNCTION_FRAME(tstate, code_objects_878fbacdc1ea3c4ce015338c77778fd8, module_google$auth$compute_engine$_metadata, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__3__get_metadata_ip_root->m_type_description == NULL);
frame_frame_google$auth$compute_engine$_metadata$$$function__3__get_metadata_ip_root = cache_frame_frame_google$auth$compute_engine$_metadata$$$function__3__get_metadata_ip_root;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$compute_engine$_metadata$$$function__3__get_metadata_ip_root);
assert(Py_REFCNT(frame_frame_google$auth$compute_engine$_metadata$$$function__3__get_metadata_ip_root) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_use_mtls);
tmp_truth_name_1 = CHECK_IF_TRUE(par_use_mtls);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_assign_source_1 = mod_consts.const_str_plain_https;
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_1 = mod_consts.const_str_plain_http;
condexpr_end_1:;
assert(var_scheme == NULL);
Py_INCREF(tmp_assign_source_1);
var_scheme = tmp_assign_source_1;
}
{
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_c41b568679d71dcc0a878e8cf5c0ad51;
CHECK_OBJECT(var_scheme);
tmp_kw_call_arg_value_1_1 = var_scheme;
tmp_expression_value_1 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_getenv);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_google$auth$compute_engine$_metadata$environment_vars(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_environment_vars);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 89;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_GCE_METADATA_IP);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 89;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_google$auth$compute_engine$_metadata$_GCE_DEFAULT_MDS_IP(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__GCE_DEFAULT_MDS_IP);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 89;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$compute_engine$_metadata$$$function__3__get_metadata_ip_root->m_frame.f_lineno = 89;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_kw_call_arg_value_2_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_kw_call_arg_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$compute_engine$_metadata$$$function__3__get_metadata_ip_root->m_frame.f_lineno = 88;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$compute_engine$_metadata$$$function__3__get_metadata_ip_root, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$compute_engine$_metadata$$$function__3__get_metadata_ip_root->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$compute_engine$_metadata$$$function__3__get_metadata_ip_root, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$compute_engine$_metadata$$$function__3__get_metadata_ip_root,
    type_description_1,
    par_use_mtls,
    var_scheme
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$compute_engine$_metadata$$$function__3__get_metadata_ip_root == cache_frame_frame_google$auth$compute_engine$_metadata$$$function__3__get_metadata_ip_root) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__3__get_metadata_ip_root);
    cache_frame_frame_google$auth$compute_engine$_metadata$$$function__3__get_metadata_ip_root = NULL;
}

assertFrameObject(frame_frame_google$auth$compute_engine$_metadata$$$function__3__get_metadata_ip_root);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_scheme);
CHECK_OBJECT(var_scheme);
Py_DECREF(var_scheme);
var_scheme = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_scheme);
var_scheme = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_use_mtls);
Py_DECREF(par_use_mtls);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_use_mtls);
Py_DECREF(par_use_mtls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$compute_engine$_metadata$$$function__4_is_on_gce(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_request = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$compute_engine$_metadata$$$function__4_is_on_gce;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$compute_engine$_metadata$$$function__4_is_on_gce = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__4_is_on_gce)) {
    Py_XDECREF(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__4_is_on_gce);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$compute_engine$_metadata$$$function__4_is_on_gce == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$compute_engine$_metadata$$$function__4_is_on_gce = MAKE_FUNCTION_FRAME(tstate, code_objects_034c64477ae683062cd98acc8a8ea4b9, module_google$auth$compute_engine$_metadata, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__4_is_on_gce->m_type_description == NULL);
frame_frame_google$auth$compute_engine$_metadata$$$function__4_is_on_gce = cache_frame_frame_google$auth$compute_engine$_metadata$$$function__4_is_on_gce;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$compute_engine$_metadata$$$function__4_is_on_gce);
assert(Py_REFCNT(frame_frame_google$auth$compute_engine$_metadata$$$function__4_is_on_gce) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_mvar_value_1;
int tmp_truth_name_1;
tmp_mvar_value_1 = module_var_accessor_google$auth$compute_engine$_metadata$_NO_GCE_CHECK(tstate);
if (unlikely(tmp_mvar_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__NO_GCE_CHECK);
}

if (tmp_mvar_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 132;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "o";
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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_2;
tmp_called_value_1 = module_var_accessor_google$auth$compute_engine$_metadata$ping(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ping);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 135;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_args_element_value_1 = par_request;
frame_frame_google$auth$compute_engine$_metadata$$$function__4_is_on_gce->m_frame.f_lineno = 135;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 135;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$compute_engine$_metadata$$$function__4_is_on_gce, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$compute_engine$_metadata$$$function__4_is_on_gce->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$compute_engine$_metadata$$$function__4_is_on_gce, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$compute_engine$_metadata$$$function__4_is_on_gce,
    type_description_1,
    par_request
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$compute_engine$_metadata$$$function__4_is_on_gce == cache_frame_frame_google$auth$compute_engine$_metadata$$$function__4_is_on_gce) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__4_is_on_gce);
    cache_frame_frame_google$auth$compute_engine$_metadata$$$function__4_is_on_gce = NULL;
}

assertFrameObject(frame_frame_google$auth$compute_engine$_metadata$$$function__4_is_on_gce);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_request);
Py_DECREF(par_request);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_file_obj = NULL;
PyObject *var_content = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_2;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux)) {
    Py_XDECREF(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux = MAKE_FUNCTION_FRAME(tstate, code_objects_a7bff50e019d29449783f7c9ef534571, module_google$auth$compute_engine$_metadata, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux->m_type_description == NULL);
frame_frame_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux = cache_frame_frame_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux);
assert(Py_REFCNT(frame_frame_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux) == 2);

// Framed code:
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_open_filename_1;
PyObject *tmp_open_mode_1;
tmp_open_filename_1 = module_var_accessor_google$auth$compute_engine$_metadata$_GCE_PRODUCT_NAME_FILE(tstate);
if (unlikely(tmp_open_filename_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__GCE_PRODUCT_NAME_FILE);
}

if (tmp_open_filename_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 153;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_open_mode_1 = const_str_plain_r;
tmp_assign_source_1 = BUILTIN_OPEN(tstate, tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "oo";
    goto try_except_handler_3;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_1 = tmp_with_1__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___enter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "oo";
    goto try_except_handler_3;
}
frame_frame_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux->m_frame.f_lineno = 153;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "oo";
    goto try_except_handler_3;
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


exception_lineno = 153;
type_description_1 = "oo";
    goto try_except_handler_3;
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
assert(var_file_obj == NULL);
Py_INCREF(tmp_assign_source_5);
var_file_obj = tmp_assign_source_5;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_file_obj);
tmp_called_instance_1 = var_file_obj;
frame_frame_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux->m_frame.f_lineno = 154;
tmp_expression_value_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_read);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "oo";
    goto try_except_handler_5;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_strip);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "oo";
    goto try_except_handler_5;
}
frame_frame_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux->m_frame.f_lineno = 154;
tmp_assign_source_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "oo";
    goto try_except_handler_5;
}
assert(var_content == NULL);
var_content = tmp_assign_source_6;
}
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux, exception_keeper_lineno_1);
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
nuitka_bool tmp_assign_source_7;
tmp_assign_source_7 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_7;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_3 = tmp_with_1__exit;
tmp_args_element_value_1 = EXC_TYPE(tstate);
tmp_args_element_value_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_2); 
tmp_args_element_value_3 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_3 == NULL) {
    tmp_args_element_value_3 = Py_None;
}
frame_frame_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux->m_frame.f_lineno = 153;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "oo";
    goto try_except_handler_6;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "oo";
    goto try_except_handler_6;
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
    exception_lineno = 153;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux->m_frame)) {
        frame_frame_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_6;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 153;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux->m_frame)) {
        frame_frame_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_6;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_4;
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
try_except_handler_4:;
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
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_1;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
frame_frame_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux->m_frame.f_lineno = 153;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 153;
type_description_1 = "oo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_3:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_3;
// End of try:
try_end_3:;
{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
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
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
frame_frame_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux->m_frame.f_lineno = 153;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "oo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
goto try_end_4;
// Exception handler code:
try_except_handler_3:;
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

goto try_except_handler_2;
// End of try:
try_end_4:;
goto try_end_5;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = PyExc_Exception;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
assert(!(tmp_res == -1));
tmp_condition_result_5 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_7;
goto branch_end_5;
branch_no_5:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 152;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux->m_frame)) {
        frame_frame_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_7;
branch_end_5:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto frame_return_exit_1;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_5:;
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
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_4;
if (var_content == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_content);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 159;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = var_content;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_startswith);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = module_var_accessor_google$auth$compute_engine$_metadata$_GOOGLE(tstate);
if (unlikely(tmp_args_element_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__GOOGLE);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 159;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux->m_frame.f_lineno = 159;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux,
    type_description_1,
    var_file_obj,
    var_content
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux == cache_frame_frame_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux);
    cache_frame_frame_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux = NULL;
}

assertFrameObject(frame_frame_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_file_obj);
var_file_obj = NULL;
Py_XDECREF(var_content);
var_content = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_file_obj);
var_file_obj = NULL;
Py_XDECREF(var_content);
var_content = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

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


static PyObject *impl_google$auth$compute_engine$_metadata$$$function__6__prepare_request_for_mds(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_request = python_pars[0];
PyObject *par_use_mtls = python_pars[1];
PyObject *var_adapter = NULL;
PyObject *var_host = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$compute_engine$_metadata$$$function__6__prepare_request_for_mds;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$compute_engine$_metadata$$$function__6__prepare_request_for_mds = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__6__prepare_request_for_mds)) {
    Py_XDECREF(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__6__prepare_request_for_mds);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$compute_engine$_metadata$$$function__6__prepare_request_for_mds == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$compute_engine$_metadata$$$function__6__prepare_request_for_mds = MAKE_FUNCTION_FRAME(tstate, code_objects_2d2932fa61c724c2ffa549f7af0ca4ba, module_google$auth$compute_engine$_metadata, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__6__prepare_request_for_mds->m_type_description == NULL);
frame_frame_google$auth$compute_engine$_metadata$$$function__6__prepare_request_for_mds = cache_frame_frame_google$auth$compute_engine$_metadata$$$function__6__prepare_request_for_mds;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$compute_engine$_metadata$$$function__6__prepare_request_for_mds);
assert(Py_REFCNT(frame_frame_google$auth$compute_engine$_metadata$$$function__6__prepare_request_for_mds) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_use_mtls);
tmp_truth_name_1 = CHECK_IF_TRUE(par_use_mtls);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_request);
tmp_expression_value_1 = par_request;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts.const_str_plain_session);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_request);
tmp_expression_value_2 = par_request;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_session);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
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
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_assattr_target_1;
tmp_called_instance_1 = module_var_accessor_google$auth$compute_engine$_metadata$requests(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_requests);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 180;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$compute_engine$_metadata$$$function__6__prepare_request_for_mds->m_frame.f_lineno = 180;
tmp_assattr_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_Session);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_assattr_target_1 = par_request;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_session, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = module_var_accessor_google$auth$compute_engine$_metadata$_mtls(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__mtls);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 182;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$compute_engine$_metadata$$$function__6__prepare_request_for_mds->m_frame.f_lineno = 182;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_MdsMtlsAdapter);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_adapter == NULL);
var_adapter = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = module_var_accessor_google$auth$compute_engine$_metadata$_GCE_DEFAULT_MDS_HOSTS(tstate);
if (unlikely(tmp_iter_arg_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__GCE_DEFAULT_MDS_HOSTS);
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 184;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "oooo";
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
type_description_1 = "oooo";
exception_lineno = 184;
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
    PyObject *old = var_host;
    var_host = tmp_assign_source_4;
    Py_INCREF(var_host);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_args_element_value_2;
if (par_request == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 185;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_expression_value_4 = par_request;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_session);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_mount);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_504b77692b694460b8c25198a52c83ba;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_host);
tmp_format_value_1 = var_host;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = const_str_slash;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_1 == NULL));
if (var_adapter == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_adapter);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 185;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_args_element_value_2 = var_adapter;
frame_frame_google$auth$compute_engine$_metadata$$$function__6__prepare_request_for_mds->m_frame.f_lineno = 185;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
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
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$compute_engine$_metadata$$$function__6__prepare_request_for_mds, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$compute_engine$_metadata$$$function__6__prepare_request_for_mds->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$compute_engine$_metadata$$$function__6__prepare_request_for_mds, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$compute_engine$_metadata$$$function__6__prepare_request_for_mds,
    type_description_1,
    par_request,
    par_use_mtls,
    var_adapter,
    var_host
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$compute_engine$_metadata$$$function__6__prepare_request_for_mds == cache_frame_frame_google$auth$compute_engine$_metadata$$$function__6__prepare_request_for_mds) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__6__prepare_request_for_mds);
    cache_frame_frame_google$auth$compute_engine$_metadata$$$function__6__prepare_request_for_mds = NULL;
}

assertFrameObject(frame_frame_google$auth$compute_engine$_metadata$$$function__6__prepare_request_for_mds);

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
Py_XDECREF(var_adapter);
var_adapter = NULL;
Py_XDECREF(var_host);
var_host = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_adapter);
var_adapter = NULL;
Py_XDECREF(var_host);
var_host = NULL;
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
CHECK_OBJECT(par_use_mtls);
Py_DECREF(par_use_mtls);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_use_mtls);
Py_DECREF(par_use_mtls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$compute_engine$_metadata$$$function__7_ping(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_request = python_pars[0];
PyObject *par_timeout = python_pars[1];
PyObject *par_retry_count = python_pars[2];
PyObject *var_use_mtls = NULL;
PyObject *var_headers = NULL;
PyObject *var_backoff = NULL;
PyObject *var_attempt = NULL;
PyObject *var_response = NULL;
PyObject *var_metadata_flavor = NULL;
PyObject *var_e = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$compute_engine$_metadata$$$function__7_ping;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$compute_engine$_metadata$$$function__7_ping = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__7_ping)) {
    Py_XDECREF(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__7_ping);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$compute_engine$_metadata$$$function__7_ping == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$compute_engine$_metadata$$$function__7_ping = MAKE_FUNCTION_FRAME(tstate, code_objects_c112d36d970d363b01af1e634de9ad68, module_google$auth$compute_engine$_metadata, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__7_ping->m_type_description == NULL);
frame_frame_google$auth$compute_engine$_metadata$$$function__7_ping = cache_frame_frame_google$auth$compute_engine$_metadata$$$function__7_ping;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$compute_engine$_metadata$$$function__7_ping);
assert(Py_REFCNT(frame_frame_google$auth$compute_engine$_metadata$$$function__7_ping) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$auth$compute_engine$_metadata$_mtls(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__mtls);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 203;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$compute_engine$_metadata$$$function__7_ping->m_frame.f_lineno = 203;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_should_use_mds_mtls);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_use_mtls == NULL);
var_use_mtls = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_1 = module_var_accessor_google$auth$compute_engine$_metadata$_prepare_request_for_mds(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__prepare_request_for_mds);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 204;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_kw_call_arg_value_0_1 = par_request;
CHECK_OBJECT(var_use_mtls);
tmp_kw_call_dict_value_0_1 = var_use_mtls;
frame_frame_google$auth$compute_engine$_metadata$$$function__7_ping->m_frame.f_lineno = 204;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_use_mtls_tuple);
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_google$auth$compute_engine$_metadata$_METADATA_HEADERS(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__METADATA_HEADERS);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 211;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_copy);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$compute_engine$_metadata$$$function__7_ping->m_frame.f_lineno = 211;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_headers == NULL);
var_headers = tmp_assign_source_2;
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
PyObject *tmp_expression_value_2;
tmp_called_instance_2 = module_var_accessor_google$auth$compute_engine$_metadata$metrics(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_metrics);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 212;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$compute_engine$_metadata$$$function__7_ping->m_frame.f_lineno = 212;
tmp_ass_subvalue_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_mds_ping);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_headers);
tmp_ass_subscribed_1 = var_headers;
tmp_expression_value_2 = module_var_accessor_google$auth$compute_engine$_metadata$metrics(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_metrics);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 212;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_API_CLIENT_HEADER);
if (tmp_ass_subscript_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 212;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscript_1);
Py_DECREF(tmp_ass_subscript_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_value_0_1;
tmp_called_value_3 = module_var_accessor_google$auth$compute_engine$_metadata$ExponentialBackoff(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExponentialBackoff);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 214;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_retry_count);
tmp_kw_call_value_0_1 = par_retry_count;
frame_frame_google$auth$compute_engine$_metadata$$$function__7_ping->m_frame.f_lineno = 214;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_assign_source_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_str_plain_total_attempts_tuple);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_backoff == NULL);
var_backoff = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_backoff);
tmp_iter_arg_1 = var_backoff;
tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
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
exception_lineno = 216;
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
    PyObject *old = var_attempt;
    var_attempt = tmp_assign_source_6;
    Py_INCREF(var_attempt);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_4;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
if (par_request == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 218;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}

tmp_called_value_4 = par_request;
tmp_called_value_5 = module_var_accessor_google$auth$compute_engine$_metadata$_get_metadata_ip_root(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__get_metadata_ip_root);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 219;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
if (var_use_mtls == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_use_mtls);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 219;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}

tmp_args_element_value_1 = var_use_mtls;
frame_frame_google$auth$compute_engine$_metadata$$$function__7_ping->m_frame.f_lineno = 219;
tmp_kw_call_value_0_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_1);
if (tmp_kw_call_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
tmp_kw_call_value_1_1 = mod_consts.const_str_plain_GET;
if (var_headers == NULL) {
Py_DECREF(tmp_kw_call_value_0_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_headers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 221;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}

tmp_kw_call_value_2_1 = var_headers;
if (par_timeout == NULL) {
Py_DECREF(tmp_kw_call_value_0_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_timeout);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 222;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}

tmp_kw_call_value_3_1 = par_timeout;
frame_frame_google$auth$compute_engine$_metadata$$$function__7_ping->m_frame.f_lineno = 218;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_assign_source_7 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, kw_values, mod_consts.const_tuple_4e4ded47b31573b4d33f424c29e47006_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_0_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = var_response;
    var_response = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var_response);
tmp_expression_value_4 = var_response;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_headers);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
tmp_args_element_value_2 = module_var_accessor_google$auth$compute_engine$_metadata$_METADATA_FLAVOR_HEADER(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__METADATA_FLAVOR_HEADER);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 225;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
frame_frame_google$auth$compute_engine$_metadata$$$function__7_ping->m_frame.f_lineno = 225;
tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = var_metadata_flavor;
    var_metadata_flavor = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_response);
tmp_expression_value_5 = var_response;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_status);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
tmp_expression_value_6 = module_var_accessor_google$auth$compute_engine$_metadata$http_client(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_http_client);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 227;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_OK);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 227;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
tmp_and_left_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_and_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_1);

exception_lineno = 227;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(tmp_and_left_value_1);
Py_DECREF(tmp_and_left_value_1);
CHECK_OBJECT(var_metadata_flavor);
tmp_cmp_expr_left_2 = var_metadata_flavor;
tmp_cmp_expr_right_2 = module_var_accessor_google$auth$compute_engine$_metadata$_METADATA_FLAVOR_VALUE(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__METADATA_FLAVOR_VALUE);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 228;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
tmp_and_right_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_and_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
tmp_return_value = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_return_value = tmp_and_left_value_1;
and_end_1:;
goto try_return_handler_2;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$compute_engine$_metadata$$$function__7_ping, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$compute_engine$_metadata$$$function__7_ping, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_7;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_expression_value_7 = module_var_accessor_google$auth$compute_engine$_metadata$exceptions(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 231;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_TransportError);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
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
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_9); 
{
    PyObject *old = var_e;
    var_e = tmp_assign_source_9;
    Py_INCREF(var_e);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_expression_value_8 = module_var_accessor_google$auth$compute_engine$_metadata$_LOGGER(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__LOGGER);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 232;
type_description_1 = "oooooooooo";
    goto try_except_handler_5;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_warning);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "oooooooooo";
    goto try_except_handler_5;
}
tmp_args_element_value_3 = mod_consts.const_str_digest_e11cb07dfd93d1c50b2b1f2293fbbc8b;
CHECK_OBJECT(var_attempt);
tmp_args_element_value_4 = var_attempt;
if (par_retry_count == NULL) {
Py_DECREF(tmp_called_value_7);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_retry_count);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 236;
type_description_1 = "oooooooooo";
    goto try_except_handler_5;
}

tmp_args_element_value_5 = par_retry_count;
CHECK_OBJECT(var_e);
tmp_args_element_value_6 = var_e;
frame_frame_google$auth$compute_engine$_metadata$$$function__7_ping->m_frame.f_lineno = 232;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "oooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_4;
// End of try:
try_end_1:;
Py_XDECREF(var_e);
var_e = NULL;

goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 217;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$compute_engine$_metadata$$$function__7_ping->m_frame)) {
        frame_frame_google$auth$compute_engine$_metadata$$$function__7_ping->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooo";
goto try_except_handler_4;
branch_end_1:;
goto try_end_2;
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

goto try_except_handler_2;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_4;
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
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$compute_engine$_metadata$$$function__7_ping, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$compute_engine$_metadata$$$function__7_ping->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$compute_engine$_metadata$$$function__7_ping, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$compute_engine$_metadata$$$function__7_ping,
    type_description_1,
    par_request,
    par_timeout,
    par_retry_count,
    var_use_mtls,
    var_headers,
    var_backoff,
    var_attempt,
    var_response,
    var_metadata_flavor,
    var_e
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$compute_engine$_metadata$$$function__7_ping == cache_frame_frame_google$auth$compute_engine$_metadata$$$function__7_ping) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__7_ping);
    cache_frame_frame_google$auth$compute_engine$_metadata$$$function__7_ping = NULL;
}

assertFrameObject(frame_frame_google$auth$compute_engine$_metadata$$$function__7_ping);

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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_use_mtls);
var_use_mtls = NULL;
Py_XDECREF(var_headers);
var_headers = NULL;
CHECK_OBJECT(var_backoff);
CHECK_OBJECT(var_backoff);
Py_DECREF(var_backoff);
var_backoff = NULL;
Py_XDECREF(var_attempt);
var_attempt = NULL;
Py_XDECREF(var_response);
var_response = NULL;
Py_XDECREF(var_metadata_flavor);
var_metadata_flavor = NULL;
Py_XDECREF(var_e);
var_e = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_use_mtls);
var_use_mtls = NULL;
Py_XDECREF(var_headers);
var_headers = NULL;
Py_XDECREF(var_backoff);
var_backoff = NULL;
Py_XDECREF(var_attempt);
var_attempt = NULL;
Py_XDECREF(var_response);
var_response = NULL;
Py_XDECREF(var_metadata_flavor);
var_metadata_flavor = NULL;
Py_XDECREF(var_e);
var_e = NULL;
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
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_retry_count);
Py_DECREF(par_retry_count);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_retry_count);
Py_DECREF(par_retry_count);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$compute_engine$_metadata$$$function__8_get(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_request = python_pars[0];
PyObject *par_path = python_pars[1];
PyObject *par_root = python_pars[2];
PyObject *par_params = python_pars[3];
PyObject *par_recursive = python_pars[4];
PyObject *par_retry_count = python_pars[5];
PyObject *par_headers = python_pars[6];
PyObject *par_return_none_for_not_found_error = python_pars[7];
PyObject *par_timeout = python_pars[8];
PyObject *var_use_mtls = NULL;
PyObject *var_base_url = NULL;
PyObject *var_query_params = NULL;
PyObject *var_headers_to_use = NULL;
PyObject *var_url = NULL;
PyObject *var_backoff = NULL;
PyObject *var_last_exception = NULL;
PyObject *var_attempt = NULL;
PyObject *var_response = NULL;
PyObject *var_e = NULL;
PyObject *var_error_details = NULL;
PyObject *var_content = NULL;
PyObject *var_caught_exc = NULL;
PyObject *var_new_exc = NULL;
nuitka_bool tmp_for_loop_1__break_indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$compute_engine$_metadata$$$function__8_get;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$compute_engine$_metadata$$$function__8_get = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__8_get)) {
    Py_XDECREF(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__8_get);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$compute_engine$_metadata$$$function__8_get == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$compute_engine$_metadata$$$function__8_get = MAKE_FUNCTION_FRAME(tstate, code_objects_fc47682947470edd08868a0fb5623460, module_google$auth$compute_engine$_metadata, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__8_get->m_type_description == NULL);
frame_frame_google$auth$compute_engine$_metadata$$$function__8_get = cache_frame_frame_google$auth$compute_engine$_metadata$$$function__8_get;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$compute_engine$_metadata$$$function__8_get);
assert(Py_REFCNT(frame_frame_google$auth$compute_engine$_metadata$$$function__8_get) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$auth$compute_engine$_metadata$_mtls(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__mtls);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 288;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$compute_engine$_metadata$$$function__8_get->m_frame.f_lineno = 288;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_should_use_mds_mtls);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_use_mtls == NULL);
var_use_mtls = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_1 = module_var_accessor_google$auth$compute_engine$_metadata$_prepare_request_for_mds(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__prepare_request_for_mds);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 291;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_kw_call_arg_value_0_1 = par_request;
CHECK_OBJECT(var_use_mtls);
tmp_kw_call_dict_value_0_1 = var_use_mtls;
frame_frame_google$auth$compute_engine$_metadata$$$function__8_get->m_frame.f_lineno = 291;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_use_mtls_tuple);
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_root);
tmp_cmp_expr_left_1 = par_root;
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
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
tmp_called_value_2 = module_var_accessor_google$auth$compute_engine$_metadata$_get_metadata_root(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__get_metadata_root);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 294;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_use_mtls);
tmp_args_element_value_1 = var_use_mtls;
frame_frame_google$auth$compute_engine$_metadata$$$function__8_get->m_frame.f_lineno = 294;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_root;
    assert(old != NULL);
    par_root = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_2;
tmp_called_value_3 = module_var_accessor_google$auth$compute_engine$_metadata$_validate_gce_mds_configured_environment(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__validate_gce_mds_configured_environment);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 299;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$compute_engine$_metadata$$$function__8_get->m_frame.f_lineno = 299;
tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_4 = module_var_accessor_google$auth$compute_engine$_metadata$urljoin(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urljoin);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 301;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_root);
tmp_args_element_value_2 = par_root;
CHECK_OBJECT(par_path);
tmp_args_element_value_3 = par_path;
frame_frame_google$auth$compute_engine$_metadata$$$function__8_get->m_frame.f_lineno = 301;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_base_url == NULL);
var_base_url = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_params);
tmp_cmp_expr_left_2 = par_params;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(par_params);
tmp_assign_source_4 = par_params;
Py_INCREF(tmp_assign_source_4);
condexpr_end_1:;
assert(var_query_params == NULL);
var_query_params = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_google$auth$compute_engine$_metadata$_METADATA_HEADERS(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__METADATA_HEADERS);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 304;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_copy);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$compute_engine$_metadata$$$function__8_get->m_frame.f_lineno = 304;
tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_headers_to_use == NULL);
var_headers_to_use = tmp_assign_source_5;
}
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_1;
CHECK_OBJECT(par_headers);
tmp_truth_name_1 = CHECK_IF_TRUE(par_headers);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(var_headers_to_use);
tmp_expression_value_2 = var_headers_to_use;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_update);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_headers);
tmp_args_element_value_4 = par_headers;
frame_frame_google$auth$compute_engine$_metadata$$$function__8_get->m_frame.f_lineno = 306;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_2:;
{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_2;
CHECK_OBJECT(par_recursive);
tmp_truth_name_2 = CHECK_IF_TRUE(par_recursive);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_plain_true;
CHECK_OBJECT(var_query_params);
tmp_ass_subscribed_1 = var_query_params;
tmp_ass_subscript_1 = mod_consts.const_str_plain_recursive;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_3:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_instance_2 = module_var_accessor_google$auth$compute_engine$_metadata$_helpers(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_base_url);
tmp_args_element_value_5 = var_base_url;
CHECK_OBJECT(var_query_params);
tmp_args_element_value_6 = var_query_params;
frame_frame_google$auth$compute_engine$_metadata$$$function__8_get->m_frame.f_lineno = 311;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_6 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_update_query,
        call_args
    );
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_url == NULL);
var_url = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_7;
PyObject *tmp_kw_call_value_0_1;
tmp_called_value_7 = module_var_accessor_google$auth$compute_engine$_metadata$ExponentialBackoff(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExponentialBackoff);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 313;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_retry_count);
tmp_kw_call_value_0_1 = par_retry_count;
frame_frame_google$auth$compute_engine$_metadata$$$function__8_get->m_frame.f_lineno = 313;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_assign_source_7 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_7, kw_values, mod_consts.const_tuple_str_plain_total_attempts_tuple);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_backoff == NULL);
var_backoff = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = Py_None;
assert(var_last_exception == NULL);
Py_INCREF(tmp_assign_source_8);
var_last_exception = tmp_assign_source_8;
}
{
nuitka_bool tmp_assign_source_9;
tmp_assign_source_9 = NUITKA_BOOL_FALSE;
tmp_for_loop_1__break_indicator = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_backoff);
tmp_iter_arg_1 = var_backoff;
tmp_assign_source_10 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_10;
}
// Tried code:
loop_start_1:;
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_value_value_1;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_value_value_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_11 = ITERATOR_NEXT(tmp_value_value_1);
if (tmp_assign_source_11 == NULL) {
    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

    if (!HAS_EXCEPTION_STATE(&exception_state)) {
        SET_EXCEPTION_PRESERVATION_STATE_STOP_ITERATION_EMPTY(tstate, &exception_state);
    }
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 315;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_11;
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

{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = exception_keeper_name_1.exception_value;
tmp_cmp_expr_right_3 = PyExc_StopIteration;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
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
nuitka_bool tmp_assign_source_12;
tmp_assign_source_12 = NUITKA_BOOL_TRUE;
tmp_for_loop_1__break_indicator = tmp_assign_source_12;
}
RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_1);
goto loop_end_1;
goto branch_end_4;
branch_no_4:;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
branch_end_4:;
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_13 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_attempt;
    var_attempt = tmp_assign_source_13;
    Py_INCREF(var_attempt);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_8;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
if (par_request == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_request);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 317;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_called_value_8 = par_request;
if (var_url == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_url);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 318;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_kw_call_value_0_2 = var_url;
tmp_kw_call_value_1_1 = mod_consts.const_str_plain_GET;
if (var_headers_to_use == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_headers_to_use);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 318;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_kw_call_value_2_1 = var_headers_to_use;
if (par_timeout == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_timeout);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 318;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_kw_call_value_3_1 = par_timeout;
frame_frame_google$auth$compute_engine$_metadata$$$function__8_get->m_frame.f_lineno = 317;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_assign_source_14 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_8, kw_values, mod_consts.const_tuple_4e4ded47b31573b4d33f424c29e47006_tuple);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_response;
    var_response = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_response);
tmp_expression_value_3 = var_response;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_status);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_expression_value_4 = module_var_accessor_google$auth$compute_engine$_metadata$transport(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transport);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_4);

exception_lineno = 320;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_DEFAULT_RETRYABLE_STATUS_CODES);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_4);

exception_lineno = 320;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_6 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_expression_value_6;
tmp_expression_value_5 = module_var_accessor_google$auth$compute_engine$_metadata$_LOGGER(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__LOGGER);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 321;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_warning);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_args_element_value_7 = mod_consts.const_str_digest_c481445c58951a31f6bd345060b13fc2;
CHECK_OBJECT(var_attempt);
tmp_args_element_value_8 = var_attempt;
if (par_retry_count == NULL) {
Py_DECREF(tmp_called_value_9);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_retry_count);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 325;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_args_element_value_9 = par_retry_count;
CHECK_OBJECT(var_response);
tmp_expression_value_6 = var_response;
tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_status);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 326;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_4;
}
frame_frame_google$auth$compute_engine$_metadata$$$function__8_get->m_frame.f_lineno = 321;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_9, call_args);
}

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = Py_None;
{
    PyObject *old = var_last_exception;
    var_last_exception = tmp_assign_source_15;
    Py_INCREF(var_last_exception);
    Py_XDECREF(old);
}

}
goto loop_start_1;
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = Py_None;
{
    PyObject *old = var_last_exception;
    var_last_exception = tmp_assign_source_16;
    Py_INCREF(var_last_exception);
    Py_XDECREF(old);
}

}
goto loop_end_1;
branch_end_5:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$compute_engine$_metadata$$$function__8_get, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$compute_engine$_metadata$$$function__8_get, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_2);
// Tried code:
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_7;
tmp_cmp_expr_left_5 = EXC_TYPE(tstate);
tmp_expression_value_7 = module_var_accessor_google$auth$compute_engine$_metadata$exceptions(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 334;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_TransportError);
if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_right_5);
Py_DECREF(tmp_cmp_expr_right_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_condition_result_7 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_17); 
{
    PyObject *old = var_e;
    var_e = tmp_assign_source_17;
    Py_INCREF(var_e);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
tmp_expression_value_8 = module_var_accessor_google$auth$compute_engine$_metadata$_LOGGER(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__LOGGER);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 335;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_6;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_warning);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_6;
}
tmp_args_element_value_11 = mod_consts.const_str_digest_e11cb07dfd93d1c50b2b1f2293fbbc8b;
CHECK_OBJECT(var_attempt);
tmp_args_element_value_12 = var_attempt;
if (par_retry_count == NULL) {
Py_DECREF(tmp_called_value_10);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_retry_count);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 339;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_6;
}

tmp_args_element_value_13 = par_retry_count;
CHECK_OBJECT(var_e);
tmp_args_element_value_14 = var_e;
frame_frame_google$auth$compute_engine$_metadata$$$function__8_get->m_frame.f_lineno = 335;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_10, call_args);
}

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
goto try_end_2;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_5;
// End of try:
try_end_2:;
{
PyObject *tmp_assign_source_18;
CHECK_OBJECT(var_e);
tmp_assign_source_18 = var_e;
{
    PyObject *old = var_last_exception;
    var_last_exception = tmp_assign_source_18;
    Py_INCREF(var_last_exception);
    Py_XDECREF(old);
}

}
Py_XDECREF(var_e);
var_e = NULL;

goto branch_end_6;
branch_no_6:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 316;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$compute_engine$_metadata$$$function__8_get->m_frame)) {
        frame_frame_google$auth$compute_engine$_metadata$$$function__8_get->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooooooooooooo";
goto try_except_handler_5;
branch_end_6:;
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_2;
// End of try:
try_end_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_4;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_4:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_5;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
bool tmp_condition_result_8;
nuitka_bool tmp_cmp_expr_left_6;
nuitka_bool tmp_cmp_expr_right_6;
assert(tmp_for_loop_1__break_indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_6 = tmp_for_loop_1__break_indicator;
tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
tmp_condition_result_8 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
if (var_last_exception == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_last_exception);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 344;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_3 = CHECK_IF_TRUE(var_last_exception);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_15;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_raise_cause_1;
tmp_expression_value_9 = module_var_accessor_google$auth$compute_engine$_metadata$exceptions(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 345;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_TransportError);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_2 = mod_consts.const_str_digest_dd3618287874236b3e28a583d7bc6106;
if (var_url == NULL) {
Py_DECREF(tmp_called_value_11);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_url);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 348;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_1_1 = var_url;
if (var_last_exception == NULL) {
Py_DECREF(tmp_called_value_11);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_last_exception);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 348;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_2_1 = var_last_exception;
frame_frame_google$auth$compute_engine$_metadata$$$function__8_get->m_frame.f_lineno = 346;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    tmp_args_element_value_15 = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
}

if (tmp_args_element_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);

exception_lineno = 346;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$compute_engine$_metadata$$$function__8_get->m_frame.f_lineno = 345;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_15);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_last_exception == NULL) {
Py_DECREF(tmp_raise_type_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_last_exception);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 349;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_raise_cause_1 = var_last_exception;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 349;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "ooooooooooooooooooooooo";
goto frame_exception_exit_1;
}
goto branch_end_8;
branch_no_8:;
{
PyObject *tmp_assign_source_19;
bool tmp_condition_result_10;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
if (var_response == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_response);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 353;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_11 = var_response;
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_data);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_10 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
if (var_response == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_response);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 352;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_13 = var_response;
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_data);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$compute_engine$_metadata$$$function__8_get->m_frame.f_lineno = 352;
tmp_assign_source_19 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_12, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_2;
condexpr_false_2:;
if (var_response == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_response);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 354;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_14 = var_response;
tmp_assign_source_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_data);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
condexpr_end_2:;
assert(var_error_details == NULL);
var_error_details = tmp_assign_source_19;
}
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_element_value_16;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_arg_value_1_2;
PyObject *tmp_kw_call_arg_value_2_2;
PyObject *tmp_expression_value_16;
PyObject *tmp_kw_call_arg_value_3_1;
tmp_expression_value_15 = module_var_accessor_google$auth$compute_engine$_metadata$exceptions(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 356;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_TransportError);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_3 = mod_consts.const_str_digest_e3204237a5f708ae2d0492ac580ebae8;
if (var_url == NULL) {
Py_DECREF(tmp_called_value_13);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_url);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 360;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_1_2 = var_url;
if (var_response == NULL) {
Py_DECREF(tmp_called_value_13);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_response);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 360;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_16 = var_response;
tmp_kw_call_arg_value_2_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_status);
if (tmp_kw_call_arg_value_2_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_13);

exception_lineno = 360;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_error_details);
tmp_kw_call_arg_value_3_1 = var_error_details;
frame_frame_google$auth$compute_engine$_metadata$$$function__8_get->m_frame.f_lineno = 357;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_2, tmp_kw_call_arg_value_3_1};
    tmp_args_element_value_16 = CALL_FUNCTION_WITH_ARGS4(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_2_2);
Py_DECREF(tmp_kw_call_arg_value_2_2);
if (tmp_args_element_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_13);

exception_lineno = 357;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$compute_engine$_metadata$$$function__8_get->m_frame.f_lineno = 356;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_16);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 356;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_end_8:;
branch_no_7:;
{
PyObject *tmp_assign_source_20;
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_17;
PyObject *tmp_args_element_value_17;
PyObject *tmp_expression_value_18;
tmp_expression_value_17 = module_var_accessor_google$auth$compute_engine$_metadata$_helpers(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 364;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_from_bytes);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_response == NULL) {
Py_DECREF(tmp_called_value_14);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_response);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 364;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_18 = var_response;
tmp_args_element_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_data);
if (tmp_args_element_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_14);

exception_lineno = 364;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$compute_engine$_metadata$$$function__8_get->m_frame.f_lineno = 364;
tmp_assign_source_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_17);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_content == NULL);
var_content = tmp_assign_source_20;
}
{
nuitka_bool tmp_condition_result_11;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_expression_value_19;
PyObject *tmp_expression_value_20;
int tmp_truth_name_4;
if (var_response == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_response);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 366;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_19 = var_response;
tmp_cmp_expr_left_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_status);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 366;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_20 = module_var_accessor_google$auth$compute_engine$_metadata$http_client(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_http_client);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_7);

exception_lineno = 366;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_NOT_FOUND);
if (tmp_cmp_expr_right_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_7);

exception_lineno = 366;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
CHECK_OBJECT(tmp_cmp_expr_right_7);
Py_DECREF(tmp_cmp_expr_right_7);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 366;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 366;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_return_none_for_not_found_error);
tmp_truth_name_4 = CHECK_IF_TRUE(par_return_none_for_not_found_error);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 366;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_9:;
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_21;
PyObject *tmp_expression_value_22;
if (var_response == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_response);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 369;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_21 = var_response;
tmp_cmp_expr_left_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_status);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_22 = module_var_accessor_google$auth$compute_engine$_metadata$http_client(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_http_client);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_8);

exception_lineno = 369;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_OK);
if (tmp_cmp_expr_right_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_8);

exception_lineno = 369;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_12 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
CHECK_OBJECT(tmp_cmp_expr_right_8);
Py_DECREF(tmp_cmp_expr_right_8);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
type_description_1 = "ooooooooooooooooooooooo";
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
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_23;
PyObject *tmp_args_element_value_18;
PyObject *tmp_expression_value_24;
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_1;
tmp_expression_value_23 = module_var_accessor_google$auth$compute_engine$_metadata$_helpers(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 371;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_parse_content_type);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_response == NULL) {
Py_DECREF(tmp_called_value_15);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_response);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 371;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_25 = var_response;
tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_headers);
if (tmp_expression_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_15);

exception_lineno = 371;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_str_digest_d1c9bee04bd0a9c88e6c11d7c3b4ffd8;
tmp_args_element_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_args_element_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_15);

exception_lineno = 371;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$compute_engine$_metadata$$$function__8_get->m_frame.f_lineno = 371;
tmp_cmp_expr_left_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_18);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_cmp_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_9 = mod_consts.const_str_digest_1781891970018ef9597f363946d7327b;
tmp_condition_result_13 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
CHECK_OBJECT(tmp_cmp_expr_left_9);
Py_DECREF(tmp_cmp_expr_left_9);
if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
// Tried code:
{
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_19;
tmp_called_instance_3 = module_var_accessor_google$auth$compute_engine$_metadata$json(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 375;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(var_content);
tmp_args_element_value_19 = var_content;
frame_frame_google$auth$compute_engine$_metadata$$$function__8_get->m_frame.f_lineno = 375;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_loads, tmp_args_element_value_19);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_7;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_6);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$compute_engine$_metadata$$$function__8_get, exception_keeper_lineno_6);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_6, exception_tb);
    } else if (exception_keeper_lineno_6 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$compute_engine$_metadata$$$function__8_get, exception_keeper_lineno_6);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_6, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_6);
// Tried code:
{
bool tmp_condition_result_14;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
tmp_cmp_expr_left_10 = EXC_TYPE(tstate);
tmp_cmp_expr_right_10 = PyExc_ValueError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
assert(!(tmp_res == -1));
tmp_condition_result_14 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_21); 
assert(var_caught_exc == NULL);
Py_INCREF(tmp_assign_source_21);
var_caught_exc = tmp_assign_source_21;
}
// Tried code:
{
PyObject *tmp_assign_source_22;
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_26;
PyObject *tmp_args_element_value_20;
PyObject *tmp_kw_call_arg_value_0_4;
PyObject *tmp_kw_call_arg_value_1_3;
tmp_expression_value_26 = module_var_accessor_google$auth$compute_engine$_metadata$exceptions(tstate);
if (unlikely(tmp_expression_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 377;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_TransportError);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_kw_call_arg_value_0_4 = mod_consts.const_str_digest_a8248aae37cae04d28f4f048b4b1a824;
CHECK_OBJECT(var_content);
tmp_kw_call_arg_value_1_3 = var_content;
frame_frame_google$auth$compute_engine$_metadata$$$function__8_get->m_frame.f_lineno = 378;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_4, tmp_kw_call_arg_value_1_3};
    tmp_args_element_value_20 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

if (tmp_args_element_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_16);

exception_lineno = 378;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_9;
}
frame_frame_google$auth$compute_engine$_metadata$$$function__8_get->m_frame.f_lineno = 377;
tmp_assign_source_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_20);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_20);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_9;
}
assert(var_new_exc == NULL);
var_new_exc = tmp_assign_source_22;
}
{
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_raise_cause_2;
CHECK_OBJECT(var_new_exc);
tmp_raise_type_input_3 = var_new_exc;
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(var_caught_exc);
tmp_raise_cause_2 = var_caught_exc;
exception_state.exception_value = tmp_raise_type_3;
Py_INCREF(tmp_raise_cause_2);
exception_lineno = 381;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_2);
type_description_1 = "ooooooooooooooooooooooo";
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
goto branch_end_12;
branch_no_12:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 374;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$compute_engine$_metadata$$$function__8_get->m_frame)) {
        frame_frame_google$auth$compute_engine$_metadata$$$function__8_get->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooooooooooooo";
goto try_except_handler_8;
branch_end_12:;
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
goto branch_end_11;
branch_no_11:;
CHECK_OBJECT(var_content);
tmp_return_value = var_content;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_end_11:;
branch_no_10:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_raise_type_input_4;
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_27;
PyObject *tmp_args_element_value_21;
PyObject *tmp_kw_call_arg_value_0_5;
PyObject *tmp_kw_call_arg_value_1_4;
PyObject *tmp_kw_call_arg_value_2_3;
PyObject *tmp_expression_value_28;
PyObject *tmp_kw_call_arg_value_3_2;
PyObject *tmp_expression_value_29;
PyObject *tmp_args_element_value_22;
tmp_expression_value_27 = module_var_accessor_google$auth$compute_engine$_metadata$exceptions(tstate);
if (unlikely(tmp_expression_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exceptions);
}

if (tmp_expression_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 385;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_TransportError);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 385;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_5 = mod_consts.const_str_digest_f66a5b747b12ecbf268c424ea99da3c0;
if (var_url == NULL) {
Py_DECREF(tmp_called_value_17);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_url);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 388;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_1_4 = var_url;
if (var_response == NULL) {
Py_DECREF(tmp_called_value_17);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_response);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 388;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_28 = var_response;
tmp_kw_call_arg_value_2_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_status);
if (tmp_kw_call_arg_value_2_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_17);

exception_lineno = 388;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_response == NULL) {
Py_DECREF(tmp_called_value_17);
Py_DECREF(tmp_kw_call_arg_value_2_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_response);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 388;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_29 = var_response;
tmp_kw_call_arg_value_3_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_data);
if (tmp_kw_call_arg_value_3_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_17);
Py_DECREF(tmp_kw_call_arg_value_2_3);

exception_lineno = 388;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$compute_engine$_metadata$$$function__8_get->m_frame.f_lineno = 386;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_5, tmp_kw_call_arg_value_1_4, tmp_kw_call_arg_value_2_3, tmp_kw_call_arg_value_3_2};
    tmp_args_element_value_21 = CALL_FUNCTION_WITH_ARGS4(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_2_3);
Py_DECREF(tmp_kw_call_arg_value_2_3);
CHECK_OBJECT(tmp_kw_call_arg_value_3_2);
Py_DECREF(tmp_kw_call_arg_value_3_2);
if (tmp_args_element_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_17);

exception_lineno = 386;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_response == NULL) {
Py_DECREF(tmp_called_value_17);
Py_DECREF(tmp_args_element_value_21);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_response);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 390;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_22 = var_response;
frame_frame_google$auth$compute_engine$_metadata$$$function__8_get->m_frame.f_lineno = 385;
{
    PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22};
    tmp_raise_type_input_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_17, call_args);
}

CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_element_value_21);
Py_DECREF(tmp_args_element_value_21);
if (tmp_raise_type_input_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 385;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_4 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_4);
CHECK_OBJECT(tmp_raise_type_input_4);
Py_DECREF(tmp_raise_type_input_4);
if (tmp_raise_type_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 385;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 385;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$compute_engine$_metadata$$$function__8_get, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$compute_engine$_metadata$$$function__8_get->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$compute_engine$_metadata$$$function__8_get, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$compute_engine$_metadata$$$function__8_get,
    type_description_1,
    par_request,
    par_path,
    par_root,
    par_params,
    par_recursive,
    par_retry_count,
    par_headers,
    par_return_none_for_not_found_error,
    par_timeout,
    var_use_mtls,
    var_base_url,
    var_query_params,
    var_headers_to_use,
    var_url,
    var_backoff,
    var_last_exception,
    var_attempt,
    var_response,
    var_e,
    var_error_details,
    var_content,
    var_caught_exc,
    var_new_exc
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$compute_engine$_metadata$$$function__8_get == cache_frame_frame_google$auth$compute_engine$_metadata$$$function__8_get) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__8_get);
    cache_frame_frame_google$auth$compute_engine$_metadata$$$function__8_get = NULL;
}

assertFrameObject(frame_frame_google$auth$compute_engine$_metadata$$$function__8_get);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_root);
CHECK_OBJECT(par_root);
Py_DECREF(par_root);
par_root = NULL;
CHECK_OBJECT(var_use_mtls);
CHECK_OBJECT(var_use_mtls);
Py_DECREF(var_use_mtls);
var_use_mtls = NULL;
CHECK_OBJECT(var_base_url);
CHECK_OBJECT(var_base_url);
Py_DECREF(var_base_url);
var_base_url = NULL;
CHECK_OBJECT(var_query_params);
CHECK_OBJECT(var_query_params);
Py_DECREF(var_query_params);
var_query_params = NULL;
Py_XDECREF(var_headers_to_use);
var_headers_to_use = NULL;
Py_XDECREF(var_url);
var_url = NULL;
CHECK_OBJECT(var_backoff);
CHECK_OBJECT(var_backoff);
Py_DECREF(var_backoff);
var_backoff = NULL;
Py_XDECREF(var_last_exception);
var_last_exception = NULL;
Py_XDECREF(var_attempt);
var_attempt = NULL;
Py_XDECREF(var_response);
var_response = NULL;
Py_XDECREF(var_e);
var_e = NULL;
CHECK_OBJECT(var_content);
CHECK_OBJECT(var_content);
Py_DECREF(var_content);
var_content = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_root);
par_root = NULL;
Py_XDECREF(var_use_mtls);
var_use_mtls = NULL;
Py_XDECREF(var_base_url);
var_base_url = NULL;
Py_XDECREF(var_query_params);
var_query_params = NULL;
Py_XDECREF(var_headers_to_use);
var_headers_to_use = NULL;
Py_XDECREF(var_url);
var_url = NULL;
Py_XDECREF(var_backoff);
var_backoff = NULL;
Py_XDECREF(var_last_exception);
var_last_exception = NULL;
Py_XDECREF(var_attempt);
var_attempt = NULL;
Py_XDECREF(var_response);
var_response = NULL;
Py_XDECREF(var_e);
var_e = NULL;
Py_XDECREF(var_error_details);
var_error_details = NULL;
Py_XDECREF(var_content);
var_content = NULL;
Py_XDECREF(var_new_exc);
var_new_exc = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
CHECK_OBJECT(par_params);
Py_DECREF(par_params);
CHECK_OBJECT(par_recursive);
Py_DECREF(par_recursive);
CHECK_OBJECT(par_retry_count);
Py_DECREF(par_retry_count);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_return_none_for_not_found_error);
Py_DECREF(par_return_none_for_not_found_error);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
CHECK_OBJECT(par_params);
Py_DECREF(par_params);
CHECK_OBJECT(par_recursive);
Py_DECREF(par_recursive);
CHECK_OBJECT(par_retry_count);
Py_DECREF(par_retry_count);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_return_none_for_not_found_error);
Py_DECREF(par_return_none_for_not_found_error);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$compute_engine$_metadata$$$function__9_get_project_id(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_request = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$auth$compute_engine$_metadata$$$function__9_get_project_id;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$compute_engine$_metadata$$$function__9_get_project_id = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__9_get_project_id)) {
    Py_XDECREF(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__9_get_project_id);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$compute_engine$_metadata$$$function__9_get_project_id == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$compute_engine$_metadata$$$function__9_get_project_id = MAKE_FUNCTION_FRAME(tstate, code_objects_ab0bd78ade250d42cbb2aae09f34c2ba, module_google$auth$compute_engine$_metadata, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__9_get_project_id->m_type_description == NULL);
frame_frame_google$auth$compute_engine$_metadata$$$function__9_get_project_id = cache_frame_frame_google$auth$compute_engine$_metadata$$$function__9_get_project_id;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$compute_engine$_metadata$$$function__9_get_project_id);
assert(Py_REFCNT(frame_frame_google$auth$compute_engine$_metadata$$$function__9_get_project_id) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_google$auth$compute_engine$_metadata$get(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_get);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 408;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_args_element_value_1 = par_request;
tmp_args_element_value_2 = mod_consts.const_str_digest_8dd12a70f79301856e399502301eaf27;
frame_frame_google$auth$compute_engine$_metadata$$$function__9_get_project_id->m_frame.f_lineno = 408;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 408;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$compute_engine$_metadata$$$function__9_get_project_id, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$compute_engine$_metadata$$$function__9_get_project_id->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$compute_engine$_metadata$$$function__9_get_project_id, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$compute_engine$_metadata$$$function__9_get_project_id,
    type_description_1,
    par_request
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$compute_engine$_metadata$$$function__9_get_project_id == cache_frame_frame_google$auth$compute_engine$_metadata$$$function__9_get_project_id) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__9_get_project_id);
    cache_frame_frame_google$auth$compute_engine$_metadata$$$function__9_get_project_id = NULL;
}

assertFrameObject(frame_frame_google$auth$compute_engine$_metadata$$$function__9_get_project_id);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_request);
Py_DECREF(par_request);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$compute_engine$_metadata$$$function__10_get_universe_domain(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_request = python_pars[0];
PyObject *var_universe_domain = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$compute_engine$_metadata$$$function__10_get_universe_domain;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$compute_engine$_metadata$$$function__10_get_universe_domain = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__10_get_universe_domain)) {
    Py_XDECREF(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__10_get_universe_domain);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$compute_engine$_metadata$$$function__10_get_universe_domain == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$compute_engine$_metadata$$$function__10_get_universe_domain = MAKE_FUNCTION_FRAME(tstate, code_objects_c94f7f97cb6354f4fa5a7d65fd15a5e3, module_google$auth$compute_engine$_metadata, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__10_get_universe_domain->m_type_description == NULL);
frame_frame_google$auth$compute_engine$_metadata$$$function__10_get_universe_domain = cache_frame_frame_google$auth$compute_engine$_metadata$$$function__10_get_universe_domain;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$compute_engine$_metadata$$$function__10_get_universe_domain);
assert(Py_REFCNT(frame_frame_google$auth$compute_engine$_metadata$$$function__10_get_universe_domain) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_google$auth$compute_engine$_metadata$get(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_get);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 426;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_tuple_element_1 = par_request;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_a2fd72b0299acadb47aa68627ca0022f;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_4fd378f782b3f748411112a39b7a85b1);
frame_frame_google$auth$compute_engine$_metadata$$$function__10_get_universe_domain->m_frame.f_lineno = 426;
tmp_assign_source_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_universe_domain == NULL);
var_universe_domain = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_universe_domain);
tmp_operand_value_1 = var_universe_domain;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;
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
tmp_return_value = mod_consts.const_str_digest_3aefddac426ef180a4b7d7808d36479c;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$compute_engine$_metadata$$$function__10_get_universe_domain, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$compute_engine$_metadata$$$function__10_get_universe_domain->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$compute_engine$_metadata$$$function__10_get_universe_domain, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$compute_engine$_metadata$$$function__10_get_universe_domain,
    type_description_1,
    par_request,
    var_universe_domain
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$compute_engine$_metadata$$$function__10_get_universe_domain == cache_frame_frame_google$auth$compute_engine$_metadata$$$function__10_get_universe_domain) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__10_get_universe_domain);
    cache_frame_frame_google$auth$compute_engine$_metadata$$$function__10_get_universe_domain = NULL;
}

assertFrameObject(frame_frame_google$auth$compute_engine$_metadata$$$function__10_get_universe_domain);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_universe_domain);
tmp_return_value = var_universe_domain;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_universe_domain);
CHECK_OBJECT(var_universe_domain);
Py_DECREF(var_universe_domain);
var_universe_domain = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_universe_domain);
var_universe_domain = NULL;
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
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_request);
Py_DECREF(par_request);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$compute_engine$_metadata$$$function__11_get_service_account_info(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_request = python_pars[0];
PyObject *par_service_account = python_pars[1];
PyObject *var_path = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$compute_engine$_metadata$$$function__11_get_service_account_info;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$compute_engine$_metadata$$$function__11_get_service_account_info = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__11_get_service_account_info)) {
    Py_XDECREF(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__11_get_service_account_info);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$compute_engine$_metadata$$$function__11_get_service_account_info == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$compute_engine$_metadata$$$function__11_get_service_account_info = MAKE_FUNCTION_FRAME(tstate, code_objects_14ca485b7dd4e6064db507eb61c0c5f8, module_google$auth$compute_engine$_metadata, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__11_get_service_account_info->m_type_description == NULL);
frame_frame_google$auth$compute_engine$_metadata$$$function__11_get_service_account_info = cache_frame_frame_google$auth$compute_engine$_metadata$$$function__11_get_service_account_info;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$compute_engine$_metadata$$$function__11_get_service_account_info);
assert(Py_REFCNT(frame_frame_google$auth$compute_engine$_metadata$$$function__11_get_service_account_info) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_a6cd6e5ec187082a157e21a376c6abbf;
CHECK_OBJECT(par_service_account);
tmp_kw_call_arg_value_1_1 = par_service_account;
frame_frame_google$auth$compute_engine$_metadata$$$function__11_get_service_account_info->m_frame.f_lineno = 457;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 457;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_path == NULL);
var_path = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_google$auth$compute_engine$_metadata$get(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_get);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 460;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_tuple_element_1 = par_request;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_path);
tmp_tuple_element_1 = var_path;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_kwargs_value_1 = DEEP_COPY_DICT(tstate, mod_consts.const_dict_4581e39d79ff248937a99b528b550868);
frame_frame_google$auth$compute_engine$_metadata$$$function__11_get_service_account_info->m_frame.f_lineno = 460;
tmp_return_value = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 460;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$compute_engine$_metadata$$$function__11_get_service_account_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$compute_engine$_metadata$$$function__11_get_service_account_info->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$compute_engine$_metadata$$$function__11_get_service_account_info, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$compute_engine$_metadata$$$function__11_get_service_account_info,
    type_description_1,
    par_request,
    par_service_account,
    var_path
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$compute_engine$_metadata$$$function__11_get_service_account_info == cache_frame_frame_google$auth$compute_engine$_metadata$$$function__11_get_service_account_info) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__11_get_service_account_info);
    cache_frame_frame_google$auth$compute_engine$_metadata$$$function__11_get_service_account_info = NULL;
}

assertFrameObject(frame_frame_google$auth$compute_engine$_metadata$$$function__11_get_service_account_info);

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
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_service_account);
Py_DECREF(par_service_account);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_service_account);
Py_DECREF(par_service_account);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$auth$compute_engine$_metadata$$$function__12_get_service_account_token(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_request = python_pars[0];
PyObject *par_service_account = python_pars[1];
PyObject *par_scopes = python_pars[2];
PyObject *var__agent_identity_utils = NULL;
PyObject *var_params = NULL;
PyObject *var_cert = NULL;
PyObject *var_fingerprint = NULL;
PyObject *var_metrics_header = NULL;
PyObject *var_path = NULL;
PyObject *var_token_json = NULL;
PyObject *var_token_expiry = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$compute_engine$_metadata$$$function__12_get_service_account_token;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$compute_engine$_metadata$$$function__12_get_service_account_token = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__12_get_service_account_token)) {
    Py_XDECREF(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__12_get_service_account_token);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$compute_engine$_metadata$$$function__12_get_service_account_token == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$compute_engine$_metadata$$$function__12_get_service_account_token = MAKE_FUNCTION_FRAME(tstate, code_objects_503dc6828ec63e502169e60ced9c50f2, module_google$auth$compute_engine$_metadata, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__12_get_service_account_token->m_type_description == NULL);
frame_frame_google$auth$compute_engine$_metadata$$$function__12_get_service_account_token = cache_frame_frame_google$auth$compute_engine$_metadata$$$function__12_get_service_account_token;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$compute_engine$_metadata$$$function__12_get_service_account_token);
assert(Py_REFCNT(frame_frame_google$auth$compute_engine$_metadata$$$function__12_get_service_account_token) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$auth$compute_engine$_metadata;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain__agent_identity_utils_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_google$auth$compute_engine$_metadata$$$function__12_get_service_account_token->m_frame.f_lineno = 481;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 481;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$auth$compute_engine$_metadata,
        mod_consts.const_str_plain__agent_identity_utils,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain__agent_identity_utils);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 481;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var__agent_identity_utils == NULL);
var__agent_identity_utils = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = MAKE_DICT_EMPTY(tstate);
assert(var_params == NULL);
var_params = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_scopes);
tmp_truth_name_1 = CHECK_IF_TRUE(par_scopes);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 484;
type_description_1 = "ooooooooooo";
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
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_scopes);
tmp_isinstance_inst_1 = par_scopes;
tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
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
PyObject *tmp_assign_source_3;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_str_arg_value_1 = mod_consts.const_str_chr_44;
CHECK_OBJECT(par_scopes);
tmp_iterable_value_1 = par_scopes;
tmp_assign_source_3 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 486;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_scopes;
    assert(old != NULL);
    par_scopes = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_no_2:;
CHECK_OBJECT(par_scopes);
tmp_dictset_value = par_scopes;
CHECK_OBJECT(var_params);
tmp_dictset_dict = var_params;
tmp_dictset_key = mod_consts.const_str_plain_scopes;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
branch_no_1:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var__agent_identity_utils);
tmp_called_instance_1 = var__agent_identity_utils;
frame_frame_google$auth$compute_engine$_metadata$$$function__12_get_service_account_token->m_frame.f_lineno = 489;
tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_and_parse_agent_identity_certificate);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_cert == NULL);
var_cert = tmp_assign_source_4;
}
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_2;
CHECK_OBJECT(var_cert);
tmp_truth_name_2 = CHECK_IF_TRUE(var_cert);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 490;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_3;
CHECK_OBJECT(var__agent_identity_utils);
tmp_called_instance_2 = var__agent_identity_utils;
CHECK_OBJECT(var_cert);
tmp_args_element_value_1 = var_cert;
frame_frame_google$auth$compute_engine$_metadata$$$function__12_get_service_account_token->m_frame.f_lineno = 491;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_should_request_bound_token, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 491;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 491;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var__agent_identity_utils);
tmp_called_instance_3 = var__agent_identity_utils;
CHECK_OBJECT(var_cert);
tmp_args_element_value_2 = var_cert;
frame_frame_google$auth$compute_engine$_metadata$$$function__12_get_service_account_token->m_frame.f_lineno = 492;
tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_calculate_certificate_fingerprint, tmp_args_element_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 492;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_fingerprint == NULL);
var_fingerprint = tmp_assign_source_5;
}
CHECK_OBJECT(var_fingerprint);
tmp_dictset_value = var_fingerprint;
CHECK_OBJECT(var_params);
tmp_dictset_dict = var_params;
tmp_dictset_key = mod_consts.const_str_plain_bindCertificateFingerprint;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
branch_no_4:;
branch_no_3:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_4;
tmp_expression_value_1 = module_var_accessor_google$auth$compute_engine$_metadata$metrics(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_metrics);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 496;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_API_CLIENT_HEADER);
if (tmp_dict_key_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 496;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_4 = module_var_accessor_google$auth$compute_engine$_metadata$metrics(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_metrics);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_1);

exception_lineno = 496;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$compute_engine$_metadata$$$function__12_get_service_account_token->m_frame.f_lineno = 496;
tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_token_request_access_token_mds);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_key_1);

exception_lineno = 496;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
Py_DECREF(tmp_dict_key_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 496;
type_description_1 = "ooooooooooo";
    goto dict_build_exception_1;
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_6);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
assert(var_metrics_header == NULL);
var_metrics_header = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_ccb589ff01ba810f3aa8b4f643f3a5e9;
CHECK_OBJECT(par_service_account);
tmp_kw_call_arg_value_1_1 = par_service_account;
frame_frame_google$auth$compute_engine$_metadata$$$function__12_get_service_account_token->m_frame.f_lineno = 499;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 499;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_path == NULL);
var_path = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_2;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_called_value_1 = module_var_accessor_google$auth$compute_engine$_metadata$get(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_get);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 500;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_request);
tmp_kw_call_arg_value_0_2 = par_request;
CHECK_OBJECT(var_path);
tmp_kw_call_arg_value_1_2 = var_path;
CHECK_OBJECT(var_params);
tmp_kw_call_dict_value_0_1 = var_params;
CHECK_OBJECT(var_metrics_header);
tmp_kw_call_dict_value_1_1 = var_metrics_header;
frame_frame_google$auth$compute_engine$_metadata$$$function__12_get_service_account_token->m_frame.f_lineno = 500;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_params_str_plain_headers_tuple);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 500;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_token_json == NULL);
var_token_json = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_called_instance_5;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
tmp_called_instance_5 = module_var_accessor_google$auth$compute_engine$_metadata$_helpers(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__helpers);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 501;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$compute_engine$_metadata$$$function__12_get_service_account_token->m_frame.f_lineno = 501;
tmp_add_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts.const_str_plain_utcnow);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 501;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_google$auth$compute_engine$_metadata$datetime(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_datetime);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 501;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_timedelta);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 501;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_token_json);
tmp_expression_value_3 = var_token_json;
tmp_subscript_value_1 = mod_consts.const_str_plain_expires_in;
tmp_kw_call_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 502;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$auth$compute_engine$_metadata$$$function__12_get_service_account_token->m_frame.f_lineno = 501;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_add_expr_right_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_str_plain_seconds_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 501;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 501;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_token_expiry == NULL);
var_token_expiry = tmp_assign_source_9;
}
{
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_token_json);
tmp_expression_value_4 = var_token_json;
tmp_subscript_value_2 = mod_consts.const_str_plain_access_token;
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 504;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_token_expiry);
tmp_tuple_element_1 = var_token_expiry;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$compute_engine$_metadata$$$function__12_get_service_account_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$compute_engine$_metadata$$$function__12_get_service_account_token->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$compute_engine$_metadata$$$function__12_get_service_account_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$compute_engine$_metadata$$$function__12_get_service_account_token,
    type_description_1,
    par_request,
    par_service_account,
    par_scopes,
    var__agent_identity_utils,
    var_params,
    var_cert,
    var_fingerprint,
    var_metrics_header,
    var_path,
    var_token_json,
    var_token_expiry
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$compute_engine$_metadata$$$function__12_get_service_account_token == cache_frame_frame_google$auth$compute_engine$_metadata$$$function__12_get_service_account_token) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$compute_engine$_metadata$$$function__12_get_service_account_token);
    cache_frame_frame_google$auth$compute_engine$_metadata$$$function__12_get_service_account_token = NULL;
}

assertFrameObject(frame_frame_google$auth$compute_engine$_metadata$$$function__12_get_service_account_token);

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
CHECK_OBJECT(var__agent_identity_utils);
CHECK_OBJECT(var__agent_identity_utils);
Py_DECREF(var__agent_identity_utils);
var__agent_identity_utils = NULL;
CHECK_OBJECT(var_params);
CHECK_OBJECT(var_params);
Py_DECREF(var_params);
var_params = NULL;
CHECK_OBJECT(var_cert);
CHECK_OBJECT(var_cert);
Py_DECREF(var_cert);
var_cert = NULL;
Py_XDECREF(var_fingerprint);
var_fingerprint = NULL;
CHECK_OBJECT(var_metrics_header);
CHECK_OBJECT(var_metrics_header);
Py_DECREF(var_metrics_header);
var_metrics_header = NULL;
CHECK_OBJECT(var_path);
CHECK_OBJECT(var_path);
Py_DECREF(var_path);
var_path = NULL;
CHECK_OBJECT(var_token_json);
CHECK_OBJECT(var_token_json);
Py_DECREF(var_token_json);
var_token_json = NULL;
CHECK_OBJECT(var_token_expiry);
CHECK_OBJECT(var_token_expiry);
Py_DECREF(var_token_expiry);
var_token_expiry = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_scopes);
CHECK_OBJECT(par_scopes);
Py_DECREF(par_scopes);
par_scopes = NULL;
Py_XDECREF(var__agent_identity_utils);
var__agent_identity_utils = NULL;
Py_XDECREF(var_params);
var_params = NULL;
Py_XDECREF(var_cert);
var_cert = NULL;
Py_XDECREF(var_fingerprint);
var_fingerprint = NULL;
Py_XDECREF(var_metrics_header);
var_metrics_header = NULL;
Py_XDECREF(var_path);
var_path = NULL;
Py_XDECREF(var_token_json);
var_token_json = NULL;
Py_XDECREF(var_token_expiry);
var_token_expiry = NULL;
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
CHECK_OBJECT(par_service_account);
Py_DECREF(par_service_account);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_request);
Py_DECREF(par_request);
CHECK_OBJECT(par_service_account);
Py_DECREF(par_service_account);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_google$auth$compute_engine$_metadata$$$function__10_get_universe_domain(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$compute_engine$_metadata$$$function__10_get_universe_domain,
        mod_consts.const_str_plain_get_universe_domain,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c94f7f97cb6354f4fa5a7d65fd15a5e3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$compute_engine$_metadata,
        mod_consts.const_str_digest_2272e9c85078bee94aaf6d666c998e33,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$compute_engine$_metadata$$$function__11_get_service_account_info(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$compute_engine$_metadata$$$function__11_get_service_account_info,
        mod_consts.const_str_plain_get_service_account_info,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_14ca485b7dd4e6064db507eb61c0c5f8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$compute_engine$_metadata,
        mod_consts.const_str_digest_f9cef753f63e8424258f0e4b6119c92d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$compute_engine$_metadata$$$function__12_get_service_account_token(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$compute_engine$_metadata$$$function__12_get_service_account_token,
        mod_consts.const_str_plain_get_service_account_token,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_503dc6828ec63e502169e60ced9c50f2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$compute_engine$_metadata,
        mod_consts.const_str_digest_7e4ba0edd8abfc973ed97f4f5555660c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$compute_engine$_metadata$$$function__1__validate_gce_mds_configured_environment(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$compute_engine$_metadata$$$function__1__validate_gce_mds_configured_environment,
        mod_consts.const_str_plain__validate_gce_mds_configured_environment,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_397b39e4ad2ebefb81601fdc06878714,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$compute_engine$_metadata,
        mod_consts.const_str_digest_1cb2709bc94a9846c81cf858e409a2a5,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$compute_engine$_metadata$$$function__2__get_metadata_root(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$compute_engine$_metadata$$$function__2__get_metadata_root,
        mod_consts.const_str_plain__get_metadata_root,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f30b46bbdd48f34276d00a7fcf51d224,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$auth$compute_engine$_metadata,
        mod_consts.const_str_digest_ce1b7432f502bc4baefef6ea3e007c73,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$compute_engine$_metadata$$$function__3__get_metadata_ip_root(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$compute_engine$_metadata$$$function__3__get_metadata_ip_root,
        mod_consts.const_str_plain__get_metadata_ip_root,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_878fbacdc1ea3c4ce015338c77778fd8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$auth$compute_engine$_metadata,
        mod_consts.const_str_digest_5370ce1620b1a21c30045d2cfab97cd9,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$compute_engine$_metadata$$$function__4_is_on_gce(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$compute_engine$_metadata$$$function__4_is_on_gce,
        mod_consts.const_str_plain_is_on_gce,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_034c64477ae683062cd98acc8a8ea4b9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$compute_engine$_metadata,
        mod_consts.const_str_digest_4235c29f2cedfaa90da8b62d5b97ff4d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux,
        mod_consts.const_str_plain_detect_gce_residency_linux,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a7bff50e019d29449783f7c9ef534571,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$compute_engine$_metadata,
        mod_consts.const_str_digest_1f4628297dff324ec96690ab4de461c5,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$compute_engine$_metadata$$$function__6__prepare_request_for_mds(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$compute_engine$_metadata$$$function__6__prepare_request_for_mds,
        mod_consts.const_str_plain__prepare_request_for_mds,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2d2932fa61c724c2ffa549f7af0ca4ba,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$auth$compute_engine$_metadata,
        mod_consts.const_str_digest_243b2e200618233fd837e8d36c63308f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$compute_engine$_metadata$$$function__7_ping(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$compute_engine$_metadata$$$function__7_ping,
        mod_consts.const_str_plain_ping,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c112d36d970d363b01af1e634de9ad68,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$compute_engine$_metadata,
        mod_consts.const_str_digest_001f99b58cffebc0e3cceb838662cc73,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$compute_engine$_metadata$$$function__8_get(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$compute_engine$_metadata$$$function__8_get,
        const_str_plain_get,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_fc47682947470edd08868a0fb5623460,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$compute_engine$_metadata,
        mod_consts.const_str_digest_e5fb7b6fe15904aec82c96d17074e7df,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$auth$compute_engine$_metadata$$$function__9_get_project_id(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$compute_engine$_metadata$$$function__9_get_project_id,
        mod_consts.const_str_plain_get_project_id,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ab0bd78ade250d42cbb2aae09f34c2ba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$compute_engine$_metadata,
        mod_consts.const_str_digest_8931ccec0478d59b563bf41ed3ba28c5,
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

static function_impl_code const function_table_google$auth$compute_engine$_metadata[] = {
impl_google$auth$compute_engine$_metadata$$$function__1__validate_gce_mds_configured_environment,
impl_google$auth$compute_engine$_metadata$$$function__2__get_metadata_root,
impl_google$auth$compute_engine$_metadata$$$function__3__get_metadata_ip_root,
impl_google$auth$compute_engine$_metadata$$$function__4_is_on_gce,
impl_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux,
impl_google$auth$compute_engine$_metadata$$$function__6__prepare_request_for_mds,
impl_google$auth$compute_engine$_metadata$$$function__7_ping,
impl_google$auth$compute_engine$_metadata$$$function__8_get,
impl_google$auth$compute_engine$_metadata$$$function__9_get_project_id,
impl_google$auth$compute_engine$_metadata$$$function__10_get_universe_domain,
impl_google$auth$compute_engine$_metadata$$$function__11_get_service_account_info,
impl_google$auth$compute_engine$_metadata$$$function__12_get_service_account_token,
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

    return Nuitka_Function_GetFunctionState(function, function_table_google$auth$compute_engine$_metadata);
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
        module_google$auth$compute_engine$_metadata,
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
        function_table_google$auth$compute_engine$_metadata,
        sizeof(function_table_google$auth$compute_engine$_metadata) / sizeof(function_impl_code)
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
static char const *module_full_name = "google.auth.compute_engine._metadata";
#endif

// Internal entry point for module code.
PyObject *module_code_google$auth$compute_engine$_metadata(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("google$auth$compute_engine$_metadata");

    // Store the module for future use.
    module_google$auth$compute_engine$_metadata = module;

    moduledict_google$auth$compute_engine$_metadata = MODULE_DICT(module_google$auth$compute_engine$_metadata);

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
        PRINT_STRING("google$auth$compute_engine$_metadata: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("google$auth$compute_engine$_metadata: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("google$auth$compute_engine$_metadata: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth.compute_engine._metadata" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initgoogle$auth$compute_engine$_metadata\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_google$auth$compute_engine$_metadata,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_google$auth$compute_engine$_metadata,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_google$auth$compute_engine$_metadata,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$compute_engine$_metadata,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$compute_engine$_metadata,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_google$auth$compute_engine$_metadata);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_google$auth$compute_engine$_metadata);
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

        UPDATE_STRING_DICT1(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_google$auth$compute_engine$_metadata;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_dfe5a10204efca079cd4b73145aa1ef1;
UPDATE_STRING_DICT0(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_google$auth$compute_engine$_metadata = MAKE_MODULE_FRAME(code_objects_6c25752e41c6f105fd62e31e728bd94a, module_google$auth$compute_engine$_metadata);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$compute_engine$_metadata);
assert(Py_REFCNT(frame_frame_google$auth$compute_engine$_metadata) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_google$auth$compute_engine$_metadata$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_google$auth$compute_engine$_metadata$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_datetime;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$auth$compute_engine$_metadata;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_google$auth$compute_engine$_metadata->m_frame.f_lineno = 20;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_datetime, tmp_assign_source_4);
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
tmp_globals_arg_value_2 = (PyObject *)moduledict_google$auth$compute_engine$_metadata;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_google$auth$compute_engine$_metadata->m_frame.f_lineno = 21;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$auth$compute_engine$_metadata,
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


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_http_client, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_json;
tmp_globals_arg_value_3 = (PyObject *)moduledict_google$auth$compute_engine$_metadata;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_google$auth$compute_engine$_metadata->m_frame.f_lineno = 22;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_json, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_4 = (PyObject *)moduledict_google$auth$compute_engine$_metadata;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = Py_None;
tmp_level_value_4 = const_int_0;
frame_frame_google$auth$compute_engine$_metadata->m_frame.f_lineno = 23;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_logging, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_8 == NULL));
UPDATE_STRING_DICT0(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
tmp_globals_arg_value_5 = (PyObject *)moduledict_google$auth$compute_engine$_metadata;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_urljoin_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_google$auth$compute_engine$_metadata->m_frame.f_lineno = 25;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_google$auth$compute_engine$_metadata,
        mod_consts.const_str_plain_urljoin,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_urljoin);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_urljoin, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_requests;
tmp_globals_arg_value_6 = (PyObject *)moduledict_google$auth$compute_engine$_metadata;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = Py_None;
tmp_level_value_6 = const_int_0;
frame_frame_google$auth$compute_engine$_metadata->m_frame.f_lineno = 27;
tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_requests, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_7 = (PyObject *)moduledict_google$auth$compute_engine$_metadata;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain__helpers_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_google$auth$compute_engine$_metadata->m_frame.f_lineno = 29;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_google$auth$compute_engine$_metadata,
        mod_consts.const_str_plain__helpers,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain__helpers);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__helpers, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_8 = (PyObject *)moduledict_google$auth$compute_engine$_metadata;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_environment_vars_tuple;
tmp_level_value_8 = const_int_0;
frame_frame_google$auth$compute_engine$_metadata->m_frame.f_lineno = 30;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_google$auth$compute_engine$_metadata,
        mod_consts.const_str_plain_environment_vars,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_environment_vars);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_environment_vars, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_9 = (PyObject *)moduledict_google$auth$compute_engine$_metadata;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_exceptions_tuple;
tmp_level_value_9 = const_int_0;
frame_frame_google$auth$compute_engine$_metadata->m_frame.f_lineno = 31;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_google$auth$compute_engine$_metadata,
        mod_consts.const_str_plain_exceptions,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_exceptions);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_exceptions, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_10 = (PyObject *)moduledict_google$auth$compute_engine$_metadata;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_metrics_tuple;
tmp_level_value_10 = const_int_0;
frame_frame_google$auth$compute_engine$_metadata->m_frame.f_lineno = 32;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_google$auth$compute_engine$_metadata,
        mod_consts.const_str_plain_metrics,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_metrics);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_metrics, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_digest_0de7f8e69b14a3090f08517c7f33cefb;
tmp_globals_arg_value_11 = (PyObject *)moduledict_google$auth$compute_engine$_metadata;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_transport_tuple;
tmp_level_value_11 = const_int_0;
frame_frame_google$auth$compute_engine$_metadata->m_frame.f_lineno = 33;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_google$auth$compute_engine$_metadata,
        mod_consts.const_str_plain_transport,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_transport);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_transport, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_digest_3115e6748a7e8614dbfefe5da643c9fb;
tmp_globals_arg_value_12 = (PyObject *)moduledict_google$auth$compute_engine$_metadata;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_ExponentialBackoff_tuple;
tmp_level_value_12 = const_int_0;
frame_frame_google$auth$compute_engine$_metadata->m_frame.f_lineno = 34;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_google$auth$compute_engine$_metadata,
        mod_consts.const_str_plain_ExponentialBackoff,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_ExponentialBackoff);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_ExponentialBackoff, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_digest_570834cc86e35a3d09c0821b53119f1c;
tmp_globals_arg_value_13 = (PyObject *)moduledict_google$auth$compute_engine$_metadata;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_str_plain__mtls_tuple;
tmp_level_value_13 = const_int_0;
frame_frame_google$auth$compute_engine$_metadata->m_frame.f_lineno = 35;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_google$auth$compute_engine$_metadata,
        mod_consts.const_str_plain__mtls,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain__mtls);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__mtls, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$auth$compute_engine$_metadata$logging(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$compute_engine$_metadata->m_frame.f_lineno = 38;
tmp_assign_source_18 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getLogger,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_1541e27291e0d85174e1a5a4d4f45c1b_tuple, 0)
);

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__LOGGER, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = mod_consts.const_str_digest_37b7b8fc0d57c24d5466039757bfc393;
UPDATE_STRING_DICT0(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__GCE_DEFAULT_MDS_IP, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = mod_consts.const_str_digest_eaafe74924b27c6160d9e6511da269e3;
UPDATE_STRING_DICT0(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__GCE_DEFAULT_HOST, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_list_element_1;
tmp_list_element_1 = module_var_accessor_google$auth$compute_engine$_metadata$_GCE_DEFAULT_HOST(tstate);
assert(!(tmp_list_element_1 == NULL));
tmp_assign_source_21 = MAKE_LIST_EMPTY(tstate, 2);
PyList_SET_ITEM0(tmp_assign_source_21, 0, tmp_list_element_1);
tmp_list_element_1 = module_var_accessor_google$auth$compute_engine$_metadata$_GCE_DEFAULT_MDS_IP(tstate);
assert(!(tmp_list_element_1 == NULL));
PyList_SET_ITEM0(tmp_assign_source_21, 1, tmp_list_element_1);
UPDATE_STRING_DICT1(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__GCE_DEFAULT_MDS_HOSTS, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
tmp_expression_value_1 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_getenv);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_google$auth$compute_engine$_metadata$environment_vars(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_environment_vars);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 48;

    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_GCE_METADATA_HOST);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 48;

    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = Py_None;
frame_frame_google$auth$compute_engine$_metadata->m_frame.f_lineno = 48;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__GCE_METADATA_HOST, tmp_assign_source_22);
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
tmp_operand_value_1 = module_var_accessor_google$auth$compute_engine$_metadata$_GCE_METADATA_HOST(tstate);
assert(!(tmp_operand_value_1 == NULL));
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

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
PyObject *tmp_assign_source_23;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_4;
tmp_expression_value_3 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_3 == NULL));
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_getenv);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto frame_exception_exit_1;
}
tmp_expression_value_4 = module_var_accessor_google$auth$compute_engine$_metadata$environment_vars(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_environment_vars);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 51;

    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_GCE_METADATA_ROOT);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 51;

    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = module_var_accessor_google$auth$compute_engine$_metadata$_GCE_DEFAULT_HOST(tstate);
if (unlikely(tmp_args_element_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__GCE_DEFAULT_HOST);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 51;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$compute_engine$_metadata->m_frame.f_lineno = 50;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__GCE_METADATA_HOST, tmp_assign_source_23);
}
branch_no_1:;
{
PyObject *tmp_assign_source_24;

tmp_assign_source_24 = MAKE_FUNCTION_google$auth$compute_engine$_metadata$$$function__1__validate_gce_mds_configured_environment(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__validate_gce_mds_configured_environment, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_98af96efb7efb29155f04c150c9d2a76);

tmp_assign_source_25 = MAKE_FUNCTION_google$auth$compute_engine$_metadata$$$function__2__get_metadata_root(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__get_metadata_root, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_98af96efb7efb29155f04c150c9d2a76);

tmp_assign_source_26 = MAKE_FUNCTION_google$auth$compute_engine$_metadata$$$function__3__get_metadata_ip_root(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__get_metadata_ip_root, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = mod_consts.const_str_digest_09b1e306a8d05fdf58c0cbff6f0aa4fb;
UPDATE_STRING_DICT0(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__METADATA_FLAVOR_HEADER, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = mod_consts.const_str_plain_Google;
UPDATE_STRING_DICT0(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__METADATA_FLAVOR_VALUE, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = module_var_accessor_google$auth$compute_engine$_metadata$_METADATA_FLAVOR_HEADER(tstate);
assert(!(tmp_dict_key_1 == NULL));
tmp_dict_value_1 = module_var_accessor_google$auth$compute_engine$_metadata$_METADATA_FLAVOR_VALUE(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_assign_source_29 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_29, tmp_dict_key_1, tmp_dict_value_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;

    goto dict_build_exception_1;
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_29);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__METADATA_HEADERS, tmp_assign_source_29);
}
// Tried code:
{
PyObject *tmp_assign_source_30;
PyObject *tmp_int_arg_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_6;
tmp_expression_value_5 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_5 == NULL));
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_getenv);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto try_except_handler_1;
}
tmp_expression_value_6 = module_var_accessor_google$auth$compute_engine$_metadata$environment_vars(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_environment_vars);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 100;

    goto try_except_handler_1;
}
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_GCE_METADATA_TIMEOUT);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 100;

    goto try_except_handler_1;
}
tmp_args_element_value_6 = mod_consts.const_int_pos_3;
frame_frame_google$auth$compute_engine$_metadata->m_frame.f_lineno = 100;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_int_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto try_except_handler_1;
}
tmp_assign_source_30 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__METADATA_DEFAULT_TIMEOUT, tmp_assign_source_30);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$compute_engine$_metadata, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$compute_engine$_metadata, exception_keeper_lineno_1);
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
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_31;
tmp_assign_source_31 = mod_consts.const_int_pos_3;
UPDATE_STRING_DICT0(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__METADATA_DEFAULT_TIMEOUT, tmp_assign_source_31);
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 99;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$compute_engine$_metadata->m_frame)) {
        frame_frame_google$auth$compute_engine$_metadata->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_2;
branch_end_2:;
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
// Tried code:
{
PyObject *tmp_assign_source_32;
PyObject *tmp_int_arg_2;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_8;
tmp_expression_value_7 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_7 == NULL));
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_getenv);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_3;
}
tmp_expression_value_8 = module_var_accessor_google$auth$compute_engine$_metadata$environment_vars(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_environment_vars);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 108;

    goto try_except_handler_3;
}
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_GCE_METADATA_DETECT_RETRIES);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 108;

    goto try_except_handler_3;
}
tmp_args_element_value_8 = mod_consts.const_int_pos_3;
frame_frame_google$auth$compute_engine$_metadata->m_frame.f_lineno = 108;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_int_arg_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_int_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_3;
}
tmp_assign_source_32 = PyNumber_Int(tmp_int_arg_2);
CHECK_OBJECT(tmp_int_arg_2);
Py_DECREF(tmp_int_arg_2);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__METADATA_DETECT_RETRIES, tmp_assign_source_32);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$compute_engine$_metadata, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$compute_engine$_metadata, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_ValueError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
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
PyObject *tmp_assign_source_33;
tmp_assign_source_33 = mod_consts.const_int_pos_3;
UPDATE_STRING_DICT0(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__METADATA_DETECT_RETRIES, tmp_assign_source_33);
}
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 106;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$auth$compute_engine$_metadata->m_frame)) {
        frame_frame_google$auth$compute_engine$_metadata->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_4;
branch_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
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
{
PyObject *tmp_assign_source_34;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_10;
tmp_expression_value_9 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_9 == NULL));
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_getenv);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto frame_exception_exit_1;
}
tmp_expression_value_10 = module_var_accessor_google$auth$compute_engine$_metadata$environment_vars(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_environment_vars);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 115;

    goto frame_exception_exit_1;
}
tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_NO_GCE_CHECK);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 115;

    goto frame_exception_exit_1;
}
frame_frame_google$auth$compute_engine$_metadata->m_frame.f_lineno = 115;
tmp_cmp_expr_left_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = mod_consts.const_str_plain_true;
tmp_assign_source_34 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__NO_GCE_CHECK, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
tmp_assign_source_35 = mod_consts.const_str_plain_Google;
UPDATE_STRING_DICT0(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__GOOGLE, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
tmp_assign_source_36 = mod_consts.const_str_digest_55984eddd4fb864b963a86014639ebe1;
UPDATE_STRING_DICT0(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__GCE_PRODUCT_NAME_FILE, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;

tmp_assign_source_37 = MAKE_FUNCTION_google$auth$compute_engine$_metadata$$$function__4_is_on_gce(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_is_on_gce, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;

tmp_assign_source_38 = MAKE_FUNCTION_google$auth$compute_engine$_metadata$$$function__5_detect_gce_residency_linux(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_detect_gce_residency_linux, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_3;
tmp_defaults_1 = mod_consts.const_tuple_false_tuple;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_39 = MAKE_FUNCTION_google$auth$compute_engine$_metadata$$$function__6__prepare_request_for_mds(tstate, tmp_defaults_1, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain__prepare_request_for_mds, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_defaults_2;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_google$auth$compute_engine$_metadata$_METADATA_DEFAULT_TIMEOUT(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__METADATA_DEFAULT_TIMEOUT);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 189;

    goto frame_exception_exit_1;
}
tmp_defaults_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_defaults_2, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_google$auth$compute_engine$_metadata$_METADATA_DETECT_RETRIES(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__METADATA_DETECT_RETRIES);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 189;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_defaults_2, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_defaults_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;

tmp_assign_source_40 = MAKE_FUNCTION_google$auth$compute_engine$_metadata$$$function__7_ping(tstate, tmp_defaults_2);

UPDATE_STRING_DICT1(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_ping, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_defaults_3;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = Py_None;
tmp_defaults_3 = MAKE_TUPLE_EMPTY(tstate, 7);
PyTuple_SET_ITEM0(tmp_defaults_3, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_3, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = Py_False;
PyTuple_SET_ITEM0(tmp_defaults_3, 2, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_int_pos_5;
PyTuple_SET_ITEM0(tmp_defaults_3, 3, tmp_tuple_element_2);
tmp_tuple_element_2 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_3, 4, tmp_tuple_element_2);
tmp_tuple_element_2 = Py_False;
PyTuple_SET_ITEM0(tmp_defaults_3, 5, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_google$auth$compute_engine$_metadata$_METADATA_DEFAULT_TIMEOUT(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__METADATA_DEFAULT_TIMEOUT);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 252;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_defaults_3, 6, tmp_tuple_element_2);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_defaults_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;

tmp_assign_source_41 = MAKE_FUNCTION_google$auth$compute_engine$_metadata$$$function__8_get(tstate, tmp_defaults_3);

UPDATE_STRING_DICT1(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)const_str_plain_get, tmp_assign_source_41);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$compute_engine$_metadata, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$compute_engine$_metadata->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$compute_engine$_metadata, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_google$auth$compute_engine$_metadata);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_42;

tmp_assign_source_42 = MAKE_FUNCTION_google$auth$compute_engine$_metadata$$$function__9_get_project_id(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_get_project_id, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;

tmp_assign_source_43 = MAKE_FUNCTION_google$auth$compute_engine$_metadata$$$function__10_get_universe_domain(tstate);

UPDATE_STRING_DICT1(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_get_universe_domain, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_defaults_4;
tmp_defaults_4 = mod_consts.const_tuple_str_plain_default_tuple;
Py_INCREF(tmp_defaults_4);

tmp_assign_source_44 = MAKE_FUNCTION_google$auth$compute_engine$_metadata$$$function__11_get_service_account_info(tstate, tmp_defaults_4);

UPDATE_STRING_DICT1(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_get_service_account_info, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_defaults_5;
tmp_defaults_5 = mod_consts.const_tuple_str_plain_default_none_tuple;
Py_INCREF(tmp_defaults_5);

tmp_assign_source_45 = MAKE_FUNCTION_google$auth$compute_engine$_metadata$$$function__12_get_service_account_token(tstate, tmp_defaults_5);

UPDATE_STRING_DICT1(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)mod_consts.const_str_plain_get_service_account_token, tmp_assign_source_45);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("google$auth$compute_engine$_metadata", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth.compute_engine._metadata" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_google$auth$compute_engine$_metadata);
    return module_google$auth$compute_engine$_metadata;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$compute_engine$_metadata, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("google$auth$compute_engine$_metadata", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
